// FibSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

constexpr int fibonacci(int number) {
    if(number == 0 || number == 1)
        return number;

    return (fibonacci(number - 1) + fibonacci(number - 2));
}

void pyramid(int value){
    int y {value};
    int x {(y*2)-1};
    for (size_t i = 0; i < y; i++){
        int num = fibonacci(i);
        for (size_t i2 = 0; i2 < x; i2++){
            
        }
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




