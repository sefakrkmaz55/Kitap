#include "Kitap.h"//Kitap s�n�f�n� deklara ettik
#include <iostream>//cout ve cin kullan�m� i�in
#include <string>//Karakter kullan�m� i�in
#include <locale.h>//T�rk�e dil paketi
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");//T�rk�e karakter kullan�m� i�in
	Kitap kitap;//Kitap nesnesini main i�inde tan�ml�yoruz
	kitap.VeriAl();//Kitap nesnesinden VeriAl fonks. �a��r�yoruz
	kitap.VeriYazdir();//Kitap nesnesinden VeriYazdir fonks. �a��r�yoruz
	kitap.VeriGuncelle();//Kitap nesnesinden VeriGuncelle fonks. �a��r�yoruz 
	system("pause");//.exe dosyas�ndan hemen ��k�� yapmamas� i�in 
	return 0;