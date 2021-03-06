#include "stdafx.h"
#include "Adj_Max.h"
#define Total_No 1024

Adj_Max::Adj_Max()
{
	AdMax = new double[Total_No];
	for (int i = 0; i < Total_No; i++)
	{
		AdMax[i] = 0;
	}
}


Adj_Max::~Adj_Max()
{
	delete[]AdMax;
}

void Adj_Max::Sort_Max()
{
	m_Max = AdMax[0];
	for (int i = 1; i < m_Data_No; i++)
	{
		if (m_Max < AdMax[i])
			m_Max = AdMax[i]; // 최대값 설정
	}
	for (int i = 0; i < m_Data_No; i++)
	{
		AdMax[i] = AdMax[i] / m_Max; // 최대값 1로 정규화
	}
}