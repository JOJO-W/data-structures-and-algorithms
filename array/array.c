#include<stdio.h>
int main()
{
	int arr[] = {3,9,8,12,55,4,13,6,68,220,3,4};
	//int min,temp;
	////ѡ������
	//for (int i=0;i<sizeof(arr)/4-1;i++)
	//{
	//	min = arr[i];
	//	for(int k= sizeof(arr) / 4-1;k>i;k--)
	//	{
	//		if (min > arr[k])
	//		{
	//			temp = min;
	//			min = arr[k]; 
	//			arr[k] = temp;
	//		}
	//	}
	//	
	//	arr[i] = min;
	//}
	//for (int i = 0; i < sizeof(arr) / 4; i++)
	//{
	//	printf("%d\t",arr[i]);
	//}
	//��������
	//int temp,c=0;//cΪ����
	//for (int i = 1; i < sizeof(arr) / 4 ; i++)
	//{
	//	temp = arr[i];
	//	for (int k = i-1; k >=0; k--)
	//	{
	//		���i������֮ǰ��ĳ��Ԫ��,����ڴ�Ԫ��֮��
	//		if (arr[i] >= arr[k])
	//		{		
	//			c=1;
	//			for (int x=i-1;x>=k+1;x--)
	//			{
	//				arr[x+1] = arr[x];
	//			}
	//			arr[k + 1] = temp;
	//			break;
	//		}
	//	}
	//	����δ��(���arr[i]Ϊarr[0-i]����Сֵ)
	//	if (c == 0)	
	//	{
	//		for (int z=i-1;z>=0;z--)
	//		{
	//			temp = arr[i];
	//			arr[z+1] = arr[z];
	//		}
	//	}
	//	���Ͽ���
	//	c = 0;
	//	
	//}
	//for (int i = 0; i < sizeof(arr) / 4; i++)
	//{
	//	printf("%d\t", arr[i]);
	//}
	/*����ð������
	int temp;
	for (int i = 1; i < sizeof(arr) / 4-1; i++)
	{
		for (int k=i+1;k>=1&& arr[k] <= arr[k - 1];k--)
		{
		
				temp = arr[k];
				arr[k] = arr[k - 1];
				arr[k - 1] = temp; 
			
		}
	}
	for (int i = 0; i < sizeof(arr) / 4; i++)
	{
		printf("%d\t", arr[i]);
	}*/
	/*ð������
	int temp;
	for (int i = 0; i < sizeof(arr) / 4 - 1; i++)
	{
		for (int k = 0; k < sizeof(arr) / 4 - 1-i ; k++)
		{
			if (arr[k] >= arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}

		}
	}*/
	//��������
	for (int i = 1; i < sizeof(arr) / 4; i++)
	{
		for (int k=i-1;k>=0&&arr[k+1] < arr[k]; k--)
		{			
				arr[k]=arr[k+1] +arr[k];
				arr[k + 1] = arr[k] - arr[k + 1];
				arr[k] = arr[k] - arr[k + 1];
		}
	}
	for (int i = 0; i < sizeof(arr) / 4; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}