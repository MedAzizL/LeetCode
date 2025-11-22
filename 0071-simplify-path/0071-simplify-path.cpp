class Solution {
public:
    string simplifyPath(string path) {
    vector<string> di;
    string curr="";
    for(int i = 0; i < path.length(); i++){

        
        if(path[i]=='/' )
        {   
            if(curr==".." && !di.empty())
                di.pop_back();

            else if( curr != "." && curr!="" && curr!="..")
                di.push_back(curr);


            curr="";
            continue;
        }
        else if ( i== path.length()-1)
        {
            curr+=path[i];

            if(curr==".." && !di.empty())
                di.pop_back();

             else if( curr != "." && curr!="" && curr!="..")
                di.push_back(curr);

                
        }


        curr+=path[i];

        

    }

    string res="/";
    for(string s:di)
    {
        res+=s;
        res+='/';
    }
    if(res[res.size()-1]=='/' && res.size() >1)
    res.erase(res.size()-1);

    return res;

    }
};