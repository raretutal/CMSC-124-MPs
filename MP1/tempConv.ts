function fahrenheitToCelsius(temp: number): number {
    return (temp - 32) * 5 / 9;
}

const input = prompt("Input temperature in Fahrenheit (F): ");
console.log(`Converted to Celsius (C): ${fahrenheitToCelsius(Number(input)).toFixed(6)}`);