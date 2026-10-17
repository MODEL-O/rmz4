@ FUN_08085fe4  entry 0x08085fe4  size 94
.thumb
.org 0x85fe4
FUN_08085fe4:
	push {r4, r5, r6, r7, lr}	@ 00085fe4 f0b5
.org 0x85fe6
	adds r6, r0, #0	@ 00085fe6 061c
.org 0x85fe8
	adds r7, r1, #0	@ 00085fe8 0f1c
.org 0x85fea
	lsls r2, r2, #24	@ 00085fea 1206
.org 0x85fec
	lsrs r5, r2, #24	@ 00085fec 150e
.org 0x85fee
	lsls r3, r3, #24	@ 00085fee 1b06
.org 0x85ff0
	lsrs r4, r3, #24	@ 00085ff0 1c0e
.org 0x85ff2
	ldr r0, [pc, #80]	@ 00085ff2 1448
.org 0x85ff4
	ldr r0, [r0, #0]	@ 00085ff4 0068
.org 0x85ff6
	bl 0x5500	@ 00085ff6 7ff783fa
.org 0x85ffa
	adds r3, r0, #0	@ 00085ffa 031c
.org 0x85ffc
	cmp r3, #0	@ 00085ffc 002b
.org 0x85ffe
	beq.n 0x8603a	@ 00085ffe 1cd0
.org 0x86000
	adds r1, r3, #0	@ 00086000 191c
.org 0x86002
	adds r1, #37	@ 00086002 2531
.org 0x86004
	movs r2, #0	@ 00086004 0022
.org 0x86006
	movs r0, #24	@ 00086006 1820
.org 0x86008
	strb r0, [r1, #0]	@ 00086008 0870
.org 0x8600a
	ldr r1, [pc, #60]	@ 0008600a 0f49
.org 0x8600c
	movs r0, #7	@ 0008600c 0720
.org 0x8600e
	strb r0, [r3, #9]	@ 0008600e 5872
.org 0x86010
	ldr r0, [r1, #28]	@ 00086010 c869
.org 0x86012
	ldr r0, [r0, #0]	@ 00086012 0068
.org 0x86014
	str r0, [r3, #20]	@ 00086014 5861
.org 0x86016
	movs r0, #0	@ 00086016 0020
.org 0x86018
	strh r2, [r3, #32]	@ 00086018 1a84
.org 0x8601a
	adds r1, r3, #0	@ 0008601a 191c
.org 0x8601c
	adds r1, #34	@ 0008601c 2231
.org 0x8601e
	strb r0, [r1, #0]	@ 0008601e 0870
.org 0x86020
	ldrb r1, [r3, #11]	@ 00086020 d97a
.org 0x86022
	movs r0, #16	@ 00086022 1020
.org 0x86024
	orrs r0, r1	@ 00086024 0843
.org 0x86026
	strb r0, [r3, #11]	@ 00086026 d872
.org 0x86028
	ldrb r0, [r3, #28]	@ 00086028 187f
.org 0x8602a
	strb r0, [r3, #29]	@ 0008602a 5877
.org 0x8602c
	str r6, [r3, #40]	@ 0008602c 9e62
.org 0x8602e
	ldr r0, [r7, #0]	@ 0008602e 3868
.org 0x86030
	ldr r1, [r7, #4]	@ 00086030 7968
.org 0x86032
	str r0, [r3, #84]	@ 00086032 5865
.org 0x86034
	str r1, [r3, #88]	@ 00086034 9965
.org 0x86036
	strb r5, [r3, #16]	@ 00086036 1d74
.org 0x86038
	strb r4, [r3, #17]	@ 00086038 5c74
.org 0x8603a
	adds r0, r3, #0	@ 0008603a 181c
.org 0x8603c
	pop {r4, r5, r6, r7}	@ 0008603c f0bc
.org 0x8603e
	pop {r1}	@ 0008603e 02bc
.org 0x86040
	bx r1	@ 00086040 0847
