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

        int luasPp(int a, int b)
        {
            return a * b;
        }

        Lingkaran ol;
};

class Lingkaran
{
    public:
        int jarijari;

        void input()
        {
            cout << "masukkan jari-jari : ";
            cin >> jarijari;
        }

        int luaslingkaran(int r)
        {
            return 3.14 * r * r;
        }
};

int main()
{
    PersegiPanjang objekPP; //membuat objek
    Lingkaran ol;

    cout << "masukkan panjang : ";
    cin >> objekPP.panjang;
    cout << "masukkan lebar : ";
    cin >> objekPP.lebar;
    cout << "luas persegi panjang : " <<
    objekPP.luasPp(objekPP.panjang, objekPP.lebar) << endl;

}