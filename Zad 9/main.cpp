#include <iostream>
using namespace std;

int main(){
    string tekst;
    cin >> tekst;
    bool czyPalindrom = true;
    int dlugosc = tekst.length();

    for(int i = 0; i < dlugosc; i++){
        if(tekst.at(i) != tekst.at(dlugosc-i-1)){
            czyPalindrom = false;
        }
    }

    if(czyPalindrom == true){
        cout << "\nPodane slowo jest palindromem.\n";
    }else{
        cout << "\nPodane slowo NIE jest palindromem.\n";
    }
}
