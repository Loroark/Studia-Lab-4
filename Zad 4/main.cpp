#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	char znak;
	znak = getch();

    if(znak >= 65 && znak <= 90){
        cout << "duza litera";
    }else if(znak >= 97 && znak <= 122){
        cout << "mala litera";
    }else if(znak >= 48 && znak <= 57){
        cout << "cyfra";
    }else if(znak == 13){
        cout << "klawisz ENTER";
    }else if(znak == 27){
        cout << "klawisz ESC";
    }else if (znak == 0){
		znak = getch();
        if(znak == 59){
            cout << "klawisz funkcyjny F1";
        }else{
            cout << "inny klawisz";
        }
	}else if(znak == -32){
        znak = getch();
        if(znak == 75){
            cout << "strzalka w lewo";
        }else if(znak == 77){
            cout << "strzalka w prawo";
        }else{
            cout << "inny klawisz";
        }
	}else{
        cout << "inny klawisz";
	}
}
