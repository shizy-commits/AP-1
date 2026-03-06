#include <iostream>  // supaya program bisa input output
using namespace std;     // supaya bisa langsung pake cin,cout tanpa pake std

int main(){
    int gaji, pajak, bonus, total, gol, anak; // untuk mendeklarasikan variabel
    string nama; // nyimpan nama

    cout<<"Masukkan nama anda : "; // buat user input nama
    cin>>nama; 
    cout<<"Masukkan golongan gaji anda (1,2,3) : "; // buat user milih golongan gaji
    cin>>gol;
    
    // pake if else buat nentuin gaji berdasarkan golongan
    if (gol == 1){ 
        gaji = 5000000;
    }
    else if (gol == 2){
        gaji = 3000000;
    }
    else if (gol == 3){
        gaji = 2500000;
    }
    else{
        cout<<"Anda salah menginput golongan";
    }

    cout<<"Masukkan jumlah anak anda : ";
    cin>>anak;
    
    // pake if else untuk nentuin bonus tambahan
    if (anak == 1 || anak == 2) // pake or biar bisa milih salah satu kondisi
        bonus = anak * 500000;        
    else if (anak > 2)
        bonus = 750000;
    else 
        bonus = 0;

    pajak = gaji * 0.05; // rumus buat nyari pajak

    total = gaji - pajak + bonus; // rumus  buat nyari total keseluruhan gaji

    cout<<"\nGaji total : Rp "<< total << endl; // buat ngasih output gaji total di akhir
}