@ FUN_0801ad74  entry 0x0801ad74  size 86
.thumb
.org 0x1ad74
FUN_0801ad74:
	push {r4, r5, lr}	@ 0001ad74 30b5
.org 0x1ad76
	adds r4, r0, #0	@ 0001ad76 041c
.org 0x1ad78
	adds r5, r1, #0	@ 0001ad78 0d1c
.org 0x1ad7a
	ldr r0, [pc, #16]	@ 0001ad7a 0448
.org 0x1ad7c
	ldr r1, [pc, #16]	@ 0001ad7c 0449
.org 0x1ad7e
	adds r0, r0, r1	@ 0001ad7e 4018
.org 0x1ad80
	ldrb r3, [r0, #0]	@ 0001ad80 0378
.org 0x1ad82
	cmp r3, #63	@ 0001ad82 3f2b
.org 0x1ad84
	bhi.n 0x1ad94	@ 0001ad84 06d8
.org 0x1ad86
	movs r3, #0	@ 0001ad86 0023
.org 0x1ad88
	b.n 0x1adb6	@ 0001ad88 15e0
.org 0x1ad8a
	.byte 0x00	@ 0001ad8a data
.org 0x1ad8b
	.byte 0x00	@ 0001ad8b data
.org 0x1ad8c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001ad8c data
.org 0x1ad90
	.byte 0x2a,0xd0,0x02,0x00	@ 0001ad90 data
.org 0x1ad94
	cmp r3, #127	@ 0001ad94 7f2b
.org 0x1ad96
	bhi.n 0x1ada0	@ 0001ad96 03d8
.org 0x1ad98
	adds r0, r3, #0	@ 0001ad98 181c
.org 0x1ad9a
	subs r0, #64	@ 0001ad9a 4038
.org 0x1ad9c
	lsls r0, r0, #14	@ 0001ad9c 8003
.org 0x1ad9e
	b.n 0x1adb4	@ 0001ad9e 09e0
.org 0x1ada0
	cmp r3, #191	@ 0001ada0 bf2b
.org 0x1ada2
	bhi.n 0x1ada8	@ 0001ada2 01d8
.org 0x1ada4
	movs r3, #16	@ 0001ada4 1023
.org 0x1ada6
	b.n 0x1adb6	@ 0001ada6 06e0
.org 0x1ada8
	adds r1, r3, #0	@ 0001ada8 191c
.org 0x1adaa
	subs r1, #192	@ 0001adaa c039
.org 0x1adac
	asrs r1, r1, #2	@ 0001adac 8910
.org 0x1adae
	movs r0, #16	@ 0001adae 1020
.org 0x1adb0
	subs r0, r0, r1	@ 0001adb0 401a
.org 0x1adb2
	lsls r0, r0, #16	@ 0001adb2 0004
.org 0x1adb4
	lsrs r3, r0, #16	@ 0001adb4 030c
.org 0x1adb6
	ldr r2, [pc, #28]	@ 0001adb6 074a
.org 0x1adb8
	movs r1, #31	@ 0001adb8 1f21
.org 0x1adba
	ands r1, r3	@ 0001adba 1940
.org 0x1adbc
	movs r0, #16	@ 0001adbc 1020
.org 0x1adbe
	subs r0, r0, r3	@ 0001adbe c01a
.org 0x1adc0
	lsls r0, r0, #8	@ 0001adc0 0002
.org 0x1adc2
	orrs r1, r0	@ 0001adc2 0143
.org 0x1adc4
	strh r1, [r2, #2]	@ 0001adc4 5180
.org 0x1adc6
	adds r0, r4, #0	@ 0001adc6 201c
.org 0x1adc8
	adds r1, r5, #0	@ 0001adc8 291c
