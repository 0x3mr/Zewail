var greetingHeader = document.getElementById("headerTitle");
var greetingButton = document.getElementById("headerButton");

greetingButton.addEventListener('click', () => {
    greetingHeader.textContent = "Welcome to JavaScript!";
});

var inputName = document.getElementById("nameInput");
var inputButton = document.getElementById("nameButton");

inputButton.addEventListener('click', () => {
    const name = inputName.value.trim();
    alert(name);
})

var add = document.getElementById("add");

add.addEventListener('click', () => {
  const elements = document.querySelectorAll('li');
  const lastLi = elements[elements.length - 1];

  const newLi = document.createElement('li');
  newLi.textContent = 'Another list';

  lastLi.insertAdjacentElement('afterend', newLi);
})

var color = document.getElementById("color");

toggle.addEventListener('click', () => {
    color.classList.toggle('hidden');
})