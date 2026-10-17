@ FUN_0803f5d4  entry 0x0803f5d4  size 48
.thumb
.org 0x3f5d4
FUN_0803f5d4:
	adds r2, r0, #0	@ 0003f5d4 021c
.org 0x3f5d6
	adds r0, #140	@ 0003f5d6 8c30
.org 0x3f5d8
	movs r1, #0	@ 0003f5d8 0021
.org 0x3f5da
	str r1, [r0, #0]	@ 0003f5da 0160
.org 0x3f5dc
	adds r0, #4	@ 0003f5dc 0430
.org 0x3f5de
	str r1, [r0, #0]	@ 0003f5de 0160
.org 0x3f5e0
	adds r0, #4	@ 0003f5e0 0430
.org 0x3f5e2
	strb r1, [r0, #0]	@ 0003f5e2 0170
.org 0x3f5e4
	ldrb r1, [r2, #10]	@ 0003f5e4 917a
.org 0x3f5e6
	movs r0, #251	@ 0003f5e6 fb20
.org 0x3f5e8
	ands r0, r1	@ 0003f5e8 0840
.org 0x3f5ea
	movs r1, #254	@ 0003f5ea fe21
.org 0x3f5ec
	ands r0, r1	@ 0003f5ec 0840
.org 0x3f5ee
	strb r0, [r2, #10]	@ 0003f5ee 9072
.org 0x3f5f0
	ldr r1, [pc, #16]	@ 0003f5f0 0449
.org 0x3f5f2
	ldrb r0, [r2, #9]	@ 0003f5f2 507a
.org 0x3f5f4
	lsls r0, r0, #2	@ 0003f5f4 8000
.org 0x3f5f6
	adds r0, r0, r1	@ 0003f5f6 4018
.org 0x3f5f8
	movs r1, #4	@ 0003f5f8 0421
.org 0x3f5fa
	str r1, [r2, #12]	@ 0003f5fa d160
.org 0x3f5fc
	ldr r0, [r0, #0]	@ 0003f5fc 0068
.org 0x3f5fe
	ldr r0, [r0, #16]	@ 0003f5fe 0069
.org 0x3f600
	str r0, [r2, #20]	@ 0003f600 5061
.org 0x3f602
	bx lr	@ 0003f602 7047
