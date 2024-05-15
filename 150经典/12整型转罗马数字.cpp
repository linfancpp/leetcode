/*
    给你一个整数，将其转为罗马数字。
*/
const pair<int, string> value[] = {
        {1000, "M"},
        {900,  "CM"},
        {500,  "D"},
        {400,  "CD"},
        {100,  "C"},
        {90,   "XC"},
        {50,   "L"},
        {40,   "XL"},
        {10,   "X"},
        {9,    "IX"},
        {5,    "V"},
        {4,    "IV"},
        {1,    "I"},
};

class Solution {
public:
    string intToRoman(int num) {
        string roma;
        for(auto item: value)
        {
            while(num >= item.first)
            {
                num -= item.first;
                roma +=item.second;
            }
            if( num == 0)
            {
                break;
            }
        }
        return roma;
    }
};
