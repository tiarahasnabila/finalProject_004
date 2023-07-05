#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() {return 0;}
	virtual void cekKelulusan() { return 0; }
	virtual void input() { return 0; }

	void setP(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}
	
	void setA(float nilai){
		this->activity = nilai;
	}

	float getA() {
		return activity;
	}

	void setE(float nilai) {
		this->exercise = nilai;
	}

	float getE() {
		return exercise;
	}

	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}

	float getUA() {
		return tugasAkhir;
	}
};

class Pemrograman :public MataKuliah {
public:
	float hitungNilaiAkhir();
	if (hitungNilaiAkhir() > 75)
	{
		cout << "Anda dinyatakan lulus" << endl;
	}
	else
	{
		cout << "Anda dinyatakan tidak lulus" << endl;
	}
};

void input()
{
	cout << "Masukkan nilai presensi: ";
	float presensi;
	cin >> presensi;
	setP(presensi);

	cout << "Masukkan nilai activity:  ";
	float activity;
	cin >> activity;
	setA(activity);

	cout << "Masukkan nilai exercise:";
	float exercise;
	cin >> exercise;
	setE(exercise);

	cout << "Masukkan nilai tugas akhir:";
	float tugas akhir;
	cin >> tugas akhir;
	setUA(tugas akhir);
};

int main() {
	Pemrograman mk;
	mk.cekKelulusan;
	return 0;

};