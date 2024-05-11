#include "stdio.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	static int size = 2;
	returnSize = & size;
	static int result[2];
	result[0]=0;
	result[1]=numsSize-1;
	
	while(nums[result[0]]+nums[result[1]]!=target){
		if(nums[result[0]]+nums[result[1]] > target){
			result[1]--;
		}
		else if(nums[result[0]]+nums[result[1]]<target){
			result[0]++;
		}
	}

	return result;
		
}


int main(){
	int nums[]={1,2,3,4};
	int z;
	int* res=twoSum(nums,4,3,&z);
	printf("%d %d",res[0],res[1]);
}
