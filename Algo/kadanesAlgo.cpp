#include <bits/stdc++.h>
using namespace std;
int Kadanes(vector<int> &arr){
    int sum = 0;
    int mx = INT_MIN;
    for(int i = 0; i< arr.size(); i++){
        sum+=arr[i];
        mx = max(mx,sum);
        if(sum<0){
            sum = 0;
        }

    }
    return mx;
}
int main(){
    vector<int>arr = {1,2,-9,6,43,-6,3,-7,-34,-40};
    int ans = Kadanes(arr);
    cout<<ans<<endl;
    return 0;
}
 