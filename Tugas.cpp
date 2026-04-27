//Buatlah sebuah program berisi 2 class dimana terdapat class layang-layang, belah ketupat'
//Di setiap class nya berisikan luas dan keliling serta input dan output.
//Setiap variable memiliki akses privat, BangunDatar belah ketupat merupakan friend function keliling dari layang-layang, dan
//Semua class hanya dapat diakses menggunakan object.

#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang {
    private:
    //Lengkapi disini
    double d1, d2; // diagonal
    double s1, s2; // sisi

    public:
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }
    //Lengkapi disini
    void inputData() {
        cout << "Input Layang-Layang\n";
        cout << "Diagonal 1 : "; cin >> d1;
        cout << "Diagonal 2 : "; cin >> d2;
        cout << "Sisi 1     : "; cin >> s1;
        cout << "Sisi 2     : "; cin >> s2;
    }
        friend void tampilkanKeliling(LayangLayang &l);
};

class BelahKetupat {
    private:
    //Lengkapi disini
    double d1, d2; // diagonal
    double sisi;

    public:
    void inputData() {
        //Lengkapi disini
        cout << "\nInput Belah Ketupat\n";
        cout << "Diagonal 1 : "; cin >> d1;
        cout << "Diagonal 2 : "; cin >> d2;
        cout << "Sisi       : "; cin >> sisi;
    }
    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    //Lengkapi disini
    double hitungKeliling() {
        return 4 * sisi;
    }
};

void tampilkanKeliling(LayangLayang &l) //Lengkapi disini
{
    cout << "Keliling Layang-Layang : " << 2 * (l.s1 + l.s2) << endl;
} //Lengkapi disini

