Problem Statement: https://www.codechef.com/problems/RURT

First, we input the integers X & Y- the number of kilometers Chef can run before needing a rest, and the total distance of the race in kilometers.
Obviously if X is >= Y, then Chef will not stop before completing the race so answer will be 0.

If not then we can divide (Y-1) by X and take the integer part of it to get the no. of times Chef will stop before completing the race. We report/print this.
This is because if Y/X is an integer, then we need to subtract 1 from it and report the answer. Integer part of (Y-1)/X gives the same result.
If Y/X is not an integer, then we need to report the integer part of Y/X only which is same as integer part of (Y-1)/X.
So this way, for X<Y; we can directly report integer part of (Y-1)/X for all such cases.
