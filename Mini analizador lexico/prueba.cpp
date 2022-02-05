//Salcedo Arellano Alexa

#include <iostream>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

bool isNumber(char txt[]){
    bool ban = false;
    for(int i=0; i < strlen(txt); i++){
        if(!isdigit(txt[i]) && txt[i] != '-'){
            if (txt[i] != '.'){
                return false;
            }
            else{
                ban = true;
            }
        }
    }
    if(ban == true){
        cout << "\n" << txt << " Es un flotante" << endl;
        system("pause");
        return true;
    }
    cout << "\n" << txt << " Es un entero" << endl;
    system("pause");
    return true;
}

bool isString(char txt[]){
    for (int i=0; i< strlen(txt); i++){
        char actual = txt[i];
        if(actual == '"'){
            cout << "\n" << txt << " Es una cadena" << endl;
            system("pause");
            return true;
        }
    }
    cout << "\n" << txt << " Es un identificador" << endl;
    system("pause");
    return false;
}

int main(){
    char texto[15];
    bool valido = true;
    while(valido == true){
        system("cls");
        cout << "Ingresa una cadena: "<<endl;
        cin >> texto;
        if(isNumber(texto)){
            valido = true;
            continue;
        }

        if (strcmp(texto, "salir") == 0 ){
            cout << "\n" << texto << " Saliendo ..." << endl;
            system("pause");
            valido = false;
            continue;
        }
        
        else{
            isString(texto);
            continue;
        }

    }
    return 0;
}
