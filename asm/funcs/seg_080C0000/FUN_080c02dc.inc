@ FUN_080c02dc  entry 0x080c02dc  size 54
.thumb
.org 0xc02dc
FUN_080c02dc:
	adds r2, r0, #0	@ 000c02dc 021c
.org 0xc02de
	ldrb r1, [r2, #10]	@ 000c02de 917a
.org 0xc02e0
	movs r0, #254	@ 000c02e0 fe20
.org 0xc02e2
	ands r0, r1	@ 000c02e2 0840
.org 0xc02e4
	movs r1, #0	@ 000c02e4 0021
.org 0xc02e6
	strb r0, [r2, #10]	@ 000c02e6 9072
.org 0xc02e8
	adds r0, r2, #0	@ 000c02e8 101c
.org 0xc02ea
	adds r0, #140	@ 000c02ea 8c30
.org 0xc02ec
	str r1, [r0, #0]	@ 000c02ec 0160
.org 0xc02ee
	adds r0, #4	@ 000c02ee 0430
.org 0xc02f0
	str r1, [r0, #0]	@ 000c02f0 0160
.org 0xc02f2
	adds r0, #4	@ 000c02f2 0430
.org 0xc02f4
	strb r1, [r0, #0]	@ 000c02f4 0170
.org 0xc02f6
	ldrb r1, [r2, #10]	@ 000c02f6 917a
.org 0xc02f8
	movs r0, #251	@ 000c02f8 fb20
.org 0xc02fa
	ands r0, r1	@ 000c02fa 0840
.org 0xc02fc
	strb r0, [r2, #10]	@ 000c02fc 9072
.org 0xc02fe
	ldr r1, [pc, #20]	@ 000c02fe 0549
.org 0xc0300
	ldrb r0, [r2, #9]	@ 000c0300 507a
.org 0xc0302
	lsls r0, r0, #2	@ 000c0302 8000
.org 0xc0304
	adds r0, r0, r1	@ 000c0304 4018
.org 0xc0306
	movs r1, #4	@ 000c0306 0421
.org 0xc0308
	str r1, [r2, #12]	@ 000c0308 d160
.org 0xc030a
	ldr r0, [r0, #0]	@ 000c030a 0068
.org 0xc030c
	ldr r0, [r0, #16]	@ 000c030c 0069
.org 0xc030e
	str r0, [r2, #20]	@ 000c030e 5061
.org 0xc0310
	bx lr	@ 000c0310 7047
