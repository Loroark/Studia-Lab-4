#include <iostream>
using namespace std;

int main(){
    string imie;
    cin >> imie;

    if(imie.at(imie.length() - 1) == 'a'){
        cout << "Kobieta" << endl;
    }else{
        cout << "Mezczyzna" << endl;
    }

    for(int i = imie.length() - 1; i >= 0; i--){
        cout << imie.at(i);
    }
}
