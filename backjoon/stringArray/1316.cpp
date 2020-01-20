#include<iostream>
#include<string>
using namespace std;

int count = 0; 

int check_word(string s){
	int word_size = s.size();
	
	for (int i = 0; i < word_size - 2; i++)
	{
		if (s[i] != s[i + 1]) 
		{
			for (int j = i + 2; j < word_size; j++)
				if (s[j] == s[i])
					return count;
		}

	}

	count++; 
	
	return count;
}

int main(){
	cin.tie(NULL); 
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;
	
	string str;

	for (int i = 0; i < num; i++)
	{
		cin >> str;
		check_word(str);
	}

	cout << count;

	return 0;
}

