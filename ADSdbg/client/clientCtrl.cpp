// clientCtrl.cpp : Implementation of CTcclientCtrl
#include "TcPch.h"
#pragma hdrstop

#include "clientW32.h"
#include "clientCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CclientCtrl

CclientCtrl::CclientCtrl() 
	: ITcOCFCtrlImpl<CclientCtrl, CclientClassFactory>() 
{
}

CclientCtrl::~CclientCtrl()
{
}

