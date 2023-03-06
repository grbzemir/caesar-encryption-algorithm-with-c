#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Sezar sifreleme algoritmasi
// abc ? a=d , b=e , c=f 
// sifreleme anahtari 3 karakter kaydirir
// def olur artik


void sezarSifrele(char *ptr , int key)
{

 while( *ptr != '\0')
 {
   
   *ptr = *ptr + key;

    ptr++;


 }

}

void sezarSifreCoz(char *ptr , int key)
{

 while( *ptr != '\0')
 {
   
   *ptr = *ptr + key;

    ptr++;


 }

}


int main ()
{

   char metin[100];
  
   int key;  // kaç karakter kaydiracagimiz kullanicidan aldik
   key=3; 
    
    system("color 0a");
    printf("Sifrelenecek metni giriniz: ");
    scanf("%s",metin);
    printf("Sifreleme anahtari giriniz: ");
    scanf("%d",&key);

    sezarSifrele(metin,key);

    printf("\nSifrelenmis metin: %s \n",metin);

    sezarSifreCoz(metin,key);

    printf("\nSifre cozulmus metin: %s\n",metin);

    return 0;
}