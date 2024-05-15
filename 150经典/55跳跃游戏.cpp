/*
    给你一个非负整数数组 nums ，你最初位于数组的 第一个下标 。数组中的每个元素代表你在该位置可以跳跃的最大长度。
    判断你是否能够到达最后一个下标，如果可以，返回 true ；否则，返回 false 。
*/

//设k为能到达的最远距离，循环中的i为当前位置。
bool canJump(vector<int>& nums) {
    int k = 0;
    for(int i = 0; i < nums.size();++i)
    {
        if(i > k )
        {
            return false;
        }
        //更新k的最远距离
        k = max(k,i+nums[i]);
    }
    return true;
}