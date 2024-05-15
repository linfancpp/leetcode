/*
    给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。
*/

void rotate(vector<int>& nums, int k) {

    vector<int> temp(nums.size());
    for(int i = 0; i < nums.size();++i)
    {
        //用新数组装下(i+k)%数组长度 这个位置的值
        temp[(i+k)%nums.size()] = nums[i];
    }

    for(int j = 0; j <nums.size(); ++j)
    {
        nums[j] = temp[j];
    }
}