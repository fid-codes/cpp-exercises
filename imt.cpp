#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
double berat, tinggi, imt; 
cout << "Berat badan (kg) : "; 
cin >> berat; 
cout << "Tinggi badan (m) : "; 
cin >> tinggi; 
imt = berat / (tinggi * tinggi); 
cout << fixed << setprecision(2); 
cout << "IMT              
if (imt <= 18.5) { 
cout << "Termasuk kurus" << endl; 
: " << imt << endl; 
} else if (imt <= 25) { 
cout << "Termasuk normal" << endl; 
} else if (imt <= 30) { 
cout << "Termasuk gemuk" << endl; 
} else { 
cout << "Termasuk kegemukan" << endl; 
} 
return 0; 
}
