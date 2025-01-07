#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Binary Search Implementation
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    int langkah = 1; // Variabel untuk mencatat langkah

    while (left <= right) {
        cout << "Langkah " << langkah++ << ": Mencari di rentang indeks [" << left << ", " << right << "]\n";
        int mid = left + (right - left) / 2; // Menghindari overflow
        cout << "   Indeks tengah: " << mid << ", Nilai tengah: " << arr[mid] << endl;

        if (arr[mid] == target) {
            cout << "   Target ditemukan di indeks " << mid << endl;
            return mid;
        }
        else if (arr[mid] < target) {
            cout << "   Target lebih besar dari nilai tengah, pindah ke kanan\n";
            left = mid + 1;
        } else {
            cout << "   Target lebih kecil dari nilai tengah, pindah ke kiri\n";
            right = mid - 1;
        }
    }

    cout << "   Target tidak ditemukan dalam array.\n";
    return -1; // Target tidak ditemukan
}

// Linear Search Implementation
int linearSearch(vector<int>& arr, int target) {
    cout << "Memulai Linear Search...\n";
    for (int i = 0; i < arr.size(); ++i) {
        cout << "Langkah " << i + 1 << ": Memeriksa indeks " << i << ", Nilai: " << arr[i] << endl;
        if (arr[i] == target) {
            cout << "   Target ditemukan di indeks " << i << endl;
            return i;
        }
    }

    cout << "   Target tidak ditemukan dalam array.\n";
    return -1; // Target tidak ditemukan
}

int main() {
    cout<<"Nama : Rio Permana Mardianto"<<endl;
    cout<<"NIM : 231011403458"<<endl;
    cout<<"Kelas : 03TPLP027"<<endl;
    cout<<"UJIAN AKHIR SEMESTER\n"<<endl;

    vector<int> data = {3, 6, 8, 10, 15, 20};
    int target = 10;

    // Sort data untuk Binary Search
    sort(data.begin(), data.end());
    cout << "Array setelah diurutkan: ";
    for (int val : data) cout << val << " ";
    cout << "\n\n";

    // Binary Search
    cout << "Melakukan Binary Search untuk target " << target << "...\n";
    int binaryResult = binarySearch(data, target);
    if (binaryResult != -1)
        cout << "Hasil Binary Search: Ditemukan di indeks " << binaryResult << "\n\n";
    else
        cout << "Hasil Binary Search: Tidak ditemukan\n\n";

    // Linear Search
    cout << "Melakukan Linear Search untuk target " << target << "...\n";
    int linearResult = linearSearch(data, target);
    if (linearResult != -1)
        cout << "Hasil Linear Search: Ditemukan di indeks " << linearResult << "\n";
    else
        cout << "Hasil Linear Search: Tidak ditemukan\n";

    return 0;
}

