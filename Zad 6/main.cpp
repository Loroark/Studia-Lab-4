#include <iostream>
using namespace std;

int main(){
    string tekst;
    cin >> tekst;
    int szyfr;
    cin >> szyfr;

    for(int i = 0; i < tekst.length(); i++){
        tekst.at(i) += szyfr;
    }

    cout << tekst << endl;
}
