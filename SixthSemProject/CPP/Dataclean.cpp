#include<bits/stdc++.h>
using namespace std;
int main (int argc, char const* argv[])
{
	string s1,s2,s3,s4,s;
	char ch;
	while(getline(cin,s))
	{
		istringstream iss(s);
		iss>>s1>>s2>>s3;
		cout<<s2<<","<<s3<<",";
		while(iss>>s3)
		{
			string cp;
			for(auto ii:s3)if(ii!='"'&&ii!=',')cp+=ii;
			cout<<cp<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
