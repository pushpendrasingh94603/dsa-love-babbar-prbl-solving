// https://www.naukri.com/code360/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5

#include <bits/stdc++.h>

bool isvalid(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
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

bool checkPalindrome(string s)
{
    int st = 0;
    int en = s.length();
    while (st <= en)
    {

        if (isvalid(s[st]) && isvalid(s[en]))
        {
            if (to_lower(s[st]) == to_lower(s[en]))
            {
                st++;
                en--;
                continue;
            }
            else
            {
                return false;
            }
        }
        else if (!isvalid(s[st]))
        {
            st++;
        }
        else
        {
            en--;
        }
    }
    return true;
}