#include<stdio.h>
int prime(int a);
int main()
{
	int num,check;
	do{
		printf("\nEnter the number between 2-100 to check\n");
		scanf("%d",&num);
		if(num>=2&&num<=100){
			if (	prime(num)){
	    printf("\n%d number is a prime number\n",num);}
	  else{
	   printf("%d number is not a Prime number\n ");}
	  break;
}
		else {
			printf("\nThe entered number is out of range||Press 1 to retry\n");
			scanf("%d",&check);
			}
	}
	while(check==1);
	return 0;
	
	}
int prime(int num){
	int i;
	for (i=2;i<num;i++)
	if (num%i==0){
	return 0;
	break;
	}
      return 1;
}