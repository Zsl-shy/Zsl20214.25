#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//n�׳� 
//	int i,n;
//	int num=1;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++){
//		num=num*i;
//		
//	} 
//	printf("n�׳�=%d",num);
//	return 0;

//�׳˺�
	int i,j,num=1;
	int n;
	int he=0;
	scanf("%d",&n); 
	for(i=1; i<=n; i++){
		num=1;//��� ��num=1���ѭ�����ۼƵ�numֵ 
		for(j=1; j<=i; j++){
			num=num*j;
		}
		he=he+num;
	}
	printf("he=%d",he);
	
	return 0; 
}
