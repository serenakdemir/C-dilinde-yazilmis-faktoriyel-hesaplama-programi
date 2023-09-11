#include <stdio.h>
int main(){
	
//FAKTÖRÝYEL HESAPLAMA

int girilecekSayi;
printf("Lutfen hesaplanmasini istediginiz sayiyi giriniz:");
scanf("%d",&girilecekSayi);
int i=1;
int faktoriyel=1; //en kücük faktoriyeli hesaplanacak sayi 1 olduðu için 1'den baþlatýyoruz

while(i<=girilecekSayi)
{
	faktoriyel=faktoriyel*i;
	i++;
}
	printf("\nSonuc=%d",faktoriyel);
	return 0;
}
