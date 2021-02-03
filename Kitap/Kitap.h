//Kitap s�n�f�n� tan�mlay�p get ve set fonksiyonu ile istenilen verileri kullan�c�dan almaya yarayan fonk. ve de�i�kenler tan�mland�


#include <string>//string fonksiyonunu �a��rmak i�in ekledik
using namespace std;
#ifndef K�TAP_H
#define K�TAP_H
class Kitap {
public:
	//Girilen verilere eri�mek i�in gereken Get fonks. prototiplerini tan�mlad�k
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
	//Veri atamak i�in gereken Set fonks. prototiplerini tan�mlad�k
	void SetYazar(string);
	void SetTur(string);
	void SetYayinevi(string);
	void SetIsbnNo(string);
	void SetSayfaSayisi(int);
	void SetFiyat(double);
	void SetBaskiYili(int);
	void SetBaskiSayisi(int);
	//�stenilen i�lemleri yapt�ran fonks. prototiplerini tan�mlad�k 
	void VeriAl();//Kullan�c�dan istenilen verileri alan fonksiyonun prototipi
	void VeriYazdir();//Kullan�c�dan girilen verileri ekrana yazd�ran fonksiyonun prototipi
	void VeriGuncelle();//Kullan�c� verileri g�ncelleyip g�ncellemek istemedi�ini soran fonksiyonun prototipi
private:
	//Gerekli olan de�i�kenleri private olarak tan�mlad�k
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