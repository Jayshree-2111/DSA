/*Problem: Given an N bit binary number, find the 1's complement of the number. 
The ones' complement of a binary number is defined as the value obtained by inverting 
all the bits in the binary representation of the number (swapping 0s for 1s and vice versa). */

/* Example 1: 
Input:
N = 3
S = 101
Output:
010
Explanation:
We get the output by converting 1's in S
to 0 and 0s to 1
*/



class Solution{ 
public:
    string onesComplement(string S,int N){
        for(int i=0; i<=N ;i++)
        {
            if(S[i]=='1')
                S[i]='0';
            else
                S[i]='1';
        }
        return S;
    }
};
