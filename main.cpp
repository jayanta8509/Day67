/*Bricks Breaking

For her next karate demonstration, Arunima will break some bricks.

Arunima stacked three bricks on top of each other. Initially, their widths (from
top to bottom) are W1,W2,W3.

Arunima strength is S. Whenever she hits a stack of bricks, consider the largest
k≥0 such that the sum of widths of the topmost k bricks does not exceed S; the
topmost k bricks break and are removed from the stack. Before each hit, Arunima
may also decide to reverse the current stack of bricks, with no cost.

Find the minimum number of hits Arunima needs in order to break all bricks if
she performs the reversals optimally. You are not required to minimize the
number of reversals.

Input

The first line of the input contains a single integer T denoting the number of
test cases. The description of T test cases follows.

The first and only line of each test case contains four space-separated integers
S, W1, W2 and W3.

Output

For each test case, print a single line containing one integer ? the minimum
required number of hits.

Sample Input 1

3

3 1 2 2

2 1 1 1

3 2 2 1

Sample Output 1

2

2

2







*/

#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int s, w1, w2, w3;
    cin >> s >> w1 >> w2 >> w3;
    if (w1 + w2 + w3 <= s) {
      cout << 1 << endl;
    } else if (w1 + w2 <= s || w2 + w3 <= s) {
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
  }
  return 0;
}
