/*
    给你一个字符串 s ，请你反转字符串中 单词 的顺序。
    单词 是由非空格字符组成的字符串。s 中使用至少一个空格将字符串中的 单词 分隔开。
    返回 单词 顺序颠倒且 单词 之间用单个空格连接的结果字符串。

    注意：输入字符串 s中可能会存在前导空格、尾随空格或者单词间的多个空格。
    返回的结果字符串中，单词间应当仅用单个空格分隔，且不包含任何额外的空格。
    输入：s = "the sky is blue"
    输出："blue is sky the"
*/
string reverseWords(string s) {
    string temp;
    vector<string> vtr;
    for(int i = 0; i < s.length();++i)
    {
        //当字符不为空时开始记录
        if(s[i] != ' ')
        {
            temp += s[i];
        }
        //当前字符为空，并且字符串不为空时加入数组。置空字符串
        if((s[i] == ' ' || i == s.length()-1 )&& !temp.empty())
        {
            vtr.push_back(temp);
            temp.clear();
        }
    }
    s.clear();
    for(auto it = vtr.rbegin(); it!= vtr.rend(); ++it)
    {
        s += *it;
        if(it != vtr.rend()-1)
        {
            s += " ";
        }
    }
    return s;
}
