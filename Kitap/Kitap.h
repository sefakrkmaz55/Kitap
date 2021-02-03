//Kitap sýnýfýný tanýmlayýp get ve set fonksiyonu ile istenilen verileri kullanýcýdan almaya yarayan fonk. ve deðiþkenler tanýmlandý


#include <string>//string fonksiyonunu çaðýrmak için ekledik
using namespace std;
#ifndef KÝTAP_H
#define KÝTAP_H
class Kitap {
public:
	//Girilen verilere eriþmek için gereken Get fonks. prototiplerini tanýmladýk
	string GetAd();
	string GetYazar();
	string GetTur();
	string GetYayinevi();
	string GetIsbnNo();
	int GetSayfaSayisi();
	double GetFiyat();
	int GetBaskiYili();
	int GetBaskiSayisi();
	void SetAd(string);
	//Veri atamak için gereken Set fonks. prototiplerini tanýmladýk
	void SetYazar(string);
	void SetTur(string);
	void SetYayinevi(string);
	void SetIsbnNo(string);
	void SetSayfaSayisi(int);
	void SetFiyat(double);
	void SetBaskiYili(int);
	void SetBaskiSayisi(int);
	//Ýstenilen iþlemleri yaptýran fonks. prototiplerini tanýmladýk 
	void VeriAl();//Kullanýcýdan istenilen verileri alan fonksiyonun prototipi
	void VeriYazdir();//Kullanýcýdan girilen verileri ekrana yazdýran fonksiyonun prototipi
	void VeriGuncelle();//Kullanýcý verileri güncelleyip güncellemek istemediðini soran fonksiyonun prototipi
private:
	//Gerekli olan deðiþkenleri private olarak tanýmladýk
	string ad;
	string yazar;
	string tur;
	string yayinevi;
	string isbnNo;
	int sayfaSayisi;
	double fiyat;
	int baskiYili;
	int baskiSayisi;
};
#endif