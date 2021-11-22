/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int length = strlen(str);
	char longstr[length];
	char shortstr[length];
	int minLength = length;
	int maxLength = 0;
	int preIndex = 0;
	for (int i = 0; i < length; i++) {
		if (str[i] == ' ' || i + 1 == length) {
			if (i + 1 == length){
				i++;
			}
			if (minLength > i - preIndex) {
				minLength = i - preIndex;
				for (int j = 0; j < minLength; ++j) {
					shortstr[j] = str[preIndex + j];
				}
				shortstr[minLength] = '\0';
			}
			if (maxLength < i - preIndex) {
				maxLength = i - preIndex;
				for (int j = 0; j < maxLength; ++j) {
					longstr[j] = str[preIndex + j];
				}
				longstr[maxLength] = '\0';
			}
			preIndex = i + 1;
		}
	}
	printf("Shortest word: %s\nLongest word: %s",shortstr, longstr);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
