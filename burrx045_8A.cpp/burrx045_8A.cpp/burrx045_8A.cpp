#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class datePerson;

int main() {
    
    string fname;
    cout << "What file?\n";
    cin >> fname;
    
    ifstream read;
    read.open(fname.c_str());
    if(read.fail())
    {
        cout << "Error opening file!\n";
        exit(0);
    }
    
    datePerson uninit;
    datePerson pmax;
    datePerson pmin;
    datePerson current;
    read >> current;
    while(!read.eof())
    {
        if(pmax < current || pmax == uninit)
        {
            pmax = current;
        }
        if(pmin > current || pmin == uninit)
        {
            pmin = current;
        }
        read >> current;
    }
    
    cout << "Oldest person: " << endl;
    cout << pmin << endl;
    cout << "Youngest person: " << endl;
    cout << pmax << endl;
    
    read.close();
    
    return 0;
}

class dateperson{
public:
    
    
};
