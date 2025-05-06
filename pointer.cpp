#include <iostream>
using namespace std;

class PersegiPanjang
{
    public: // akses modifier
        int panjang, lebar;

    public: 

        void input()
        {
            cout << "masukkan panjang : ";
            cin >> panjang;
            cout << "masukkan lebar : ";
            cin >> lebar;
        }
}