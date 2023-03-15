
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
               min = sayilar[i]; //Ayný þekilde min'den küçük bir eleman var ise yeni min o olacak. 
     }

     printf("Dizideki en kucuk sayi : %d", min);
 }
             //Yürütme zamaný T(N)=5N+7  //for döngüsü i=0 -> 1 kez , i < elaman sayýsý -> n+1 kez , i++ -> n kez çalýþacaktýr. Toplam 2n+2
                                            //printf scanf 1 er kez toplam 2
                                            //min deðer 1 kez
                                            //for döngüsü i=0 -> 1 kez , i < elaman sayýsý -> n+1 kez , i++ -> n kez çalýþacaktýr. Toplam 2n+2
                                            //if n-1 kez çalýþacaktýr
                                            //min deðer 1 kez 
                                            //printf 1 kez





