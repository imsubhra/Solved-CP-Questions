#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll t;
  cin >> t ;
  while(t--)
  {

    int flag =0 ,count=1;
    string s,p ;
    cin >> s >> p ;
    int a[26]={0};
    int b[26]={0};
    for(int i=0;i<s.length();i++)
    {
      a[s[i]-97] ++ ;

    }

    for(int i=0;i<p.length();i++)
    {
      b[p[i]-97]++;

    }
    int ca=0;
    char ch=p[0];
    for(int i=1;i<p.length();i++)
    {
        int y=p[i]-'a';
        int z=p[0]-'a';
        if (y < z)
			{
				ca = 1;
				break;
			}
			else if (y >z)
			{
				break;
			}
    }
    string r = "";
    for(int i=0;i<26;i++)
		{

			char c = i + 'a';
			if (c == p[0])
			{

				int u = a[i] - b[i];
				if (ca == 0)
				{
					for(int k=0;k< u;k++)
					{
						r += c;
					}
					r += p;
				}
				else
				{
					r += p;
					for(int k=0;k<u;k++)
					{
						r += c;
					}

				}

			}
			else
			{
				int u = a[i] - b[i];

				for(int k=0;k<u;k++)
				{
					r += c;
				}
			}

		}
		cout << r ;

    cout<<"\n" ;

  }
  return 0;
}#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll t;
  cin >> t ;
  while(t--)
  {

    int flag =0 ,count=1;
    string s,p ;
    cin >> s >> p ;
    int a[26]={0};
    int b[26]={0};
    for(int i=0;i<s.length();i++)
    {
      a[s[i]-97] ++ ;

    }

    for(int i=0;i<p.length();i++)
    {
      b[p[i]-97]++;

    }
    int ca=0;
    char ch=p[0];
    for(int i=1;i<p.length();i++)
    {
        int y=p[i]-'a';
        int z=p[0]-'a';
        if (y < z)
			{
				ca = 1;
				break;
			}
			else if (y >z)
			{
				break;
			}
    }
    string r = "";
    for(int i=0;i<26;i++)
		{

			char c = i + 'a';
			if (c == p[0])
			{

				int u = a[i] - b[i];
				if (ca == 0)
				{
					for(int k=0;k< u;k++)
					{
						r += c;
					}
					r += p;
				}
				else
				{
					r += p;
					for(int k=0;k<u;k++)
					{
						r += c;
					}

				}

			}
			else
			{
				int u = a[i] - b[i];

				for(int k=0;k<u;k++)
				{
					r += c;
				}
			}

		}
		cout << r ;

    cout<<"\n" ;

  }
  return 0;
}
