#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) {nim = pNim;}
    static int getNim() {return nim;}

    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 0;

void mahasiswa::setID()
{
    id = ++nim;
}
void mahasiswa::printAll()
{
    cout << "ID : " << id << endl;
    cout << "NIM : " << nim << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Sri Dadi Purnowo");
    mahasiswa mhs2("Joko widodo");

    mahasiswa::setNim(206); // mengakses nim melalui static member functiion "setNim"
    mahasiswa mhs3("Prabowo Subiantoooook");
    mahasiswa mhs4("Anies Angin KTP");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << mahasiswa::getNim() << endl; // mengakses nim melalui static member function "getNim"


    return 0;
}