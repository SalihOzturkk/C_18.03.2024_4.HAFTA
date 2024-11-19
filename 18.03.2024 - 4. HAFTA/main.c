#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void bilgiler ()   // private yazmadan sadece void de yazsak ayný þeydir.
{
	char isim[15], soyisim[15];	
printf("Adiniz nedir    :  "); scanf("%s",&isim);
printf("Soyadiniz nedir :  "); scanf("%s",&soyisim);
printf("Kisinin ismi 	: %s %s\n",isim,soyisim );

}
int main(int argc, char *argv[]) 
{

	int sayi; 
		git:	
			system("cls");		
	printf("Ýstediginiz bir sayiyi giriniz : ");
	scanf("%d",&sayi);
	
	switch (sayi)
	{
	case	1: 
			{
			bilgiler();
			getch ();
			goto git;
			break;	
			}
			
			case	2:
					{
						printf("MANAVGAT M.Y.O");
						goto git;
						getch();
					break;	
					}
					
					case	5:
						case 6:
							case 7:
								case 8:
					
							{
								printf("PROGRAMLAMA TEKNIKLERI");
								getch();
								goto git;
							break;
							}		
			default: 
			{
				printf("YANLIS TUSLAMA");
			break;
			}
	}
	


	getch();
}
