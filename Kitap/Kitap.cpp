//Get ve set fonksiyonu ile kullanýcýdan istenilen bilgileri girdik sonrasýnda switch-case yapýsý ile istenilen fonksiyonlarý hazýrladýk

#include "Kitap.h"
#include <iostream>
#include<string>
using namespace std;
//Fonksiyonlarýn Get Edildiði Kod Bloðu
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
//Fonksiyonlarýn Set Edildiði Kod bloðu
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
	cout << "Kitap adýný giriniz:";
	cin >> Kad;
	SetAd(Kad);
	cout << "Kitabýn yazarýný giriniz:";
	cin >> Kyazar;
	SetYazar(Kyazar);
	cout << "Kitabýn türünü giriniz:";
	cin >> Ktur;
	SetTur(Ktur);
	cout << "Kitabýn yayýnevini giriniz:";
	cin >> Kyayinevi;
	SetYayinevi(Kyayinevi);
	cout << "Kitabýn Isbn No giriniz:";
	cin >> KisbnNo;
	SetIsbnNo(KisbnNo);
	cout << "Kitabýn sayfa sayýsýný giriniz:";
	cin >> KsayfaSayisi;
	SetSayfaSayisi(KsayfaSayisi);
	cout << "Kitabýn fiyatýný giriniz:";
	cin >> Kfiyat;
	SetFiyat(Kfiyat);
	cout << "Kitabýn basým yýlýný giriniz:";
	cin >> KbaskiYili;
	SetBaskiYili(KbaskiYili);
	cout << "Kitabýn baský sayýsýný giriniz:";
	cin >> KbaskiSayisi;
	SetBaskiSayisi(KbaskiSayisi);
}
void Kitap::VeriYazdir() {
	cout << "-----KÝTAP HAKKINDA BÝLGÝLER-----\n";
	cout << "Ad:" << GetAd() << "\n";
	cout << "Yazar:" << GetYazar() << "\n";
	cout << "Tür" << GetTur() << "\n";
	cout << "Yayýnevi" << GetYayinevi() << "\n";
	cout << "Isbn No:" << GetIsbnNo() << "\n";
	cout << "Sayfa sayýsý:" << GetSayfaSayisi() << "\n";
	cout << "Fiyat:" << GetFiyat() << "\n";
	cout << "Baský yýlý" << GetBaskiYili() << "\n";
	cout << "Baský sayýsý:" << GetBaskiSayisi() << "\n";
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
			cout << "Hangi veriyi güncellemek istiyorsunuz:";
			cout << "\nKitabýn adý(1 rakamýný giriniz)";
			cout << "\nKitabýn yazarý(2 rakamýný giriniz)";
			cout << "\nKitabýn türü(3 rakamýný giriniz)";
			cout << "\nKitabýn yayýnevi(4 rakamýný giriniz)";
			cout << "\nKitabýn Isbn no(5 rakamýný giriniz)";
			cout << "\nKitabýn sayfa sayýsýný(6 rakamýný giriniz)";
			cout << "\nKitabýn fiyatý(7 rakamýný giriniz)";
			cout << "\nKitabýn baský yýlý(8 rakamýný giriniz)";
			cout << "\nKitabýn basým sayýsý(9 rakamýný giriniz)";
			cout << "\nHepsi(0'ý seçiniz)\n";
			cout << "\Lütfen seçiminizi yapýnýz:";
			cin >> islem;

			switch (islem) {
			case('1'): {
				cout << "Kitabýn yeni adýný giriniz:";
				cin >> Kad;
				SetAd(Kad);
				cout << "\nBilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('2'): {
				cout << "\nYazar:";
				cin >> Kyazar;
				SetYazar(Kyazar);
				cout << "\nBilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('3'): {
				cout << "\nTür:";
				cin >> Ktur;
				SetTur(Ktur);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('4'): {
				cout << "\nYayýnevi:";
				cin >> Kyayinevi;
				SetYayinevi(Kyayinevi);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('5'): {
				cout << "\nIsbn no:";
				cin >> KisbnNo;
				SetIsbnNo(KisbnNo);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('6'): {
				cout << "\nSayfa sayýsý:";
				cin >> KsayfaSayisi;
				SetSayfaSayisi(KsayfaSayisi);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('7'): {
				cout << "\nFiyat:";
				cin >> Kfiyat;
				SetFiyat(Kfiyat);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('8'): {
				cout << "\n Baski yýlý";
				cin >> KbaskiYili;
				SetBaskiYili(KbaskiYili);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('9'): {
				cout << "\nBaski sayýsý:";
				cin >> KbaskiSayisi;
				SetBaskiSayisi(KbaskiSayisi);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			case('0'): {
				cout << "Kitabýn yeni adýný giriniz:";
				cin >> Kad;
				SetAd(Kad);
				cout << "\nYazar:";
				cin >> Kyazar;
				SetYazar(Kyazar);
				cout << "\nTür:";
				cin >> Ktur;
				SetTur(Ktur);
				cout << "\nYayýnevi:";
				cin >> Kyayinevi;
				SetYayinevi(Kyayinevi);
				cout << "\nIsbn no:";
				cin >> KisbnNo;
				SetIsbnNo(KisbnNo);
				cout << "\nSayfa sayýsý:";
				cin >> KsayfaSayisi;
				SetSayfaSayisi(KsayfaSayisi);
				cout << "\nFiyat:";
				cin >> Kfiyat;
				SetFiyat(Kfiyat);
				cout << "\n Baski yýlý";
				cin >> KbaskiYili;
				SetBaskiYili(KbaskiYili);
				cout << "\nBaski sayýsý:";
				cin >> KbaskiSayisi;
				SetBaskiSayisi(KbaskiSayisi);
				cout << "Bilgiler güncellendi !!!";
				VeriYazdir();
				break;
			}
			default:
				cout << "\n!!!UYARI!!!Yanlýþ bir seçim yaptýnýz";
			}
		}
		if (secenek == 'h' || secenek == 'H') {
			cout << "!!! Programdan çýkýþ yaptýnýz !!!\n";
			ifade = false;
		}
	}
}