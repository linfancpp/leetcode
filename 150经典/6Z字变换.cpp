class Solution {
public:
    string convert(string s, int numRows) {

        //行数小于2直接返回
        if(numRows < 2)
            return s;
        vector<string> rows(numRows);
        int count = 0;
        int i = 0;
        //flag = 0 向下， flag = 1 向上
        int flag = 0;
        while(count < s.length())
        {
            //往下移动
            if(flag == 0)
            {
                rows[i] += s[count];
                ++i;
                ++count;
            }
            //到达底行后转向
            else if(i == numRows-1 && flag == 0)
            {
                rows[i] += s[count];
                --i;
                ++count;
                flag = 1;
            }
            else if(i < numRows && flag ==1)
            {
                rows[i] += s[count];
                --i;
                ++count;
            }
            else if(i == 0 && flag == 1)
            {
                rows[i] += s[count];
                ++i;
                ++count;
                flag = 0;
            }
        }
        //组成最后结果
        string temp;
        for(auto item : rows)
        {
            temp += item;
        }
        return temp;
    }
};