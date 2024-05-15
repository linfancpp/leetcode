/*
    给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
*/

//1.摩尔投票,设x为多数元素，选举x的票数，赞成+反对>0
//2.排序nums,nums数组中间元素即为多数元素
int majorityElement(vector<int>& nums) {
    int votes = 0;
    int x = 0;
    for (int i = 0; i < nums.size(); ++i) {
        //当vote=0，换选举人。
        if (votes == 0) {
            x = nums[i];
        }
        //选举
        if (nums[i] == x) {
            ++votes;
        } else {
            --votes;
        }

    }
    return x;
}
