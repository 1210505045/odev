
#include <stdio.h>
#define elemanSayisi 5
int main(){
     int sayilar[elemanSayisi],  min;

     for(int i=0 ; i<elemanSayisi ; i++){                       
          printf("%d. sayiyi giriniz : ",i+1);
          scanf("%d", &sayilar[i]);
     }

    
     min = sayilar[0];

     for(int i=0 ; i<elemanSayisi ; i++){

          if(min > sayilar[i])
               min = sayilar[i]; //Ayn� �ekilde min'den k���k bir eleman var ise yeni min o olacak. 
     }

     printf("Dizideki en kucuk sayi : %d", min);
 }
             //Y�r�tme zaman� T(N)=5N+7  //for d�ng�s� i=0 -> 1 kez , i < elaman say�s� -> n+1 kez , i++ -> n kez �al��acakt�r. Toplam 2n+2
                                            //printf scanf 1 er kez toplam 2
                                            //min de�er 1 kez
                                            //for d�ng�s� i=0 -> 1 kez , i < elaman say�s� -> n+1 kez , i++ -> n kez �al��acakt�r. Toplam 2n+2
                                            //if n-1 kez �al��acakt�r
                                            //min de�er 1 kez 
                                            //printf 1 kez





