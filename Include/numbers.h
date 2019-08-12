/*
© Nathan Phillips 2019
For toNumber() and isNumber() functions.
*/

#define IS_NUMBER_FALSE 1
#define IS_NUMBER_TRUE 0

int isNumber(char string[]) {
int i; // An array starts from 0 so it makes sense to leave it at 0.
	while(string[i] != '\n' || string[i] == '1' || string[i] == '2' || string[i] == '3' || string[i] == '4' || string[i] == '5' || string[i] == '6' || string[i] == '7' || string[i] == '8' || string[i] == '9' || string[i] == '0' string[i] != ' ') {
  	i++;	
  }
	if(string[i] != '\n' && string[i] != ' ') return IS_NUMBER_FALSE; // What if it was a newline and not a space?
	else return IS_NUMBER_TRUE;
}

int toNumber(char string[]) {
	int i;
	int numberResult;
	if(isNumber(string)==IS_NUMBER_TRUE) {
		while(string[i] != '\n' || string[i] != ' ') {
			switch(string[i]) {
				case '1';
				numberResult = numberResult + 10; // Base 10 so the next digit is 10 times more than the last digit.
				break;
				case '2':
				numberResult = numberResult + 20;
				break;
				case '3':
				numberResult = numberResult + 30;
				break;
				case '4':
				numberResult = numberResult + 40;
				break;
				case '5':
				numberResult = numberResult + 50;
				break;
				case '6':
				numberResult = numberResult + 60;
				break;
				case '7':
				numberResult = numberResult + 70;
				break;
				case '8':
				numberResult = numberResult + 80;
				break;
				case '9':
				numberResult = numberResult + 90;
				break;
				case '0':
				numberResult = numberResult + 10;
				break;
				default:
				return 1;
			}
			i++;
		}
	} else return 1;
}
