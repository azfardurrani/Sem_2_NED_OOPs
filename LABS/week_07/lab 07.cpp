// Question no 1
// Question: Create a class Rectangle with attributes length and width. Implement
// methods to calculate the area and perimeter of the rectangle.
// #include <iostream>
// using namespace std;

// class Rectangle
// {
// public:
//     float length;
//     float width;

//     Rectangle() 
//     {
//         length = 0;
//         width = 0;
//     }

//     void area()
//     {
//         cout << "The area is " << length * width << endl;
//     }

//     void perimeter()
//     {
//         cout << "The perimeter is " << 2 * (length + width) << endl;
//     }
// };

// int main()
// {
//     float l, w;
//     Rectangle s1;

//     cout << "Enter length: ";
//     cin >> l;
//     cout << "Enter width: ";
//     cin >> w;

//     s1.length = l;
//     s1.width = w;

//     s1.area();
//     s1.perimeter();

//     return 0;
// }

// Question 2 is same

// question 3
// Question: Create a class Employee with attributes name and salary. Implement a
// method to display the details of the employee.

// #include <iostream>
// using namespace std;

// class employee{
//     public:
//     string name;
//     float salary;
//     employee(string n,float s){
//         salary=s;
//         name=n;
//     }
//     void setname(string n){
//         name=n;
//     }
//     void showdata(){
//         cout<<"the name is "<<name<<endl;
//         cout<<"the salary is "<<salary<<endl;
//     }
// };
// int main(){
//     employee e1("maryam",1400.899);
//     e1.showdata();
//     e1.setname("maria");
//     e1.showdata();

//     return 0;
// }

// Question 4:
// . Question: Create a class BankAccount with attributes accountNumber,
// accountHolder, and balance. Implement methods to deposit and withdraw money
// from the account.
// #include <iostream>
// #include<string>
// using namespace std;
// class BankAccount{
// private:
// int accnumber;
// string accholder;
// int balance;
// public:
// int depmoney;
// int withmoney;
// BankAccount(int acn,string ach,int bal){
//     accnumber=acn;
//     accholder=ach;
//     balance=bal;
// }
// void deposit(){
// cout<<"enter the money you want to deposit: "<<endl;
// cin>>depmoney;
// balance+=depmoney;
// }
// void withdraw(){
//     cout<<"enter the money you want to withdarw: "<<endl;
//     cin>>withmoney;
//     if(withmoney>balance){
//         cout<<"insufficient balance "<<endl;}
//     else{
//     balance-=withmoney;}
// }
// void showbalance(){
//     cout<<"your balance is: "<<balance<<endl;
// }
// };
// int main(){
//     BankAccount s1(1142,"Maria Fatima",5000);
//     s1.deposit();
//     s1.showbalance();
//     s1.withdraw();
//     s1.showbalance();
//     return 0;
// }

// Question5:
// Question: Create a class Car with attributes brand, model, and year. Implement a
// method to display the details of the car.
// #include <iostream>
// using namespace std;
// class Car{
// private:
// string brand;
// string model;
// int year;
// public:
// Car(string b,string m, int y){
//     brand=b;
//     model=m;
//     year=y;}

//     void setbrand(string b){
//         brand=b;
//     }

//     void showdetails(){
//         cout<<"the car brand is "<<brand<<endl;
//         cout<<"the model of car is "<<model<<endl;
//         cout<<"the year of the car is "<<year<<endl;
//     }
// };
// int main(){
//     string newbrand;
//     Car c1("toyota","tg810",2019);
//     c1.showdetails();
//     cout<<"enter the new brand ";
//     cin>>newbrand;
//     c1.setbrand(newbrand);
//     c1.showdetails();

//     return 0;
// }

// Question: Create a class Fraction with attributes numerator and denominator.
// Implement a method to simplify the fraction.
// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// using namespace std;

// class Fraction
// {
// private:
//     int numerator;
//     int denominator;

// public:
//     Fraction(int n, int d)
//     {
//         numerator = n;
//         denominator = d;
//     }
//     void simplify()
//     {
//         float answer;
//         int gcd = 1;
        
//         for (int i = 1; i <= denominator; i++)
//         {
//             if (numerator % i == 0 && denominator % i == 0)
//             {
//                 gcd = i;
//             }
//         }
//         numerator = numerator / gcd;
//         denominator = denominator / gcd;
//         answer = float(numerator) / denominator;
//         cout << "the answer in fraction  is " << numerator << "/" << denominator << endl;
//         cout << "the answer in decimal  is " << answer;
//     }
// };
// int main()
// {
//     Fraction f1(10, 4);
//     f1.simplify();
//     return 0;
// }

