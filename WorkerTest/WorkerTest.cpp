// WorkerTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define _LIB_PATH_ "F:\\SvnHome\\Common\\CommonLib"
#include <DCompute/DCompute_Includes.h>
#include <DCompute/worker.h>

#include "..\dataContract.h"

using namespace DCompute;

int _tmain(int argc, _TCHAR* argv[])
{
	CWorker worker;
	worker.create();
	worker.start();

	while(true)	Sleep(10000);

	return 0;
}

