class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int L = 1 ,  R = *max_element(piles.begin(), piles.end());
        int  mid = 0;
        while (L <= R)
        {
            mid = L + (R - L) / 2;
            if (counthours(piles, mid, h))
                R = mid - 1;
            else
                L = mid + 1;
        }
        return (L);   
    }
private:
    bool counthours(vector<int>& piles, int mid, int h)
    {
        int hours = 0;
        for (int &pil : piles)
        {
            hours += pil / mid;
            if (pil % mid != 0)
                hours++;
        }
        return (hours <= h);
    }
};
