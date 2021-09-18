#include <stdio.h>

int main (){
	int L,B,AR,PR;
	scanf ("%d\n%d", &L,&B);
	AR = L*B;
	PR = (L+B)*2;
	if (AR==PR){
		printf ("Eq\n%d\n", PR);
	}else if (AR>PR){
		printf ("Area\n%d\n", AR);
	}else
		printf ("Peri\n%d\n", PR);
	return 0;
}
