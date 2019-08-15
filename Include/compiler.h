#include "values.h"
#include "numbers.h"
#include <stdio.h>
#include <string.h>

struct {
	struct {
		struct {
			char *VaribleName;
			char *VaribleType;
			char *VaribleValue;
		}Integers;
		
		struct {
			char *VaribleName;
			char *VaribleType;
			char *VaribleValue;
		}Decimals;
		
		struct {
			char *VaribleName;
			char *VaribleType;
			char *VaribleValue;
		}Strings;
		
	}Varibles;
}CCP_Stack;

#define MAX_VARIBLES 256
int compileLine(char line[]) {
int i, charLong, charStart;
char *command, *value, *option;
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
			if(strcmp(command, "var")==0) {
				while(line[i] != ' ' || line[i] != '\n' || line[i] != ';') i++;
					if(line[i] != ' ') charStart = i;
					if(line[i] != '\n' || ';') return 1;
				while(line[i] != '=' != line[i] != ' ' || line[i] != '\n' || line[i] != ';') {
					i++;
					charLong++;
				}
				strncpy(value, line[charStart], charLong);
				while(line[i] != '=' || line[i] != ' ') i++;
				if(line[i] != ' ') {
					if(line[i] == '=') {
					
					} else {
						if(line[i] == '\"') {
							i++;
							charStart = i;
							while(line[i] != '\"') {
								i++;
								charStart++;
							}
							strncpy(option, line[charStart], charLong);
							strncat(CCP_Stack.Varibles.Strings.VaribleName, " ");
							strncat(CCP_Stack.Varibles.Strings.VaribleName, value);
							strncat(CCP_Stack.Varibles.Strings.VaribleType, " string ");
							strncat(CCP_Stack.Varibles.Strings.VaribleValue, " ");
							strncat(CCP_Stack.Varibles.Strings.VaribleValue, option);
							strnc
						} else if(line[i] == '\'') {
							i++;
							charStart = i;
							while(line[i] != '\'') {
								i++;
								charStart++;
							}
							strncpy(option, line[charStart], charLong);
							strncat(CCP_Stack.Varibles.Strings.VaribleName, " ");
							strncat(CCP_Stack.Varibles.Strings.VaribleName, value);
							strncat(CCP_Stack.Varibles.Strings.VaribleType, " string ");
							strncat(CCP_Stack.Varibles.Strings.VaribleValue, " ");
							strncat(CCP_Stack.Varibles.Strings.VaribleValue, option);
						}
					}
				}
			}
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
