/*
    给你一个整数数组 prices ，其中 prices[i] 表示某支股票第 i 天的价格。
    在每一天，你可以决定是否购买和/或出售股票。你在任何时候 最多 只能持有 一股 股票。
    你也可以先购买，然后在 同一天 出售。
    返回 你能获得的 最大 利润 。
*/
int maxProfit(vector<int>& prices) {
    int profit = 0;

    for(int i = 0; i < prices.size()-1; i++)
    {
        //当股票一直上涨时统计收益
        if(prices[i]< prices[i+1])
        {
            profit += prices[i+1] - prices[i];
        }
        else
        {
            //当股票下一天下跌时，当天作为卖出日。
            continue;
        }
    }
    return profit;
}
