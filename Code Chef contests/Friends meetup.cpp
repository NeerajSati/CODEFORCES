/*
Chef and his friend is standing on the X-axis at the points X1 and X2 respectively.

Chef moves one step forward each second (that is he moves to X1+1 after the 1st second, X1+2 after the 2nd second, and so on), whereas his friend moves 2 steps forward each second (that is he moves to X2+2 after the 1st second, X2+4 after the 2nd second, and so on).

You need to determine if Chef will be able to meet his friend or not. You can assume that Chef and his friend both keep on moving for a long indefinite amount of time and also that they move simultaneously.

Input Format
The first line contains T - the number of test cases. Then the test cases follow.
The first line of each test case contain two space-separated integers X1 and X2 - the position of Chef and his friend at the start respectively.
Output Format
For each test case, output on a single line YES (without quotes) if Chef can meet his friend, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, YEs, yes and yeS will all be treated as identical).

Constraints
1≤T≤105
1≤X1,X2≤109
Sample Input 1 
3
1 1
1 7
7 1
Sample Output 1 
YES
NO
YES
Explanation
Test case 1: Chef and his friend are on the same coordinate initially. Hence, they have already met.
Test case 2: No matter for how long they move Chef and his friend will never meet.
Test case 3: After 6 seconds, Chef and his friend both will be at X=13.
Author:	6★ashishgup
Tester:	6★aryanc403
Tags:	Tags are hidden. Show temporarily
Update this setting in edit profile


Problem level:	Unavailable
Date Added:	16-12-2021
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
        int x1,x2;
        cin>>x1>>x2;
        if(x1<x2)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
