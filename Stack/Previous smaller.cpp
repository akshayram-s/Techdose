#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
  	    cin>>arr[i];
    }
    stack<int>st;
    st.push(arr[0]);
    cout<<"-1 ";
    for(int i=1;i<n;i++){
        if(arr[i]>st.top()){
            cout<<st.top()<<" ";
            st.push(arr[i]);
        }
        else{
            while(!st.empty()){
                if(st.top()<arr[i]){
                    cout<<st.top()<<" ";
                    break;
                }
                st.pop();
            }
            if(st.empty())
                cout<<"-1 ";
            st.push(arr[i]);
        }
    }
    return 0;
}
