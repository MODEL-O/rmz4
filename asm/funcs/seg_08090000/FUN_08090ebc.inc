@ FUN_08090ebc  entry 0x08090ebc  size 86
.thumb
.org 0x90ebc
FUN_08090ebc:
	push {r4, r5, lr}	@ 00090ebc 30b5
.org 0x90ebe
	adds r5, r0, #0	@ 00090ebe 051c
.org 0x90ec0
	ldr r0, [pc, #80]	@ 00090ec0 1448
.org 0x90ec2
	ldr r0, [r0, #0]	@ 00090ec2 0068
.org 0x90ec4
	bl 0x5500	@ 00090ec4 74f71cfb
.org 0x90ec8
	adds r4, r0, #0	@ 00090ec8 041c
.org 0x90eca
	cmp r4, #0	@ 00090eca 002c
.org 0x90ecc
	beq.n 0x90f0a	@ 00090ecc 1dd0
.org 0x90ece
	adds r1, r4, #0	@ 00090ece 211c
.org 0x90ed0
	adds r1, #37	@ 00090ed0 2531
.org 0x90ed2
	movs r2, #0	@ 00090ed2 0022
.org 0x90ed4
	movs r0, #24	@ 00090ed4 1820
.org 0x90ed6
	strb r0, [r1, #0]	@ 00090ed6 0870
.org 0x90ed8
	ldr r1, [pc, #60]	@ 00090ed8 0f49
.org 0x90eda
	movs r0, #22	@ 00090eda 1620
.org 0x90edc
	strb r0, [r4, #9]	@ 00090edc 6072
.org 0x90ede
	ldr r0, [r1, #88]	@ 00090ede 886d
.org 0x90ee0
	ldr r0, [r0, #0]	@ 00090ee0 0068
.org 0x90ee2
	str r0, [r4, #20]	@ 00090ee2 6061
.org 0x90ee4
	movs r3, #0	@ 00090ee4 0023
.org 0x90ee6
	strh r2, [r4, #32]	@ 00090ee6 2284
.org 0x90ee8
	adds r0, r4, #0	@ 00090ee8 201c
.org 0x90eea
	adds r0, #34	@ 00090eea 2230
.org 0x90eec
	strb r3, [r0, #0]	@ 00090eec 0370
.org 0x90eee
	ldrb r1, [r4, #11]	@ 00090eee e17a
.org 0x90ef0
	movs r0, #16	@ 00090ef0 1020
.org 0x90ef2
	orrs r0, r1	@ 00090ef2 0843
.org 0x90ef4
	strb r0, [r4, #11]	@ 00090ef4 e072
.org 0x90ef6
	ldrb r0, [r4, #28]	@ 00090ef6 207f
.org 0x90ef8
	strb r0, [r4, #29]	@ 00090ef8 6077
.org 0x90efa
	ldr r0, [r5, #84]	@ 00090efa 686d
.org 0x90efc
	ldr r1, [r5, #88]	@ 00090efc a96d
.org 0x90efe
	str r0, [r4, #84]	@ 00090efe 6065
.org 0x90f00
	str r1, [r4, #88]	@ 00090f00 a165
.org 0x90f02
	str r5, [r4, #40]	@ 00090f02 a562
.org 0x90f04
	movs r0, #3	@ 00090f04 0320
.org 0x90f06
	strb r0, [r4, #16]	@ 00090f06 2074
.org 0x90f08
	strb r3, [r4, #17]	@ 00090f08 6374
.org 0x90f0a
	adds r0, r4, #0	@ 00090f0a 201c
.org 0x90f0c
	pop {r4, r5}	@ 00090f0c 30bc
.org 0x90f0e
	pop {r1}	@ 00090f0e 02bc
.org 0x90f10
	bx r1	@ 00090f10 0847
