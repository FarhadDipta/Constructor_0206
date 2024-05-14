#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nim;
    int id;
    string nama;

    void setID();

    void printAll();
    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 206;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
}

int main(){
    mahasiswa mhs1("Anomali Dika");
    mahasiswa mhs2("Panji Dark System");
    mahasiswa mhs3("Ilam Tidak Ada Indomaret");
    mahasiswa mhs4("Hafis Samba");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}