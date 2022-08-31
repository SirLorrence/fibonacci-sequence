// FibSequence.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>
using namespace std;

constexpr char spacer {0x20}; // hex = ' '
constexpr char filler {0x2E}; // hex = .

//recursive
constexpr unsigned long long int fibonacci(int number) {
    if(number == 0 || number == 1)
        return number;

    return (fibonacci(number - 1) + fibonacci(number - 2));
}

//iterative - hella fast wow
unsigned long long int fib(int number){
    vector<unsigned long long int> seq;
    seq.push_back(0);
    seq.push_back(1);

    for (size_t i = 2; i <= number; i++){
        seq.push_back(seq[i - 1] + seq [i -2]);
    }
    return seq[number];
}

void pyramid(int value){

    //pyramid with the result of f(n)
    for (size_t i = 0; i < value + 1; i++){
        for (size_t i2 = 0; i2 < i; i2++){
            cout<< filler;
        }
        cout<< fibonacci(i) <<'\n';
    }

    //pyramid that prints each f(n) value in n rows 
    cout << '\n' << "Fibonacci value Pyramid" <<'\n';
    cout << "Rows: " <<  value << '\n';
    int* row  = &value;
    int elementCount {1};
    for (size_t i = 0; i < *row; i++){  
        if(i != *row - 1){
            for (int l = *row - i; l > 0; l--){
                cout<< spacer;
            }
        }
        
        for (size_t x = 0; x < i + 1; x++){
            cout << fib(elementCount++) << spacer;
            // cout<< fibonacci(elementCount++)<< spacer;
        }
       cout<<'\n';
    }
}

int main(){
    cout << "\tFIBONACCI SEQUENCE\n";
    
    int input;
    cout << "Enter a number: ";
    cin >> input;

    pyramid(input);
    // cout << fib(input)<< endl;

    system("pause");
}




