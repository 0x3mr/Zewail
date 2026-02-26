package utilities

import (
    "fmt"
    "time"
    "amr.com/restaurant/models"
)

func TakeOrder(order models.Order) {
    fmt.Printf("Taking order #%d: %s\n", order.ID, order.Item)
    time.Sleep(300 * time.Millisecond)
}

func PrepareOrder(order models.Order) {
    fmt.Printf("Preparing order #%d: %s\n", order.ID, order.Item)
    time.Sleep(1 * time.Second)
}

func DeliverOrder(order models.Order) {
    fmt.Printf("Delivering order #%d: %s\n", order.ID, order.Item)
    time.Sleep(300 * time.Millisecond)
}

func RunSequential(orders []models.Order) {
    for _, order := range orders {
        TakeOrder(order)
        PrepareOrder(order)
        DeliverOrder(order)
    }
}