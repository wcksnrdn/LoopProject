#include <iostream>
#include <limits>

using namespace std;

int main() {
    int A, I, T, maxNumber, minNumber;
    float average;
    T = 0;
    I = 1;
    
    maxNumber = numeric_limits<int>::min();
    minNumber = numeric_limits<int>::max();
    
    cout << "===============================\n";
    cout << "      Penjumlahan by Satria     \n";
    cout << "===============================\n\n";
    
    while (I <= 4) {
        cout << "Masukkan Angka Positif: ";
        cin >> A;
        
        if (A < 0) {
            cout << "Error: Angka harus positif. Silakan coba lagi.\n";
            continue;
        }

        T += A;
        
        if (A > maxNumber) {
            maxNumber = A;
        }
        if (A < minNumber) {
            minNumber = A;
        }

        cout << "Hasil Sementara - Total: " << T << "\n";
        
        I++;
    }
    
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

