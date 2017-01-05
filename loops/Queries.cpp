#include<iostream>

int main() {
	unsigned int N, M;
	std::cin >> N;
	double* inputNumbers = new double[N];

	for (int i = 0; i <= N - 1; i++)
	{
		std::cin >> inputNumbers[i];
	}

	std::cin >> M;
	int* inputQueries = new int[M];

	for (int j = 0; j <= M - 1; j++)
	{
		std::cin >> inputQueries[j];
	}
	for (int i = 0; i <= M - 1; i++)
	{
		int sum = 0;
		for (int j = 0; j <= N - 1; j++)
		{
			sum += inputNumbers[j];
			if (sum >= inputQueries[i])
			{
				std::cout << j << std::endl;
				break;
			}
			else if (j == N - 1)
			{
				std::cout << -1 << std::endl;
			}
		}

	}
	return 0;
}
