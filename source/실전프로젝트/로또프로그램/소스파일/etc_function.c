#include "lotto.h"

//////////////////////////////////////////////////////////////////////////////////////////
//  < 기타 필요한 부수적인 함수들 >  
//////////////////////////////////////////////////////////////////////////////////////////

extern int lcnt;

void num_generator(int *nums, int cnt)
{
	int i, j, temp;
	
	srand(time(0));

	for(i = 0; i < cnt; i++)
	{
		temp = (rand() % 45) + 1;
		if(!is_here(nums, temp, i))
		{
			nums[i] = temp;
		}
		else i--;
	}

	for(i = 0; i < (cnt - 1); i++)
	{
		for(j = i + 1; j < cnt; j++)
		{
			if(nums[i] > nums[j])
			{
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}
}

int is_here(int *nums, int val, int cnt)
{
	int flag = 0;
	int i;
	
	for(i = 0; i < cnt; i++)
	{
		if(nums[i] == val)
		{
			flag = 1;
			break;
		}
	}

	return flag;
}

int num_counter(int *mynum, int *lotnum)
{
	int cnt=0;
	int i;
	
	for(i = 0; i < 6; i++)
	{
		if(is_here(lotnum, mynum[i], 6))
		{
			cnt++;
		}
	}

	return cnt;
}


int get_index(int num, int (*lotnum)[8])
{
	int i;

	for(i = 0; i < lcnt; i++)
	{
		if(num == lotnum[i][0])
		{
			return i;
		}
	}

	return -1;
}