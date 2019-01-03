//
//  burrx045_2B.cpp
//  Homework_2.cpp
//
//  Created by Mitchell Burr on 10/3/18.
//  Copyright © 2018 Mitchell Burr. All rights reserved.
//
#include <iostream>
#include <cmath>

using namespace std;

void HDraw (int height, int midpoint){
     for (int i = 1; i <= height; i++){
       for(int j = 1; j <= (height * 2 + 3); j++){
           if (j == 1 || j == height || /* the H part of the if statement for the row */ ((j >= height+2 && j <= (height * 2 + 1)) && (i == 1 || i == height)) || /* <- the I part of the if statement for the row*/(j > height * 2 + 2 && i != (height - 1))){
               cout << "X";
               continue;
           }
           if ((i == midpoint && j <= height) || j == midpoint + height + 1){
               cout << "X";
               continue;
           }
           cout << " ";
       }
    cout << endl;

     }
}
void IDraw (int size, int midpoint){
    
}
void ExclamationDraw (int size){
    for (int i = 1; i < size; i++){
        if (i == (size-1)){
            cout << " " << endl;
        }
        cout << 'X' << endl;
    }
}

int main(){
    int size;
    int midpoint;
    cout << "How large would you like your 'Hi!'" << endl;
    cin >> size;
    midpoint = (size/2) + 1;
    HDraw(size, midpoint);
        
    return 0;
}


