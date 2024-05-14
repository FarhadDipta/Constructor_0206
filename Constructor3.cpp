#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
public:
    int nim;
    string nama;

public:
    mahasiswa()
    {
        nim = 0;
        nama = "";
    };
    mahasiswa(int inim)
    {
        nim = inim;
    }
    mahasiswa(string inama)
    {
        nama = inama;
    };
    mahasiswa(int inim, string inama)
    {
        nim = inim;
        nama = inama;
    };
    void cetak()
    {
        cout << "NIM = " << nim << endl;
        cout << "Nama = " << nama << endl;
        cout << endl;
    };
};

int main()
{
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("uno 13");
    mahasiswa mhs4(30, "farhad 15");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}