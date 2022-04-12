#include <bits/stdc++.h>
using namespace std;

string T[4201];
int wczytajObrazki(){
  ifstream in ("dane_obrazki.txt");
  for (int w=0;w<4400;w++) 
    in>>T[w];
  in.close();  
}

void wypiszObrazek(int i){
	cout<<"\nObrazek "<<i/21<<"\n";	
	for (int w=i;w<i+21;w++) {
	  	//cout<<"\n"<<w<<"\n";
	    for (int k=0;k<21;k++)
	      cout<<T[w][k];
	    cout<<"\n";
	    }      
}

int rewers(int i){
	int czarne=0;
	for (int w=i;w<i+20;w++) {
	    for (int k=0;k<20;k++)
	      if(T[w][k]=='1')
	    	czarne++;
	    }  
	//cout<<"\nczarne: "<<czarne;
	return czarne>200;    
}

void zad1(){
	int rewersy=0;
	for (int i=0;i<4200;i+=21) 
		if (rewers(i))
			rewersy++;
	cout<<"\nOdp1: "<<rewersy;			
}


int main() {
  int n=200*22;
  
  wczytajObrazki();
  zad1();
//  for (int i=0;i<4200;i+=21) {
//    wypiszObrazek(i);    
//  }
  
  
}

