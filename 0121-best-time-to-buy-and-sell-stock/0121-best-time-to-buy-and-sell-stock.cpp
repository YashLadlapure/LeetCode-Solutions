class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min=prices[0];
        int max=0;
        int n=prices.size();
        

        for(int i=0;i<n;i++)
        {

           int prof=prices[i]-min;
            if(max<=prof)
            {
                max=prof;
            }

            if(prices[i]<min)
            {
                min=prices[i];
            }

           


        }
 return max;
    }
};