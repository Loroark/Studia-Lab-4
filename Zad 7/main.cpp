/// Dzia³a tylko dla dodatnich!!!!
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char znak;
    string ciag;
    int liczba = 0;
    int ileLiczb = 0;
    int suma = 0;
    bool czyPoprzedniaCyfra = false;

    for(int i= 0; i < n; i++){
        znak = getch();
        //ciag += znak;
        if(znak >= 48 && znak <= 57){
            liczba = (liczba*10) + (znak-48);
            czyPoprzedniaCyfra = true;
        }else{
            suma += liczba;
            czyPoprzedniaCyfra = false;
            ileLiczb++;
            liczba = 0;
        }
    }
    if(znak >= 48 && znak <= 57){
        suma += liczba;
        czyPoprzedniaCyfra = false;
        ileLiczb++;
        liczba = 0;
    }
    cout << "liczba: " << liczba << endl;
    cout << "ileLiczb: " << ileLiczb << endl;
    cout << "suma: " << suma << endl;
    cout << "srednia: " << suma/ileLiczb << endl;


}
