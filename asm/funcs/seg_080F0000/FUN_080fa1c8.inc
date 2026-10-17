@ FUN_080fa1c8  entry 0x080fa1c8  size 74
.thumb
.org 0xfa1c8
FUN_080fa1c8:
	push {r4, lr}	@ 000fa1c8 10b5
.org 0xfa1ca
	adds r4, r0, #0	@ 000fa1ca 041c
.org 0xfa1cc
	ldr r0, [pc, #68]	@ 000fa1cc 1148
.org 0xfa1ce
	ldr r0, [r0, #0]	@ 000fa1ce 0068
.org 0xfa1d0
	bl 0x5500	@ 000fa1d0 0bf796f9
.org 0xfa1d4
	adds r3, r0, #0	@ 000fa1d4 031c
.org 0xfa1d6
	cmp r3, #0	@ 000fa1d6 002b
.org 0xfa1d8
	beq.n 0xfa20a	@ 000fa1d8 17d0
.org 0xfa1da
	adds r1, r3, #0	@ 000fa1da 191c
.org 0xfa1dc
	adds r1, #37	@ 000fa1dc 2531
.org 0xfa1de
	movs r2, #0	@ 000fa1de 0022
.org 0xfa1e0
	movs r0, #30	@ 000fa1e0 1e20
.org 0xfa1e2
	strb r0, [r1, #0]	@ 000fa1e2 0870
.org 0xfa1e4
	ldr r0, [pc, #48]	@ 000fa1e4 0c48
.org 0xfa1e6
	movs r1, #33	@ 000fa1e6 2121
.org 0xfa1e8
	strb r1, [r3, #9]	@ 000fa1e8 5972
.org 0xfa1ea
	adds r0, #132	@ 000fa1ea 8430
.org 0xfa1ec
	ldr r0, [r0, #0]	@ 000fa1ec 0068
.org 0xfa1ee
	ldr r0, [r0, #0]	@ 000fa1ee 0068
.org 0xfa1f0
	str r0, [r3, #20]	@ 000fa1f0 5861
.org 0xfa1f2
	movs r0, #0	@ 000fa1f2 0020
.org 0xfa1f4
	strh r2, [r3, #32]	@ 000fa1f4 1a84
.org 0xfa1f6
	adds r1, r3, #0	@ 000fa1f6 191c
.org 0xfa1f8
	adds r1, #34	@ 000fa1f8 2231
.org 0xfa1fa
	strb r0, [r1, #0]	@ 000fa1fa 0870
.org 0xfa1fc
	ldrb r1, [r3, #11]	@ 000fa1fc d97a
.org 0xfa1fe
	movs r0, #16	@ 000fa1fe 1020
.org 0xfa200
	orrs r0, r1	@ 000fa200 0843
.org 0xfa202
	strb r0, [r3, #11]	@ 000fa202 d872
.org 0xfa204
	ldrb r0, [r3, #28]	@ 000fa204 187f
.org 0xfa206
	strb r0, [r3, #29]	@ 000fa206 5877
.org 0xfa208
	str r4, [r3, #40]	@ 000fa208 9c62
.org 0xfa20a
	adds r0, r3, #0	@ 000fa20a 181c
.org 0xfa20c
	pop {r4}	@ 000fa20c 10bc
.org 0xfa20e
	pop {r1}	@ 000fa20e 02bc
.org 0xfa210
	bx r1	@ 000fa210 0847
