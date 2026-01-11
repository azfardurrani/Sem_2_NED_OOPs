#include<iostream>
using namespace std;
int main()
{

    /// taking input 

    int age;
    cout << "age: ";
    cin >> age;
    cout << "your age is " << age;

    ///iterating through for loop 
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    ///factorial via for loop 
    int fact = 1;
    int no;
    cout << "enter a number for factorial"<<"\n";
    cin >>no;
    for (int i = 1; i <= no; i ++)
    {
        fact = fact * i;
    }
    cout << "the factorial is: " << fact;


}
