#include <stdio.h>
#include<Windows.h>
int main() {
	//color sitting
	system("color 2");
	while (1) {

		printf(" \n\t\t                     A N D Y ' S   P R O J E C T                            \n");



		printf("                   --------------------------------------------------------------- \n");
		printf("                   -     the score checker v0.1 beta DEVELOPING BY ANDY JOHNSON  -  \n");
		printf("                   ---------------------------------------------------------------\n");


		printf("\t\twelcome to use the score checker, this program can help you to check your score \n");

		//have two boxes "a"and"b"
		int a, b;
		//input the value of "a" and "b"
		printf("please input your the first number for yuor keyboard  ");
		scanf("%d", &a);
		printf("please input your the second number for yuor keyboard  ");
		scanf("%d", &b);
		//calculate the sum of "a" and "b"
		int sum = a + b;
		//output the result of sum
		printf("the sum of %d and %d is %d\n", a, b, sum);


		//ready to calculate the score of the student
		int score;
		//input the score of the student
		printf("please input the score ");
		scanf("%d", &score);

		//eles and if to judge the score of the student'
		if (score >= 90) {
			printf("you are my god !!!\n");
		}
		else if (score >= 80) {
			printf("you are great!!! but I want you better than better !!!\n");
		}
		else if (score >= 60) {
			printf("you are pass it's normal you should workharder. \n");
		}
		else {
			printf("omg god damn it !!!\n");
		}

	}

	return 0;


}