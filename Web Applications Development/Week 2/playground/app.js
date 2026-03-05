const { add, subtract, multiply } = require('./utils/math')

x = 3
y = 5

console.log("We have: " + x + " and " + y)
console.log("Addition is " + add(x, y))
console.log("Subtraction is " + subtract(x, y))
console.log("Multiplication is " + multiply(x, y))

const fs = require('fs')

console.log("\n\n The sync reading:\n")

try {
    const data = fs.readFileSync('data.txt', 'utf8')
    console.log(data)
} catch (e) {
    console.error(e)
}

console.log("\n\n The async reading:\n")

fs.readFile('data.txt', 'utf8', (err, data) => {
  if (err) {
    console.error('Error reading file:', err);
    return;
  }
  console.log('File contents:', data);
});


newData = "broooooo"

fs.writeFileSync('data.txt', newData)

// =============================
//      ASYNC PROGRAMMING
// =============================

console.log("\n\n\n\n--------------------\n\n\n")

// 1. Create wait(ms) function using Promises
const wait = (ms) => {
    return new Promise((resolve) => {
        setTimeout(() => {
            resolve(`Waited ${ms}ms`)
        }, ms)
    })
}

// 2 & 3. Use async/await to delay execution and print messages before/after
async function delaySimulation(ms) {
    console.log("Before async wait")

    try {
        console.log(await wait(ms))
        console.log("After async wait")
    } catch (e) {
        console.error(e)
    }
}

// 4. Compare with a blocking operation
function blockingSimulation(ms) {
    console.log("Before blocking wait")
    const start = Date.now()
    while (Date.now() - start < ms) {
        // busy-wait loop to block
    }
    console.log("After blocking wait")
}

// Run both simulations
delaySimulation(2000)
blockingSimulation(2000)
