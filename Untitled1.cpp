#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int m,n;
	int temp;
	int input_num[5];
	printf("輸入5個數排大小");
	scanf(" %d %d %d %d %d", &input_num[0],&input_num[1],&input_num[2],&input_num[3],&input_num[4]);
	
	for(m=0;m<5;m++){
		for(n=m+1;n<5;n++){
			if(input_num[n]<input_num[m]){
				temp=input_num[n];
				input_num[n]=input_num[m];
				input_num[m]=temp;
			}
		}
	}
	printf("\n\n");
	printf("最小值為:%d\n",input_num[0]);
	system("pause");
	return 0;
	
}
