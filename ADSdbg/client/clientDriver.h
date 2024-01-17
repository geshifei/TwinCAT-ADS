///////////////////////////////////////////////////////////////////////////////
// clientDriver.h

#ifndef __CLIENTDRIVER_H__
#define __CLIENTDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define CLIENTDRV_NAME        "CLIENT"
#define CLIENTDRV_Major       1
#define CLIENTDRV_Minor       0

#define DEVICE_CLASS CclientDriver

#include "ObjDriver.h"

class CclientDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl CLIENTDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(CLIENTDRV)
	VxD_Service( CLIENTDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __CLIENTDRIVER_H__