#include <stdio.h>
#include <string.h>
int main()
{
	char a[8];
	int i,len,j;
	for(i=0;i<8;i++)
	scanf("%d",&a[i]);
	len=strlen(a);
	for(i=len-1;i>=0;i--)
	printf("%d ",a[i]);
}
