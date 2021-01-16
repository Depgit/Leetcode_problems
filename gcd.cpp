#include <bits/stdc++.h>
using namespace std;


// to find gcd in recursive way
int gcdrec (int a, int b) {
    return b ? gcd (b, a % b) : a;
}

// to find gcd in iterative way
int gcditr (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main(){
  int a,b;cin>>a>>b;
  // to find gcd using built in function just type  __gcd(a,b) it will return an integer i.e gcd of a and b
  cout<<__gcd(a,b)<<endl;
  cout<<gcdrec(a,b)<<endl;
  cout<<gcditr(a,b)<<endl;
}
