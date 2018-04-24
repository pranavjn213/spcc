EXPERIMENT NO.8

CODE:
 
#include<bits/stdc++.h>
#define FORA(i,n,ii,s) for(int i=s;i<n;i++)
#define FOR(i,n) for(int i=0;i<n;i++)
#define FORD(i,n) for(int i=n;i>=0;i--)
#define FORF(i,n,s) for(int i=s;i<n;i++)
#define MIN(x,y) ((x<y)?x:y)
#define MAX(x,y) ((x>y)?x:y)
#define ll long long
#define il long
#define ii pair<int,int>
#define vll vector<ll>
#define vi vector<int>
#define vii vector<ii>
#define MOD (int)(1e9 + 7)
#define INF (int)(1e9)
#define INFLL (ll)(1e18)
#define flash ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

map<char,string> assm;

int main(){
 flash;
 assm['='] = "MOV";
 assm['+'] = "ADD";
 assm['-'] = "SUB";
 assm['*'] = "MUL";
 assm['/'] = "DIV";
 string inp;
 int rg_no = 0;
 vector<string> stk;
 cin>>inp;
 string tem = "";
 int lsi=0;
 char orp = '=';
 FOR(i,inp.size()){
  if(inp[i] != '='){
   tem += inp[i];
  }
  else {lsi=i; break;}
 }
 stk.push_back(tem);
 tem = "";
 bool fl = false;
 FORF(i,inp.size(),lsi+1){
  if(inp[i] != '+' && inp[i] != '-' && inp[i] != '*' && inp[i] != '/'){
   tem += inp[i];
  }
  else {lsi=i;fl=true;break;}
 }
 stk.push_back(tem);
 if(fl){
  orp=inp[lsi];
  tem = "";
  FORF(i,inp.size(),lsi+1){
   if(inp[i] != '+' && inp[i] != '-' && inp[i] != '*' && inp[i] != '/'){
    tem += inp[i];
   }
   else {lsi=i;fl=true;break;}
  }
  stk.push_back(tem);
 }
 if(fl){
  cout<<"MOV R"<<rg_no<<" "<<stk.back()<<endl;
  rg_no++;
  stk.pop_back();
  cout<<"MOV R"<<rg_no<<" "<<stk.back()<<endl;
  stk.pop_back();
  cout<<assm[orp]<<"R"<<(rg_no)<<"R"<<(rg_no-1)<<endl;
  cout<<"MOV"<<stk.back()<<"R"<<(rg_no)<<endl;
  stk.pop_back();
 }
 else{
  cout<<"MOV R"<<rg_no<<" "<<stk.back()<<endl;
  stk.pop_back();
  rg_no++;
 }
 return 0;
}
 

/*OUTPUT:
a=b*f
MOV R0 f
MOV R1 b
MUL R1 R0
MOV a R1

A=b
MOV R0 b
