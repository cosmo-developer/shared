#include <stdio.h>
#include <string.h>
int main(){
	char inputString[100]; //This is array of char having capacity of 100 characters
	printf("Enter value:");
	scanf("%s",&inputString);
	int i;
	int floatFound=0;
	//strlen(inputString) stands for n(333)=3 n(23445)=5
	for (i=0;i<strlen(inputString);i++){
		if (inputString[i]=='.'){
			floatFound=1;
		}
	}
	if (floatFound==1){
		printf("%s is a float value\n",inputString);
	}else{
		printf("%s is a integer value\n",inputString);
	}
	return 0;
}
