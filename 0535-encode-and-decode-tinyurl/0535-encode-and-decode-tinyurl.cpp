class Solution {
private:
 unordered_map<int,string> mp;
public:


    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        
        string curr="";
        int pos=longUrl.find(':');
        string res=longUrl.substr(0,pos);
        int count=1,st=pos+3;
        res+="://";

      




        for(int i = st; i < longUrl.length(); i++){
            
             if(longUrl[i] == '/' || i==longUrl.length() -1 ){
                
                if(i==longUrl.length() -1)
                curr += longUrl[i];

                mp[count]=curr;
                res+=to_string(count);
                count++;
                curr="";
                
            }
              else{

                curr += longUrl[i];
            }
        }
        return res;

    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        
        string curr="";
        int pos=shortUrl.find(':');
        string res=shortUrl.substr(0,pos);
        int count=1,st=pos+3;
        res+="://";


        for(int i = st; i < shortUrl.length(); i++)
        {
            string add= mp[shortUrl[i]-'0'];
            res+= add;

            if(i != shortUrl.length() - 1) 
            res+='/';

        }
        return res;


    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));