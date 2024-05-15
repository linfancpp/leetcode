/*
    给你一个 非严格递增排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。
*/
int removeDuplicates(vector<int>& nums) {
    int temp = nums[0] - 1;
    int slow = 0;
    for (int i = 0; i < nums.size(); ++i) {
        //当有重复元素时跳过记录数组
        if (nums[i] != temp) {
            //将元素存储在临时空间内用于对比
            temp = nums[i];
            nums[slow++] = nums[i];
        }
    }
    return slow;
}

