#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    int a,b,t;
    float luas,luas1,panjang,lebar;
    char pil;
    do{
    system("cls");
    cout<<"SELAMAT DATANG DI PROGRAM TAUFIK NURUL HIDAYAT PRODI SISTEM INFORMASI"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"Nama = Taufik Nurul Hidayat"<<endl;
    cout<<"Kelas = SINFC 01 - 2021"<<endl;
    cout<<"NIM = 20210910084"<<endl;
    cout<<"---------------------------"<<endl<<endl;;
    cout<<"*********DAFTAR MENU**************************************************"<<endl;
    cout<<"1. Menentukan luas persegi panjang"<<endl;
    cout<<"2. Menampilkan bilangan dari 1 sampai dengan 10 menggunakan for"<<endl;
    cout<<"3. Mencari Luas Segitiga"<<endl;
    cout<<"Silahkan Pilih Menu (1-3)"<<endl;
    cout<<"**********************************************************************"<<endl;
    cout<<"Masukan Menu Pilihan = ";
    cin>>a;

    switch(a) {
    case 1 :
        cout<<"Anda Memilih menu no. "<<a<<endl;
        cout<<"Program Menghitung Luas Persegi Panjang"<<endl<<endl;
        cout<<"Masukan Panjang : ";
        cin>>panjang;
        cout<<"Masukan Lebar : ";
        cin>>lebar;
        luas=panjang*lebar;
        cout<<"Luas Persegi Panjang = "<<luas<<" cm"<<endl;
        cout<<"Apakah Mau Mengulang menu Y/T : ";
        cin>>pil;
        break;
    case 2 :
        cout<<"Anda Memilih No "<<a<<endl;
        cout<<"Program Menampilkan bilangan dari 1 sampai dengan 10 menggunakan for"<<endl;
        for(int i=1; i<=10; i++){
        cout<< i <<" ";}
        cout<<endl;
        cout<<"Apakah Mau Mengulang menu Y/T : ";
        cin>>pil;
        break;
    case 3 :
        cout<<"Anda Memilih No "<<a<<endl;
        cout<<"Program Mencari Luas Segitiga"<<endl;
        cout << "Masukkan panjang alas: ";
        cin >> b;
        cout << "Masukkan tinggi segitiga: ";
        cin >> t;
        luas1 = 0.5*b*t;
        cout << "Luas segitiga = " << luas1 << endl;
        cout<<"Apakah Mau Mengulang menu Y/T : ";
        cin>>pil;
        break;

    default : cout<<"Menu tidak tersedia"<<endl;
    }
    }while(pil =='y' || pil =='Y');
        cout<<"Terima Kasih Atas Kunjungan Anda...."<<endl;
    getch();
}
