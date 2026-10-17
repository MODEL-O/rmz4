@ FUN_080ceef4  entry 0x080ceef4  size 64
.thumb
.org 0xceef4
FUN_080ceef4:
	push {lr}	@ 000ceef4 00b5
.org 0xceef6
	adds r2, r0, #0	@ 000ceef6 021c
.org 0xceef8
	adds r0, #140	@ 000ceef8 8c30
.org 0xceefa
	ldr r0, [r0, #0]	@ 000ceefa 0068
.org 0xceefc
	movs r1, #128	@ 000ceefc 8021
.org 0xceefe
	lsls r1, r1, #2	@ 000ceefe 8900
.org 0xcef00
	ands r0, r1	@ 000cef00 0840
.org 0xcef02
	cmp r0, #0	@ 000cef02 0028
.org 0xcef04
	beq.n 0xcef24	@ 000cef04 0ed0
.org 0xcef06
	ldr r1, [pc, #24]	@ 000cef06 0649
.org 0xcef08
	ldrb r0, [r2, #9]	@ 000cef08 507a
.org 0xcef0a
	lsls r0, r0, #2	@ 000cef0a 8000
.org 0xcef0c
	adds r0, r0, r1	@ 000cef0c 4018
.org 0xcef0e
	movs r1, #2	@ 000cef0e 0221
.org 0xcef10
	str r1, [r2, #12]	@ 000cef10 d160
.org 0xcef12
	ldr r0, [r0, #0]	@ 000cef12 0068
.org 0xcef14
	ldr r0, [r0, #8]	@ 000cef14 8068
.org 0xcef16
	str r0, [r2, #20]	@ 000cef16 5061
.org 0xcef18
	adds r0, r2, #0	@ 000cef18 101c
.org 0xcef1a
	bl 0xcef3c	@ 000cef1a 00f00ff8
.org 0xcef1e
	b.n 0xcef34	@ 000cef1e 09e0
.org 0xcef20
	.byte 0xf4,0x49,0x86,0x08	@ 000cef20 data
.org 0xcef24
	ldr r0, [pc, #16]	@ 000cef24 0448
.org 0xcef26
	ldrb r1, [r2, #16]	@ 000cef26 117c
.org 0xcef28
	lsls r1, r1, #2	@ 000cef28 8900
.org 0xcef2a
	adds r1, r1, r0	@ 000cef2a 0918
.org 0xcef2c
	ldr r1, [r1, #0]	@ 000cef2c 0968
.org 0xcef2e
	adds r0, r2, #0	@ 000cef2e 101c
.org 0xcef30
	bl 0x128f80	@ 000cef30 5af026f8
