class Solution {
public:
    int removeElement(vector<int>& a, int v) {
        int i = 0;
        for (int x : a)
            if (x != v) 
            a[i++] = x;
        return i;
    }
};
