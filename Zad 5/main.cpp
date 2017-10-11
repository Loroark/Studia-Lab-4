#include <iostream>
using namespace std;

int main(){
    string napis;
    string napis2;
    getline(cin, napis);
    napis2 = napis;
    int dlugosc = napis2.length();
    cout << napis << endl;

    for(int i = 0; i < dlugosc; i++){
        if(napis2.at(i) == 32){
            napis2.erase(i, 1);
            napis2.insert(i, "*");
        }
    }
    cout << napis2 << endl;

    napis2 = napis;

    for(int i = 0; i < dlugosc; i++){
        if(napis2.at(i) == 32){
            napis2.erase(i, 1);
            dlugosc--;
        }
    }
    cout << napis2 << endl;
}
