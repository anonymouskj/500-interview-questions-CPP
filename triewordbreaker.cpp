#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    vector<node*>var(26,NULL);
    bool eoword;
    
    node(){
        eoword=false;  
    }
};
void insert(node *root,string s){
    node *temp=root;
    for(int i=0;i<s.length();i++){
        int x=str[i]-'a';
        if(!temp->var[i])
          temp->var[x]=new node();
          
          temp=temp->var[x];
    }
    temp->eoword=true;
}
bool check(node *root,string k,int wc){
    if(s.length()==0)
       return wc>-1;
       
       node *temp=root;
       for(int i=0;i<k.length();i++){
           int x=k[i]-'a';
           
           if(!temp->var[x])
              return false;
              
         temp=temp->var[x];
         
                  if(check(root,substr(i+1,wc+1)))
                       return true;
       }
     return false;  
}
int main(){
    node *root= new node();
    int n;
    cin>>n;
    string str,k;
    for(int i=0;i<n;i++){
        cin>>str;
        insert(root,str);
    }
    cin>>k;
   cout<<(check(root,k,0)?1:0)<<endl;    
    return 0;
}