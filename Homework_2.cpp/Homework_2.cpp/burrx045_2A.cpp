//
//  main.cpp
//  burrx045_2A.cpp
//
//  Created by Mitchell Burr on 10/3/18.
//  Copyright © 2018 Mitchell Burr. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char run = 'y';
    while ( run == 'y'){
        double RoomTemp;
        double VentTemp;
        int time = 0;
        // variable declarations
        cout << "Input current temperature:" << endl;
        cin >> RoomTemp;
        cout << "Input ventilation temperature:" << endl;
        cin >> VentTemp;
        //variable input
        double Max = VentTemp + 1;
        double Min = VentTemp - 1;
        //while markers
        while ( RoomTemp >= Max || RoomTemp <= Min){
            RoomTemp = (RoomTemp + VentTemp)/2;
            // temperature change expression
            time = time + 5;
        }
        cout << "time until temperature equalized: " << time << endl;
        cout << "Would you like to run again? y or n" << endl;
        cin >> run;
    }
        
    return 0;
}
