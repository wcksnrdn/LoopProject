#include <iostream>
using namespace std;

int main() {
    int A, I, T, maxNumber, minNumber;
    float average;
    T = 0;
    I = 1;
    
    maxNumber = INT_MIN; 
    minNumber = INT_MAX;
    
    cout << "===============================\n";
    cout << "      Penjumlahan by Satria     \n";
    cout << "===============================\n\n";
    
    do {
        cout << "Masukkan Angka Positif: ";
        cin >> A;

        if (A < 0) {
            cout << "Angka tidak boleh negatif. Coba lagi.\n";
            continue;
        }
        
        T = T + A;

        if (A > maxNumber) {
            maxNumber = A;
        }
        if (A < minNumber) {
            minNumber = A;
        }

        cout << "Hasil sementara - Jumlah: " << T << "\n";
        
        I++;
    } while (I <= 4);
    
    average = static_cast<float>(T) / (I - 1);

    cout << "\n===============================\n";
    cout << "      Hasil Akhir\n";
    cout << "===============================\n";
    cout << "Total Angka     : " << T << endl;
    cout << "Rata-rata       : " << average << endl;
    cout << "Angka Terbesar  : " << maxNumber << endl;
    cout << "Angka Terkecil  : " << minNumber << endl;
    cout << "===============================\n";
    
    return 0;
}

