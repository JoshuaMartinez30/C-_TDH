#include <iostream>
using namespace std;

void Hanoi(int discos, int o, int a, int d) {
    if (discos == 1) {
        cout<< o << " -> " << d<<endl;
    } else {
        Hanoi(discos - 1, o, d, a);
        cout<<o << " -> " << d<<endl;
        Hanoi(discos - 1, a, o, d);
    }
}

int main(){
    int cant_discos;
    cout<<"Ingrese numeros de discos:";
    cin>>cant_discos;
    Hanoi(cant_discos, 1, 2, 3);
}