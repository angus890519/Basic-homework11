/* �p������׹��-�򥻽m�ߧ@�~-�@�~11*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/22 10:00*/  
#include<stdio.h>
 
int main()
{
	int number1,number2,number3,temp; //�w�q�T�ӼƤμȦs���ܼ� 
	printf("�п�J�T�ӼƦr,�|�i��ƧǡG");  
	scanf("%d%d%d",&number1,&number2,&number3); //��J�T�Ӽ� 
	//���(�i��ƦC) 
	if(number1>number2){ //���]�Ĥ@�ӼƤj��ĤG�Ӽ� 
		temp=number1;  //�Ȧsnumber1�� 
		number1=number2; //�Nnumber2�ȶǨ�number1 
		number2=temp; //�Nnumber2�ȶǨ�number1  
	}
	if(number1>number3){ //���]�Ĥ@�ӼƤj��ĤT�Ӽ�  
		temp=number1; //�Ȧsnumber1��  
		number1=number3; //�Nnumber1�ȶǨ�number3  
		number3=temp; //�Nnumber3�ȶǨ�number1   
	}
	if(number2>number3){ //���]�ĤG�ӼƤj��ĤT�Ӽ�   
		temp=number2;   //�Ȧsnumber2��   
		number2=number3; //�Nnumber2�ȶǨ�number3 
		number3=temp;
	}
	printf("�q�p��j���ƦC�O:%d %d %d",number1,number2,number3);
	
	return 0;
}
