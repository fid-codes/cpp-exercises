#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
    int pilihan, jumlah; 
    string namaMenu; 
    long harga = 0; 
    cout << "----- KASIR FILKOM UB -----\n"; 
    cout << "1. Nasi Goreng - Rp150.000\n"; 
    cout << "2. Mie Goreng  - Rp120.000\n"; 
    cout << "3. Ayam Geprek - Rp180.000\n"; 
    cout << "4. Es Teh      - Rp115.000\n"; 
    cout << "5. Es Jeruk    - Rp200.000\n"; 
    cout << "Pilih menu: "; 
    cin >> pilihan; 
    switch (pilihan) { 
        case 1: 
            namaMenu = "Nasi Goreng"; 
            harga = 150000; 
            break; 
        case 2: 
            namaMenu = "Mie Goreng"; 
            harga = 120000; 
            break; 
        case 3: 
            namaMenu = "Ayam Geprek"; 
            harga = 180000; 
            break; 
        case 4: 
            namaMenu = "Es Teh"; 
            harga = 115000; 
            break; 
        case 5: 
            namaMenu = "Es Jeruk"; 
            harga = 200000; 
            break; 
        default: 
            cout << "Pilihan menu tidak valid, tidak ada di menu!\n"; 
            return 0; 
 
 
    } 
    cout << "Jumlah pembelian: "; 
    cin >> jumlah; 
    long total = harga * jumlah; 
    int persentaseDiskon = 0; 
    if (total >= 1000000) { 
        persentaseDiskon = 50;  
    } else if (total >= 700000) { 
        persentaseDiskon = 30; 
    } else if (total >= 500000) { 
        persentaseDiskon = 20; 
    } else if (total >= 200000) { 
        persentaseDiskon = 10; 
    } else { 
        persentaseDiskon = 0; 
    } 
    int persentasePajak = 0; 
    if (total >= 1) { 
        persentasePajak = 50; 
    } 
    long diskon = total * persentaseDiskon / 100; 
    long pajak = total * persentasePajak / 100; 
    long totalBayar = total - diskon + pajak; 
    cout << "\n--- STRUK PEMBELIAN ---\n"; 
    cout << "Menu : " << namaMenu << "\n"; 
    cout << "Harga : Rp" << harga << "\n"; 
    cout << "Jumlah : " << jumlah << "\n"; 
    cout << "Total : Rp" << total << "\n"; 
    cout << "Diskon (" << persentaseDiskon << "%) : Rp" << diskon << "\n"; 
    cout << "Pajak (" << persentasePajak << "%) : Rp" << pajak << "\n"; 
    cout << "Total Bayar : Rp" << totalBayar << "\n"; 
    cout << "-----------------------\n"; 
    return 0; 
} 
