#include<iostream>
#include<string>
using namespace std;
int n;
string sour;

int * findnext(string p)
{
	int i, k;
	int m = p.length();
	int *next = new int[m];
	next[0] = -1;
	i = 0, k = -1;
	while (i<m - 1)
	{
		while (k >= 0 && p[i] != p[k])
		{
			k = next[k];
		}
		i++; k++;

		next[i] = k;

	}
	return next;
}
int main()
{
	int fol = 0;
	while (cin >> n)
	{
		fol++;
		if (!n)break;
		cin >> sour;
		sour.push_back('1');
		int * N;
		N = findnext(sour);
		cout << "Test case #" << fol << endl;
		for (int i = 2; i <= n; i++)
		{
			if (N[i]>0 && (i % (i - N[i]) == 0))
			{
				cout << i << ' ' << i / (i - N[i]) << endl;
			}
		}
		cout << endl;
	}

	return 0;
}