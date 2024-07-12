#include <stdio.h>

int main (){
    int max, maxning_joyi;//maxni qiymatini topish uchun va maxning turgan orni uchun //
    int mining_joyi;//mining turgan o'rni uchun //
    int count=0,min=0,oraliq=0;//sikl necha marta aylanganini hisoblash uchun//
    int arr[5]={2,9,3,-4,5};
    
    max=arr[0];

    int uzunlik=sizeof(arr)/sizeof(arr[0]);

          for (int i=0;i<uzunlik;i++){

            if(arr[i]>max){
                max=arr[i];
            }
          }
        
         for (int i=0;i<uzunlik;i++){
            if(arr[i]!=max){
                count++;//maxdan keyin  nechta qiymat bolsa shuni aniqlash uchun//
            }else {
            
               maxning_joyi=count;//maxning turgan o'rni hisobga olinmagan//
    
            }
         }
             for (int i=0;i<uzunlik;i++){
            if(arr[i]>0){   
             min++;//mingacha nechta qiymat borligini hisoblash uchun//
            }else{
                mining_joyi=min;//minning turgan o'rni hisobga olinmagan//
    
            }
             }
            for(maxning_joyi;maxning_joyi<mining_joyi;maxning_joyi++){
        
                oraliq++;
            
                    
            }
         printf ("max va min ortasida %d ta son bor",oraliq-1);//minus 1 bo'lganligini sababi sikl aylanganda avval maxni ham qiymatini olganligi uchun//
    
    return 0;

}