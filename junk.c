#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
	char  str1[10]={'a', 'b', 'c', '\0'};
	char str2[10]="def";
	char* str3;
	str3=(char *) malloc(100*sizeof(char));
	strcpy(str3, "ghi");  
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	strcpy(str2, str1);   /* strcpy(dest, src)  */
	str3=str1;
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	free(str3);
	getchar();
	return 0;
}