<h2>458. Poor Pigs</h2>
There are buckets buckets of liquid, where ***exactly one*** of the buckets is poisonous. 
To figure out which one is poisonous, you feed some number of (poor) pigs the liquid to see whether they will die or not. 
Unfortunately, you only have ***minutesToTest*** minutes to determine which bucket is poisonous.

You can feed the pigs according to these steps:

1. Choose some live pigs to feed.
2. For each pig, choose which buckets to feed it. The pig will consume all the chosen buckets simultaneously and will take no time.
3. Wait for ***minutesToDie*** minutes. You may not feed any other pigs during this time.
4. After minutesToDie minutes have passed, any pigs that have been fed the poisonous bucket will die, and all others will survive.
5. Repeat this process until you run out of time.

Given ***buckets***, ***minutesToDie***, and ***minutesToTest***, return the ***minimum number*** of pigs needed to figure out which bucket is poisonous within the allotted time.

**This problem is provide by leetcode:https://leetcode.com/problems/poor-pigs/**

<h2>Solution start here</h2>

* Test one round take ***minutesToDie***, so we can only have (***minutesToTest***/***minutesToDie***) rounds can test.
* After testing process is finished, each test will have T+1 outcomes.<br>(A pig can die in first round, second round, ....., T round, or this pig is survived)
* So P pigs can test (T+1)^P buckets. 
* (T+1)^p >= ***buckets***
* We need to find P to get the answer, so using log( ) function 
* Hence: P * log(T+1) >= log(***buckets***)
* P = log(***buckets***)/log(T+1)
* (T+1) is equal to (***minutesToTest***/***minutesToDie***)+1
* By using the ceil function, we get the final answer: ceil(log(***buckets***) / log((***minutesToTest*** / ***minutesToDie***) + 1));

**The process of solving this problem made reference to https://leetcode.com/problems/poor-pigs/discuss/2385451/C%2B%2B-oror-Detail-Explanation-oror-1-Line-Codeoror-100-Fast**
