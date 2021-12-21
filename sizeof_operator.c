#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define own_sizeof(type) (char *)(&type+1)-(char *)(&type)  
int main()
{
	int x;
	printf( "size of= %d\n",own_sizeof(x));
}
