// Apply saved theme from localStorage
const savedTheme = localStorage.getItem('theme');
if (savedTheme === 'eco') {
    document.documentElement.classList.add('eco');
} else {
    document.documentElement.classList.remove('eco');
}

const container = document.getElementById('compare-container');

// Load favorites from localStorage
const favorites = JSON.parse(localStorage.getItem('favorites')) || [];

if (!favorites.length) {
    container.innerHTML = `<p class="text-center text-white eco:text-brand-black">No cars in favorites to compare.</p>`;
} else {
    const headers = ['Name', 'Brand', 'Model', 'Horsepower', 'Price'];

    const tableHTML = `
      <div class="overflow-x-auto w-full">
        <table class="min-w-full border-collapse rounded-lg overflow-hidden shadow-lg">
          <thead class="bg-white/20 backdrop-blur-lg text-white eco:bg-eco-green/20 eco:text-eco-green">
            <tr>
              ${headers.map(h => `<th class="px-6 py-4 text-left border-b border-gray-400">${h}</th>`).join('')}
            </tr>
          </thead>
          <tbody>
            ${favorites.map((car, index) => `
              <tr class="bg-gray-800 ${index === favorites.length - 1 ? 'rounded-b-lg' : ''} eco:bg-eco-white/20">
                <td class="px-6 py-4 border-b border-gray-600 eco:text-eco-green">${car.name}</td>
                <td class="px-6 py-4 border-b border-gray-600 eco:text-eco-green">${car.brand}</td>
                <td class="px-6 py-4 border-b border-gray-600 eco:text-eco-green">${car.model}</td>
                <td class="px-6 py-4 border-b border-gray-600 eco:text-eco-green">${car.horsepower}</td>
                <td class="px-6 py-4 border-b border-gray-600 eco:text-eco-green">${car.price}</td>
              </tr>
            `).join('')}
          </tbody>
        </table>
      </div>
    `;

    container.innerHTML = tableHTML;
}

const navToggle = document.querySelector("#navToggle");
const navMenu = document.querySelector("#navMenu");

navToggle.addEventListener("click", () => {
  navMenu.classList.toggle("hidden");
});