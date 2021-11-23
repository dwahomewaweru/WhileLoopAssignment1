//While loop Assignment 1
//C++ program to output even numbers from 12 t0 28

#include <iostream>
using namespace std;

int main() {

    int i = 12; //Initialize i  with 12

    while (i <=28) {
        if (i % 2 == 0) { //Identify even numbers with if number is divisble by 2
            cout << i << " ";
        }

        i++;
    }

    return 0;
}