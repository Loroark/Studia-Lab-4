#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    string ciag;
    getline(cin, ciag);
    bool tylkoMale = true;
    bool tylkoDuze = true;
    int ilea = 0;

    for(int i = 0; i < ciag.length(); i++){
        if(ciag.at(i) >= 65 && ciag.at(i) <= 90){
            tylkoMale = false;
        }else if(ciag.at(i) >= 97 && ciag.at(i) <= 122){
            if(ciag.at(i) == 97){
                ilea++;
            }
            tylkoDuze = false;
        }else{
            tylkoMale = false;
            tylkoDuze = false;
        }
    }

    if(tylkoMale == false){
        if(tylkoDuze == false){
            cout << "Ciag znakow mieszanych." << endl;
        }else{
            cout << "Ciag duzych liter." << endl;
        }
    }else{
        cout << ilea << endl;
    }
}
