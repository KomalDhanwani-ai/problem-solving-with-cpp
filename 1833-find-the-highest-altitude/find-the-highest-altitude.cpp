class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int altitude = 0, maxAlt = 0;
    for (int g : gain)
     {
        altitude += g;       
        maxAlt = max(maxAlt, altitude);
    }
    return maxAlt;
}
};