#include <bits/stdc++.h>
using namespace std;

void ceilingLeft(int arr[] , int n) {
    set<int> s;

    s.insert(arr[0]);



    for(int i = 1; i < n; i++) {

        auto it = s.upper_bound(arr[i]);
    
       if(it != s.end())
       {
           cout<<*(it)<<" ";
       }
       else{
           cout<<-1<<" ";

       }

       s.insert(arr[i]);

    }


}

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<-1<<" ";
    ceilingLeft(arr,n);
}