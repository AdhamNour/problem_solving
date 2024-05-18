#include "stdio.h"

int maxProfit(int* prices, int pricesSize) {
	int maximumProfit =0; // maximum profit calculated 
	int smallestNumber = 10*10*10*10; // smallest number found in the array;  chosen to be thw maximum number possible for.the.input
	int i=0; // loop index
	for(i=0;i<pricesSize;i++){
		if(prices[i]<smallestNumber){
			smallestNumber =prices[i];
		}
		else if (prices[i]-smallestNumber>maximumProfit){
			maximumProfit = prices[i]-smallestNumber;
		}
	}
	return maximumProfit;
}


int main(){
	int prices [] ={7,1,5,3,6,4};
	printf("%d",maxProfit(prices,6));
}
