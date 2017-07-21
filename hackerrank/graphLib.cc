#include <iostream>
#include <string.h>
#include <sstream>
#include <array>
using namespace std;
void printArray(int** adj, int n)
{
	for(int a = 0; a< n ; a++)
	{
		for(int b = 0; b < n; b++)
		{
			cout<<adj[a][b]<<" ";
		}
		cout<<endl;
	}
}
void reader(int** to, int& n)
{
	string input;
	string word;
	getline(cin, input);
	istringstream iss(input);
	iss>>word;
	int x,y;
	int queries = stoi(word);
	for(int a = 0; a < queries; a++)
	{
			
			getline(cin, input);
			istringstream iss(input);
			iss>>word;
			n = stoi(word);
			iss>>word;
			int roads = stoi(word);
			iss>>word;
			int libCost = stoi(word);
			iss>>word;
			int roadCost = stoi(word);
			int** adj = new int*[n];
			for(int k =0; k < n; k++)
			{
				adj[k] = new int[n];
			}
			
			for( int u = 0; u< roads; u++)
			{
			getline(cin, input);
			istringstream iss(input);
			iss>>word;
			x = stoi(word);
			iss>>word;
			y = stoi(word);
			adj[x-1][y-1] = 1;
			adj[y-1][x-1] = 1;
				
			}
			
			
			printArray(adj,n);
		
	}
}
