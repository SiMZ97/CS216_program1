/*
Chapter 1-3 assignment Program1
2/17/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pay_rate;
    int hours_week1, hours_week2, hours_week3, hours_week4, hours_week5;

    cout << "Enter pay rate per hour: $";
    cin >> pay_rate;

    cout << "Enter number of hours worked for Week 1: ";
    cin >> hours_week1;

    cout << "Enter number of hours worked for Week 2: ";
    cin >> hours_week2;

    cout << "Enter number of hours worked for Week 3: ";
    cin >> hours_week3;

    cout << "Enter number of hours worked for Week 4: ";
    cin >> hours_week4;

    cout << "Enter number of hours worked for Week 5: ";
    cin >> hours_week5;

    double total_income_before_tax = pay_rate * (hours_week1 + hours_week2 + hours_week3 + hours_week4 + hours_week5);

    double total_tax = 0.14 * total_income_before_tax;

    double net_income = total_income_before_tax - total_tax;

    double clothes_spending = 0.10 * net_income;

    double school_supplies_spending = 0.01 * net_income;

    double savings_bonds_spending = 0.25 * (net_income - clothes_spending - school_supplies_spending);

    double parents_spending = 0.50 * savings_bonds_spending;


    cout << fixed << setprecision(2);

    cout << "a) Income before taxes: $" << total_income_before_tax << endl;
    cout << "   Income after taxes: $" << net_income << endl;
    cout << "b) Money spent on clothes: $" << clothes_spending << endl;
    cout << "c) Money spent on school supplies: $" << school_supplies_spending << endl;
    cout << "d) Money spent to buy savings bonds: $" << savings_bonds_spending << endl;
    cout << "e) Money parents spent on bonds: $" << parents_spending << endl;

    return 0;
}