#include <stdio.h>
#include<Windows.h>
int main() {
	//color sitting
	system("color 2");
	while (1) {

		system("cls");

		printf(" \n\t\t                     A N D Y ' S   P R O J E C T                            \n");



		printf("\n\t\t---------------------------------------------------------------\t\t \n");
		printf("\n\t\t     the score checker v0.1 beta DEVELOPING BY ANDY JOHNSON    \t\t \n");
		printf("\n\t\t---------------------------------------------------------------\t\t \n");


		printf("\t\twelcome to use the score checker, this program can help you to check your score \n");

		//have two boxes "a"and"b"
		int a, b;
		//input the value of "a" and "b"
		printf("please input your the first number for yuor keyboard  ");
		
		while (scanf("%d", &a) != 1) {
			while (getchar() != '\n');
			printf("invalid input! please enter a number");
		}




		printf("please input your the second number for your keyboard  ");
		
		while (scanf("%d", &b) != 1) {
			while (getchar() != '\n');
			printf("invalid input! please enter a number");
		}




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
        
		//ask the user if they want to continue or not
		int choice;
		printf("\nPress 1 to run again, or 0 to exit: ");
		while (scanf("%d", &choice) != 1 || (choice != 0 && choice != 1)) {
			while (getchar() != '\n');
			printf("Invalid input! Please enter 0 or 1: ");
		}
		if (choice == 0) {
			printf("\nThank you for using Andy's Score Checker! Bye!\n");
			Sleep(1500); //wait for 1.5 seconds before exiting

			break;
		}



	}

	return 0;


}
