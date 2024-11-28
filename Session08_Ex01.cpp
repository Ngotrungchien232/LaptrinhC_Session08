#include<stdio.h>

int main() {
	
	// khai bao mang hai chieu
	int arry[2][3] = {{3,4,5},{6,7,8}};
	
	// khai bao them hai bien de co the dung cho vong lap for
	int i, j;
	
	//tien hanh in tung phan tu co trong mang tu cuoi ve dau
	// ta len dung vong lap for
	printf("cac phan tu co trong mang la: \n");
	for(int j = 2; j >= 0; j--){
		for(int i = 1; i >= 0; i--){
			printf("%d", arry[i][j]);
		}
		
	}
	
	//ket thuc chuong trinh 
	return 0;
}
