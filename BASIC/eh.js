<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>JavaScript Event Example</title>
    <script>
        function changeText() {
            document.getElementById("demo").innerHTML = "You clicked the button!";
        }
    </script>
</head>
<body>
    <p id="demo">Click the button to change this text.</p>
    <button onclick="changeText()">Click Me</button>
</body>
</html>
