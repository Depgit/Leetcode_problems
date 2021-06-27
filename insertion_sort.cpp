#include <bits/std++.h>

using namespace std;

void insertion_sort(int v[], int n){
    for(int i=0;i<n;i++){
        int val = v[i];
        int l = i;
        for(int j=i-1;j>=0 ;j--){
            if(v[j]>=val){
                swap(v[l],v[j]);l = j;
            }
            if(val > v[j])break;
        }
    }
}

int main(){
  int n = 6;
  int a[6] = {3,2,5,4,6,1};
  insertion_sort(a,n);
  for(int i=0;i<n;i++){
   cout<<a[i]<<" ";
  }
}
