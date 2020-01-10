#pragma once

#define NUMCOMMANDS 8 //How many aclycic commands want to be send

enum ethercatCommandTypes {
	NOP = 0, APRD, APWR, APRW,
	FPRD, FPWR, FPRW,
	BRD, BWR, BRW,
	LRD, LWR, LRW,
	ARMW
};


int ecmAsyncRequest_cnt = 0; //Counter of ecmAsyncRequest() done
