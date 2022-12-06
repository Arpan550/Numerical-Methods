#include<stdio.h>

int fact(int num){
	if(num==0 || num==1){
		return 1;
	}
	else{
		return num*fact(num-1);
	}
}

int main(){
	int arr[5][6];
	int i,j;
	float n,a,h,u,v,total;
	printf("Enter X:\n");
	for(i=0;i<5;i++){
		printf("x[%d] : ", i);
		scanf("%d", &arr[i][0]);
	}
	
	printf("Enter Y:\n");
	for(i=0;i<5;i++){
		printf("y[%d] : ", i);
		scanf("%d", &arr[i][1]);
	}
	for(j=2;j<6;j++){
		for(i=0;i<5;i++){
			arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
		}
	}
	arr[1][5]=arr[2][4]=arr[2][5]=arr[3][3]=arr[3][4]=arr[3][5]=arr[4][2]=arr[4][3]=arr[4][4]=arr[4][5]=0;
	
	printf("\nTABLE::\n");
	for(i=0;i<5;i++){
		for(j=0;j<6;j++){
			printf("%d\t ", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the value for which you want to calculate: ");
	scanf("%f", &n);
	a=arr[0][0];
	h=arr[1][0]-arr[0][0];
	u=(n-a)/h;
	printf("u: %f\n", u);
	total=arr[0][1];
	
	for(i=1;i<5;i++){
		v=u;
		if(i==1){
		   	total +=(v*arr[0][i+1])/fact(i);	
		}
		else{	
            for(j=1;j<i;j++){
            	v *=(u-j);
			}
			total +=(v*arr[0][i+1])/fact(i);		
        }
	}
	
	printf("Ans..\t%f", total);
	return 0;
}
