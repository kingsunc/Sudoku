#pragma once

#define MAX_COUNT		9

class CElement
{
public:
	CElement(): iValue(0), bIsTrue(false)
	{
	}

	int		iValue;
	bool	bIsTrue;
};

class CSudoku
{
public:
	CSudoku();
	~CSudoku();

	void InitTrue();

	int Calculate(int col, int row);

	void Reset();

	void Print();

protected:

	bool HasEqual(int arr[MAX_COUNT]);

	bool IsValid();

public:
	CElement	m_arrSudoku[MAX_COUNT][MAX_COUNT];
};