/*
    给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
*/
int removeElement(vector<int> &nums, int val) {
    int size = nums.size();
    int slow = 0;
    for (int i = 0; i < size; ++i) {
        //当没有找到时两边同时移动指针，相等时i进行移动。
        if (nums[i] != val) {
            nums[slow++] = nums[i];
        }
    }
    return slow;
}