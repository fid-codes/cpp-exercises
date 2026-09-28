#include <iostream> 
using namespace std; 
int main() { 
    int jamKerja; 
    long upah = 0, lembur = 0, denda = 0, total = 0; 
    cout << "Jam kerja : "; 
    cin >> jamKerja; 
    if (jamKerja > 60) { 
        upah = 60 * 5000; 
        lembur = (jamKerja - 60) * 6000; 
        denda = 0; 
    } else if (jamKerja >= 50) { 
        upah = jamKerja * 5000; 
        lembur = 0; 
        denda = 0; 
    } else { 
        upah = jamKerja * 5000; 
        lembur = 0; 
        denda = (50 - jamKerja) * 1000; 
    } 
    total = upah + lembur - denda; 
    cout << "Upah      : Rp. " << upah << endl; 
    cout << "Lembur    : Rp. " << lembur << endl; 
    cout << "Denda     : Rp. " << denda << endl; 
    cout << "Total     : Rp. " << total << endl; 
return 0; 
}
