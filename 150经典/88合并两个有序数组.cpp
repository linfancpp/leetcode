/*
    合并两个有序数组
*/
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> temp(m+n);
    int i = 0;
    int j = 0;
    int k = 0;

    //两个数组中都还有数据
    while(m > i && n > j)
    {
        (nums1[i] > nums2[j]) ? temp[k++] = nums2[j++]:temp[k++] = nums1[i++];
    }

    while(m > i)
    {
        temp[k++] = nums1[i++];
    }
    while(n > j)
    {
        temp[k++] = nums2[j++];
    }

    for(int item = 0; item < m+n; ++item)
    {
        nums1[item] = temp[item];
    }


}