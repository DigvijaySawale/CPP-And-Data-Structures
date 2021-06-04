// stock buy and sell problem
//in this problem we are given stock prices in advance for some days
// we have to buy and sell stocks in order to make maximum profit
//so we buy stocks at least price 
//ans sell them on peak price

#include<iostream>
using namespace std;

int maxProfit(int price[], int n)
{
	int profit = 0;
	
	for(int i = 1; i< n; i++)
	{
		if(price[i] > price[i-1])       //here we calculate profit by adding difference of high value to low value
		{
			profit += price[i] - price[i-1];
		}
	}
	
	return profit;
}

int main()
{
	int arr[] = {1,5,3,8,12};
	int n = 5;
	
	int profit = maxProfit(arr,n);
	
	cout << "Profit = " << profit<< endl;
}
