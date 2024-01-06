#include<iostream>
#include<unordered_map>
using namespace std;


int main()
{
    int n;
    cin >> n;
    unordered_map<string,int>g;
    for(int i=0;i<n;i++)
    {
        string t;
        cin>>t;
        g[t]++;
    }
    string w;
    int mxg=0;
    for(auto& e:g){
        if(e.second>mxg)
        {
            mxg=e.second;
            w=e.first;
        }
    }
    cout<< w<<endl;
}