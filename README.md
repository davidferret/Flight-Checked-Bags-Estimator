# Flight Cost Estimator

This helps you calculate the total cost of a flight based on your selected route, class, and baggage fees. It dynamically adjusts pricing according to your inputs, including tax calculations to provide an accurate total.

The way I coded this project was by setting up pre-defined routes with base ticket prices and implementing class-based pricing adjustments. When you select a flight class—Economy, Business, or First-Class—the ticket price updates accordingly. I also added a baggage fee calculation that determines additional costs based on the number of checked bags. To ensure accuracy, the project applies a fixed tax rate to the final total.

I built this project since I wanted a way to quickly estimate flight costs without having to manually add up all the factors. It was a fun challenge to implement a structured pricing model while keeping the interface intuitive so you can easily compare different options. Hopefully this helps you get a better idea of how flight pricing works and makes cost estimation more convenient!

## Example Output
```
--- Flight Cost Estimator ---
1. MIA to BCN - $250
2. NYC to LON - $400
3. LAX to TYO - $550
Enter your flight choice: 3

--- Flight Class Options ---
1. Economy (Base Price)
2. Business (+50% Price)
3. First Class (+150% Price)
Enter your class choice: 2

How many checked bags do you have?: 2
The total cost (including tax) for this trip is: $948.75

Would you like to calculate another trip? (y/n): n
Thank you for using the flight cost estimator!

```
