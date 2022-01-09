bool isAnagram(string a, string b){
        if(a==b)
        {
            return true;
        }
        if(a.size()!=b.size())
        {
            return false;
        }
        map<char,int> m;
        map<char,int> x;
        for(int i=0;i<a.size();i++)
        {
            if(b.find(a[i])!=string::npos)
            {
               if(m.find(a[i])==m.end())
               {
                   m[a[i]]=1;
               }
               else
               {
                   m[a[i]]++;
               }
              
            }
            else
            {
                return false;
            }
        }
        for(int i=0;i<b.size();i++)
        {
             if(x.find(b[i])==x.end())
               {
                   x[b[i]]=1;
               }
               else
               {
                   x[b[i]]++;
               }
        }
        for(int i=0;i<a.size();i++)
        {
            // cout<<m[a[i]]<<" "<<x[a[i]]<<endl;;
            if(m[a[i]]!=x[a[i]])
            {
                return false;
            }
        }
        // Your code here
      return true;  
    }
