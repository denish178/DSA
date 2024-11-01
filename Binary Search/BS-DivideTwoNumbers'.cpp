#include <iostream>
using namespace std;

double getQuotient(int divisor, int dividend){
  int s = 0;
  int e = abs(dividend);
  double ans = -1;

  while(s<=e) {
    int mid = s + (e-s)/2;

    if(divisor*mid == dividend){
      return mid;
    }
    else if(divisor*mid < dividend){
      ans = mid;
      s = mid + 1;
    }
    else {
      e = mid-1;
    }
  }
  double increment = 0.1;
  for(int i=0;i<2;i++){
    while(ans*divisor <= dividend){
      ans += increment;
    }
    ans -= increment;
    increment /=10;
  }
  return ans;
}

int main() {
  
  int divisor = 5;
  int dividend = 24;

  double ans = getQuotient(abs(divisor),abs(dividend));

  if((divisor>0 && dividend<0) || (divisor<0 && dividend>0)){
    ans = 0-ans;
  }

  cout << "Answer is " << ans << endl;
}