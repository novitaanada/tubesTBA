#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void tariktunai (int b, int saldo){
    long int nilai[7] = {200000, 250000, 300000, 500000, 750000, 1000000, 1500000};
    int jumlahuang;
    system ("cls");
    cout << "Sisa saldo anda :" << saldo-nilai[b] << endl;
}



}
int main(){
    menu:
    int a,b, saldo;
    saldo=20000000;
    cout<<"==================================== Selamat Datang di ATM Bersama ==================================== \n";
    cout<< "Pilih transaksi : \n";
    cout<< " 1. TARIK TUNAI \n 2. TRANSFER \n 3. PEMBAYARAN \n 4. SETOR TUNAI \n 5. CEK SALDO \n 6. KELUAR \n";
    cin>>a;

    switch (a){
    case 1:
        cout<<"============================================ TARIK TUNAI ============================================ \n\n";
        cout<<" 1. 200.000 \n 2. 250.000 \n 3. 300.000 \n 4. 500.000 \n 5. 750.000 \n 6. 1.000.000 \n 7. 1.500.000 \n 8. Keluar \n";
        cout<<"Masukkan pilihan anda ; \n";
        cin>>b;
         if (b<8){
            char c;
            tariktunai(b-1,saldo);
            cout<<"Jangan lupa mengambil kartu anda \n \n";
            cout<<"Apakah anda ingin transaksi lagi? (Y/T) \n";
            cin>>c;
            if (c=='Y'){
                system ("cls");
                goto menu;
          }
            else if (c=='T')
            {
                system ("cls");
                cout<<"Terimakasih telah bertransaksi di ATM Bersama";
             }
         }
         else if (b=8){
            int r;
            system ("cls");
            cout<<"Apakah anda ingin bertransaksi lagi? (Y/T)";
            cin>>r;
             if (r=='Y'){
                goto menu;
             }
             else if(r=='T'){
                system ("cls");
                cout<<"Terimakasih telah bertransaksi di ATM Bersama";
             }
         }
         break;


     case 2:
        int o;
        system ("cls");
        cout<<"============================================ PEMBAYARAN ============================================ \n \n";
        cout<<" 1. UKT \n 2. SPSA \n 3. Kas Jurusan \n 4. Keluar \n";
        cout<<"Pilih pembayaran : ";
        cin>>o;
            if (o==1){
                int p, u, saldo;
                saldo=20000000;;
                system ("cls");
                cout<<" 1. Golongan I \n 2. Golongan II \n 3. Golongan III \n 4.Keluar \n";
                cin>>p;
                switch (p){
                    int u;
                    case 1:
                    int gol, gol1, gol2, saldoakhir, saldoakhir1, saldoakhir2;
                        gol=500000;
                        saldoakhir=saldo-gol;
                        cout<<"Transaksi anda berhasil. Sisa saldo anda "<< saldoakhir <<endl;
                        break;
                    case 2:
                        gol1=4500000;
                        saldoakhir1=saldo-gol1;
                        cout<<"Transaksi anda berhasil. Sisa saldo anda "<< saldoakhir1 <<endl;
                        break;
                    case 3:
                        gol2=750000;
                        saldoakhir2=saldo-gol2;
                        cout<<"Transaksi anda berhasil. Sisa saldo anda "<< saldoakhir2 <<endl;
                        break;
                    case 4:
                        system ("cls");
                    }
                        break;
                    system ("cls");
                    cout<<"Terimakasih telah membayar UKT semester ini";
                    cout<<"Apakah anda ingin transaksi lagi? (Y/T) \n";
                    cin>>u;
                        if (u=='Y'){
                            goto menu;
                            }
                        else if (u=='T'){
                            system ("cls");
                            cout<<"Terimakasih telah bertransaksi di ATM Bersama";
                 }
            }


    return 0;

    }

}



