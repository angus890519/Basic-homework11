/* 計算機概論實務-基本練習作業-作業11*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/22 10:00*/  
#include<stdio.h>
 
int main()
{
	int number1,number2,number3,temp; //定義三個數及暫存的變數 
	printf("請輸入三個數字,會進行排序：");  
	scanf("%d%d%d",&number1,&number2,&number3); //輸入三個數 
	//比較(進行排列) 
	if(number1>number2){ //假設第一個數大於第二個數 
		temp=number1;  //暫存number1值 
		number1=number2; //將number2值傳到number1 
		number2=temp; //將number2值傳到number1  
	}
	if(number1>number3){ //假設第一個數大於第三個數  
		temp=number1; //暫存number1值  
		number1=number3; //將number1值傳到number3  
		number3=temp; //將number3值傳到number1   
	}
	if(number2>number3){ //假設第二個數大於第三個數   
		temp=number2;   //暫存number2值   
		number2=number3; //將number2值傳到number3 
		number3=temp;
	}
	printf("從小到大的排列是:%d %d %d",number1,number2,number3);
	
	return 0;
}
