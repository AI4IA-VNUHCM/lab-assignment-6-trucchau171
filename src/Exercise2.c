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

int compare(char a[], char b[]) {
	int length = strlen(a) > strlen(b) ? strlen(a) : strlen(a);
	for (int i = 0; i < length; ++i) {
		if (a[i] > b[i]) {
			return 1;
		}
		if (a[i] < b[i]) {
			return -1;
		}
	}
	return 0;
}

void Ex2(int n, char *str[]){
	//Your codes here
	for (int i = 0; i < n - 1; ++i){
		for (int j = i + 1; j < n; ++j){
			if (compare(str[i], str[j]) > 0) {
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
