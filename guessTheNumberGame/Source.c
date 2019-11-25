#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"mylibrary.h"

int main() {
	seed_value_random();
	int answer = rand() % 200; //0-199 arasý deðer üretsin

	int guess;
	int ans_cnt = 0;
	int flag = 0;
	printf("Predict 0 - 200 number: ");
	do{
		scanf("%d", &guess);
		if (guess == answer) {
			ans_cnt;
			printf("You are perfect in %d tries..\n", ans_cnt);
			flag = 1;
		}
		if (guess > answer) {
			ans_cnt++;
			printf("Your answer is higher than my answer.Try again:\n ");

		}
		else if (guess < answer) {
			ans_cnt++;
			printf("Your answer is lower than my answer.Try again:\n ");

		}

	} while (flag == 0);



	system("pause");
}