#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; 
    cin >> n; 
    vector<int>arr(n);
    for(int i = 0 ; i< n; i++){
        cin >> arr[i];
    }
    
        int t =0 ; 
        int f = 0 ;
        bool ans = true;
        for(int i =0 ; i< n ; i++){
            if(arr[i] == 25){
                t++;
            }
            else if(arr[i] == 50){
                if(t){
                    f++;
                    t--;
                }
                else{
                    ans = false;
                }
            }
            else{
                if(f >= 1 && t >= 1){
                    f--;
                    t--;
                }
                else if(t >=3){
                    t = t -3; 
                }
                else{
                    ans = false;
                }
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
