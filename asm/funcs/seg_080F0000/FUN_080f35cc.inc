@ FUN_080f35cc  entry 0x080f35cc  size 40
.thumb
.org 0xf35cc
FUN_080f35cc:
	push {r4, r5, r6, r7, lr}	@ 000f35cc f0b5
.org 0xf35ce
	mov r7, r9	@ 000f35ce 4f46
.org 0xf35d0
	mov r6, r8	@ 000f35d0 4646
.org 0xf35d2
	push {r6, r7}	@ 000f35d2 c0b4
.org 0xf35d4
	adds r6, r0, #0	@ 000f35d4 061c
.org 0xf35d6
	ldrb r0, [r6, #13]	@ 000f35d6 707b
.org 0xf35d8
	cmp r0, #34	@ 000f35d8 2228
.org 0xf35da
	bls.n 0xf35de	@ 000f35da 00d9
.org 0xf35dc
	b.n 0xf3b94	@ 000f35dc dae2
.org 0xf35de
	lsls r0, r0, #2	@ 000f35de 8000
.org 0xf35e0
	ldr r1, [pc, #4]	@ 000f35e0 0149
.org 0xf35e2
	adds r0, r0, r1	@ 000f35e2 4018
.org 0xf35e4
	ldr r0, [r0, #0]	@ 000f35e4 0068
.org 0xf35e6
	mov pc, r0	@ 000f35e6 8746
.org 0xf35e8
	.byte 0xec,0x35,0x0f,0x08	@ 000f35e8 data
.org 0xf35ec
	.byte 0x78,0x36,0x0f,0x08	@ 000f35ec data
.org 0xf35f0
	.byte 0xc4,0x36,0x0f,0x08	@ 000f35f0 data
