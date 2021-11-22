/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	for (int i = 0; i < n - 1; ++i){
		for (int j = i + 1; j < n; ++j){
			if (strcmp(str[i], str[j]) > 0) {
				char temp[10];
				strcpy(temp, str[i]);
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; ++i){
		printf("%s ", str[i]);
	}
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
