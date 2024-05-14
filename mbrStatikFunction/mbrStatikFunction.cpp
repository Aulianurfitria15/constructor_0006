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

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

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
	cout << "ID  = " << id << endl;
	cout << "Nama = " << nama << endl;
}

int main()
{
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");

	mahasiswa::setNim(9);  // mengakses nim melalui static member function
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wahono");

	mhs1.printAll();

	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;

	return 0;
}