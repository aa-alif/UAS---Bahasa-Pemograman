/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main (){
    string kd_matkul;
    string nama_matkul;
    
    cout<<"Masukan Data Berikut : "<<endl<<endl;
    cout<<"Kode Mata Kuliah : ";
    getline (cin, kd_matkul);
    
    cout<<"Nama Mata Kuliah : ";
    getline (cin, nama_matkul);
    
    cout<<endl;
    cout<<"DATA MATA KULIAH"<<endl;
    cout<<"------------------------------"<<endl;
    
    cout<<"Kode Mata Kuliah : "<<kd_matkul<<endl;
    cout<<"Nama Mata Kuliah : "<<nama_matkul<<endl;
}
