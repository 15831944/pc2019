#pragma once

#include <rxboiler.h>
#include "adesk.h"
#include "dbcurve.h"
#include "stdAfx.h"


/*
* class MyClass
* ����������Զ�ʶ����.���Է���������������.
*/
class MyClass :public AcDbCurve
{
public:
	//�Զ�����������к꣬������������ʶ����.
	ACRX_DECLARE_MEMBERS(MyClass);

	MyClass();
	~MyClass();

private:
	int m_count;
};
