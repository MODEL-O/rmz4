@ FUN_080f8588  entry 0x080f8588  size 38
.thumb
.org 0xf8588
FUN_080f8588:
	push {r4, r5, lr}	@ 000f8588 30b5
.org 0xf858a
	adds r4, r0, #0	@ 000f858a 041c
.org 0xf858c
	lsls r2, r2, #24	@ 000f858c 1206
.org 0xf858e
	lsrs r5, r2, #24	@ 000f858e 150e
.org 0xf8590
	bl 0xf872c	@ 000f8590 00f0ccf8
.org 0xf8594
	lsls r0, r0, #24	@ 000f8594 0006
.org 0xf8596
	lsrs r0, r0, #24	@ 000f8596 000e
.org 0xf8598
	cmp r0, #11	@ 000f8598 0b28
.org 0xf859a
	bls.n 0xf859e	@ 000f859a 00d9
.org 0xf859c
	b.n 0xf86b8	@ 000f859c 8ce0
.org 0xf859e
	lsls r0, r0, #2	@ 000f859e 8000
.org 0xf85a0
	ldr r1, [pc, #4]	@ 000f85a0 0149
.org 0xf85a2
	adds r0, r0, r1	@ 000f85a2 4018
.org 0xf85a4
	ldr r0, [r0, #0]	@ 000f85a4 0068
.org 0xf85a6
	mov pc, r0	@ 000f85a6 8746
.org 0xf85a8
	.byte 0xac,0x85,0x0f,0x08	@ 000f85a8 data
.org 0xf85ac
	.byte 0xdc,0x85,0x0f,0x08	@ 000f85ac data
