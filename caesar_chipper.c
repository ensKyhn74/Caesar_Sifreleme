#include <stdio.h>
// Girilen metni Caesar Şifreleme Yöntemine göre şifrele
// metin:   ABC
// indeks:  012
//(0 + 3) % 26 = 3(D)
//(1 + 3) % 26 = 4(E)
//(2 + 3) % 26 = 5(F)
// şifreli metin: DEF

int main()
   
{
 
 char metin[50];
 int i = 0;

 printf("sifrelemek istediginiz metni girin: ");
 gets(metin); 
 
 printf("\n");
 
 while(metin[i] != '\0')
 {
  if(metin[i] >= 'A' && metin[i] <= 'Z')
  {
   char ch = metin[i] - 'A';
   ch += 3;
   ch %= 26;
   metin[i] = ch + 'A';
  }
  
  if(metin[i] >= 'a' && metin[i] <= 'z')
  {
   char ch = metin[i] - 'a';
   ch += 3;
   ch %= 26;
   metin[i] = ch + 'a';
  }
  
  i++;
 }
 
 printf("sifreli metin: %s",metin);
 
 return 0;
 
}