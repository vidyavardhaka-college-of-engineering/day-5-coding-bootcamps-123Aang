//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>

int main()
{
	char str[10] ,rev[10];
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
	return 0;
}
