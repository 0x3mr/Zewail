// Get car id
const params = new URLSearchParams(window.location.search);
const carId = Number(params.get('id'));

// Fetch cars
const allCars = JSON.parse(localStorage.getItem('allCars')) || [];
const car = allCars.find(c => c.id === carId);

const container = document.getElementById('details-container');

if (car) {
  container.innerHTML = `
    <div class="
      max-w-lg w-full rounded-xl overflow-hidden shadow
      bg-white/20 backdrop-blur-md border border-white/30
      eco:bg-eco-green/10 eco:border-eco-green/40
    ">
      <img src="${car.img}" class="w-full h-64 object-cover" />
      
      <div class="p-6">
        <h1 class="text-2xl font-bold mb-2">${car.name}</h1>

        <p class="mb-1"><strong>Brand:</strong> ${car.brand}</p>
        <p class="mb-1"><strong>Model:</strong> ${car.model}</p>
        <p class="mb-1"><strong>Horsepower:</strong> ${car.horsepower}</p>
        <p class="mb-1"><strong>Price:</strong> ${car.price}</p>
      </div>
    </div>
  `;
} else {
  container.innerHTML = `<p class="text-white eco:text-eco-green">Car not found.</p>`;
}
