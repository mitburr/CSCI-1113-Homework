#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    ofstream RawSentences;
    ifstream SentencesInput;
    string CurrentSentence;
    RawSentences.open ("RawSentences.txt");
    cout << "please enter your sentences" << endl;
    for (int i = 0; i < 100; i++){
        getline (cin, CurrentSentence);
        if (CurrentSentence == "exit") break;
        RawSentences << CurrentSentence << "\n";
    }
    RawSentences.close();
    SentencesInput.open("RawSentences.txt");
    string TempSentence;
    while (TempSentence != "exit"){
        getline (SentencesInput,TempSentence);
        
    }
    
    SentencesInput.close();
    return 0;
}
