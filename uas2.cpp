#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menggabungkan dua array yang terurut
vector<int> mergeArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> merged; // Array hasil gabungan
    int i = 0, j = 0;

    // Menggabungkan elemen dari kedua array
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            cout << "Menambahkan " << arr1[i] << " dari array pertama\n";
            i++;
        } else {
            merged.push_back(arr2[j]);
            cout << "Menambahkan " << arr2[j] << " dari array kedua\n";
            j++;
        }
    }

    // Menambahkan sisa elemen dari array pertama (jika ada)
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        cout << "Menambahkan sisa " << arr1[i] << " dari array pertama\n";
        i++;
    }

    // Menambahkan sisa elemen dari array kedua (jika ada)
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        cout << "Menambahkan sisa " << arr2[j] << " dari array kedua\n";
        j++;
    }

    return merged;
}

int main() {
    cout<<"Nama : Rio Permana Mardianto"<<endl;
    cout<<"NIM : 231011403458"<<endl;
    cout<<"Kelas : 03TPLP027"<<endl;
    cout<<"UJIAN AKHIR SEMESTER\n"<<endl;
    // Contoh array terurut
    vector<int> array1 = {1, 3, 5, 7};
    vector<int> array2 = {2, 4, 6, 8};

    cout << "Menggabungkan kedua array terurut...\n";
    vector<int> result = mergeArrays(array1, array2);

    // Menampilkan hasil penggabungan
    cout << "Array hasil penggabungan: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
