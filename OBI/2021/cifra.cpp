#include <bits/stdc++.h>
using namespace std;

string alfabeto = "abcdefghijklmnopqrstuvwxyz";
char consoantes[] = "bcdfghjklmnpqrstvwxyz";
string vogal = "aeiou";

unordered_map<char,char> consVog = {{'b','a'},{'c','a'},{'d','e'},{'f','e'},{'g','e'},{'h','i'},{'j','i'},{'k','i'},{'l','i'},{'m','o'},{'n','o'},{'p','o'},{'q','o'},{'r','o'},{'s','u'},{'t','u'},{'v','u'},{'w','u'},{'x','u'},{'y','u'},{'z','u'}}; 

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string word;
  
  //while(true){
  cin>>word;  
  
  for(char c : word){
    if(binary_search(vogal.begin(), vogal.end(), c)) cout<<c;    
    else{
      char cons = c=='z'?'z':*(find(consoantes, &consoantes[21], c)+1);
      cout<<c<<consVog[c]<<cons;
      }
  }
  cout<<"\n";
  //}

  //char * c = find(consoantes, &consoantes[21], 'f');
  //cout<<*(find(consoantes, &consoantes[21], 't')+1);
  
  //cout<<consVog['b'];
  
  //cout<<word+"20";


  return 0;
}