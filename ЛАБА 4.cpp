#include <stdio.h>

int main()
{
	int n;// количество элементов в последовательности  
	scanf_s("%d", &n);
	int k; //число в последовательности 
	int comp = 1;// произведение чисел % 5 == 0
	int pos = -1;// позиция min числа / на 5
	int mindigit = 999999;// минимальное число / на 5
	
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d", &k);
		if (k % 5 == 0)
		{
			comp = comp * k;
			if (k < mindigit)
			{
				mindigit = k;
				pos = i;
			}
		}
	}
	
	printf("%d, %d , %d", comp, pos, mindigit);
}
