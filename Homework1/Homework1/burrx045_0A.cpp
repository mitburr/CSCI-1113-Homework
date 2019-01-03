//
//  main.cpp
//  Homework1
//
//  Created by Mitchell Burr on 9/12/18.
//  Copyright © 2018 Mitchell Burr. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double R;
    // radius variable
    double r;
    // height variable
    double v;
    // volume variable
    double sa;
    // surface area variable
    cout << "Input torus radius" << endl;
    cin >> R;
    cout << "Input torus thickness" << endl;
    cin >> r;
    cout << endl;
    
    // user input for radius and height
    
    if (r < 0 || R < 0){
        cout << "radius and height must be positive";
        return 0;
    }
    //catch negative case
    
    if (r > R){
        cout << "Torus radius must be larger than torus thickness";
        return 0;
    }
    // catch nontorus shape based on radii
    
    v = (4*pow(3.14159, 2))*R*r;
    sa = (2*pow(3.14159, 2))*R*pow(r, 2);
    // functions for volume and surface area
    
    cout << "volume = " << v << endl << "surface area = " << sa << endl;
    
    return 0;
}
