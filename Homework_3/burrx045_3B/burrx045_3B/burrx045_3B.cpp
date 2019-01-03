//
//  main.cpp
//  burrx045_3B
//
//  Created by Mitchell Burr on 10/8/18.
//  Copyright © 2018 Mitchell Burr. All rights reserved.
//

#include <iostream>

using namespace std;

int FindFibonacciNumber(int limit){
    int first = 0;
    int second = 1;
    int transfer;
    if (limit == 1) return first;
    if (limit == 2) return second;
    if (limit <= 0){
        cout << "Please input a valid number" << endl;
    }
    for (int i=0; i < (limit-2); i++){
        transfer = first + second;
        first = second;
        second = transfer;
        
    }
    return second;
}
// Counts to the fibonacci number of a given index

bool SearchFibonacciArray(int FibonacciArray[47], int key){
    for (int i = 0; i<= 47; i++){
        if (FibonacciArray[i] == key){
            return 1;
        }
    }
    return 0;
}
// searches fibonacci array for the key

bool PrimeTest(int key){
    for (int i = 2; i <= key/2; i++){
        if (key%i == 0) return 0;
        else continue;
    }
    return 1;
}
// tests if a number is prime

int main() {
    int FibonacciArray [47];
    for (int i = 0; i <= 47; i++){
        FibonacciArray[i] = FindFibonacciNumber(i+1);
    }
    // fill fibonacci array to 47th value, which is the largest number int can hold (I think?)
    int LowerLimit;
    int UpperLimit;
    cout << "Bottom of range?" << endl;
    cin >> LowerLimit;
    cout << "Top of range?" << endl;
    cin >> UpperLimit;
    // upper and lower limit initalization
    for( int i = LowerLimit; i <= UpperLimit; i++)if( (SearchFibonacciArray(FibonacciArray, i)) && (PrimeTest(i))) cout << i << " ";
    //#oneliner
        return 0;
    }
