class Solution {
public:
    using ll = long long;

    bool check(vector<ll>& diff, ll mid, int r, ll k, int n) {
        ll cumSum = 0; 
        vector<ll> tempDiff = diff;

        for (int i = 0; i < n; i++) {
            cumSum += tempDiff[i];
            if (cumSum < mid) {
                ll need = mid - cumSum;
                if (need > k) return false;
                k -= need;
                cumSum += need;
                if (i + 2 * r + 1 < n)
                    tempDiff[i + 2 * r + 1] -= need;
            }
        }
        return true;
    }

    long long maxPower(vector<int>& stations, int r, int k) {
        int n = stations.size();
        vector<ll> diff(n, 0);

        for (int i = 0; i < n; i++) {
            diff[max(0, i - r)] += stations[i];
            if (i + r + 1 < n)
                diff[i + r + 1] -= stations[i];
        }

        ll left = 0;
        ll right = accumulate(stations.begin(), stations.end(), 0LL) + k;
        ll answer = 0;

        while (left <= right) {
            ll mid = left + (right - left) / 2;
            if (check(diff, mid, r, k, n)) {
                answer = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return answer;
    }
};
