//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>

int main()
{
	char str[2000] ,rev[2000];
  int beg , end , count=0;
	scanf("%s", str);

	//Write your code here
 while(str[count]!='\0')
 count++;
 end=count-1 ;
 for (beg=0; beg < count; beg++)
 {
   rev[beg]=str[end];
   end--;
 }
rev[beg]= '\0';
printf("%s\n", rev);

if (str[2000] == rev[2000])


printf("Palindrome\n");
else
printf("not palindrome\n");



  	return  0;
}

