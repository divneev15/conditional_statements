//Divneev singh 24070123043 entc A2

#include<iostream>
using namespace std;
int main() 
{
    cout << "Enter a number of your choice: ";
    int n;
    cin >> n;
    if (n>0)
    {
        cout << "The given number is Positive" << endl;
    }
    else if (n < 0) 
    {
        cout << "The given number is Negative" << endl;
    } 
    else 
    {
        cout << "The given number is Zero" << endl;
    }
    return 0;
}

/*
OUTPUT: 
Enter a number of your choice: 10
The given number is Positive

Enter a number of your choice: 0
The given number is Zero

Enter a number of your choice: -99
The given number is Negative



*/
