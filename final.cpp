#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

long saldo = 55000000; //global variabel

void header(){
    cout << "================================================\n"
         << "\t   SELAMAT DATANG DI ATM BERSAMA\n"
         << "\t         Pecahan 50.000\n"
         << "================================================\n\n";
}

void footer(){
    system("cls");
    cout << "=================================================================\n"
         << "\t Terima Kasih Telah bertransaksi di ATM Bersama\n"
         << "\tSilahkan cek kembali uang dan barang bawaan Anda. \n"
         << "=================================================================\n";
}

int transaksi(int a, int b)
{
    int sisa;
    sisa = a-b;
    cout<<endl;
    cout<<"Transaksi Anda Berhasil!"<<endl;
    cout<<"Saldo Anda adalah : Rp. "<<sisa<<endl;
}
int transaksi2(int c, int d)
{
    int sisa2;
    sisa2 = c+d;
    cout<<"Transaksi Anda Berhasil!"<<endl;
    cout<<"Saldo Anda adalah : Rp. "<<sisa2<<endl;
}
int main()
{
    awal:
    int pin, pilih, nTarik, nSetoran, nPembayaran;

    cout<<"Silakan Masukkan Pin Anda : ";
    cin>>pin;

    if(pin==456987){
        menu:
        header();
        system("color b");
         cout<<" ______________________________________________ "<<endl;
         cout<<"|                 ATM BERSAMA                  |"<<endl;
         cout<<"|______________________________________________|"<<endl;
         cout<<"|_______________MENU__TRANSAKSI________________|"<<endl;
         cout<<"|    1. Tarik Tunai                            |"<<endl;
         cout<<"|    2. Transfer                               |"<<endl;
         cout<<"|    3. Pembayaran                             |"<<endl;
         cout<<"|    4. Setor Tunai                            |"<<endl;
         cout<<"|    5. Cek Saldo                              |"<<endl;
         cout<<"|    6. Keluar                                 |"<<endl;
         cout<<"|______________________________________________|"<<endl;
        cout<<"\nMasukkan Pilihan : ";
        cin>>pilih;

        switch(pilih){
        int pil;
        case 1:
            system("cls");
            cout<<"\n============================= TARIK TUNAI ============================= \n\n";
            cout<<"1. 200000\t";        cout<<"5. 750000"<<endl;
            cout<<"2. 250000\t";        cout<<"6. 1000000"<<endl;
            cout<<"3. 300000\t";        cout<<"8. Keluar"<<endl;
            cout<<"4. 500000\t";
            cout<<"\nMasukkan pilihan anda : ";
            cin>>pil;

            if (pil==1){
                transaksi(saldo,200000);
                goto akhir;
            }
            else if (pil==2){
                transaksi(saldo,250000);
                goto akhir;
            }
            else if (pil==3){
                transaksi(saldo,300000);
                goto akhir;
            }
            else if (pil==4){
                transaksi(saldo,500000);
                goto akhir;
            }
            else if (pil==5){
                transaksi(saldo,750000);
                goto akhir;
            }
            else if (pil==6){
                transaksi(saldo,1000000);
                goto akhir;
            }
            else if (pil==7){
                footer();
                break;
            }

        case 2:
        int pil2;
        system("cls");
        cout<<"\n============================= TRANSFER ============================= \n \n";
        cout<<"Bank tujuan : \n";
        cout<<"1. Bank Informatika"<<endl;
        cout<<"2. Bank Rakyat Informatika"<<endl;
        cout<<"3. Bank Nasional Informatika"<<endl;
        cout<<"4. Bank Cari Aman"<<endl;
        cout<<"5. Keluar"<<endl;
        cout<<"Masukkan Pilihan Anda : ";
        cin>>pil2;
            if (pil2==1){
                int f,g;
                cout<<"Masukkan nomor rekening : ";
                cin>>f;
                cout<<"Masukkan jumlah uang yang ingin di transfer : ";
                cin>>g;
                system("cls");
                cout<<"\nRekening tujuan : " << f << endl;
                cout<<"Jumlah uang yang di tansfer : "<< g << endl;
                cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";
                transaksi(saldo,g);
                goto akhir;
            }
            else if (pil2==2){
                int h, i, jumlah, biayaadmin;
                biayaadmin=2000;
                cout<<"Masukkan nomor rekening : ";
                cin>>h;
                cout<<"Masukkan jumlah uang yang ingin di transfer : ";
                cin>>i;
                jumlah=i+biayaadmin;
                system("cls");
                cout<<"\nRekening : " << h << endl;
                cout<<"Jumlah uang yang di transfer : "<< jumlah << endl;
                cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";
                transaksi(saldo,jumlah);
                goto akhir;
            }
            else if(pil2==3){
                int j, k, biayaadmin1, jumlah1;
                biayaadmin1=2500;
                cout<<"Masukkan nomor rekening : ";
                cin>>j;
                cout<<"Masukkan jumlah uang yang ingin di transfer : ";
                cin>>k;
                jumlah1=k+2500;
                system("cls");
                cout<<"\nRekening : " << j << endl;
                cout<<"Jumlah uang yang di transfer : "<< jumlah1 << endl;
                cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n";
                transaksi(saldo,jumlah1);
                goto akhir;
            }
            else if(pil2==4){
                int l,m, biayaadmin2, jumlah2;
                biayaadmin2=2750;
                cout<<"Masukkan nomor rekening : ";
                cin>>l;
                cout<<"Masukkan jumlah uang yang ingin di transfer : ";
                cin>>m;
                jumlah2=m+2750;
                system("cls");
                cout<<"\nRekening : " << l << endl;
                cout<<"Jumlah uang yang di transfer : "<< jumlah2 << endl;
                cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                transaksi(saldo,jumlah2);
                goto akhir;
            }
            else if(pil2==5){
                footer();
                break;
            }
        case 3:
            int o;
            system ("cls");
            cout<<"\n============================= PEMBAYARAN =============================\n\n";
            cout<<"1. UKT"<<endl;
            cout<<"2. SPSA"<<endl;
            cout<<"3. Kas Jurusan"<<endl;
            cout<<"4. Keluar"<<endl;
            cout<<"Pilih pembayaran : ";
            cin>>o;
                if (o==1){
                    int p;
                    system ("cls");
                    cout<<"1. Golongan I"<<endl;
                    cout<<"2. Golongan II"<<endl;
                    cout<<"3. Golongan III"<<endl;
                    cout<<"4. Keluar"<<endl;
                    cout<<"Masukkan Pilihan Anda : ";
                    cin>>p;
                    switch (p){
                        int u, gol, gol1, gol2;
                        case 1:
                            gol=500000;
                            cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                            transaksi(saldo,gol);
                            goto akhir;
                        case 2:
                            gol1=4500000;
                            cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                            transaksi(saldo,gol1);
                            goto akhir;
                        case 3:
                            gol2=750000;
                            cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                            transaksi(saldo,gol2);
                            goto akhir;
                        case 4:
                            footer();
                            break;
                        }

                }else if (o==2){
                    int q;
                        q=12500000;
                        cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                        transaksi(saldo,q);
                        goto akhir;
                }else if (o==3){
                    int z, saldoakhir4;
                        z=100000;
                        cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
                        transaksi(saldo,z);
                        goto akhir;
                    }
                footer();
                break;

         case 4:
            system("cls");
            int x;
            cout<<"\n============================= SETORAN =============================\n\n";
            cout<<"1. 200000\t";        cout<<"4. 1000000"<<endl;
            cout<<"2. 500000\t";        cout<<"5. keluar"<<endl;
            cout<<"3. 750000\t";
            cout<<"\nMasukkan jumlah setoran yang diinginkan : ";
            cin>>x;
            if (x==1){
                transaksi2(saldo,200000);
                goto akhir;
            }
            else if (x==2){
                transaksi2(saldo,500000);
                goto akhir;
            }
            else if (x==3){
                transaksi2(saldo,750000);
                goto akhir;
            }
            else if (x==4){
                transaksi2(saldo,1000000);
                goto akhir;
            }
            else if (x==5){
                footer();
                break;
            }

        case 5:
            footer();
            cout<<"Saldo anda adalah " << saldo <<endl<<endl;
            goto akhir;

        case 6:
            return 0;
        }

        akhir:
            int c;
            cout<<"1. Menu"<<endl;
            cout<<"2. Keluar"<<endl<<endl;
            cout<<"Masukkan Pilihan Anda : ";
            cin>>c;
            if (c==1){
                system ("cls");
                goto menu;
            } else if (c==2){
                    footer();
                    return 0;
                 }
    }

    system("cls");
    cout<<"Pin yang Anda masukkan salah!"<<endl;
    cout<<"Silakan coba lagi."<<endl<<endl;
    goto awal;
}
