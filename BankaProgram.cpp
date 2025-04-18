
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<string>
#include<iomanip>
#include<list>
// #include"okul_.cpp"
using namespace std;

class Banka {
public:
    virtual void bireyselKrediHesapla(double cekilecekTutar) = 0; // Saf sanal fonksiyon
protected:
    string musteriAdi;
    string krediTuru;
    double faizOrani;
    int vade;
    double geriOdeme;
};

class ZiraatBankasi : public Banka {
public:
    ZiraatBankasi(string musteriAdi, string krediTuru, int vade) {
        this->musteriAdi = musteriAdi;
        this->krediTuru = krediTuru;
        this->vade = vade;
    }
    void bireyselKrediHesapla(double cekilecekTutar) {
        this->geriOdeme = cekilecekTutar * 1.3 + 500;
        cout << this->musteriAdi << " Musterisinin Geri Odeyecegi Tutar: " << this->geriOdeme << endl;
    }
};

class Akbank : public Banka {
public:
    Akbank(string musteriAdi, string krediTuru, int vade) {
        this->musteriAdi = musteriAdi;
        this->krediTuru = krediTuru;
        this->vade = vade;
    }
    void bireyselKrediHesapla(double cekilecekTutar) {
        this->geriOdeme = cekilecekTutar * 1.3 + vade * 1.1;
        cout << this->musteriAdi << " Musterisinin Geri Odeyecegi Tutar: " << this->geriOdeme << endl;
    }
};

int main() {
    Banka *ptr[2];

    ptr[0] = new ZiraatBankasi("Ahmet", "Bireysel Kredi", 30);
    ptr[1] = new Akbank("Mehmet", "Bireysel Kredi", 30);

    for (int i = 0; i < 2; i++) {
        ptr[i]->bireyselKrediHesapla(5000);
    }

    getch();
    return 0;
}
