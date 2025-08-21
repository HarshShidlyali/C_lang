#include <stdio.h>

void v_or_c(char c);

int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	v_or_c(ch);
	return 0;
}

void v_or_c(char ch){
	switch(ch){
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U': printf("Entered character is Vowel");
		break;
		default : printf("Entered character is Consonent");
	}
}
