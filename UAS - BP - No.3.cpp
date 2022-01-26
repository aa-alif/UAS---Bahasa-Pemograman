/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<fstream>
using namespace std;
void create(){
    string kd_matkul, nama_matkul;
    ofstream txt;
    txt.open("soalganjil.txt", ios::app);
    cout<<"Kode Mata Kuliah :";
    cin>>kd_matkul;
    cout<<"Nama Mata Kuliah :";
    cin>>nama_matkul;
    txt<<kd_matkul;
    txt<<nama_matkul;
    txt<<endl;
    txt.close();
}
void read(){
    string kd_matkul, nama_matkul;
    ifstream txt ("soalganjil.txt");
    if(txt.is_open()){
        while(! txt.eof()){
            getline(txt, kd_matkul);
            getline(txt, nama_matkul);
            cout<<kd_matkul<<endl;
            cout<<nama_matkul<<endl;
            cout<<endl;
        }
    } 
}
int main(){
    int pil;
    main:
    cout<<"Pilihan Menu"<<endl;
    cout<<"1. Create"<<endl;
    cout<<"2. Read"<<endl;
    cout<<"3. Exit"<<endl;
    cout<<"Masukkan Pilihan :";
    cin>>pil;
    switch(pil){
        case 1:
            create();
            goto main;            
            break;
        case 2:
            read();
            goto main;
            break;
        case 3:
            return 0;
    }
}
