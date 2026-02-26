package main

import (
    "fmt"
    "time"
    "amr.com/restaurant/models"
    "amr.com/restaurant/utilities"
)

func main() {
    orders := []models.Order{
        {ID: 1, Item: "Burger"},
        {ID: 2, Item: "Pizza"},
        {ID: 3, Item: "Pasta"},
        {ID: 4, Item: "Koshary"},
        {ID: 5, Item: "3absamad"},
    }

    fmt.Println("===== Sequential =====")
    start := time.Now()
    utilities.RunSequential(orders)
    fmt.Printf("Sequential time: %v\n\n", time.Since(start))

    fmt.Println("===== Concurrent =====")
    start = time.Now()
    utilities.RunConcurrent(orders)
    fmt.Printf("Concurrent time: %v\n", time.Since(start))
}