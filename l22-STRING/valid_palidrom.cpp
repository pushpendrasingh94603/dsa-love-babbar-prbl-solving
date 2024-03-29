https : // leetcode.com/problems/valid-palindrome/description/

        class Solution
{
private:
    bool isvalid(char ch)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    char to_lower(char ch)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = 'a' + (ch - 'A');
        }
        return ch;
    };

public:
    bool isPalindrome(string s)
    {
        vector<char> str;
        for (int i = 0; i < s.length(); i++)
        {
            if (isvalid(s[i]))
            {
                str.push_back(to_lower(s[i]));
            }
        }
        int st = 0;
        int end = str.size() - 1;
        while (st <= end)
        {
            if (str[st] != str[end])
            {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};