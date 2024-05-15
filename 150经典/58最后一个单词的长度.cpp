/*
    给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
    单词 是指仅由字母组成、不包含任何空格字符的最大子字符串
*/

int lengthOfLastWord(string s) {
    int flag = -1;
    int sum = 0;
    for(int i = s.length()-1; i >= 0; i--)
    {
        //找到第一个位置不为空的位置
        if(flag == -1 && s[i] != ' ')
        {
            flag = 0;
        }
        if(flag == 0 && s[i] != ' ')
        {
            sum++;
        }
        //出现空格时末尾的得到单词
        if(flag == 0 && s[i] == ' ')
        {
            break;
        }
    }
    return sum;
}

