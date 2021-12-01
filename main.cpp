using namespace std;
#include <iostream>
#include "lib.h"


int main() {
    int numero;
    cin>>numero;
    if(isNumeroPrimo(numero,2)) {
        cout<<"numero primo";
    }else{
        cout<<"numero non primo";
    }
    return 0;
}
