@ FUN_0801d390  entry 0x0801d390  size 52
.thumb
.org 0x1d390
FUN_0801d390:
	push {lr}	@ 0001d390 00b5
.org 0x1d392
	adds r3, r0, #0	@ 0001d392 031c
.org 0x1d394
	ldrb r1, [r3, #11]	@ 0001d394 d97a
.org 0x1d396
	movs r0, #4	@ 0001d396 0420
.org 0x1d398
	ands r0, r1	@ 0001d398 0840
.org 0x1d39a
	cmp r0, #0	@ 0001d39a 0028
.org 0x1d39c
	beq.n 0x1d3ac	@ 0001d39c 06d0
.org 0x1d39e
	adds r2, r3, #0	@ 0001d39e 1a1c
.org 0x1d3a0
	adds r2, #34	@ 0001d3a0 2232
.org 0x1d3a2
	ldr r0, [pc, #4]	@ 0001d3a2 0148
.org 0x1d3a4
	b.n 0x1d3b2	@ 0001d3a4 05e0
.org 0x1d3a6
	.byte 0x00	@ 0001d3a6 data
.org 0x1d3a7
	.byte 0x00	@ 0001d3a7 data
.org 0x1d3a8
	.byte 0x40,0xdc,0x02,0x02	@ 0001d3a8 data
.org 0x1d3ac
	adds r2, r3, #0	@ 0001d3ac 1a1c
.org 0x1d3ae
	adds r2, #34	@ 0001d3ae 2232
.org 0x1d3b0
	ldr r0, [pc, #24]	@ 0001d3b0 0648
.org 0x1d3b2
	ldrb r1, [r3, #30]	@ 0001d3b2 997f
.org 0x1d3b4
	lsls r1, r1, #1	@ 0001d3b4 4900
.org 0x1d3b6
	adds r1, r1, r0	@ 0001d3b6 0918
.org 0x1d3b8
	ldrh r0, [r1, #0]	@ 0001d3b8 0888
.org 0x1d3ba
	ldrb r2, [r2, #0]	@ 0001d3ba 1278
.org 0x1d3bc
	adds r0, r0, r2	@ 0001d3bc 8018
.org 0x1d3be
	lsls r0, r0, #16	@ 0001d3be 0004
.org 0x1d3c0
	lsrs r0, r0, #16	@ 0001d3c0 000c
.org 0x1d3c2
	lsls r0, r0, #24	@ 0001d3c2 0006
