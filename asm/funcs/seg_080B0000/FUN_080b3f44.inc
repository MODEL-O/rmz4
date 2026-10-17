@ FUN_080b3f44  entry 0x080b3f44  size 106
.thumb
.org 0xb3f44
FUN_080b3f44:
	push {r4, r5, r6, lr}	@ 000b3f44 70b5
.org 0xb3f46
	adds r4, r0, #0	@ 000b3f46 041c
.org 0xb3f48
	lsls r1, r1, #24	@ 000b3f48 0906
.org 0xb3f4a
	lsrs r6, r1, #24	@ 000b3f4a 0e0e
.org 0xb3f4c
	lsls r2, r2, #24	@ 000b3f4c 1206
.org 0xb3f4e
	lsrs r5, r2, #24	@ 000b3f4e 150e
.org 0xb3f50
	ldr r0, [pc, #92]	@ 000b3f50 1748
.org 0xb3f52
	ldr r0, [r0, #0]	@ 000b3f52 0068
.org 0xb3f54
	bl 0x5500	@ 000b3f54 51f7d4fa
.org 0xb3f58
	adds r3, r0, #0	@ 000b3f58 031c
.org 0xb3f5a
	cmp r3, #0	@ 000b3f5a 002b
.org 0xb3f5c
	beq.n 0xb3fa6	@ 000b3f5c 23d0
.org 0xb3f5e
	adds r1, r3, #0	@ 000b3f5e 191c
.org 0xb3f60
	adds r1, #37	@ 000b3f60 2531
.org 0xb3f62
	movs r2, #0	@ 000b3f62 0022
.org 0xb3f64
	movs r0, #24	@ 000b3f64 1820
.org 0xb3f66
	strb r0, [r1, #0]	@ 000b3f66 0870
.org 0xb3f68
	ldr r0, [pc, #72]	@ 000b3f68 1248
.org 0xb3f6a
	movs r1, #93	@ 000b3f6a 5d21
.org 0xb3f6c
	strb r1, [r3, #9]	@ 000b3f6c 5972
.org 0xb3f6e
	movs r1, #186	@ 000b3f6e ba21
.org 0xb3f70
	lsls r1, r1, #1	@ 000b3f70 4900
.org 0xb3f72
	adds r0, r0, r1	@ 000b3f72 4018
.org 0xb3f74
	ldr r0, [r0, #0]	@ 000b3f74 0068
.org 0xb3f76
	ldr r0, [r0, #0]	@ 000b3f76 0068
.org 0xb3f78
	str r0, [r3, #20]	@ 000b3f78 5861
.org 0xb3f7a
	movs r0, #0	@ 000b3f7a 0020
.org 0xb3f7c
	strh r2, [r3, #32]	@ 000b3f7c 1a84
.org 0xb3f7e
	adds r1, r3, #0	@ 000b3f7e 191c
.org 0xb3f80
	adds r1, #34	@ 000b3f80 2231
.org 0xb3f82
	strb r0, [r1, #0]	@ 000b3f82 0870
.org 0xb3f84
	ldrb r1, [r3, #11]	@ 000b3f84 d97a
.org 0xb3f86
	movs r0, #16	@ 000b3f86 1020
.org 0xb3f88
	orrs r0, r1	@ 000b3f88 0843
.org 0xb3f8a
	strb r0, [r3, #11]	@ 000b3f8a d872
.org 0xb3f8c
	ldrb r0, [r3, #28]	@ 000b3f8c 187f
.org 0xb3f8e
	strb r0, [r3, #29]	@ 000b3f8e 5877
.org 0xb3f90
	ldr r0, [r4, #84]	@ 000b3f90 606d
.org 0xb3f92
	ldr r1, [r4, #88]	@ 000b3f92 a16d
.org 0xb3f94
	str r0, [r3, #84]	@ 000b3f94 5865
.org 0xb3f96
	str r1, [r3, #88]	@ 000b3f96 9965
.org 0xb3f98
	ldr r0, [r3, #88]	@ 000b3f98 986d
.org 0xb3f9a
	movs r1, #152	@ 000b3f9a 9821
.org 0xb3f9c
	lsls r1, r1, #5	@ 000b3f9c 4901
.org 0xb3f9e
	adds r0, r0, r1	@ 000b3f9e 4018
.org 0xb3fa0
	str r0, [r3, #88]	@ 000b3fa0 9865
.org 0xb3fa2
	strb r6, [r3, #16]	@ 000b3fa2 1e74
.org 0xb3fa4
	strb r5, [r3, #17]	@ 000b3fa4 5d74
.org 0xb3fa6
	adds r0, r3, #0	@ 000b3fa6 181c
.org 0xb3fa8
	pop {r4, r5, r6}	@ 000b3fa8 70bc
.org 0xb3faa
	pop {r1}	@ 000b3faa 02bc
.org 0xb3fac
	bx r1	@ 000b3fac 0847
