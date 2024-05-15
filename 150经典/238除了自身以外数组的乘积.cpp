/*
    给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积 。
    题目数据 保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内。
    请 不要使用除法，且在 O(n) 时间复杂度内完成此题。
*/
vector<int> productExceptSelf(vector<int>& nums) {
    int length = nums.size();
    int pre = 1;
    int suf = 1;
    //初始化数组，将长度设为原数组长度，元素为1
    vector<int> answer(length,1);

    //计算前缀乘积
    for(int i = 0; i < length;++i)
    {
        answer[i] = pre;
        pre = pre * nums[i];
    }

    //计算后缀乘积并与前缀相乘存储入answer
    for(int j = length-1; j >=0 ;--j)
    {
        answer[j] = answer[j] *suf;
        suf = nums[j] *suf;
    }
    return answer;
}
