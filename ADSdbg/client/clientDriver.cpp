///////////////////////////////////////////////////////////////////////////////
// clientDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "clientDriver.h"
#include "clientClassFactory.h"

DECLARE_GENERIC_DEVICE(CLIENTDRV)

IOSTATUS CclientDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CclientClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CclientDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CclientDriver::CLIENTDRV_GetVersion( )
{
	return( (CLIENTDRV_Major << 8) | CLIENTDRV_Minor );
}

