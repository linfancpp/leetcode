/*
    给定一个长度为 n 的 0 索引整数数组 nums。初始位置为 nums[0]。
    每个元素 nums[i] 表示从索引 i 向前跳转的最大长度。换句话说，
    如果你在 nums[i] 处，你可以跳转到任意 nums[i + j] 处:
    0 <= j <= nums[i]      i + j < n
    返回到达 nums[n - 1] 的最小跳跃次数。生成的测试用例可以到达 nums[n - 1]。
*/
int jump(vector<int>& nums) {
    int count = 0;
    int k = 0;
    int end = 0;
    for(int i = 0; i <nums.size()-1;++i)
    {
        //更新k能到达的最远距离
        k = max(k,nums[i]+i);

        //当i到达屏障点end，统计了k的最大值，更新屏障点，并计数跳跃次数+1
        if(i == end)
        {
            end = k;
            count++;
        }

    }
    return count;
}
