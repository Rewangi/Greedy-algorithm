// Make a change for Indian currency by taking min no of coins //

#include <iostream>
#include<algorithm>
using namespace std;
int make_changes(int*coins, int n, int money){
    int ans = 0;
    while(money > 0){
    int index = upper_bound(coins , coins+n , money) -1 - coins;
   // cout<< coins[index]<<"+";
    money = money - coins[index];
    ans++;
}
return ans;
}
int main() {
    int money;
    cin>>money;
    int coins[] = {1,2 ,3,5,10,20,50,100,200,500,2000};
    int t = sizeof(coins)/sizeof(int);
   cout<<"Coins Needed"<< " " <<make_changes(coins,t,money)<<endl;
    return 0;


    
}
