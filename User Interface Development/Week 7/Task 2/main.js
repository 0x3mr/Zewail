import { renderProducts } from './ui.js';

let products = [];

// Load from localStorage
const saved = localStorage.getItem('products');
if (saved) products = JSON.parse(saved);

// Load theme from localStorage
const savedTheme = localStorage.getItem('theme');
if (savedTheme === 'dark') document.documentElement.classList.add('dark');

// Initial render
renderProducts(products);

// Add Product
document.getElementById('add-btn').addEventListener('click', () => {
    const name = document.getElementById('name').value.trim();
    const price = document.getElementById('price').value.trim();
    const category = document.getElementById('category').value.trim();

    if (!name || !price || !category) return alert('Fill all fields');

    products.push({ name, price, category });
    localStorage.setItem('products', JSON.stringify(products));
    renderProducts(products);

    // Clear inputs
    document.getElementById('name').value = '';
    document.getElementById('price').value = '';
    document.getElementById('category').value = '';
});

// Delete Product (event delegation)
document.getElementById('product-grid').addEventListener('click', (e) => {
    if (e.target.tagName === 'BUTTON' && e.target.dataset.index !== undefined) {
        const idx = e.target.dataset.index;
        products.splice(idx, 1);
        localStorage.setItem('products', JSON.stringify(products));
        renderProducts(products);
    }
});

// Theme Toggle
document.getElementById('theme-btn').addEventListener('click', () => {
    document.documentElement.classList.toggle('dark');
    const isDark = document.documentElement.classList.contains('dark');
    localStorage.setItem('theme', isDark ? 'dark' : 'light');
});
