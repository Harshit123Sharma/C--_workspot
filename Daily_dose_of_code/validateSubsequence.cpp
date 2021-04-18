#include<vector>

using namespace std;

//0(n) time | 0(1) space
bool isValidSub (vector<int> a, vector<int> seq) {
    int i = 0, j = 0;
    while (i < a.size() && j < seq.size()) {
        if (a[i] == seq[j])
            j++;
        i++;    
    }
    return j == seq.size();
}


//0(n) time | 0(1) space
bool isValidSub(vector<int> a, vector<int> seq)
{
    int i = 0;
    for (auto value : a){
        if (i == seq.size())
            break;
        if (seq[i] == value)
            i++;    
        
    }
    
    return i == seq.size();
}