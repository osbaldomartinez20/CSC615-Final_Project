// finalassignment.c
// Generated by decompiling finalassignment
// using Reko decompiler version 0.9.0.0.

#include "finalassignment.h"

// 0001065C: Register (ptr32 code) _init(Register (ptr32 code) lr)
<anonymous> * _init(<anonymous> * lr)
{
	return call_weak_fn(lr);
}

// 0001067C: void fn0001067C()
void fn0001067C()
{
	globals->ptr2200C();
}

// 00010688: void fn00010688()
void fn00010688()
{
	globals->ptr22010();
}

// 00010694: void fn00010694()
void fn00010694()
{
	globals->ptr22014();
}

// 000106A0: void fn000106A0()
void fn000106A0()
{
	globals->ptr22018();
}

// 000106AC: void fn000106AC()
void fn000106AC()
{
	globals->ptr2201C();
}

// 000106B8: void fn000106B8()
void fn000106B8()
{
	globals->ptr22020();
}

// 000106C4: void fn000106C4()
void fn000106C4()
{
	globals->ptr22024();
}

// 000106D0: void fn000106D0()
void fn000106D0()
{
	globals->ptr22028();
}

// 000106DC: void fn000106DC()
void fn000106DC()
{
	globals->ptr2202C();
}

// 000106E8: void fn000106E8()
void fn000106E8()
{
	globals->ptr22030();
}

// 000106F4: void fn000106F4()
void fn000106F4()
{
	globals->ptr22034();
}

// 0001070C: void fn0001070C()
void fn0001070C()
{
	globals->ptr2203C();
}

// 00010718: void fn00010718()
void fn00010718()
{
	globals->ptr22040();
}

// 00010724: void fn00010724()
void fn00010724()
{
	globals->ptr22044();
}

// 00010730: void fn00010730()
void fn00010730()
{
	globals->ptr22048();
}

// 0001073C: void fn0001073C()
void fn0001073C()
{
	globals->ptr2204C();
}

// 00010748: void fn00010748()
void fn00010748()
{
	globals->ptr22050();
}

// 00010754: void fn00010754()
void fn00010754()
{
	globals->ptr22054();
}

// 00010760: void fn00010760()
void fn00010760()
{
	globals->ptr22058();
}

// 0001076C: void fn0001076C()
void fn0001076C()
{
	globals->ptr2205C();
}

// 00010778: void _start()
void _start()
{
	fn000106F4();
	fn0001076C();
	if (Z)
		call_weak_fn(null);
}

// 000107B4: Register (ptr32 code) call_weak_fn(Register (ptr32 code) lr)
<anonymous> * call_weak_fn(<anonymous> * lr)
{
	if (0x000107C4 + globals->dw107D0 + globals->dw107D4 != 0x00)
	{
		<anonymous> * lr_16;
		globals->ptr22038();
		return lr_16;
	}
	else
	{
		<anonymous> * lr_23;
		lr();
		return lr_23;
	}
}

// 000107D8: void deregister_tm_clones(Register (ptr32 code) lr)
void deregister_tm_clones(<anonymous> * lr)
{
	if (globals->dw107FC != globals->dw107F8)
	{
		<anonymous> * r3_8 = globals->ptr10800;
		if (r3_8 != null)
		{
			word32 lr_15;
			r3_8();
		}
		else
			lr();
	}
	else
		lr();
}

// 00010804: void register_tm_clones(Register (ptr32 code) lr)
void register_tm_clones(<anonymous> * lr)
{
	int32 r1_6 = globals->dw10834 - globals->dw10830;
	if ((r1_6 >> 0x02) + (r1_6 >> 33) >> 0x01 != 0x00)
	{
		<anonymous> * r3_12 = globals->ptr10838;
		if (r3_12 != null)
		{
			word32 lr_18;
			r3_12();
		}
		else
			lr();
	}
	else
		lr();
}

// 0001083C: void __do_global_dtors_aux(Register (ptr32 code) lr)
void __do_global_dtors_aux(<anonymous> * lr)
{
	byte * r4_8 = globals->ptr10860;
	if ((word32) *r4_8 != 0x00)
		return;
	deregister_tm_clones(lr);
	*r4_8 = 0x01;
}

// 00010864: void frame_dummy(Register (ptr32 code) lr)
void frame_dummy(<anonymous> * lr)
{
	register_tm_clones(lr);
}

// 00010868: void cleanUp()
void cleanUp()
{
	echoSensorCleanUp();
	lineSensorsCleanUp();
	motorsCleanUp();
	fn00010718();
	setUp(0x00);
}

// 00010884: void setUp(Register word32 r0)
void setUp(word32 r0)
{
	lineSensorSetup(motorsSet(r0));
	echoSensorSet();
	speedSensorSet();
}

// 000108A4: void moveforward(Register word32 fpscr)
void moveforward(word32 fpscr)
{
	fn000106E8();
	fn000106D0();
	if (fp != 0x5C)
		fn00010688();
	fn000106D0();
	if (fp != 0x60)
		fn00010688();
	fn000106D0();
	if (fp != 100)
		fn00010688();
	fn000106D0();
	if (fp != 0x68)
		fn00010688();
	fn000106E8();
	fn00010754();
	fn00010754();
	fn00010754();
	fn00010754();
	if (Test(LE,SLICE(fpscr, bool, 2)) || (uint32) ((byte) (isObjectInFront() ^ 0x01)) == 0x00)
	{
		decreaseMotorPowerToZero();
		readDistance();
	}
	else
	{
		fn000106D0();
		if (fp != 0x6C)
			fn00010688();
		fn000106D0();
		if (fp != 0x70)
			fn00010688();
		fn00010754();
		fn00010754();
		readDistance();
	}
}

// 00010BC0: void main(Register word32 fpscr)
void main(word32 fpscr)
{
	fn000106AC();
	setUp(0x02);
	moveforward(fpscr);
}

// 00010BF8: Register word32 motorsSet(Register word32 r0)
word32 motorsSet(word32 r0)
{
	fn00010730();
	if (r0 == 0x01)
	{
		fn000106C4();
		fn00010718();
	}
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010760();
	if (0x00 != 0x00)
		fn000106C4();
	fn00010760();
	if (0x06 != 0x00)
		fn000106C4();
	fn00010760();
	if (0x0C != 0x00)
		fn000106C4();
	fn00010760();
	word32 r0_112 = 0x1A;
	if (0x1A != 0x00)
	{
		r0_112 = globals->dw10D68;
		fn000106C4();
	}
	return r0_112;
}

// 00010D6C: void motorMove(Register word32 r3)
void motorMove(word32 r3)
{
	fn000106B8();
	fn0001073C();
	if (r3 != 0x00)
	{
		fn000106B8();
		fn000106B8();
	}
	else
	{
		fn000106B8();
		fn000106B8();
	}
}

// 00010DEC: void decreaseMotorPowerToZero()
void decreaseMotorPowerToZero()
{
	fn000106B8();
	fn000106B8();
	fn000106B8();
	fn000106B8();
	int32 dwLoc0C_59;
	for (dwLoc0C_59 = 0x14; dwLoc0C_59 > 0x00; dwLoc0C_59 -= 0x0A)
	{
		fn0001073C();
		fn0001073C();
		fn0001073C();
		fn0001073C();
	}
}

// 00010E88: void motorStop()
void motorStop()
{
	fn000106B8();
	fn000106B8();
	fn000106B8();
}

// 00010ED0: void motorToControlForward(Register (ptr32 word32) r0)
void motorToControlForward(word32 * r0)
{
	word32 r3_13 = *r0;
	if (r3_13 == 0x01)
		motorMove(0x00);
	else if (r3_13 == 0x02)
		motorMove(0x00);
	else if (r3_13 == 0x03)
		motorMove(0x01);
	else if (r3_13 == 0x04)
		motorMove(0x00);
}

// 00010F88: void motorToControlBackward(Register (ptr32 word32) r0)
void motorToControlBackward(word32 * r0)
{
	word32 r3_13 = *r0;
	if (r3_13 == 0x01)
		motorMove(0x01);
	else if (r3_13 == 0x02)
		motorMove(0x01);
	else if (r3_13 == 0x03)
		motorMove(0x00);
	else if (r3_13 == 0x04)
		motorMove(0x01);
}

// 00011040: void runMotors()
void runMotors()
{
	motorMove(0x00);
	motorMove(0x00);
	motorMove(0x01);
	motorMove(0x00);
	fn000106DC();
	motorStop();
	motorStop();
	motorStop();
	motorStop();
	fn000106DC();
	motorMove(0x01);
	motorMove(0x01);
	motorMove(0x00);
	motorMove(0x01);
}

// 00011150: void motorsCleanUp()
void motorsCleanUp()
{
	motorStop();
	motorStop();
	motorStop();
	motorStop();
}

// 000111A0: void speedSensorSet()
void speedSensorSet()
{
	fn00010730();
	fn00010724();
	fn00010724();
	fn00010724();
	fn00010724();
}

// 000111E4: void writeSpeed(Register ui32 r0, Register word64 d0)
void writeSpeed(ui32 r0, word64 d0)
{
	globals->ptr11220[r0] = d0;
}

// 00011224: void readSpeed(Register ui32 r0)
void readSpeed(ui32 r0)
{
	fn000106A0();
	word64 r3_r2_19 = globals->ptr11274[r0];
	fn0001067C();
	__vmov_f64((word64) (word32) r3_r2_19)();
}

// 00011278: void calculateAngularSpeed(Register word32 r0, Register Eq_486 d0)
void calculateAngularSpeed(word32 r0, Eq_486 d0)
{
	__vmov_f64(__vmov_f64(__vmul_f64((real64) r0, globals->t112C8) / __vmul_f64(d0, globals->t112D0))())();
}

// 000112D8: void calculateLinearSpeed()
void calculateLinearSpeed()
{
}

// 00011318: void readPulses()
void readPulses()
{
	fn00010748();
}

// 000113F8: void useSpeedSensor()
void useSpeedSensor()
{
	readPulses();
}

// 000114F0: void averageSpeed()
void averageSpeed()
{
	__vadd_f64(globals->ptr11550->qw0000, globals->ptr11550->qw0010);
	fn00010688();
}

// 00011558: void readLinePin()
void readLinePin()
{
	fn00010694();
}

// 00011580: void lineSensorsCleanUp()
void lineSensorsCleanUp()
{
	fn000106B8();
	fn000106B8();
	fn000106B8();
}

// 000115B4: void lineSensorSetup(Register word32 r0)
void lineSensorSetup(word32 r0)
{
	fn00010730();
	if (r0 == 0x01)
	{
		fn000106E8();
		fn00010718();
	}
	fn00010724();
	fn00010724();
	fn00010724();
}

// 00011618: void isOnLine(Register word32 r0)
void isOnLine(word32 r0)
{
	fn00010694();
}

// 00011650: Register uint32 isObjectInFront()
uint32 isObjectInFront()
{
	ui32 r3_21;
	fn00010694();
	if (false)
	{
		fn00010694();
		if (0x07 == 0x00)
		{
			r3_21 = 0x00;
			return (uint32) (byte) (r3_21 & 0x01);
		}
	}
	r3_21 = 0x01;
	return (uint32) (byte) (r3_21 & 0x01);
}

// 000116A0: void echoSensorSet()
void echoSensorSet()
{
	fn00010730();
	fn00010724();
	fn00010724();
	fn000106B8();
	fn000106B8();
}

// 000116E4: void calculateDistance(Register Eq_486 d0)
void calculateDistance(Eq_486 d0)
{
	__vmul_f64(d0, globals->t11720);
}

// 00011730: void prepareTrigger()
void prepareTrigger()
{
	fn000106B8();
	fn000106DC();
	fn000106B8();
}

// 00011760: Register Eq_486 getTime()
Eq_486 getTime()
{
	do
		fn00010694();
	while (22 == 0x00);
	fn0001070C();
	do
		fn00010694();
	while (0x15 == 0x00);
	fn0001070C();
	real64 d7_43 = (real64) 0x00 / globals->r117F8;
	fn00010688();
	return __vmov_f64((word64) (word32) d7_43)();
}

// 00011804: void useEchoSensor()
void useEchoSensor()
{
	fn000106E8();
	prepareTrigger();
	calculateDistance(__vmov_f64(__vmov_f64((word64) getTime())())());
}

// 00011848: void readDistance()
void readDistance()
{
	prepareTrigger();
	calculateDistance(__vmov_f64(__vmov_f64((word64) getTime())())());
}

// 00011880: void displayDistance()
void displayDistance()
{
	prepareTrigger();
	calculateDistance(__vmov_f64(__vmov_f64((word64) getTime())())());
}

// 000118B4: void echoSensorCleanUp()
void echoSensorCleanUp()
{
	fn000106B8();
	fn000106B8();
}

// 000118DC: void __libc_csu_init(Register word32 r0, Register word32 r1, Register word32 r2, Register word32 r10, Register (ptr32 code) lr)
void __libc_csu_init(word32 r0, word32 r1, word32 r2, word32 r10, <anonymous> * lr)
{
	<anonymous> ***** r5_25 = 0x000118F8 + globals->dw11938;
	word32 r6_26 = 0x000118F4 + Mem18[0x00011934:word32] - r5_25;
	word32 r7_21 = r0;
	word32 r8_28 = r1;
	word32 r9_30 = r2;
	word32 lr_32 = _init(lr);
	int32 r6_38 = r6_26 >> 0x02;
	if (r6_26 >> 0x02 == 0x00)
		return;
	int32 r4_41 = 0x00;
	do
	{
		word32 pc_69;
		word32 r3_72;
		(*r5_25)();
	} while (r6_38 != r4_41);
}

// 0001193C: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 00011940: void _fini()
void _fini()
{
}

