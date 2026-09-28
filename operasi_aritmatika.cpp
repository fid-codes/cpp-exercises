#include <iostream> 
using namespace std; 
 
int main() { 
    float a; 
    float b; 
 
    cout << "Masukkan nilai a: "; 
    cin >> a; 
 
    cout << "Masukkan nilai b: "; 
    cin >> b; 
 
    float tambah = a + b; 
    float kurang = a - b; 
    float bagi = a / b; 
    float kali = a * b; 
 
    cout << "Nilai akhir tambah: " << tambah << endl; 
    cout << "Nilai akhir kurang: " << kurang << endl; 
    cout << "Nilai akhir kali: " << kali << endl; 
     
    if (b !=0){ //Catatan, tanda seru ini perlu digunakan untuk menyatakan negasi, 
atau artinya tidak sama dengan 
cout << "Nilai akhir bagi: " << bagi << endl; 
} else { 
cout << "Nilai akhir bagi: Tidak terdefinisi (karena pembagi 0)" 
<< endl; //digunakan jika pembagi 0 
} 
return 0; 
}
