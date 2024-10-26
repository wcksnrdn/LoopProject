#include <iostream>
#include <iomanip>  // Untuk pengaturan tabel
#include <string>

using namespace std;

// Fungsi untuk menghitung grade berdasarkan rata-rata
char calculateGrade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'E';
    }
}

// Fungsi untuk menghitung keterangan (Lulus/Tidak Lulus)
string calculateRemarks(float average) {
    if (average >= 60) {
        return "Lulus";
    } else {
        return "Tidak Lulus";
    }
}

int main() {
    string nim, name;
    float msWord, msExcel, msPowerPoint;
    float average;
    char grade;
    string remarks;

    // Input data dari pengguna
    cout << "Masukkan NIM: ";
    cin >> nim;
    cout << "Masukkan Nama Siswa: ";
    cin.ignore();  // Mengatasi masalah dengan getline setelah cin
    getline(cin, name);
    cout << "Masukkan nilai MS Word: ";
    cin >> msWord;
    cout << "Masukkan nilai MS Excel: ";
    cin >> msExcel;
    cout << "Masukkan nilai MS PowerPoint: ";
    cin >> msPowerPoint;

    // Hitung rata-rata, grade, dan keterangan
    average = (msWord + msExcel + msPowerPoint) / 3;
    grade = calculateGrade(average);
    remarks = calculateRemarks(average);

    // Menampilkan tabel
    cout << "\n------------------------------------------------------------------------------------------------\n";
    cout << left << setw(10) << "NIM" << setw(20) << "Nama Siswa" 
         << setw(10) << "MS Word" << setw(10) << "MS Excel" << setw(15) 
         << "MS P.Point" << setw(10) << "Rata-rata" << setw(10) 
         << "Grade" << setw(15) << "Keterangan" << endl;
    cout << "------------------------------------------------------------------------------------------------\n";

    cout << left << setw(10) << nim << setw(20) << name
         << setw(10) << msWord << setw(10) << msExcel << setw(15) 
         << msPowerPoint << setw(10) << average << setw(10) 
         << grade << setw(15) << remarks << endl;

    return 0;
}

