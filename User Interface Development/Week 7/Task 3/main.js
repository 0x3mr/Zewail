// --- Form Validation ---
const form = document.getElementById('email-form');
const emailInput = document.getElementById('email');
const emailMsg = document.getElementById('email-msg');

form.addEventListener('submit', (e) => {
    e.preventDefault();
    const email = emailInput.value.trim();

    if (email.includes('@') && email.includes('.')) {
        emailMsg.textContent = "Success! Email is valid.";
        emailMsg.className = "mt-2 text-green-500";
    } else {
        emailMsg.textContent = "Error: Please enter a valid email.";
        emailMsg.className = "mt-2 text-red-500";
    }
});

// --- Hover Text Effect ---
const hoverText = document.getElementById('hover-text');

hoverText.addEventListener('mouseenter', () => {
    hoverText.textContent = "Hovering!";
    hoverText.classList.add('text-blue-500', 'font-bold');
});

hoverText.addEventListener('mouseleave', () => {
    hoverText.textContent = "Hover over me";
    hoverText.classList.remove('text-blue-500', 'font-bold');
});

// --- Dynamic List ---
const students = [
    {name: "Ali", grade: 90},
    {name: "Sara", grade: 85},
    {name: "Omar", grade: 78},
];

const showBtn = document.getElementById('show-students');
const studentList = document.getElementById('student-list');

showBtn.addEventListener('click', () => {
    const ul = document.createElement('ul');
    ul.className = "list-disc pl-5 space-y-2 text-gray-700 dark:text-gray-300";

    students.forEach(s => {
        const li = document.createElement('li');
        li.textContent = `${s.name} - Grade: ${s.grade}`;
        ul.appendChild(li);
    });

    studentList.innerHTML = ''; // Clear previous
    studentList.appendChild(ul);
});
