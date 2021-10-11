#include <iostream>
#include <string>

struct Matrix {

	int m[11][11] = {
		{0,0,0,0,0,1,0,0,0,0,0},
		{0,0,0,0,1,0,1,1,1,0,0},
		{0,0,0,1,0,0,0,1,1,0,0},
		{0,0,1,0,0,0,0,1,1,0,0},
		{0,0,1,0,1,1,1,0,1,0,0},
		{0,0,1,0,1,0,1,0,1,0,0},
		{0,0,1,0,1,1,1,0,1,0,0},
		{0,0,1,0,0,0,0,0,1,0,0},
		{0,0,1,1,1,1,1,1,1,0,0},
		{0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0}
	};

	void transpose90()
	{
		int temp[11][11];
		const int COL_COUNT = 11;

		for (int i = 0; i < COL_COUNT; ++i)
		{
			for (int j = i; j < COL_COUNT; ++j)
			{
				//temp[i][j] = m[i][j];
			}
		}

		for (int i = 0; i < COL_COUNT; ++i)
		{
			for (int j = i; j < COL_COUNT; ++j)
			{
				int tempInt = m[i][j];
				m[i][j] = m[j][i];
				m[j][i] = tempInt;

				/*temp[i][j] = m[j][i];
				temp[j][i] = m[i][j];*/
			}
		}

		for (int i = 0; i < COL_COUNT; ++i)
		{
			for (int j = 0; j < COL_COUNT / 2; ++j)
			{
				int tempInt = m[i][j];
				m[i][j] = m[i][COL_COUNT - 1 - j];
				m[i][COL_COUNT - 1 - j] = tempInt;

				/*temp[i][j] = m[i][COL_COUNT - 1 - j];
				temp[i][COL_COUNT - 1 - j] = m[j][i];*/
			}
		}

		for (int i = 0; i < COL_COUNT; ++i)
		{
			for (int j = 0; j < COL_COUNT; ++j)
			{
				//m[i][j] = temp[i][j];
			}
		}
	}

	void cout()
	{
		for (int y = 0; y < 11; y++)
		{
			for (int x = 0; x < 11; x++)
			{
				if (m[y][x] != 0)
				{
					std::cout << std::to_string(m[y][x]) << "   ";
				}
				else
				{
					std::cout << "    ";
				}
			}
			std::cout << std::endl;
		}
	}
};