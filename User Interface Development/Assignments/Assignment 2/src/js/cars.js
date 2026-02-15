let allCars = [];

// Load favorites from localStorage
let favorites = JSON.parse(localStorage.getItem('favorites')) || [];

// Get references to the containers
const carsContainer = document.getElementById('cars-container');
const skeletonContainer = document.getElementById('skeleton-container');

// Function to simulate a delay
function delay(ms) {
  return new Promise(function(resolve) {
    setTimeout(function() {
      resolve();
    }, ms);
  });
}

async function loadCars() {
  try {
    // 1. Fetch the data
    const response = await fetch('../data/cars.json');
    if (!response.ok) {
        throw new Error('Network response was not ok');
    }
    let data = await response.json();
    
    // 2. INTRODUCE MANDATORY 1.5 SECOND DELAY FOR SKELETON
    await delay(1000); 

    // 3. Process and display data
    allCars = Object.values(data);
    localStorage.setItem('allCars', JSON.stringify(allCars));
    
    displayCars(allCars);

    // 4. Hide skeleton and show cars container
    skeletonContainer.classList.add('hidden');
    carsContainer.classList.remove('hidden');

  } catch (err) {
    console.error("Failed to load cars:", err);
    // Ensure the skeleton is hidden even on error
    skeletonContainer.classList.add('hidden');
    carsContainer.classList.remove('hidden');
  }
}

// Kick off the loading process
loadCars();


// Render cars into the HTML
function displayCars(cars) {
  const container = document.getElementById('cars-container');

  container.innerHTML = cars.map(car => {
    const isFav = favorites.some(favCar => favCar.id === car.id);

    return `
        <div class="max-w-sm bg-white rounded-xl shadow overflow-hidden relative">
        <a href="details.html?id=${car.id}">
            <img src="${car.img}" class="w-full h-48 object-cover hover:opacity-80 transition" />
        </a>

        <div class="p-4">
            <h2 class="text-lg font-semibold text-brand-black eco:text-eco-green">${car.name}</h2>
            <p class="text-gray-600 mt-2 text-sm">${car.brand} • ${car.model}</p>
            <p class="text-gray-600 text-sm mt-1">${car.horsepower} • ${car.price}</p>
        </div>

        <button 
            class="p-2 px-5 m-2 rounded rounded-4xl bg-sport-red text-white hover:bg-red-600 eco:bg-eco-green eco:hover:bg-green-700"
            data-id="${car.id}"
        >
            ${isFav ? 'Remove from Favorites' : 'Add to Favorites'}
        </button>
        </div>
    `;
  }).join('');

  // Add click listeners
  document.querySelectorAll('#cars-container button').forEach(btn => {
    btn.addEventListener('click', () => {
      const carId = Number(btn.dataset.id);
      const car = allCars.find(c => c.id === carId);

      if (!car) return;

      const index = favorites.findIndex(favCar => favCar.id === carId);

      if (index !== -1) {
        // Remove from favorites
        favorites.splice(index, 1);
      } else {
        // Add full car object
        favorites.push(car);
      }

      // Save entire array of objects
      localStorage.setItem('favorites', JSON.stringify(favorites));

      // Update button text
      btn.textContent = favorites.some(favCar => favCar.id === carId)
        ? 'Remove from Favorites'
        : 'Add to Favorites';
    });
  });
}


// SEARCH
const searchInput = document.getElementById('search-input');

searchInput.addEventListener('input', runSearch);
searchInput.addEventListener('keydown', e => {
  if (e.key === 'Enter') runSearch();
});

function runSearch() {
  const query = searchInput.value.toLowerCase().trim();

  const filtered = allCars.filter(car =>
    car.name.toLowerCase().includes(query) ||
    car.brand.toLowerCase().includes(query) ||
    car.model.toLowerCase().includes(query) ||
    car.horsepower.toLowerCase().includes(query) ||
    car.price.toLowerCase().includes(query)
  );

  displayCars(filtered);
}

const navToggle = document.querySelector("#navToggle");
const navMenu = document.querySelector("#navMenu");

navToggle.addEventListener("click", () => {
  navMenu.classList.toggle("hidden");
});