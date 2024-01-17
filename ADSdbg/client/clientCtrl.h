///////////////////////////////////////////////////////////////////////////////
// clientCtrl.h

#ifndef __CLIENTCTRL_H__
#define __CLIENTCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "clientW32.h"
#include "TcBase.h"
#include "clientClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CclientCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CclientCtrl, &CLSID_clientCtrl>
	, public IclientCtrl
	, public ITcOCFCtrlImpl<CclientCtrl, CclientClassFactory>
{
public:
	CclientCtrl();
	virtual ~CclientCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_CLIENTCTRL)
DECLARE_NOT_AGGREGATABLE(CclientCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CclientCtrl)
	COM_INTERFACE_ENTRY(IclientCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __CLIENTCTRL_H__
