// Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
#include<iostream>
using namespace std;

 int countFriendsPairings(int n) 
    { 
        
        if(n<=2) return n;
        return countFriendsPairings(n-1)+ (n-1)*countFriendsPairings(n-2);
    }

int main() {

  int n;
  cin >> n;

  int ans = countFriendsPairings(n);
  cout << ans << endl;

  return 0;
}
