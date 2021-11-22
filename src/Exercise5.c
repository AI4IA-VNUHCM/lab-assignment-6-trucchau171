/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int length = strlen(str);
	if (length % 2 == 1) {
		printf("Invalid!");
		return;
	}

	for (int i = 0; i < length / 2; ++i) {
		// printf("%c %c, ", str[i], str[length - i - 1]);
		switch (str[i])
		{
		case '(':
			if (str[length - i - 1] != ')') {
				printf("Invalid!");
				return;
			}
			break;

		case '{':
			if (str[length - i - 1] != '}') {
				printf("Invalid!");
				return;
			}
			break;

		case '[':
			if (str[length - i - 1] != ']') {
				printf("Invalid!");
				return;
			}
			break;
		
		default:
			break;
		}
	}
	
	printf("Valid!");
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
