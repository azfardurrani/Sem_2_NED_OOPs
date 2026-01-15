#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "enter length"<< endl;
    cin >> a;
    cout << "enter width"<< endl;
    cin >> b;
    cout << "the ara of rectangle is: "<< a*b << endl;

    cout << " enter any no ";
    cin >> c;
    if(c % 2 == 0)
    {
        cout << "even"<<endl;
    }
    else
    {
        cout << " odd" << endl;
    }

    int m, f = 0, sec = 1 ,next;
    cout<<" enter any no. : ";
    cin >> m;
    for (int i =1; i < m; ++i)
    {
        cout << f << " ";
        next = f + sec;
        f = sec;
        sec = next;
    }
    cout << endl;

}

