@ FUN_080d9cc8  entry 0x080d9cc8  size 90
.thumb
.org 0xd9cc8
FUN_080d9cc8:
	push {r4, r5, r6, r7, lr}	@ 000d9cc8 f0b5
.org 0xd9cca
	adds r6, r0, #0	@ 000d9cca 061c
.org 0xd9ccc
	adds r7, r1, #0	@ 000d9ccc 0f1c
.org 0xd9cce
	lsls r2, r2, #24	@ 000d9cce 1206
.org 0xd9cd0
	lsrs r5, r2, #24	@ 000d9cd0 150e
.org 0xd9cd2
	lsls r3, r3, #24	@ 000d9cd2 1b06
.org 0xd9cd4
	lsrs r4, r3, #24	@ 000d9cd4 1c0e
.org 0xd9cd6
	ldr r0, [pc, #76]	@ 000d9cd6 1348
.org 0xd9cd8
	ldr r0, [r0, #0]	@ 000d9cd8 0068
.org 0xd9cda
	bl 0x5500	@ 000d9cda 2bf711fc
.org 0xd9cde
	adds r3, r0, #0	@ 000d9cde 031c
.org 0xd9ce0
	cmp r3, #0	@ 000d9ce0 002b
.org 0xd9ce2
	beq.n 0xd9d1a	@ 000d9ce2 1ad0
.org 0xd9ce4
	adds r1, r3, #0	@ 000d9ce4 191c
.org 0xd9ce6
	adds r1, #37	@ 000d9ce6 2531
.org 0xd9ce8
	movs r2, #0	@ 000d9ce8 0022
.org 0xd9cea
	movs r0, #1	@ 000d9cea 0120
.org 0xd9cec
	strb r0, [r1, #0]	@ 000d9cec 0870
.org 0xd9cee
	ldr r0, [pc, #56]	@ 000d9cee 0e48
.org 0xd9cf0
	movs r1, #32	@ 000d9cf0 2021
.org 0xd9cf2
	strb r1, [r3, #9]	@ 000d9cf2 5972
.org 0xd9cf4
	adds r0, #128	@ 000d9cf4 8030
.org 0xd9cf6
	ldr r0, [r0, #0]	@ 000d9cf6 0068
.org 0xd9cf8
	ldr r0, [r0, #0]	@ 000d9cf8 0068
.org 0xd9cfa
	str r0, [r3, #20]	@ 000d9cfa 5861
.org 0xd9cfc
	movs r0, #0	@ 000d9cfc 0020
.org 0xd9cfe
	strh r2, [r3, #32]	@ 000d9cfe 1a84
.org 0xd9d00
	adds r1, r3, #0	@ 000d9d00 191c
.org 0xd9d02
	adds r1, #34	@ 000d9d02 2231
.org 0xd9d04
	strb r0, [r1, #0]	@ 000d9d04 0870
.org 0xd9d06
	ldr r0, [r6, #0]	@ 000d9d06 3068
.org 0xd9d08
	ldr r1, [r6, #4]	@ 000d9d08 7168
.org 0xd9d0a
	str r0, [r3, #84]	@ 000d9d0a 5865
.org 0xd9d0c
	str r1, [r3, #88]	@ 000d9d0c 9965
.org 0xd9d0e
	ldr r0, [r7, #0]	@ 000d9d0e 3868
.org 0xd9d10
	ldr r1, [r7, #4]	@ 000d9d10 7968
.org 0xd9d12
	str r0, [r3, #92]	@ 000d9d12 d865
.org 0xd9d14
	str r1, [r3, #96]	@ 000d9d14 1966
.org 0xd9d16
	strb r5, [r3, #16]	@ 000d9d16 1d74
.org 0xd9d18
	strb r4, [r3, #17]	@ 000d9d18 5c74
.org 0xd9d1a
	adds r0, r3, #0	@ 000d9d1a 181c
.org 0xd9d1c
	pop {r4, r5, r6, r7}	@ 000d9d1c f0bc
.org 0xd9d1e
	pop {r1}	@ 000d9d1e 02bc
.org 0xd9d20
	bx r1	@ 000d9d20 0847
