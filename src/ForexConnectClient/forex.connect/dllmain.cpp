// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

BOOST_PYTHON_MODULE(forexconnect)
{
	export_AccountsColumnsEnum();
	export_TradesColumnsEnum();
	export_ClosedTradesColumnsEnum();
	export_MessagesColumnsEnum();
	export_OffersColumnsEnum();
	export_OrdersColumnsEnum();
	export_SummariesColumnsEnum();
	export_O2GEnum();
	export_IAddRefClass();
	export_IO2GLastOrderUpdateResponseReader();
	export_IO2GMarketDataResponseReader();
	export_IO2GMarketDataSnapshotResponseReader();
	export_IO2GOrderResponseReader();
	export_IO2GSystemPropertiesReader();
	export_IO2GTablesUpdatesReader();
	export_IO2GTimeConverter();
	export_IO2GAccountRow();
	export_IO2GClosedTradeRow();
	export_IO2GMessageRow(); 
	export_IO2GOfferRow();
	export_IO2GOrderRow();
	export_IO2GSummaryRow();
	export_IO2GTradeRow();
	export_IO2GTableColumn();
};


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
};