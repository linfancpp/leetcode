/*
    编写一个函数来查找字符串数组中的最长公共前缀。
    如果不存在公共前缀，返回空字符串 ""。

*/

//先对数组进行排序，我们可以得到第一个元素跟最后一个元素，这时只要比较两个元素最长公共前缀时多少就好
string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    string &s1 = strs.front();
    string &s2 = strs.back();
    int i = 0;
    while(i < s1.length() && i < s2.length() &&s1[i] == s2[i])
    {
        ++i;
    }
    return string(s1.begin(),s1.begin()+i);
}
