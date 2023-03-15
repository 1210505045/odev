#include <stdio.h>

struct ogrenci{
  char ad[15];
  char soyad[20];
  int no;
  char bolum[50];
  char adres[250];
};

int main() {
    struct ogrenci k1 = {"Serhat","Serce",111111,"yazilim","istanbul"};
    struct ogrenci k2 = {"Mesut","Yildiz",222222,"yazilim","Bursa"};
    struct ogrenci k3 = {"Mirac","Dogan",333333,"hukuk","Usak"};
    struct ogrenci k4=  {"Emir","Cicekdemir",444444,"yazilim","istanbul"};
    struct ogrenci k5 = {"Mehdi","Bayrak",555555,"insaat","istanbul"};
    
    printf("Ad = %s\n Soyad = %s\nNo = %d\nBolum = %s\nAdres = %s\n",k1.ad,k1.soyad,k1.no,k1.bolum,k1.adres);
    printf("\n/*********/\n");
    printf("Ad = %s\n Soyad = %s\nNo = %d\nBolum = %s\nAdres = %s\n",k2.ad,k2.soyad,k2.no,k2.bolum,k2.adres);
    printf("\n/*********/\n");
    printf("Ad = %s\n Soyad = %s\nNo = %d\nBolum = %s\nAdres = %s\n",k3.ad,k3.soyad,k3.no,k3.bolum,k3.adres);
    printf("\n/*********/\n");
    printf("Ad = %s\n Soyad = %s\nNo = %d\nBolum = %s\nAdres = %s\n",k4.ad,k4.soyad,k4.no,k4.bolum,k4.adres);
    printf("\n/*********/\n");
    printf("Ad = %s\n Soyad = %s\nNo = %d\nBolum = %s\nAdres = %s\n",k5.ad,k5.soyad,k5.no,k5.bolum,k5.adres);
    

    return 0;
}

