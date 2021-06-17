#include<iostream>

using namespace std;
void M31_31(){
    for(int i=0; i<=31; i++){
        for(int j=0; j<=31; j++){
            cout << (i^j) << "\t";
        }
        cout << "\n";   
    }
}
void M31(){
    int Xor=0;
    for(int i=0; i<=100; i++){
        // if((i+1)%4==0)cout << i << "\t" << Xor << "\n";
        Xor=Xor^i;
        if((i+1)%4==0)cout << i << "\t" << Xor << "\n";
    }
}
int main(){
    M31();
}