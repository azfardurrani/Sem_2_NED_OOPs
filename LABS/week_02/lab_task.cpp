#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
// Question 4: Find Maximum Number: Write a C++ program to find the maximum number among three given numbers.
// Expected Output: Maximum number: 20
    int a = 0, b = 10, c = 20;
    if (a >= b && a >= c) cout << a;
    else if (b >= a && b >= c) cout << b;
    else cout << c << endl;

// Question 5: Reverse a String: Write a C++ program to reverse a given string.
// Expected Output: Reversed string: olleh
    string word = "hello";
    reverse(word.begin(), word.end());
    cout << word << endl;

// Question 6: Check Prime Number: Write a C++ program to check if a given number is prime or not.
// Expected Output: 7 is prime
    int n = 7;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }

    if (count == 2) 
    cout << n << " is prime" << endl;
    else 
    {
        cout << n << " is not prime" << endl;
    }

// Question 7: Calculate Factorial: Write a C++ program to calculate the factorial of a given number.
// Expected Output: Factorial of 5: 120
    int long long res = 1;
    int fact;
    cout << "give a digit for factorial: ";
    cin >> fact;
    for (int i = fact; i > 0; i--)
    {
        res = res*i;
    } 
    cout << res << endl;

// Question 8: Calculate Simple Interest: Write a C++ program to calculate the simple interest given the principal amount, rate of interest, and time period.
// Expected Output: Simple interest: 150
    float principal = 1000;
    float rate = 5;
    float time = 3;

    float simple_interest = (principal * rate * time)/100;

    cout << simple_interest << endl;

// Question 9: Check Leap Year: Write a C++ program to check if a given year is a leap year or not.
// Expected Output: 2024 is a leap year
    int year;
    cout << "Enter any year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
    }

// Question 10: Check Armstrong Number: Write a C++ program to check if a given number is an Armstrong number or not.
// Expected Output: 153 is an Armstrong number
    int u = 153;
    int originalNum, remainder, result = 0;

    originalNum = u;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == u)
        cout << u << " is an Armstrong number" << endl;
    else
        cout << u << " is not an Armstrong number" << endl;

// Question 11: Sum and Average Calculation: Write a C++ program that prompts the user to enter two numbers, calculates their sum, and then computes their average.
// Expected Output:
// Enter first number: 25 Enter second number: 25 Sum is 50
// Average is 25
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    float sum = num1 + num2;
    float average = sum / 2;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;



// Question 12: Time Conversion: Write a C++ program that prompts the user to enter time in seconds and then converts it into hours, minutes, and seconds.
// Expected Output:
// Enter the time in seconds: 3713 Hours in time is: 1
// Minutes in time: 1 Seconds in time is: 53
    int totalSeconds;

    cout << "Enter the time in seconds: ";
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    cout << "Hours in time is: " << hours << endl;
    cout << "Minutes in time: " << minutes << endl;
    cout << "Seconds in time is: " << seconds << endl;

// Question 13: Amount in Rupees Breakdown: Write a C++ program that prompts the user to enter an amount in rupees and then breaks it down into denominations of 1000s, 500s, 100s, 50s, 10s, 5s, 2s, and 1s.
// Expected Output:
// Enter amount in rupees: 5788 1000’s in the given amount is: 5 500’s in the given amount is: 1 100’s in the given amount is: 2 50’s in the given amount is: 1 10’s in the given amount is: 3 5’s in the given amount is: 1
// 2’s in the given amount is: 2 1’s in the given amount is: 1
    int amount;

    cout << "Enter amount in rupees: ";
    cin >> amount;

    int n1000 = amount / 1000;
    amount %= 1000;

    int n500 = amount / 500;
    amount %= 500;

    int n100 = amount / 100;
    amount %= 100;

    int n50 = amount / 50;
    amount %= 50;

    int n10 = amount / 10;
    amount %= 10;

    int n5 = amount / 5;
    amount %= 5;

    int n2 = amount / 2;
    amount %= 2;

    int n1 = amount; // The final remainder is the 1s

    cout << "1000's in the given amount is: " << n1000 << endl;
    cout << "500's in the given amount is: " << n500 << endl;
    cout << "100's in the given amount is: " << n100 << endl;
    cout << "50's in the given amount is: " << n50 << endl;
    cout << "10's in the given amount is: " << n10 << endl;
    cout << "5's in the given amount is: " << n5 << endl;
    cout << "2's in the given amount is: " << n2 << endl;
    cout << "1's in the given amount is: " << n1 << endl;
// Question 14: Fahrenheit to Celsius Conversion: Write a C++ program that prompts the user to enter a temperature in Fahrenheit and then converts it into Celsius using the formula: Celsius = (Fahrenheit - 32) * 5 / 9.
// Expected Output:
// Enter the Fahrenheit temperature: 98.6 Celsius Temperature: 37.0
    float fahrenheit, celsius;

    cout << "Enter the Fahrenheit temperature: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Celsius Temperature: " << celsius << endl;

// Question 15: Two-Digit Integer Reversal: Write a C++ program that inputs a two-digit integer value and outputs its reverse order.
    int num;
    
    cout << "Enter a two-digit integer: ";
    cin >> num;

    int firstDigit = num / 10;
    int secondDigit = num % 10;

    int reversedNum = (secondDigit * 10) + firstDigit;

    cout << "Reverse order: " << reversedNum << endl;
}