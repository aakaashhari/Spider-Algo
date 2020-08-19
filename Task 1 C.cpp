#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;
vector<int> corseq = {10,8,7,16,9,43};//given sequence of nos in random order
int pro[4];//array to store product values

int main()
{
	for(int i = 0; i < 4; i++)//asking 4 queries and getting their respective products
	{
		cout << i + 1 << " " << i + 2 << endl;
		cout<<flush;
		cin >> pro[i];
	}
	do//getting permutation of all possible products and checking them with the obtained product
	{
		bool correct = true;
		for(int i = 0; i < 4; i++)
			correct= correct&(corseq[i] * corseq[i + 1] == pro[i]);
		if(correct==true) 
		break;
	}
	while(next_permutation(corseq.begin(), corseq.end()));
	
	for(int i = 0; i < 6; i++)//outputting the required nos in correct sequence
		cout  << corseq[i]<<" ";
	cout << endl;
	cout<<flush;
	return 0;
}
