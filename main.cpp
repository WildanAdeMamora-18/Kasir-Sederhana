#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Kasir
{
    int menu_id, jmlh, total;
    string nama, lanjutkan, dftr_psn;
};

void minuman(vector<Kasir> &daftarpesanan)
{
    Kasir data_kasir;

    while (true)
    {
        cout << "Pilih Menu Minuman : ";
        cin >> data_kasir.menu_id;
        cout << "Berapa Porsi/Gelas : ";
        cin >> data_kasir.jmlh;

        // mengatur nama dan harga makanan berdasarkan pilihan menu
        if (data_kasir.menu_id == 1)
        {
            data_kasir.nama = "Es Teh";
            data_kasir.total = data_kasir.jmlh * 3000;
        }
        else if (data_kasir.menu_id == 2)
        {
            data_kasir.nama = "Es Jeruk";
            data_kasir.total = data_kasir.jmlh * 5000;
        }
        else if (data_kasir.menu_id == 3)
        {
            data_kasir.nama = "Air Es";
            data_kasir.total = data_kasir.jmlh * 2000;
        }
        else if (data_kasir.menu_id == 4)
        {
            data_kasir.nama = "Teh Hangat";
            data_kasir.total = data_kasir.jmlh * 3000;
        }
        else if (data_kasir.menu_id == 5)
        {
            data_kasir.nama = "Jeruk Hangat";
            data_kasir.total = data_kasir.jmlh * 5000;
        }

        daftarpesanan.push_back(data_kasir);

        cout << "Tambah Menu Lain (ya/tidak) ? ";
        cin >> data_kasir.lanjutkan;

        if (data_kasir.lanjutkan != "ya")
        {
            break;
        }
    }
}

void makanan(vector<Kasir> &daftarpesanan)
{
    Kasir data_kasir;

    while (true)
    {
        cout << "Pilih Menu Makanan (1-5) : ";
        cin >> data_kasir.menu_id;
        cout << "Berapa Porsi : ";
        cin >> data_kasir.jmlh;

        // mengatur nama dan harga makanan berdasarkan pilihan menu
        if (data_kasir.menu_id == 1)
        {
            data_kasir.nama = "Pecel Lele";
            data_kasir.total = data_kasir.jmlh * 16000;
        }
        else if (data_kasir.menu_id == 2)
        {
            data_kasir.nama = "Pecel Ayam";
            data_kasir.total = data_kasir.jmlh * 16000;
        }
        else if (data_kasir.menu_id == 3)
        {
            data_kasir.nama = "Bebek Goreng";
            data_kasir.total = data_kasir.jmlh * 18000;
        }
        else if (data_kasir.menu_id == 4)
        {
            data_kasir.nama = "Nasi Goreng";
            data_kasir.total = data_kasir.jmlh * 13000;
        }
        else if (data_kasir.menu_id == 5)
        {
            data_kasir.nama = "Soto Ayam";
            data_kasir.total = data_kasir.jmlh * 13000;
        }
        else
        {
            data_kasir.nama = "Menu tidak valid";
            data_kasir.total = 0;
        }

        daftarpesanan.push_back(data_kasir);

        cout << "Tambah Menu Lain (ya/tidak) ? ";
        cin >> data_kasir.lanjutkan;

        if (data_kasir.lanjutkan != "ya")
        {
            break;
        }
    }
}

void tampilkan_pesanan(const vector<Kasir> &daftarpesanan)
{
    int totalHarga = 0;

    
    cout << "==== Daftar Pesanan ====\n" ;
    
    for (const Kasir &data_kasir : daftarpesanan)
    {
        cout << data_kasir.nama << " " << data_kasir.jmlh << " porsi : RP. " << data_kasir.total << endl;
        totalHarga += data_kasir.total;
    }

    cout << "==== Total Pesanan ====\n" ;
    cout << "Total Harga : RP. " << totalHarga << endl;
}

int main()
{
    vector<Kasir> daftarpesanan;

    cout << "|==================================|" << endl;
    cout << "|      Program Kasir Sederhana     |" << endl;
    cout << "|==================================|" << endl;
    cout << "|          Menu Makanan            |" << endl;
    cout << "|==================================|" << endl;
    cout << "|  1. Pecel Lele          RP. 16000|" << endl;
    cout << "|  2. Pecel Ayam          Rp. 16000|" << endl;
    cout << "|  3. Bebek Goreng        Rp. 18000|" << endl;
    cout << "|  4. Nasi Goreng         Rp. 13000|" << endl;
    cout << "|  5. Soto Ayam           Rp. 13000|" << endl;
    cout << "|==================================|" << endl;

    makanan(daftarpesanan);

    cout << "|==================================|" << endl;
    cout << "|          Menu Minuman            |" << endl;
    cout << "|==================================|" << endl;
    cout << "|  1. Es Teh               RP. 3000|" << endl;
    cout << "|  2. Es Jeruk             Rp. 5000|" << endl;
    cout << "|  3. Air Es               Rp. 2000|" << endl;
    cout << "|  4. Teh Hangat           Rp. 3000|" << endl;
    cout << "|  5. Jeruk Hangat         Rp. 5000|" << endl;
    cout << "|==================================|" << endl;

    minuman(daftarpesanan);

    cout << endl;

    tampilkan_pesanan(daftarpesanan);

    return 0;
}