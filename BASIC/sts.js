// Using setTimeout to run a function after 3 seconds
setTimeout(function() {
    console.log("This message appears after 3 seconds.");
}, 3000);

// Using setInterval to run a function every 2 seconds
let intervalId = setInterval(function() {
    console.log("This message appears every 2 seconds.");
}, 2000);

// To stop the interval after 10 seconds
setTimeout(function() {
    clearInterval(intervalId);
    console.log("Interval stopped.");
}, 10000);
