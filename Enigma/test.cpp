#include <bits/stdc++.h>
using namespace std;
int main (int argc, char const* argv[])
{
	ofstream f("train1.csv");
	for (int  i = 1; i < 271; i += 1)
	{
		f<<i<<',';
	}
	f.close();
	return 0;
}
