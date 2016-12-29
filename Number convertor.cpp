#include<iostream>
using namespace std;
#include <string> 
#include <map> 
int main()
{
	string a,b; 
	map<string,int> m; 
	int s1,s2; 
	m["zero"] = 0;
	m["one"] = 1; 
	m["two"] = 2; 
	m["three"] = 3; 
	m["four"] = 4; 
	m["five"] = 5; 
	m["six"] = 6; 
	m["seven"] = 7; 
	m["eight"] = 8; 
	m["nine"] = 9; 
	m["ten"] = 10; 
	m["eleven"] = 11; 
	m["twelve"] = 12; 
	m["thirteen"] = 13;
	m["fourteen"] = 14;
	m["fifteen"] = 15;
	m["sixteen"] = 16; 
	m["seventeen"] = 17;
	m["eighteen"] = 18;
	m["nineteen"] = 19;
	m["twenty"] = 20;
	m["thirty"] = 30;
	m["forty"] = 40;
	m["fifty"] = 50;
	m["sixty"] = 60;
	m["seventy"] = 70;
	m["eighty"] = 80;
	m["ninety"] = 90;
	m["hundred"] = 100;
	m["thousand"] = 1000;
	m["million"] = 1000000; 
	while(getline(cin,a)) 
	{ 
		s1=0; 
		s2=0; 
		int f=1; 
		int i=0; 
		int q=0; 
		a+=' '; 
		while(a[i]) 
		{ 
			if(a[i]!=' ') 
			{ 
				b+=a[i]; 
			} 
			else 
			{ 
				if(b=="negative") 
					f=-1; 
				if(b=="thousand"||b=="million") 
				{ 
					if(m[b]>q) 
					{ 
						q=m[b]; 
						s2=(s2+s1)*m[b]; 
						s1=0; 
					} else 
					{ 
						s2+=s1*m[b]; 
						s1=0; 
					} 
				} 
				else if(b=="hundred") 
					s1*=m[b]; 
				else 
					s1+=m[b]; 
				b=""; 
			} 
			i++; 
		} 
		if(s1!=0) 
			s2+=s1; 
		s2*=f; 
		if(a!=" ") 
			cout<<s2<<endl; 
	} 
	return 0; 
}