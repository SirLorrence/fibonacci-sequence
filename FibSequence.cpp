// FibSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

 int fibonacci(int number) 
{
    if (number == 0)
    {
        return 0;
    }
        else if (number == 1)
        {
            return 1;
        }
    {
        return (fibonacci(number - 1) + fibonacci(number - 2));
    }
}

int main()  
{
    cout << "\tFIBONACCI SEQUENCE\n";
    

    int input;
    cout << "Enter a number:"<<endl;
    cin >> input;
    cout << fibonacci(input)<< endl;


    system("pause");
}




