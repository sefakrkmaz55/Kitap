#include "Kitap.h"//Kitap sýnýfýný deklara ettik
#include <iostream>//cout ve cin kullanýmý için
#include <string>//Karakter kullanýmý için
#include <locale.h>//Türkçe dil paketi
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");//Türkçe karakter kullanýmý için
	Kitap kitap;//Kitap nesnesini main içinde tanýmlýyoruz
	kitap.VeriAl();//Kitap nesnesinden VeriAl fonks. çaðýrýyoruz
	kitap.VeriYazdir();//Kitap nesnesinden VeriYazdir fonks. çaðýrýyoruz
	kitap.VeriGuncelle();//Kitap nesnesinden VeriGuncelle fonks. çaðýrýyoruz 
	system("pause");//.exe dosyasýndan hemen çýkýþ yapmamasý için 
	return 0;