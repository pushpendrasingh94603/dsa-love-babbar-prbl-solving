// https://www.naukri.com/code360/problems/reverse-the-order-of-words-in-a-string_1264991

void reversethis(string &str, int from, int to)
{
    while (from <= to)
    {
        swap(str[from], str[to]);
        from++;
        to--;
    }
}

string reverseOrderWords(string str)
{

    for (int i = 0; i < str.length(); i++)
    {
        int start = i;
        while (str[i] != ' ' && i < str.length())
        {
            i++;
        }
        reversethis(str, start, i - 1);
    }

    int s = 0, e = str.length() - 1;
    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}