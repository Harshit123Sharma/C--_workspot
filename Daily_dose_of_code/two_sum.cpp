#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

//0(n^2) time | 0(1) space
vector<int> twoNumberSum (vector<int> a, int sum){
    for (int i = 0; i < a.size()-1; i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == sum){
                return vector<int>{a[i], a[j]};
            }
        }
        
    }
    return {};
}

//0(n) time | 0(n) space
vector<int> twoNumberSum(vector<int> a, int sum)
{
    unordered_set<int> nums;
    for (int num : a)
    {
        int match = sum - num;
        if (nums.find(match) != nums.end()) {
            return vector<int>{match, num};
        }
        else nums.insert(num);
    }
    return {};
}

//0(nlog(n)) \ 0(1) space
vector<int> twoNumberSum(vector<int> a, int sum)
{
    sort (a.begin(), a.end());
    int left = 0, right = a.size() - 1;
    while (left < right)
    {
        int match = a[left] + a[right];
        if (match == sum)
        {
            return {a[left], a[right]};
        }
        else if (match < sum) 
                    left++;
             else
                    right--;
    }
    return {};
}
