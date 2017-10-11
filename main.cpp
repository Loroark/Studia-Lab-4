#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int n;
    cout << "n = ";
    cin >> n;
    string ciag = "";
    char znak;
    bool czyPoprzedniaCyfra = false;
    bool czyPoliczona = false;
    int ile2cyfrowych = 0;

    for(int i= 0; i < n; i++){
        znak = getch();
        ciag += znak;
        if((int)znak >= 48 && (int)znak <= 57){
            if(czyPoprzedniaCyfra == true){
                if(czyPoliczona == false){
                    ile2cyfrowych++;
                     czyPoliczona = true;
                }

            }else{
                czyPoprzedniaCyfra = true;
            }
        }else{
            czyPoprzedniaCyfra = false;
            czyPoliczona = false;
        }
    }
    cout << endl << ciag << endl;
    cout << endl << ile2cyfrowych << endl;
}
