import { products } from "./data.js";
import { renderProducts } from "./ui.js";

// Initial render
document.addEventListener("DOMContentLoaded", () => {
    renderProducts(products);
});

// Filter functionality
const filterBtn = document.getElementById("filter-btn");
filterBtn.addEventListener("click", () => {
    const input = document.getElementById("category-input");
    const query = input.value.trim().toLowerCase();

    const filtered = products.filter(p => 
        p.category.toLowerCase().includes(query)
    );

    renderProducts(filtered);
});
