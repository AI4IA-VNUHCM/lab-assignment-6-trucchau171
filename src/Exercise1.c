/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex1(int n){
	//Your codes here
	
	char res[100] = "\0";

	char* singleDig[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine " };

    char* twoDigs[] = {"ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " };
    
	char* tensMulti[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety " };
 
    char* unit[] = { "hundred ", "thousand " };

	if (n == 0) {
		printf("zero");
		return;
	}

	int m = n % 100;
	if (m < 10 || m >= 20) {
		int tempNum = m % 10;
		char temp[100];
		strcpy(temp, singleDig[tempNum]);
		strcat(temp, res);
		strcpy(res, temp);
		tempNum = m / 10;
		
		strcpy(temp, tensMulti[tempNum]);
		strcat(temp, res);
		strcpy(res, temp);
	}
	else {
		char temp[100];
		strcpy(temp, twoDigs[m - 10]);
		strcat(temp, res);
		strcpy(res, temp);
	}

	n /= 100;
	int pos = 0;
	int dig;

	while (n > 0) {
		dig = n % 10;
		char temp[100];
		strcpy(temp, unit[pos]);
		strcat(temp, res);
		strcpy(res, temp);

		strcpy(temp, singleDig[dig]);
		strcat(temp, res);
		strcpy(res, temp);

		pos++;
		n /= 10;
	}
	printf("%s", res);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
