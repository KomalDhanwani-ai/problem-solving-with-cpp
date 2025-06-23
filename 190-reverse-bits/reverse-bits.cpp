class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      uint32_t result = 0;

      for(int i=0; i<32; i++)
    {
        int lastBit = n%2;
        result = result * 2 + lastBit;
        n = n / 2;
    }
    return result;
    }
};