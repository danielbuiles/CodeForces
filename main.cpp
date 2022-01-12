#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<string>
#include<algorithm>
#include<cctype>
#include<map>

using namespace std;

void pintar(vector<int> arr){
  cout<<"[";
  for(int a=0;a<arr.size();a++){
    cout<<arr[a]<<",";
  }
  cout<<"]";
}

int main(){
  vector<int> v;
  int aux,num;
  string b="p";

  srand(time(NULL));

  for(int i=0;i<=100;i++){
    v.push_back(1+rand()%(1000-1));
  }

  for(int i=0;i<v.size();i++){
    for(int j=0;j<v.size()-1;j++){
      if(v[j]>v[j+1]){
        aux=v[j+1];
        v[j+1]=v[j];
        v[j]=aux;
      }
    }
  }

  cout<<"                       NUMEROS GENERADOS ALEATORIAMENTE              \n"<<endl;
  pintar(v);

  cout<<"\n \nindixe de numero a buscar: ";cin>>num;

  return 0;
}


