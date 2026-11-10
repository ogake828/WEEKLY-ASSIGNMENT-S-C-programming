
#include <stdio.h>

// Function to calculate energy charge
float calculateEnergyCharge(float units)
{
    float charge;

    if (units <= 50)
    {
        charge = units * 10;
    }
    else if (units <= 150)
    {
        charge = (50 * 10) + ((units - 50) * 15);
    }
    else
    {
        charge = (50 * 10) + (100 * 15) + ((units - 150) * 20);
    }

    return charge;
}

// Function to calculate 10% tax
float calculateTax(float energyCharge)
{
    return energyCharge * 0.10;
}

// Function to calculate total bill
float calculateTotalBill(float energyCharge, float tax)
{
    return energyCharge + tax;
}

// Main function
int main()
{
    float units, energyCharge, tax, totalBill;

    // Ask user to enter units consumed
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if (units < 0)
    {
        printf("Invalid units entered!\n");
        return 1;
    }

    // Calling user-defined functions
    energyCharge = calculateEnergyCharge(units);
    tax = calculateTax(energyCharge);
    totalBill = calculateTotalBill(energyCharge, tax);

    // Display results
    
    printf("Units consumed: %.2f\n", units);
    printf("Energy charge: KSh %.2f\n", energyCharge);
    printf("Tax (10%%): KSh %.2f\n", tax);
    printf("Total bill: KSh %.2f\n", totalBill);

    return 0;
}
    