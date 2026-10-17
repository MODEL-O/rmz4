@ FUN_080a2d40  entry 0x080a2d40  size 110
.thumb
.org 0xa2d40
FUN_080a2d40:
	push {r4, r5, r6, r7, lr}	@ 000a2d40 f0b5
.org 0xa2d42
	adds r6, r0, #0	@ 000a2d42 061c
.org 0xa2d44
	adds r7, r1, #0	@ 000a2d44 0f1c
.org 0xa2d46
	lsls r2, r2, #24	@ 000a2d46 1206
.org 0xa2d48
	lsrs r4, r2, #24	@ 000a2d48 140e
.org 0xa2d4a
	lsls r3, r3, #24	@ 000a2d4a 1b06
.org 0xa2d4c
	lsrs r5, r3, #24	@ 000a2d4c 1d0e
.org 0xa2d4e
	ldr r0, [pc, #96]	@ 000a2d4e 1848
.org 0xa2d50
	ldr r0, [r0, #0]	@ 000a2d50 0068
.org 0xa2d52
	bl 0x5500	@ 000a2d52 62f7d5fb
.org 0xa2d56
	adds r3, r0, #0	@ 000a2d56 031c
.org 0xa2d58
	cmp r3, #0	@ 000a2d58 002b
.org 0xa2d5a
	beq.n 0xa2da6	@ 000a2d5a 24d0
.org 0xa2d5c
	adds r1, r3, #0	@ 000a2d5c 191c
.org 0xa2d5e
	adds r1, #37	@ 000a2d5e 2531
.org 0xa2d60
	movs r2, #0	@ 000a2d60 0022
.org 0xa2d62
	movs r0, #24	@ 000a2d62 1820
.org 0xa2d64
	strb r0, [r1, #0]	@ 000a2d64 0870
.org 0xa2d66
	ldr r0, [pc, #76]	@ 000a2d66 1348
.org 0xa2d68
	movs r1, #56	@ 000a2d68 3821
.org 0xa2d6a
	strb r1, [r3, #9]	@ 000a2d6a 5972
.org 0xa2d6c
	adds r0, #224	@ 000a2d6c e030
.org 0xa2d6e
	ldr r0, [r0, #0]	@ 000a2d6e 0068
.org 0xa2d70
	ldr r0, [r0, #0]	@ 000a2d70 0068
.org 0xa2d72
	str r0, [r3, #20]	@ 000a2d72 5861
.org 0xa2d74
	movs r0, #0	@ 000a2d74 0020
.org 0xa2d76
	strh r2, [r3, #32]	@ 000a2d76 1a84
.org 0xa2d78
	adds r1, r3, #0	@ 000a2d78 191c
.org 0xa2d7a
	adds r1, #34	@ 000a2d7a 2231
.org 0xa2d7c
	strb r0, [r1, #0]	@ 000a2d7c 0870
.org 0xa2d7e
	ldrb r1, [r3, #11]	@ 000a2d7e d97a
.org 0xa2d80
	movs r0, #16	@ 000a2d80 1020
.org 0xa2d82
	orrs r0, r1	@ 000a2d82 0843
.org 0xa2d84
	strb r0, [r3, #11]	@ 000a2d84 d872
.org 0xa2d86
	ldrb r0, [r3, #28]	@ 000a2d86 187f
.org 0xa2d88
	strb r0, [r3, #29]	@ 000a2d88 5877
.org 0xa2d8a
	str r6, [r3, #40]	@ 000a2d8a 9e62
.org 0xa2d8c
	ldr r0, [r7, #0]	@ 000a2d8c 3868
.org 0xa2d8e
	ldr r1, [r7, #4]	@ 000a2d8e 7968
.org 0xa2d90
	str r0, [r3, #84]	@ 000a2d90 5865
.org 0xa2d92
	str r1, [r3, #88]	@ 000a2d92 9965
.org 0xa2d94
	strb r4, [r3, #16]	@ 000a2d94 1c74
.org 0xa2d96
	strb r5, [r3, #17]	@ 000a2d96 5d74
.org 0xa2d98
	cmp r4, #1	@ 000a2d98 012c
.org 0xa2d9a
	bne.n 0xa2da6	@ 000a2d9a 04d1
.org 0xa2d9c
	ldr r1, [pc, #24]	@ 000a2d9c 0649
.org 0xa2d9e
	adds r1, #38	@ 000a2d9e 2631
.org 0xa2da0
	ldrb r0, [r1, #0]	@ 000a2da0 0878
.org 0xa2da2
	adds r0, #1	@ 000a2da2 0130
.org 0xa2da4
	strb r0, [r1, #0]	@ 000a2da4 0870
.org 0xa2da6
	adds r0, r3, #0	@ 000a2da6 181c
.org 0xa2da8
	pop {r4, r5, r6, r7}	@ 000a2da8 f0bc
.org 0xa2daa
	pop {r1}	@ 000a2daa 02bc
.org 0xa2dac
	bx r1	@ 000a2dac 0847
