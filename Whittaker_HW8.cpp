//Program name: Stock Commission
//Purpose: This is a simple program to calculate stock prices based on user input
//Author: Payton Whittaker
//Last Modified: February 11
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
int sharesOfStock;
float priceOfStock;
float totalstock;
float Commission;
float totalpaid;
cout << "Welcome to Stock Commission!" << '\n';
cout: << "Enter stock price" << '\n';
cin >> priceOfStock;
cout << "Enter number of shares bought" << '\n';
cin >> sharesOfStock;
totalstock = sharesOfStock * priceOfStock;
cout << "Amount paid for stock without Commission: $" << totalstock << '\n';
Commission = totalstock * .02;
cout << "Amount of Commission: $" << Commission << '\n';
cout << "The total amount paid: $" << totalpaid << '\n';
return 0;
}
