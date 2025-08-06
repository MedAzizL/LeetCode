class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.length();
        int leng = n - numFriends + 1;
        int largestPos = 0;
        char mx = 'a';

        if (numFriends == 1) {
            return word;
        }

        for (int i = 0; i < n; i++) {
            if (word[i] > mx) {
                mx = word[i];
                largestPos = i;
            } 
            else if (word[i] == mx) {
                if (word.substr(i) > word.substr(largestPos)) {
                    largestPos = i;
                }
            }
        }

        return word.substr(largestPos, leng);
    }
};
