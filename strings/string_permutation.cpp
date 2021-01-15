#include <iostream>
#include <algorithm>
using namespace std;

static void permute(string s, int l, int h)
{
	if (l == h) {
		cout << s << endl;
		return;
	}
	for (int i = l; i <= h; i++)
	{
		std::swap(s[i], s[l]);
		permute(s, l + 1, h);
		std::swap(s[i], s[l]);
	}
}
int main()
{
	string s = "abc";
	permute(s, 0, s.length()-1);
	return 0;
}