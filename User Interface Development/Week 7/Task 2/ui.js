export function renderProducts(products) {
    const container = document.getElementById('product-grid');
    container.innerHTML = '';

    products.forEach((p, index) => {
        const card = document.createElement('div');
        card.className = 'p-4 bg-white dark:bg-gray-800 rounded shadow flex flex-col';

        card.innerHTML = `
            <h2 class="font-bold text-lg">${p.name}</h2>
            <p>Price: $${p.price}</p>
            <p>Category: ${p.category}</p>
            <button class="mt-2 bg-red-500 text-white px-2 py-1 rounded" data-index="${index}">Delete</button>
        `;

        container.appendChild(card);
    });
}
