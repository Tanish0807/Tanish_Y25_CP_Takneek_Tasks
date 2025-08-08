Problem Statement: https://www.codechef.com/problems/XLSL

First, we input the integer T (I called it n), which is essentially the no of test cases. We'll run the rest of the program T times, for which we set up a while loop with an iterand i.

Then in every iteration, we input the integers x,y,z,a,b,c and just define a variable t which is total no of people
Now, we'll have to setup a multi-nested if-else statements which will check all the possibilities of relation between different sizes and different kinds of people.
Like if no. of XL T shirts is more than no. of people requiring XL T-shirts, then all such people will be happy and we check for the other people. Moreover, we may have some XL T-shirts left which could be changed and used to satisfy the other kinds of people.

If not then some of these people will be unhappy and then we move on to the other kinds of people.

Similarly, an entire nested if-else setup is written which is quite self-explanatory.
