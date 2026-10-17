@ FUN_0804be80  entry 0x0804be80  size 48
.thumb
.org 0x4be80
FUN_0804be80:
	adds r2, r0, #0	@ 0004be80 021c
.org 0x4be82
	adds r0, #140	@ 0004be82 8c30
.org 0x4be84
	movs r1, #0	@ 0004be84 0021
.org 0x4be86
	str r1, [r0, #0]	@ 0004be86 0160
.org 0x4be88
	adds r0, #4	@ 0004be88 0430
.org 0x4be8a
	str r1, [r0, #0]	@ 0004be8a 0160
.org 0x4be8c
	adds r0, #4	@ 0004be8c 0430
.org 0x4be8e
	strb r1, [r0, #0]	@ 0004be8e 0170
.org 0x4be90
	ldrb r1, [r2, #10]	@ 0004be90 917a
.org 0x4be92
	movs r0, #251	@ 0004be92 fb20
.org 0x4be94
	ands r0, r1	@ 0004be94 0840
.org 0x4be96
	movs r1, #254	@ 0004be96 fe21
.org 0x4be98
	ands r0, r1	@ 0004be98 0840
.org 0x4be9a
	strb r0, [r2, #10]	@ 0004be9a 9072
.org 0x4be9c
	ldr r1, [pc, #16]	@ 0004be9c 0449
.org 0x4be9e
	ldrb r0, [r2, #9]	@ 0004be9e 507a
.org 0x4bea0
	lsls r0, r0, #2	@ 0004bea0 8000
.org 0x4bea2
	adds r0, r0, r1	@ 0004bea2 4018
.org 0x4bea4
	movs r1, #4	@ 0004bea4 0421
.org 0x4bea6
	str r1, [r2, #12]	@ 0004bea6 d160
.org 0x4bea8
	ldr r0, [r0, #0]	@ 0004bea8 0068
.org 0x4beaa
	ldr r0, [r0, #16]	@ 0004beaa 0069
.org 0x4beac
	str r0, [r2, #20]	@ 0004beac 5061
.org 0x4beae
	bx lr	@ 0004beae 7047
