
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

const double phi = 3.14;

int persegi(int sisi){
    return sisi * sisi;
}

double lingkaran (int JariJari){
    return phi * (JariJari * JariJari);
}

int persegipanjang(int panjang, int lebar){
    return panjang * lebar;
}

int main()
{
    
string pilih;
int sisi;
int JariJari;
int panjang;
int lebar;

cout << "masukan luas yang ingin di pilih: ";
cin >> pilih;

if (pilih == "persegi"){
    cout << "masukan sisi: ";
    cin >> sisi;
    
    cout << "luas persegi: " << persegi(sisi);
}

else if (pilih == "lingkaran"){
    cout << "masukan jari-jari: ";
    cin >> JariJari;
    
    cout << "luas lingkaran: " << lingkaran(JariJari);
}  

else if (pilih == "persegi panjang"){
    cout << "masukan panjang:";
    cin >> panjang;
    
    cout << "masukan lebar: ";
    cin >> lebar;
    
    cout << "luas persegi panjang: " << persegipanjang(panjang, lebar);
}

else{
    cout << "maaf pilihan tidak tersedia";
}

}