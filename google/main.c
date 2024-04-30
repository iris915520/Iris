//answer google interview question: generate rand7() from rand5()
#include <stdio.h>
#define rand5 rand()%5
#define rand7 rand()%7
/*
int rand7() {
	return (rand5 + rand5) % 7;
	int a = rand5;
	int b = rand5;
	while (b > 2) b = rand5;
	return a + b;
}*/
int main(void) {
	int stat[5] = { 0 };
	for (int i = 0; i < 1000000;i++){
		int t = rand5;
		if (t == 0) stat[0]++;
		if (t == 1) stat[1]++;
		if (t == 2) stat[2]++;
		if (t == 3) stat[3]++;
		if (t == 4) stat[4]++;
	}
	for (int i = 0; i < 5; i++) printf("%d: %d\n", i, stat[i]);
	printf("\n");

	int s7[7] = { 0 };
	for (int i = 0; i < 1000000; i++) {
		int t = rand7;
		s7[t]++;
	}
	printf("Rand7 result: \n");
	for (int i = 0; i < 7; i++) printf("%d: %d\n", i, s7[i]);
	printf("\n");

}