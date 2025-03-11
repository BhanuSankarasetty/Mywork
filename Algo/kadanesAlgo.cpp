#include<iostream>
#include<vector>
#include <climits>
#include<stack>
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
    vector<int> arr;
    int x;

    cout << "Enter numbers (type any non-integer to stop):" << endl;
    while (cin >> x) {
        arr.push_back(x);
    }

    if (arr.empty()) {
        cout << "No numbers entered. Exiting..." << endl;
        return 0;
    }
    int ans = Kadanes(arr);
    cout<<"Ans by using Kadane's algo is : " ;
    cout<<ans<<endl;
    return 0;
}
 