#include <stdio.h>
int isPrime (long num);//�ж�һ�����ǲ���������
void Fact (long num);//��ʽ�ֽ⣻

int main()
{
	long num;
	scanf("%ld",&num);

	if ( isPrime(num) )
	{
		printf("%ld=%ld\n",num,num);
	}
	else
	{
		 Fact(num);
// 		printf("\n");//ɾ�����һ��x,Ȼ��������з���
	}
	return 0;
}


int isPrime(long num)
{
	long i;
	int isPrime = 1;
	for(i=2;i<=num/2;i++)
	{
		if(num % i == 0)
		{
		isPrime = 0;
		break;
		}
	}
	return isPrime;
}

void Fact(long num)
{ 
	long factor;
	printf("%ld=",num);//�������ֵ����
	do{
	for (factor=2; factor < num; factor++ )
		{
// 	printf("Test sentence 1.\t num = %ld, factor=%ld\n",num,factor);
			if(isPrime(factor)&&( num%factor == 0))//�ж��Ƿ���������
			//��������������������Ȼ��ԭ����������С���ٴν����жϡ�
			{
				printf("%ld*",factor);//�����ʽ�ֽⲿ�֣�
				num = num / factor;//�õ��µĴ��ֽ�������
				break;
			}
		}
	if (isPrime(num))//���num��������ֱ���Ƴ���
		{
			printf("%ld\n",num);
			break;
		}
// 	printf("Test sentence.\tnum = %ld\n",num);
	}while(1);
	return ;
}

