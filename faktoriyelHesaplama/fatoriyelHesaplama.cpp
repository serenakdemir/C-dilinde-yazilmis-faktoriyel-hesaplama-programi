#include <stdio.h>
int main(){
	
//FAKT�R�YEL HESAPLAMA

int girilecekSayi;
printf("Lutfen hesaplanmasini istediginiz sayiyi giriniz:");
scanf("%d",&girilecekSayi);
int i=1;
int faktoriyel=1; //en k�c�k faktoriyeli hesaplanacak sayi 1 oldu�u i�in 1'den ba�lat�yoruz

while(i<=girilecekSayi)
{
	faktoriyel=faktoriyel*i;
	i++;
}
	printf("\nSonuc=%d",faktoriyel);
	return 0;
}
