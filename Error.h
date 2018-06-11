/******************************************************************

** �ļ���: Error.h

** Copyright (c)

** ������: ̷����

** ��  ��: 2018-6-10

** ��  ��: �����쳣���� 

** ��  ��: 1.00

******************************************************************/

#ifndef __ERROR_H__
#define __ERROR_H__
#include <iostream>
using ULONG = unsigned long;

enum class ERROR :ULONG {
	LSEEK_FAILED,
	READ_FAILED,
	WRITE_FAILED
};

void DispatchError(ERROR error);

#endif