/*
    在一条环路上有 n 个加油站，其中第 i 个加油站有汽油 gas[i] 升。
    你有一辆油箱容量无限的的汽车，从第 i 个加油站开往第 i+1 个加油站需要消耗汽油 cost[i] 升。
    你从其中的一个加油站出发，开始时油箱为空。
    给定两个整数数组 gas 和 cost ，如果你可以按顺序绕环路行驶一周，则返回出发时加油站的编号，否则返回 -1 。
    如果存在解，则 保证 它是 唯一 的。
*/

//如果存在解，出发点按顺序环绕一圈，总油量>消耗油量
//
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    int start = -1;
    int gas_sum = 0;
    int cost_sum = 0;
    int diff = 0;

    for(int i = 0; i < n; i++)
    {
        //统计汽油总量，消耗总量
        gas_sum += gas[i];
        cost_sum += cost[i];

        //统计当前油量
        diff += gas[i]-cost[i];

        //油量不支持进行下一段路程，标记重置，汽车汽油重置
        if(diff < 0)
        {
            start = -1;
            diff = 0;
        }
        else
        {
            if(start == -1)
            {
                //设为触发点
                start = i;
            }

        }
    }
    return gas_sum >= cost_sum? start:-1;

}
