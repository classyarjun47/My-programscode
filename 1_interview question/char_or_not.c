#include<stdio.h>
#include<conio.h>

int main()
{
	 char ch;
	 
	 printf("Enter chracter: ");
	 scanf("%c", &ch);
	
	 if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	 {
	  	printf("%c is Alphabet.", ch);
	 }
	 else
	 {
	  	printf("%c is not Alphabet.", ch);
	 }
}
	
