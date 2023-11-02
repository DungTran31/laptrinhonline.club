#include <iostream>
#include <string>
#include <unordered_set>

int lengthOfLongestSubstring(std::string s)
{
    int maxLength = 0;
    int start = 0;
    std::unordered_set<char> charSet;

    for (int end = 0; end < s.length(); end++)
    {
        while (charSet.count(s[end]))
        {
            charSet.erase(s[start]);
            start++;
        }
        charSet.insert(s[end]);
        maxLength = std::max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main()
{
    std::string input = "abcabccc";
    int result = lengthOfLongestSubstring(input);
    std::cout << result << std::endl;

    return 0;
}
