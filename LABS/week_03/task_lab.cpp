#include<iostream>
#include<string>
using namespace std;
int add(int a, int b)
    {
        return a + b;
    }
// factorial function
    int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    f = f*i;
    return f;
}
int main()
{
// Q5) Write a C++ program to generate the multiplication table of a given number.
    int n;
    cout << "enter any no. : ";
    cin >> n;
    for(int i = 0; i <= 12; i++)
    {
        cout << n << " x " << i << " = " << i*n << endl;
    }
// Q6) Write a C++ program to create a simple menu-driven calculator that performs basic arithmetic operations (addition, subtraction, multiplication, division).
    string op;
    
    
    int x;
    int y;
    cout << "choose any operation you would like to perform: (addition, subtraction, multiplication, division). " << endl;
    cin >> op;
    if (op == "addition") 
    {
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;
        
        cout << "the sum is " << fact(x);
    }
// Q7) Write a C++ program to generate the Fibonacci series up to a given number of terms.
// Q8) Write a C++ program to implement a number guessing game where the user tries to guess a randomly generated number.
// Q9) Write a C++ program to implement a simple rock, paper, scissors game between the user and the computer.
// Q10) Write a C++ program to display the name of the day of the week based on the day number entered by the user.
// Q11) Write a C++ program to print the following patterns and shapes:

}