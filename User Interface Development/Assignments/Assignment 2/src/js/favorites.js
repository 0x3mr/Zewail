// Load favorites from localStorage
let favorites = JSON.parse(localStorage.getItem('favorites')) || [];

const container = document.getElementById('favorites-container');

function displayFavorites(cars) {
  if (!cars.length) {
    container.innerHTML = `<p class="eco:text-brand-black text-center">You have no favorite cars yet.</p>`;
    return;
  }

  container.innerHTML = cars.map(car => `
    <div class="max-w-sm bg-white rounded-xl shadow overflow-hidden relative">
      <a href="details.html?id=${car.id}">
        <img src="${car.img}" class="w-full h-48 object-cover hover:opacity-80 transition" />
      </a>

      <div class="p-4">
        <h2 class="text-lg font-semibold">${car.name}</h2>
        <p class="text-gray-600 mt-2 text-sm">${car.brand} • ${car.model}</p>
        <p class="text-gray-600 text-sm mt-1">${car.horsepower} • ${car.price}</p>
      </div>

    <button 
        class="p-2 px-5 m-2 rounded-4xl bg-sport-red text-white hover:bg-red-600"
        data-id="${car.id}"
    >
        Remove from Favorites
      </button>
    </div>
  `).join('');

  // Add click listeners to remove from favorites
  document.querySelectorAll('#favorites-container button').forEach(btn => {
    btn.addEventListener('click', () => {
      const carId = Number(btn.dataset.id);
      favorites = favorites.filter(favCar => favCar.id !== carId);

      localStorage.setItem('favorites', JSON.stringify(favorites));

      // Re-render after removal
      displayFavorites(favorites);
    });
  });
}

// Initial render
displayFavorites(favorites);
