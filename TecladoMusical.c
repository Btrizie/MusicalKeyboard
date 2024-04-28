#include <stdio.h>
#include <windows.h>
#include <conio.h>

void playsound(int freq, int tempo){
	Beep(freq, tempo);
}

void main(){
	char freq;
	int freqInt;
	int tempo;
	printf("Tabela de frequencias:\n (a)Dó\n (s)Ré\n (d)Mi\n (f)Fá\n (g)Sol\n (h)Lá\n (j)Si\n");
	while(1)
	{	
		//scanf("%s", &freq);
		freq = getch();
		switch (freq){
		case 'a':
			freqInt = 523;
			break;
		case 's':
			freqInt = 587;
			break;
		case 'd':
			freqInt = 659;
			break;	
		case 'f':
			freqInt = 698;
			break;	
		case 'g':
			freqInt = 784;
			break;
		case 'h':
			freqInt = 880;
			break;		
		case 'j':
			freqInt = 971;
			break;
		default:
			printf("Frequencia inválida!");
			break;
		}

		playsound(freqInt, 200); 

	}
}