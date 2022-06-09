#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Timerfunktion
void delay (int sec){
	clock_t c1=1000*sec+clock();
	while (c1>clock());
}

int main(){
	char check_boil;
	char check_noodles;
	printf("Bitte Wasser aufsetzen.\n");
	while (check_boil !='y'){
		printf("Kocht das Wasser? Wenn ja, bitte mit 'y' bestaetigen!\n");
		scanf(" %c",&check_boil);
		if (check_boil=='y'){
			while (check_noodles !='y'){
				printf("Bitte Nudeln in kochendes Wasser geben und mit 'y' bestaetigen.\n");
				scanf(" %c",&check_noodles);
				if (check_noodles=='y'){
					printf("Bitte warten!\n");
					delay(6); //Wert an gewuenschte Nudelkonsistenz anpassen, Einheit ist ~1sec
					printf("Bitte Nudeln rausholen!\n");
				}
			}
		}
	}
	return 0;
}
