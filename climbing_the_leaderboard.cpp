vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    map<long,long> m;
    m[ranked[0]]=1;
    long j=1;
    vector<int> res;
for(long i=1;i<ranked.size();i++)
{
   if(m.find(ranked[i])==m.end())
    {
        j++;
        m[ranked[i]]=j;
    }

}
// long k=j+1;
for(long i=0;i<player.size();i++)
{
    if(player[i]>=ranked[0])
    {
        res.push_back(1);
    }
    else if(m.find(player[i])!=m.end())
    {
        res.push_back(m[player[i]]);
    }
    
    else {
   for(auto it:m)
   {
       if(player[i]<it.first)
       {
         res.push_back(it.second+1); 
         break;
        //  cout<<l<<" "<<player[i]<<endl; 
       }      
        
   }
    }
    
}
return res;
}
