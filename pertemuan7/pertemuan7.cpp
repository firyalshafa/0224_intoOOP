// pertemuan7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class mahasiswa {
public: // akses modifier
    string nama;
    int umur;
    string jurusan;

    void output() {
        cout << "nama: " << nama << endl;
        cout << "umur: " << umur << endl;
        cout << "jurusan: " << jurusan << endl;
    }

};

class matakuliah {
private:
    string kodemk;
    string namamk;
    int sks;
public:
    void input() {
        cout << "kode mk: ";
        cin >> kodemk;
        cout << "nama mk: ";
        cin >> namamk;
        cout << "sks :";
        cin >> sks;
    }

    void output() {
        cout << "kode mk: " << kodemk << endl;
        cout << "nama mk :" << namamk << endl;
        cout << "sks :" << sks << endl;
    }

};


int main()
{
    mahasiswa mhs;
    matakuliah mk;

    mhs.nama = "budi";
    mhs.umur = 20;
    mhs.jurusan = " teknik informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
