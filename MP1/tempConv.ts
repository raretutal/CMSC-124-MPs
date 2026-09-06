import * as readline from "node:readline/promises";
import { stdin as input, stdout as output } from "node:process";

function fahrenheitToCelsius(temp: number): number {
    return (temp - 32) * 5 / 9;
}

async function main(): Promise<void> {
    const rl = readline.createInterface({ input, output });
    const answer = await rl.question("Input temperature in Fahrenheit (F): ");
    rl.close();

    const temp = Number(answer);
    console.log(`Converted to Celsius (C): ${fahrenheitToCelsius(temp).toFixed(6)}`);
}

main();