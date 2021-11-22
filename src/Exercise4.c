/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	while (str[0] == ' ') { 
		for (int j = 0; str[j] != '\0'; ++j) {
			str[j] = str[j + 1];
		}
	}

	int i = 0;
	
	while (str[i] != '\0') {
		if (str[i] == ' '){
			while (str[i + 1] == ' '){
				for (int j = i + 1; str[j] != '\0'; ++j) {
					str[j] = str[j+1];
				}
			}
		}
		i++;
	}

	int length = strlen(str);
	
	while (str[length - 1] == ' ') { 
		--length;
		str[length] = '\0';
	}
	
	printf("%s", str);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}