/* Following program is a C++ implementation of Rabin Karp */
#include<bits/stdc++.h>
#include<string>
using namespace std;
// d is the number of characters in input alphabet
#define d 256
 
/* pat -> pattern
    txt -> text
    q -> A prime number
*/
long long findMinHashDiff(string text,string pattern)
{
   long long int M = pattern.size();
  long long  int N = text.size();
   long long  int i, j;
   long long  int p = 0; // hash value for pattern
  long long   int t = 0; // hash value for txt
  long long   int h = 1,val,v;
 
    // The value of h would be "pow(d, M-1)%q"
    for (i = 0; i < M-1; i++)
        h = (h*d)%1000000007;
 
    // Calculate the hash value of pattern and first
    // window of text
    for (i = 0; i < M; i++)
    {
        p = (d*p + pattern[i])%1000000007;
        t = (d*t + text[i])%1000000007;
    }
 val=abs(t-p);
    // Slide the pattern over text one by one
    for (i = 0; i <= N - M; i++)
    {
 
        // Check the hash values of current window of text
        // and pattern. If the hash values match then only
        // check for characters on by one
        if ( p == t )
        {
            /* Check for characters one by one */
            for (j = 0; j < M; j++)
            {
                if (text[i+j] != pattern[j])
                    break;
            }
 
            // if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1]
           // if (j == M)
             //   printf("Pattern found at index %lld \n", i);
        }
 
        // Calculate hash value for next window of text: Remove
        // leading digit, add trailing digit
        if ( i < N-M )
        {
            t = (d*(t - text[i]*h) + text[i+M])%1000000007;
 
            // We might get negative value of t, converting it
            // to positive
            if (t < 0)
            t = (t + 1000000007);
            v= abs(t-p);
            if(v>val)
            val=v;
        }
    }
   return val;
}
 
/* Driver program to test above function */
int main()
{long long int vl;
 string text = "GEEKS FOR GEEKS";
    string pattern = "GEEK";
 
    // A prime number
   vl= findMinHashDiff( text, pattern);
    cout<<vl<<endl;
    return 0;
}
