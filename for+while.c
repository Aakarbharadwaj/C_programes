//using while loop
//1. 1 to 100 even no.
//#include<stdio.h>
//int main(){
//	int num=1;
//	while(num<=100){
//		if(num%2==0){
//			printf("%d ",num);
//		}
//		num++;
//		
//	}
//	return 0;
//}

//using for loop
//#include<stdio.h>
//int main(){
//	int num;
//	{
//	for(num=1;num<=100;num++){
//		if(num%2==0){
//			printf("%d ",num);
//		}
//	}
//	return 0;
//	}
//}

//2. 1 to 100 Odd no.
//#include<stdio.h>
//int main(){
//	int num=1;
//	while(num<=100){
//		if(num%2!=0){
//			printf("%d ",num);
//		}
//		num++;
//	}
//	return 0;
//}

//using for loop
//#include<stdio.h>
//int main(){
//	int num;
//	for(num=1;num<=100;num++){
//		if(num%2!=0){
//			printf("%d ",num);
//		}
//	}
//	return 0;
//}

//3. 100 to 1 even
//#include<stdio.h>
//int main(){
//	int num=100;
//	while(num>=1){
//		if(num%2==0){
//			printf("%d ",num);
//		}
//		num--;
//	}
//	return 0;
//}

//using for loop
//#include<stdio.h>
//int main(){
//	int num;
//	for(num=100;num>=1;num--){
//		if(num%2!=0){
//			printf("%d ",num);
//		}
//	}
//	return 0;
//}


//4. 100 to 1 Odd
//#include<stdio.h>
//int main(){
//	int num=100;
//	while(num>=1){
//		if(num%2!=0){
//			printf("%d ",num);
//		}
//		num--;
//	}
//	return 0;
//}

//using for loop
//#include<stdio.h>
//int main(){
//	int num;
//	for(num=100;num>=1;num--){
//		if(num%2!=0){
//			printf("%d ",num);
//		}
//	}
//	return 0;
//}

//5. even no. between two no.
//#include<stdio.h>
//int main(){
//	int num1,num2;
//	printf("enter num1 : ");
//	scanf("%d",&num1);
//	printf("enter num2 : ");
//	scanf("%d",&num2);
//	num1+=1;
//	while(num1<num2){
//		if(num1%2==0){
//			printf("%d ",num1);
//		}
//		num1++;
//	}
//	return 0;
//}

//using for loop
#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter num1 :");
	scanf("%d",&num1);
	printf("enter num2 :");
	scanf("%d",&num2);
	num1+=1;
	for(num1;num1<num2;num1++){
		if(num1%2==0){
			printf("%d ",num1);
		}
	}
	return 0;
}

