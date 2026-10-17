@ FUN_08089ebc  entry 0x08089ebc  size 90
.thumb
.org 0x89ebc
FUN_08089ebc:
	push {r4, r5, r6, lr}	@ 00089ebc 70b5
.org 0x89ebe
	adds r6, r0, #0	@ 00089ebe 061c
.org 0x89ec0
	lsls r1, r1, #24	@ 00089ec0 0906
.org 0x89ec2
	lsrs r5, r1, #24	@ 00089ec2 0d0e
.org 0x89ec4
	lsls r2, r2, #24	@ 00089ec4 1206
.org 0x89ec6
	lsrs r4, r2, #24	@ 00089ec6 140e
.org 0x89ec8
	ldr r0, [pc, #76]	@ 00089ec8 1348
.org 0x89eca
	ldr r0, [r0, #0]	@ 00089eca 0068
.org 0x89ecc
	bl 0x5500	@ 00089ecc 7bf718fb
.org 0x89ed0
	adds r3, r0, #0	@ 00089ed0 031c
.org 0x89ed2
	cmp r3, #0	@ 00089ed2 002b
.org 0x89ed4
	beq.n 0x89f0e	@ 00089ed4 1bd0
.org 0x89ed6
	adds r1, r3, #0	@ 00089ed6 191c
.org 0x89ed8
	adds r1, #37	@ 00089ed8 2531
.org 0x89eda
	movs r2, #0	@ 00089eda 0022
.org 0x89edc
	movs r0, #24	@ 00089edc 1820
.org 0x89ede
	strb r0, [r1, #0]	@ 00089ede 0870
.org 0x89ee0
	ldr r1, [pc, #56]	@ 00089ee0 0e49
.org 0x89ee2
	movs r0, #11	@ 00089ee2 0b20
.org 0x89ee4
	strb r0, [r3, #9]	@ 00089ee4 5872
.org 0x89ee6
	ldr r0, [r1, #44]	@ 00089ee6 c86a
.org 0x89ee8
	ldr r0, [r0, #0]	@ 00089ee8 0068
.org 0x89eea
	str r0, [r3, #20]	@ 00089eea 5861
.org 0x89eec
	movs r0, #0	@ 00089eec 0020
.org 0x89eee
	strh r2, [r3, #32]	@ 00089eee 1a84
.org 0x89ef0
	adds r1, r3, #0	@ 00089ef0 191c
.org 0x89ef2
	adds r1, #34	@ 00089ef2 2231
.org 0x89ef4
	strb r0, [r1, #0]	@ 00089ef4 0870
.org 0x89ef6
	ldrb r1, [r3, #11]	@ 00089ef6 d97a
.org 0x89ef8
	movs r0, #16	@ 00089ef8 1020
.org 0x89efa
	orrs r0, r1	@ 00089efa 0843
.org 0x89efc
	strb r0, [r3, #11]	@ 00089efc d872
.org 0x89efe
	ldrb r0, [r3, #28]	@ 00089efe 187f
.org 0x89f00
	strb r0, [r3, #29]	@ 00089f00 5877
.org 0x89f02
	ldr r0, [r6, #0]	@ 00089f02 3068
.org 0x89f04
	ldr r1, [r6, #4]	@ 00089f04 7168
.org 0x89f06
	str r0, [r3, #84]	@ 00089f06 5865
.org 0x89f08
	str r1, [r3, #88]	@ 00089f08 9965
.org 0x89f0a
	strb r5, [r3, #16]	@ 00089f0a 1d74
.org 0x89f0c
	strb r4, [r3, #17]	@ 00089f0c 5c74
.org 0x89f0e
	adds r0, r3, #0	@ 00089f0e 181c
.org 0x89f10
	pop {r4, r5, r6}	@ 00089f10 70bc
.org 0x89f12
	pop {r1}	@ 00089f12 02bc
.org 0x89f14
	bx r1	@ 00089f14 0847
