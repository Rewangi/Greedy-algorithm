// PROBLEM LINK:-
//https://www.spoj.com/problems/BUSYMAN/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

    bool compare(pair<int,int> p1, pair<int,int> p2){

        return  p1.second < p2.second;
    }
    int main(){
        int t , n , e ,s;
        cin>>t;
        vector<pair<int,int> > v;
        while(t--){
            cin>>n;
            for(int i=0;i<n;i++){
                cin>>s>>e;
                v.push_back(make_pair(s,e));
            }
            // activity selection algorithm
            // step 1. sorting
            sort(v.begin(), v.end(), compare);
            // start picking 1 activity
            int res = 1;
            int fin = v[0].second;// finishing time of first activity
            // itertate over the remaining activities 
            for(int i=1; i<n ; i++){
// starting time of first activity is greater than finishing time of next activity
//so we can do that activity ..
                if(v[i].first >= fin){
                     fin = v[i].second; // update finishing time 
                     res++;
                }
            }
            cout<<res<<endl;
            v.clear();
        }
        return 0;
    }
    


    
