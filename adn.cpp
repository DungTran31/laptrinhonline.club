#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define int long
#define long long long

const int mod = 1000000007;
const int limit = 100000;

vector<string> res;
int n;
string bo,me;
void backtrack(int i,string str){
    if(i==n){
        res.push_back(str);
        return;
    }
    if(bo[i] == me[i]){
        backtrack(i+1,str+bo[i]);
    }else{
        // if(bo[i]>me[i]){
        //     swap(bo[i],me[i]);
        //     // char temp = bo[i];
        //     // bo[i]=me[i];
        //     // me[i]=temp;
        // }
        backtrack(i+1,str+bo[i]);
        backtrack(i+1,str+me[i]);
    }
}
main(){
    cin>>n>>bo>>me;
    backtrack(0,"");
    cout<<res.size()<<endl;
    sort(res.begin(),res.end());
    for(string x:res)cout<<x<<endl;
}