#include "values.h"
#include "numbers.h"
#include <stdio.h>
#include <string.h>

#define MAX_VARIBLES 256
int compileLine(char line[]) {
int i, charLong, charStart;
char *command, *value, *option;
int CCP_Stack_Int[MAX_VARIBLES];
float CCP_STACK_Float[MAX_VARIBLES];

	while(line[i] != '\n' || line[i] != ';') {
		while(line[i] == ' ') i++;
		charStart = i;
		if(line[i] == '!') return 0; // "!" means comment in CCP (this is the only one to).
		if(line[i] == '(') {} // Will come back later.
		if(line[i] == '{') {} // Will come back later.
		if(line[i] == '[') {} // Will come back later.
		if(line[i] != '!' || line[i] != '(' || line[i] != '{' || line[i] != '[') {
		while(line[i] != '(' || line[i] != '{' || line[i] != '[' || line[i] != '.' || line[i] != '\n') {
				charLong++;
				i++;
			}
			strncpy(command, line[charStart], charLong);
			if(strcmp(command, "var")==0) {} // Will come back later
			if(strcmp(command, "print")==0) {
			while(line[i] != '\"' || line[i] != '\'' || line[i] != '\n') i++;
			if(line[i] == '\n') {
				printf("No string value entered, exiting.\n");
				return 1;
			}
			if(line[i] == '\'') {
				charStart = i + 1;
				charLong = 0;
				while(line[i] != '\'') {
				charLong++;
					i++;
				}
				strncpy(value, line[charStart], charLong);
				printf("%s", value);
				return 0;
			}
				if(line[i] == '\"') {
				charStart = i + 1;
				charLong = 0;
				while(line[i] != '\"') {
				charLong++;
					i++;
				}
				strncpy(value, line[charStart], charLong);
				printf("%s", value);
				return 0;
			}
		}
	}
}
