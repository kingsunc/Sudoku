#include "stdafx.h"
#include "Sudoku.h"


CSudoku::CSudoku()
{
}

CSudoku::~CSudoku()
{
}

int CSudoku::Calculate(int col, int row)
{
	if (!IsValid())
	{
		return 0;
	}

	if (MAX_COUNT == col)
	{
		return 1;
	}

	int newcol = col;
	int newrow = row + 1;
	if (MAX_COUNT == newrow)
	{
		newcol = col + 1;
		newrow = 0;
	}

	CElement& elemet = m_arrSudoku[col][row];
	if (elemet.bIsTrue)
	{
		// 已确定;
		return Calculate(newcol, newrow);
	}
	else
	{
		int iOldValue = elemet.iValue;
		// 未确定;
		int iTemp = 0;
		for (int Attempt = 1; Attempt <= MAX_COUNT; Attempt++ )
		{
			elemet.iValue = Attempt;
			//Print();
			if (Calculate(newcol, newrow))
			{
				break;
			}
			else
			{
				if (MAX_COUNT == Attempt)
				{
					// 最后一个元素都不满足,还原;
					elemet.iValue = iOldValue;
					return 0;
				}
			}
		}
	}

	return 1;
}

void CSudoku::InitTrue()
{
	for (int col = 0; col < MAX_COUNT; col++)
	{
		for (int row = 0; row < MAX_COUNT; row++)
		{
			if (m_arrSudoku[col][row].iValue >= 1 && m_arrSudoku[col][row].iValue <= 9)
			{
				m_arrSudoku[col][row].bIsTrue = true;
			}
			else
			{
				m_arrSudoku[col][row].bIsTrue = false;
			}
		}
	}
}

void CSudoku::Reset()
{
	for (int col = 0; col < MAX_COUNT; col++)
	{
		for (int row = 0; row < MAX_COUNT; row++)
		{
			m_arrSudoku[col][row].iValue = 0;
			m_arrSudoku[col][row].bIsTrue = false;
		}
	}
}

void CSudoku::Print()
{
	for (int col = 0; col < MAX_COUNT; col++)
	{
		for (int row = 0; row < MAX_COUNT; row++)
		{
			printf(" %d", m_arrSudoku[col][row].iValue);
		}
		printf("\n");
	}
	printf("\n");
}

bool CSudoku::HasEqual(int arr[MAX_COUNT])
{
	for (int i = 0; i < MAX_COUNT; i++)
	{
		for (int j = i + 1; j < MAX_COUNT; j++)
		{
			if (arr[i] > 0 && arr[j] > 0 && arr[i] == arr[j])
			{
				return true;
			}
		}
	}

	return false;
}

bool CSudoku::IsValid()
{
	int arr[MAX_COUNT] = { 0 };

	// 检查所有行;
	{
		for (int col = 0; col < MAX_COUNT; col++)
		{
			for (int row = 0; row < MAX_COUNT; row++)
			{
				arr[row] = m_arrSudoku[col][row].iValue;
			}

			if (HasEqual(arr))
			{
				return false;
			}
		}
	}

	// 检查所有列;
	{
		for (int row = 0; row < MAX_COUNT; row++)
		{ 
			for (int col = 0; col < MAX_COUNT; col++)
			{
				arr[col] = m_arrSudoku[col][row].iValue;
			}

			if (HasEqual(arr))
			{
				return false;
			}
		}
	}

	// 检查所有列;
	{
		for (int row = 0; row < MAX_COUNT; row++)
		{
			for (int col = 0; col < MAX_COUNT; col++)
			{
				arr[col] = m_arrSudoku[col][row].iValue;
			}

			if (HasEqual(arr))
			{
				return false;
			}
		}
	}

	{
		arr[0] = m_arrSudoku[0][0].iValue;
		arr[1] = m_arrSudoku[0][1].iValue;
		arr[2] = m_arrSudoku[0][2].iValue;
		arr[3] = m_arrSudoku[1][0].iValue;
		arr[4] = m_arrSudoku[1][1].iValue;
		arr[5] = m_arrSudoku[1][2].iValue;
		arr[6] = m_arrSudoku[2][0].iValue;
		arr[7] = m_arrSudoku[2][1].iValue;
		arr[8] = m_arrSudoku[2][2].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}
	{
		arr[0] = m_arrSudoku[0][3].iValue;
		arr[1] = m_arrSudoku[0][4].iValue;
		arr[2] = m_arrSudoku[0][5].iValue;
		arr[3] = m_arrSudoku[1][3].iValue;
		arr[4] = m_arrSudoku[1][4].iValue;
		arr[5] = m_arrSudoku[1][5].iValue;
		arr[6] = m_arrSudoku[2][3].iValue;
		arr[7] = m_arrSudoku[2][4].iValue;
		arr[8] = m_arrSudoku[2][5].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}
	{
		arr[0] = m_arrSudoku[0][6].iValue;
		arr[1] = m_arrSudoku[0][7].iValue;
		arr[2] = m_arrSudoku[0][8].iValue;
		arr[3] = m_arrSudoku[1][6].iValue;
		arr[4] = m_arrSudoku[1][7].iValue;
		arr[5] = m_arrSudoku[1][8].iValue;
		arr[6] = m_arrSudoku[2][6].iValue;
		arr[7] = m_arrSudoku[2][7].iValue;
		arr[8] = m_arrSudoku[2][8].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}

	{
		arr[0] = m_arrSudoku[3][0].iValue;
		arr[1] = m_arrSudoku[3][1].iValue;
		arr[2] = m_arrSudoku[3][2].iValue;
		arr[3] = m_arrSudoku[4][0].iValue;
		arr[4] = m_arrSudoku[4][1].iValue;
		arr[5] = m_arrSudoku[4][2].iValue;
		arr[6] = m_arrSudoku[5][0].iValue;
		arr[7] = m_arrSudoku[5][1].iValue;
		arr[8] = m_arrSudoku[5][2].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}
	{
		arr[0] = m_arrSudoku[3][3].iValue;
		arr[1] = m_arrSudoku[3][4].iValue;
		arr[2] = m_arrSudoku[3][5].iValue;
		arr[3] = m_arrSudoku[4][3].iValue;
		arr[4] = m_arrSudoku[4][4].iValue;
		arr[5] = m_arrSudoku[4][5].iValue;
		arr[6] = m_arrSudoku[5][3].iValue;
		arr[7] = m_arrSudoku[5][4].iValue;
		arr[8] = m_arrSudoku[5][5].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}
	{
		arr[0] = m_arrSudoku[3][6].iValue;
		arr[1] = m_arrSudoku[3][7].iValue;
		arr[2] = m_arrSudoku[3][8].iValue;
		arr[3] = m_arrSudoku[4][6].iValue;
		arr[4] = m_arrSudoku[4][7].iValue;
		arr[5] = m_arrSudoku[4][8].iValue;
		arr[6] = m_arrSudoku[5][6].iValue;
		arr[7] = m_arrSudoku[5][7].iValue;
		arr[8] = m_arrSudoku[5][8].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}

	{
		arr[0] = m_arrSudoku[6][0].iValue;
		arr[1] = m_arrSudoku[6][1].iValue;
		arr[2] = m_arrSudoku[6][2].iValue;
		arr[3] = m_arrSudoku[7][0].iValue;
		arr[4] = m_arrSudoku[7][1].iValue;
		arr[5] = m_arrSudoku[7][2].iValue;
		arr[6] = m_arrSudoku[8][0].iValue;
		arr[7] = m_arrSudoku[8][1].iValue;
		arr[8] = m_arrSudoku[8][2].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}
	{
		arr[0] = m_arrSudoku[6][3].iValue;
		arr[1] = m_arrSudoku[6][4].iValue;
		arr[2] = m_arrSudoku[6][5].iValue;
		arr[3] = m_arrSudoku[7][3].iValue;
		arr[4] = m_arrSudoku[7][4].iValue;
		arr[5] = m_arrSudoku[7][5].iValue;
		arr[6] = m_arrSudoku[8][3].iValue;
		arr[7] = m_arrSudoku[8][4].iValue;
		arr[8] = m_arrSudoku[8][5].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}
	{
		arr[0] = m_arrSudoku[6][6].iValue;
		arr[1] = m_arrSudoku[6][7].iValue;
		arr[2] = m_arrSudoku[6][8].iValue;
		arr[3] = m_arrSudoku[7][6].iValue;
		arr[4] = m_arrSudoku[7][7].iValue;
		arr[5] = m_arrSudoku[7][8].iValue;
		arr[6] = m_arrSudoku[8][6].iValue;
		arr[7] = m_arrSudoku[8][7].iValue;
		arr[8] = m_arrSudoku[8][8].iValue;

		if (HasEqual(arr))
		{
			return false;
		}
	}

	return true;
}
