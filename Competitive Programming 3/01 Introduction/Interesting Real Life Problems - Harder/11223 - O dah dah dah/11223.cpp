#include <bits/stdc++.h>
using namespace std;
#define forr(i,a,b) for(int i=(a); i<(b);i++)
#define dfor(i,a,b) for(int i=(a);i>=(b);i--)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) dfor(i,n,0)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define fst first
#define snd second
#define dbg(v) cout << #v" = "<<v<<endl//;)
typedef long long ll;
typedef pair<int,int> ii;

map<string,char> sc;
string s;
int T;

int main(){
	
	sc[".-"]='A';
	sc["-..."]='B';
	sc["-.-."]='C';
	sc["-.."]='D';
	sc["."]='E';
	sc["..-."]='F';
	sc["--."]='G';
	sc["...."]='H';
	sc[".."]='I';
	sc[".---"]='J';
	sc["-.-"]='K';
	sc[".-.."]='L';
	sc["--"]='M';
	sc["-."]='N';
	sc["---"]='O';
	sc[".--."]='P';
	sc["--.-"]='Q';
	sc[".-."]='R';
	sc["..."]='S';
	sc["-"]='T';
	sc["..-"]='U';
	sc["...-"]='V';
	sc[".--"]='W';
	sc["-..-"]='X';
	sc["-.--"]='Y';
	sc["--.."]='Z';
	sc["-----"]='0';
	sc[".----"]='1';
	sc["..---"]='2';
	sc["...--"]='3';
	sc["....-"]='4';
	sc["....."]='5';
	sc["-...."]='6';
	sc["--..."]='7';
	sc["---.."]='8';
	sc["----."]='9';
	sc[".-.-.-"]='.';
	sc["--..--"]=',';
	sc["..--.."]='?';
	sc[".----."]='\'';
	sc["-.-.--"]='!';
	sc["-..-."]='/';
	sc["-.--."]='(';
	sc["-.--.-"]=')';
	sc[".-..."]='&';
	sc["---..."]=':';
	sc["-.-.-."]=';';
	sc["-...-"]='=';
	sc[".-.-."]='+';
	sc["-....-"]='-';
	sc["..--.-"]='_';
	sc[".-..-."]='"';
	sc[".--.-."]='@';
	
	cin>>T;
	int caso=1;
	cin.ignore();
	string ss;
	while(T--){
		getline(cin,s);
		ss.clear();
		cout << "Message #" << caso++ << "\n";
		
		forn(i,(int)s.length()-1){
			if(s[i]==' '){
				cout<<sc[ss];
				if(s[i+1]==' '){cout << " ";i++;}
				ss.clear();
			}else ss.pb(s[i]);
		}
		if(s[s.length()-1]!=' ')ss.pb(s[s.length()-1]);
		cout << sc[ss] << "\n";		
		if(T>0)cout<<"\n";
	}
	
	
	
	
	return 0;
}

