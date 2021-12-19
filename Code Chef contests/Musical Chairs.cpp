/*
There are N friends who decided to play the game of musical chairs one day.

Initially they decide a number K and with each passing round they remove exactly K chairs. Hence, in each round exactly K players are eliminated. The game stops when less than or exactly K players remain in the game.

Now, Chef wants to figure out for how many possible values of K there will be exactly one winner in the game.

Input Format
The first line contains T - the number of test cases. Then the test cases follow.
The first line of each test case contain N - the number of friends in the game.
Output Format
For each test case, output in a single line a integer that denotes the number of values of K for which there will be exactly one winner.

Constraints
1≤T≤100
2≤N≤109
Sample Input 1 
3
2
3
4
Sample Output 1 
1
2
2
Explanation
Test case 1: There will be only one winner if the friends remove exactly 1 chair each round.
Test case 2: There will be only one winner if the friends remove 1 or 2 chairs each round.
Test case 3: There will be only one winner if the friends remove 1 or 3 chairs each round. If they remove 2 chairs then there will be two winners.
Author:	6★utkarsh_25dec
Tester:	6★aryanc403
Tags:	Tags are hidden. Show temporarily
Update this setting in edit profile


Problem level:	Unavailable
Date Added:	17-12-2021
Time Limit:	1 secs
Source Limit:	50000 Bytes
Languages:	CPP14, C, JAVA, PYTH 3.6, CPP17, PYTH, PYP3, CS2, ADA, PYPY, TEXT, PAS fpc, NODEJS, RUBY, PHP, GO, HASK, TCL, PERL, SCALA, LUA, kotlin, BASH, JS, LISP sbcl, rust, PAS gpc, BF, CLOJ, R, D, CAML, FORT, ASM, swift, FS, WSPC, LISP clisp, SQL, SCM guile, PERL6, ERL, CLPS, ICK, NICE, PRLG, ICON, COB, SCM chicken, PIKE, SCM qobi, ST, SQLQ, NEM
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n--;
        int res = 0;
        for (int i=1; i<=sqrt(n); i++)
        {
            if (n%i == 0)
            {
            if (n/i == i)
                res++;
            else
                res+=2;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
