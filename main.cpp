#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<string>

using namespace std;

int way_to_long_words(){
  string palabra,last,first;
  int ciclo,i=0;
  cin>>ciclo;
  while(i<ciclo){
    cin>>palabra;
    if(palabra.size()>10){
      for(int i=0;i<palabra.size();i++){
        if(i==0){
          first=palabra[i];
        }else if(i==palabra.size()-1){
          last=palabra[i];
        }
      }
      cout<<first<<to_string(palabra.size()-2)<<last<<endl;
    }else{
      cout<<palabra<<endl;
    }
    i++;
  }
  return 0;
}

int main(){
  way_to_long_words();
  system("pause");
  return 0;
}