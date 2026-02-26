package utilities

import (
    "fmt"
    "sync"
    "time"
    "amr.com/restaurant/models"
)

func takeOrderConcurrent(order models.Order) {
    fmt.Printf("[Concurrent] Taking order #%d: %s\n", order.ID, order.Item)
    time.Sleep(300 * time.Millisecond)
}

func prepareOrderConcurrent(order models.Order) {
    fmt.Printf("[Concurrent] Preparing order #%d: %s\n", order.ID, order.Item)
    time.Sleep(1 * time.Second)
}

func deliverOrderConcurrent(order models.Order) {
    fmt.Printf("[Concurrent] Delivering order #%d: %s\n", order.ID, order.Item)
    time.Sleep(300 * time.Millisecond)
}

func RunConcurrent(orders []models.Order) {
    // buffered channel - holds all orders in queue
    orderQueue := make(chan models.Order, len(orders))

    // unbuffered channel - forces sync between prep and delivery
    readyQueue := make(chan models.Order)

    var wg sync.WaitGroup

    // dump all orders into buffered channel
    for _, order := range orders {
        takeOrderConcurrent(order)
        orderQueue <- order
    }
    close(orderQueue)

    // launch a goroutine per order to prepare concurrently
    for order := range orderQueue {
        wg.Add(1)
        go func(o models.Order) {
            defer wg.Done()
            prepareOrderConcurrent(o)
            readyQueue <- o  // hand off to delivery
        }(order)
    }

    // close readyQueue once all prep goroutines finish
    go func() {
        wg.Wait()
        close(readyQueue)
    }()

    // deliver each order as it becomes ready
    for order := range readyQueue {
        deliverOrderConcurrent(order)
    }
}