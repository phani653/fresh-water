#include<stdio.h>
int max(int a,int b){
	return a>b?a:b;
}
int rec(n){
	if(n<=3) return n;
	return max(n,2*rec(n-3));
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",rec(n));
	return 0;
}
/*
/ A recursive function that returns the optimal length string 
// for N keystrokes
int findoptimal(int N)
{
    // The optimal string length is N when N is smaller than 7
    if (N <= 6)
        return N;
 
    // Initialize result
    int max = 0;
 
    // TRY ALL POSSIBLE BREAK-POINTS
    // For any keystroke N, we need to loop from N-3 keystrokes
    // back to 1 keystroke to find a breakpoint 'b' after which we
    // will have Ctrl-A, Ctrl-C and then only Ctrl-V all the way.
    int b;
    for (b=N-3; b>=1; b--)
    {
            // If the breakpoint is s at b'th keystroke then
            // the optimal string would have length
            // (n-b-1)*screen[b-1];
            int curr = (N-b-1)*findoptimal(b);
            if (curr > max)
                max = curr;
     }
     return max;
}
 
// Driver program
int main()
{
    int N;
 
    // for the rest of the array we will rely on the previous
    // entries to compute new ones
    for (N=1; N<=20; N++)
        printf("Maximum Number of A's with %d keystrokes is %d\n",
               N, findoptimal(N));
}
*/
/*
/ this function returns the optimal length string for N keystrokes
int findoptimal(int N)
{
    // The optimal string length is N when N is smaller than 7
    if (N <= 6)
        return N;
 
    // An array to store result of subproblems
    int screen[N];
 
    int b;  // To pick a breakpoint
 
    // Initializing the optimal lengths array for uptil 6 input
    // strokes.
    int n;
    for (n=1; n<=6; n++)
        screen[n-1] = n;
 
    // Solve all subproblems in bottom manner
    for (n=7; n<=N; n++)
    {
        // Initialize length of optimal string for n keystrokes
        screen[n-1] = 0;
 
        // For any keystroke n, we need to loop from n-3 keystrokes
        // back to 1 keystroke to find a breakpoint 'b' after which we
        // will have ctrl-a, ctrl-c and then only ctrl-v all the way.
        for (b=n-3; b>=1; b--)
        {
            // if the breakpoint is at b'th keystroke then
            // the optimal string would have length
            // (n-b-1)*screen[b-1];
            int curr = (n-b-1)*screen[b-1];
            if (curr > screen[n-1])
                screen[n-1] = curr;
        }
    }
 
    return screen[N-1];
}
 
// Driver program
int main()
{
    int N;
 
    // for the rest of the array we will rely on the previous
    // entries to compute new ones
    for (N=1; N<=20; N++)
        printf("Maximum Number of A's with %d keystrokes is %d\n",
               N, findoptimal(N));
}
*/
