/*
    给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使得出现次数超过两次的元素只出现两次，
    返回删除后数组的新长度。不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
*/
int removeDuplicates(vector<int>& nums) {
    int count = 0;
    //确保临时值与数组第一个元素不同
    int temp = nums[0]-1;
    int slow = 0;
    for(int i = 0; i < nums.size();++i)
    {
        //当没有重复元素，将值插入原本数组
        if(nums[i] != temp)
        {
            //重置重复元素个数
            count = 1;
            temp = nums[i];
            nums[slow++] = nums[i];
        }
        else
        {
            count++;
            //当重复元素小于等2，将值插入原本数组
            if(count <= 2)
            {
                nums[slow++] = nums[i];
            }
        }
    }
    return slow;
}