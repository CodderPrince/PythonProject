let person = {
    name: "Prince",
    age: 25,
    greet: function() {
        console.log("Hello, " + this.name);
    }
};

console.log(person.name); // Output: Prince
person.greet(); // Output: Hello, Prince
