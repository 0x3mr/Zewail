export function renderProducts(productList) {
    const container = document.getElementById("product-grid");
    container.innerHTML = ""; // Clear previous

    productList.forEach(product => {
        const card = document.createElement("div");
        card.className = "p-4 bg-white rounded shadow";

        card.innerHTML = `
            <h2 class="font-bold text-lg">${product.name}</h2>
            <p>Price: $${product.price}</p>
            <p>Category: ${product.category}</p>
        `;

        container.appendChild(card);
    });
}
