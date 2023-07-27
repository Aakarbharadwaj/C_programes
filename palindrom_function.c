//palindrom return and argument
#include<stdio.h>
void main(){
	int num;
	printf("enter num : ");
	scanf("%d",&num);
	int result=palindrom(num);
	printf("%d is palindrom",result);
}

int palindrom(int num){
	int temp,rem,sum;
	temp=num;
	while(num>0){
		rem=num%10;
		sum=sum*10+rem;
		num/=10;
	}
	if(temp==sum){
		return sum;
	}
}
