#include<iostream>
#include<cmath>
#include<string>

using namespace std;

void display(int num)
{
    cout<<"int: "<<num<<endl;
}

void display(double num)
{
    cout<<"Doubles: "<<num<<endl;
}

void display(int num1, int num2)
{
    cout<<"two integers: "<<num1<< " & "<< num2<<endl;
}

int main()
{
    display(2);
    display(2.3);
    display(3,5);
    return 0;
}