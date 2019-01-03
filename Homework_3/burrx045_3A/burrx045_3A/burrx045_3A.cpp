//
//  main.cpp
//  burrx045_3A
//
//  Created by Mitchell Burr on 10/7/18.
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

bool SearchFibonacciArray(int FibonacciArray[40], int key){
    for (int i = 0; i<= 40; i++){
        if (FibonacciArray[i] == key){
            return 1;
        }
    }
    return 0;
}
// searches fibonacci array for the key

int FibonacciArrayNumber(int FibonacciArray[40], int key){
    for (int i = 0; i <= 40; i++){
        if (FibonacciArray[i] == key){
            return i;
        }
    }
    return 0;
}
// returns 0 or the index of the fibonacci number

int main() {
    char marker = 'y';
    while (marker == 'y'){
        //for multiple plays of the game
        int FibonacciArray [40];
        for (int i = 0; i <= 40; i++){
            FibonacciArray[i] = FindFibonacciNumber(i+1);
        }
        // array containing 40 fibonacci numbers
        int TotalRounds;
        int points = 10;
        char GamePointOption;
        //game variables
        cout << "How many rounds?" << endl;
        cin >> TotalRounds;
        //input for total number of rounds
        int round = 1;
        // rounds index counter
        while(round <= TotalRounds){
            cout << "Current points: " << points << endl << "Choose: (a) add 1 point, (b) add 2 points..." << endl;
            cin >> GamePointOption;
            if (GamePointOption == 'a') points = points + 1;
            if (GamePointOption == 'b') points = points + 2;
            // user "playing" the game options.
            if (SearchFibonacciArray(FibonacciArray, points)){
                int TempPoints = points;
                for(int i = round; i > 0; i--){
                    points = points + FindFibonacciNumber(FibonacciArrayNumber(FibonacciArray, TempPoints) + i);
                    // this is more complex than it needs to be I think. I could probably solve it with a class.
                }
                if (round == TotalRounds){
                    cout << "Final score:" << endl << points << endl;
                    break;
                }
                // break statement for the last round
                round++;
                continue;
                //avoids case where points is not a fibonacci number after adding the fibonaccis.
            }
            //case where current points are a fibonacci number
            if(!SearchFibonacciArray(FibonacciArray, points)){
                points = points/2;
                if (round == TotalRounds){
                    cout << "Final score:" << endl << points << endl;
                    break;
                }
                round++;
                continue;
            }
            //case where current points are not a fibonacci number
        }
        cout << "Would you like to play again? y or n:" << endl;
        cin >> marker;
    }
    return 0;
}
