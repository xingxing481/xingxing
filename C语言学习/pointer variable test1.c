#include <stdio.h>
#include<stdlib.h>

int main()
{ 
	/*int a=1;
	int c;
	int *p,*i;
	i=&c;
	printf("%p\n",i); 
	
	p=NULL;
	p++;
	c=sizeof(a);
	
	printf("a变量的地址：%p \n", p);
	
	
	printf("a变量的地址：%d \n", c);
	//printf("p[1]变量的地址：%p", &p[1]);
	*/
	
	
	int *p;
	p=(int*)malloc(sizeof(int)*4);//申请的空间的首地址 
	p[0]=1;
	p[1]=2; 
	printf("%p\n",p);
	printf("%p\n",p+1);
	free(p);
	printf("%d",p[1]);
	//free(p);
	return 0;




} 
