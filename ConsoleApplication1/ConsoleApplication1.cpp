#include<iostream>
using namespace std;
int main()
{
	int cases;
	cin >> cases;
	for (int i = 0; i < cases; i++)
	{
		int M, N, O, P;
		int result = 0;
		cin >> M >> N;
		int** MATA = new int* [M];
		for (int i = 0; i < M; i++)
		{
			MATA[i] = new int[N];
		}
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> MATA[i][j];
			}
		}
		cin >> O >> P;
		int** MATB = new int* [O];
		for (int i = 0; i < O; i++)
		{
			MATB[i] = new int[P];
		}
		for (int i = 0; i < O; i++)
		{
			for (int j = 0; j < P; j++)
			{
				cin >> MATB[i][j];
			}
		}
		if (N == O)
		{
			int** MATC = new int* [M];
			for (int i = 0; i < M; i++)
			{
				MATC[i] = new int[P];
			}
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < P; j++)
				{
					MATC[i][j] = 0;
				}
			}
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < P; j++)
				{
					for (int k = 0; k < N; k++)
					{
						MATC[i][j] += MATA[i][k] * MATB[k][j];
					}
				}
			}
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < P; j++)
				{
					result += MATC[i][j];
				}
			}
			cout << "case#" << i + 1 << ": " << result << endl;
		}
		else if (N == P)
		{

			int** MATC = new int* [M];
			for (int i = 0; i < M; i++)
			{
				MATC[i] = new int[O];
			}
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < O; j++)
				{
					MATC[i][j] = 0;
				}
			}
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < O; j++)
				{
					for (int k = 0; k < N; k++)
					{
						MATC[i][j] += MATA[i][k] * MATB[j][k];
					}
				}
			}
			for (int i = 0; i < M; i++)
			{
				for (int j = 0; j < O; j++)
				{
					result += MATC[i][j];
				}
			}
			cout << "case#" << i + 1 << ": " << result << endl;
		}
		else
		{
			cout << "case#" << i + 1 << ": " << "not possible" << endl;
		}
		
	}
}