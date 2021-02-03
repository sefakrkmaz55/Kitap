//Get ve set fonksiyonu ile kullan�c�dan istenilen bilgileri girdik sonras�nda switch-case yap�s� ile istenilen fonksiyonlar� haz�rlad�k

#include "Kitap.h"
#include <iostream>
#include<string>
using namespace std;
//Fonksiyonlar�n Get Edildi�i Kod Blo�u
string Kitap::GetAd() {
	return ad;
}
string Kitap::GetYazar() {
	return yazar;
}
string Kitap::GetTur() {
	return tur;
}
string Kitap::GetYayinevi() {
	return yayinevi;
}
string Kitap::GetIsbnNo() {
	return isbnNo;
}
int Kitap::GetSayfaSayisi() {
	return sayfaSayisi;
}
double Kitap::GetFiyat() {
	return fiyat;
}
int Kitap::GetBaskiYili() {
	return baskiYili;
}
int Kitap::GetBaskiSayisi() {
	return baskiSayisi;
}
//Fonksiyonlar�n Set Edildi�i Kod blo�u
void Kitap::SetAd(string Kad) {
	ad = Kad;
}
void Kitap::SetYazar(string Kyazar) {
	yazar = Kyazar;
}
void Kitap::SetTur(string Ktur) {
	tur = Ktur;
}
void Kitap::SetYayinevi(string Kyayinevi) {
	yayinevi = Kyayinevi;
}
void Kitap::SetIsbnNo(string KisbnNo) {
	isbnNo = KisbnNo;
}
void Kitap::SetSayfaSayisi(int KsayfaSayisi) {
	sayfaSayisi = KsayfaSayisi;
}
void Kitap::SetFiyat(double Kfiyat) {
	fiyat = Kfiyat;
}
void Kitap::SetBaskiYili(int KbaskiYili) {
	baskiYili = KbaskiYili;
}
void Kitap::SetBaskiSayisi(int KbaskiSayisi) {
	baskiSayisi = KbaskiSayisi;
}

void Kitap::VeriAl() {
	string Kad, Kyazar, Ktur, Kyayinevi, KisbnNo;
	int KsayfaSayisi, KbaskiYili, KbaskiSayisi;
	double Kfiyat;
	cout << "Kitap ad�n� giriniz:";
	cin >> Kad;
	SetAd(Kad);
	cout << "Kitab�n yazar�n� giriniz:";
	cin >> Kyazar;
	SetYazar(Kyazar);
	cout << "Kitab�n t�r�n� giriniz:";
	cin >> Ktur;
	SetTur(Ktur);
	cout << "Kitab�n yay�nevini giriniz:";
	cin >> Kyayinevi;
	SetYayinevi(Kyayinevi);
	cout << "Kitab�n Isbn No giriniz:";
	cin >> KisbnNo;
	SetIsbnNo(KisbnNo);
	cout << "Kitab�n sayfa say�s�n� giriniz:";
	cin >> KsayfaSayisi;
	SetSayfaSayisi(KsayfaSayisi);
	cout << "Kitab�n fiyat�n� giriniz:";
	cin >> Kfiyat;
	SetFiyat(Kfiyat);
	cout << "Kitab�n bas�m y�l�n� giriniz:";
	cin >> KbaskiYili;
	SetBaskiYili(KbaskiYili);
	cout << "Kitab�n bask� say�s�n� giriniz:";
	cin >> KbaskiSayisi;
	SetBaskiSayisi(KbaskiSayisi);
}
void Kitap::VeriYazdir() {
	cout << "-----K�TAP HAKKINDA B�LG�LER-----\n";
	cout << "Ad:" << GetAd() << "\n";
	cout << "Yazar:" << GetYazar() << "\n";
	cout << "T�r" << GetTur() << "\n";
	cout << "Yay�nevi" << GetYayinevi() << "\n";
	cout << "Isbn No:" << GetIsbnNo() << "\n";
	cout << "Sayfa say�s�:" << GetSayfaSayisi() << "\n";
	cout << "Fiyat:" << GetFiyat() << "\n";
	cout << "Bask� y�l�" << GetBaskiYili() << "\n";
	cout << "Bask� say�s�:" << GetBaskiSayisi() << "\n";
}
void Kitap::VeriGuncelle() {
	char secenek, islem;
	string Kad, Kyazar, Ktur, Kyayinevi, KisbnNo;
	int KsayfaSayisi, KbaskiYili, KbaskiSayisi;
	double Kfiyat;
	bool ifade = true;

	while (ifade) {
		cout << "\nDegistirmek istediginiz bilgi varsa e/E yoksa h/H ye basiniz : ";
		cin >> secenek;
		if (secenek == 'e' || secenek == 'E') {
			cout << "Hangi veriyi g�ncellemek istiyorsunuz:";
			cout << "\nKitab�n ad�(1 rakam�n� giriniz)";
			cout << "\nKitab�n yazar�(2 rakam�n� giriniz)";
			cout << "\nKitab�n t�r�(3 rakam�n� giriniz)";
			cout << "\nKitab�n yay�nevi(4 rakam�n� giriniz)";
			cout << "\nKitab�n Isbn no(5 rakam�n� giriniz)";
			cout << "\nKitab�n sayfa say�s�n�(6 rakam�n� giriniz)";
			cout << "\nKitab�n fiyat�(7 rakam�n� giriniz)";
			cout << "\nKitab�n bask� y�l�(8 rakam�n� giriniz)";
			cout << "\nKitab�n bas�m say�s�(9 rakam�n� giriniz)";
			cout << "\nHepsi(0'� se�iniz)\n";
			cout << "\L�tfen se�iminizi yap�n�z:";
			cin >> islem;

			switch (islem) {
			case('1'): {
				cout << "Kitab�n yeni ad�n� giriniz:";
				cin >> Kad;
				SetAd(Kad);
				cout << "\nBilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('2'): {
				cout << "\nYazar:";
				cin >> Kyazar;
				SetYazar(Kyazar);
				cout << "\nBilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('3'): {
				cout << "\nT�r:";
				cin >> Ktur;
				SetTur(Ktur);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('4'): {
				cout << "\nYay�nevi:";
				cin >> Kyayinevi;
				SetYayinevi(Kyayinevi);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('5'): {
				cout << "\nIsbn no:";
				cin >> KisbnNo;
				SetIsbnNo(KisbnNo);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('6'): {
				cout << "\nSayfa say�s�:";
				cin >> KsayfaSayisi;
				SetSayfaSayisi(KsayfaSayisi);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('7'): {
				cout << "\nFiyat:";
				cin >> Kfiyat;
				SetFiyat(Kfiyat);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('8'): {
				cout << "\n Baski y�l�";
				cin >> KbaskiYili;
				SetBaskiYili(KbaskiYili);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('9'): {
				cout << "\nBaski say�s�:";
				cin >> KbaskiSayisi;
				SetBaskiSayisi(KbaskiSayisi);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			case('0'): {
				cout << "Kitab�n yeni ad�n� giriniz:";
				cin >> Kad;
				SetAd(Kad);
				cout << "\nYazar:";
				cin >> Kyazar;
				SetYazar(Kyazar);
				cout << "\nT�r:";
				cin >> Ktur;
				SetTur(Ktur);
				cout << "\nYay�nevi:";
				cin >> Kyayinevi;
				SetYayinevi(Kyayinevi);
				cout << "\nIsbn no:";
				cin >> KisbnNo;
				SetIsbnNo(KisbnNo);
				cout << "\nSayfa say�s�:";
				cin >> KsayfaSayisi;
				SetSayfaSayisi(KsayfaSayisi);
				cout << "\nFiyat:";
				cin >> Kfiyat;
				SetFiyat(Kfiyat);
				cout << "\n Baski y�l�";
				cin >> KbaskiYili;
				SetBaskiYili(KbaskiYili);
				cout << "\nBaski say�s�:";
				cin >> KbaskiSayisi;
				SetBaskiSayisi(KbaskiSayisi);
				cout << "Bilgiler g�ncellendi !!!";
				VeriYazdir();
				break;
			}
			default:
				cout << "\n!!!UYARI!!!Yanl�� bir se�im yapt�n�z";
			}
		}
		if (secenek == 'h' || secenek == 'H') {
			cout << "!!! Programdan ��k�� yapt�n�z !!!\n";
			ifade = false;
		}
	}
}