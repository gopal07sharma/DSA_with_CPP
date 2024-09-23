#include<bits/stdc++.h>
using namespace std;
    bool check(int speed, vector<int>& piles, int h) {
        int count = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            if (count > h)
                return false;

            if (speed >= piles[i])
                count++;
            else if (piles[i] % speed == 0)
                count += piles[i] / speed;
            else {
                count += piles[i] / speed + 1;
            }
        }
        if (count > h)
            return false;
        else
            return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int n = piles.size();
        int max = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (max < piles[i])
                max = piles[i];
        }
        int high = max;
        int ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid, piles, h)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
int main(){
    vector<int> piles{3,6,7,11};
    int h = 8;
    cout<<minEatingSpeed(piles, h);
}
