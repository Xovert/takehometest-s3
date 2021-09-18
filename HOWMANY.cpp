#include <stdio.h>

int main() {
	int N;
	scanf ("%d", &N);
	if (N/10==0){
		printf ("1\n");
	}else if (N/100==0){
		printf ("2\n");
	}else if (N/1000==0){
		printf ("3\n");
	}else printf ("More than 3 digits\n");
	return 0;
}
