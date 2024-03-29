// https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

class Solution
{
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        for (int i = 0; i < str.length(); i++)
        {
            arr[str[i] - 'a']++;
        }
        int max = 0;
        int index = -1;
        for (int i = 0; i < 26; i++)
        {
            if (max < arr[i])
            {
                index = i;
                max = arr[i];
            }
        }
        return ('a' + index);
    }
};