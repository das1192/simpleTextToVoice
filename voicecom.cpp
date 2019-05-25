#include<iostream>
#include<string>
#include <cstdlib>

 using namespace std;

int main(){
string voice;
int input=0;


cout << "please enter  your Text then enter ="<< endl;  // prints Hello
getline (cin, voice);
system((" PowerShell -Command \"Add-Type –AssemblyName System.Speech; (New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak( '"+voice+"');\"").c_str());






return 0;
}
