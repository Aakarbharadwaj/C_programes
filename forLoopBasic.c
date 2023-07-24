//#include<stdio.h>
//int main()
//{
//	for(int i=1;i<=5;i++){
//		printf("%d ",i);
//	}
//	return 0;
//}

//1 to 100 print 

//#include<stdio.h>
//int main(){
//	for(int i=1;i<=100;i++){
//		printf("%d ",i);
//	}
//	return 0;
//}


//2
//10 to 1
//#include<stdio.h>
//int main(){
//	int a;
//	printf("enter num :");
//	scanf("%d",&a);
//	int i;
//	for(i=a;i>0;i--){
//		printf("%d ",i);
//	}
//	return 0;
//}


//3
//100 to 1 print

//#include<stdio.h>
//int main(){
//	int i;
//	for(i=100;i>=1;i--){
//		printf("%d ",i);
//	}
//	return 0;
//}

//4
//50 to 100
//#include<stdio.h>
//int main(){
//	int i;
//	for(i=50;i<=100;i++){
//		printf("%d ",i);
//	}
//	return 0;
//}


//5 print all no. between two no. excluding two no.
#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter num1 and num2 :");
	scanf("%d\n%d",&num1,&num2);
	for(num1+=1;num1<num2;++num1){
		printf("%d ",num1);
	}
	return 0;
}

//6
// output of 2 table
//#include<stdio.h>
//int main(){
//	int i,num=2,result;
//	for(i=1;i<=10;i++){
//		result=num*i;
//		printf("%d \n",result);
//	}
//	return 0;
//}

//7
//table of 2 in format (2 x 1 = 2)
//#include<stdio.h>
//int main(){
//	int i,num=2,result;
//	for(i=1;i<=10;i++){
//		result=num*i;
//		printf("%d x %d =%d\n",num,i,result);	
//	}
//	return 0;
//}

//8 any table with format (n x i =ni)
//#include<stdio.h>
//int main(){
//	int i,num,result;
//	printf("enter num :" );
//	scanf("%d",&num);
//	for(i=1;i<=10;i++){
//		result=num*i;
//		printf("%d x %d =%d\n",num,i,result);	
//	}
//	return 0;
//}


//10. multiple table output
//#include<stdio.h>
//int main(){
//	int num1,num2,i,result;
//	printf("enter num1 and num2 : ");
//	scanf("%d%d",&num1,&num2);
//	for(num1+=1;num1<num2;++num1){
//		for(i=1;i<=10;i++){
//		result=num1*i;
//		printf("%d ",result);
//		
//	}
//	printf("\n");
//	}
//
//	return 0;
//}


