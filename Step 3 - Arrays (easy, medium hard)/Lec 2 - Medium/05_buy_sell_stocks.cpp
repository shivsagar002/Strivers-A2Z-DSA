#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int ans = 0;
    vector<int> arr = prices;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        arr[i] = max(arr[i], arr[i + 1]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans = max(ans, (arr[i] - prices[i]));
    }
    return ans;
}

int main(){
    vector<int> arr = {7, 1, 3, 5, 2, 6, 4};
    int ans = maxProfit(arr);
    cout << "Maximum profit is " << ans << endl;
    return 0;
}
