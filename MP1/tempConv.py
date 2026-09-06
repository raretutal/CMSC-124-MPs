def FahrenheitToCelsius(temp: float) -> float:
    return (temp - 32) * 5 / 9

def main() -> None:
    temp = float(input("Input temperature in Fahrenheit: "))
    print(f"Converted to Celsius (C): {FahrenheitToCelsius(temp):f}")

if __name__== "__main__":
    main()


