#include "opendefs.h"
#include "topology.h"
#include "idmanager.h"

bool topology_isAcceptablePacket(ieee802154_header_iht* ieee802514_header) {
#ifdef FORCETOPOLOGY
	bool returnVal;
	returnVal=FALSE;
	uint16_t my_addr = idmanager_getMyID(ADDR_64B)->addr_64b[7] | (idmanager_getMyID(ADDR_64B)->addr_64b[6] << 8);
	uint16_t src_addr = ieee802514_header->src.addr_64b[7] | (ieee802514_header->src.addr_64b[6] << 8);
	switch (my_addr) {
		case 0x0001:
			if (
				src_addr==0x0002||
				src_addr==0x0003||
				src_addr==0x0004||
				src_addr==0x0005||
				src_addr==0x0006||
				src_addr==0x0007||
				src_addr==0x0008||
				src_addr==0x0009||
				src_addr==0x000a
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0002:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0003:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0004:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0005:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0006:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0007:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0008:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x0009:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
		case 0x000a:
			if (
				src_addr==0x0001
			) {
			returnVal=TRUE;
		}
		break;
	}
	return returnVal;
#else
	return TRUE;
#endif
}
