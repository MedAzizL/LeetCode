class Solution {
public:
    bool closeStrings(string word1, string word2) {

        set<char> ch1,ch2;
        vector<int> occ1(26) ,occ2(26) ;
        for(char c: word1)
        {
        occ1[c-'a']++;
        ch1.insert(c);
        }

        for(char c: word2)
        {
        occ2[c-'a']++;
        ch2.insert(c);
        }
        sort(occ1.begin(),occ1.end());
        sort(occ2.begin(),occ2.end());
        
        if(occ1== occ2  && ch1 == ch2)
        return true;
        else
        return false;

    }
};