@ FUN_08029be0  entry 0x08029be0  size 38
.thumb
.org 0x29be0
FUN_08029be0:
	push {r4, r5, r6, r7, lr}	@ 00029be0 f0b5
.org 0x29be2
	sub sp, #4	@ 00029be2 81b0
.org 0x29be4
	adds r6, r0, #0	@ 00029be4 061c
.org 0x29be6
	ldrb r0, [r6, #0]	@ 00029be6 3078
.org 0x29be8
	cmp r0, #8	@ 00029be8 0828
.org 0x29bea
	bls.n 0x29bee	@ 00029bea 00d9
.org 0x29bec
	b.n 0x2a030	@ 00029bec 20e2
.org 0x29bee
	lsls r0, r0, #2	@ 00029bee 8000
.org 0x29bf0
	ldr r1, [pc, #4]	@ 00029bf0 0149
.org 0x29bf2
	adds r0, r0, r1	@ 00029bf2 4018
.org 0x29bf4
	ldr r0, [r0, #0]	@ 00029bf4 0068
.org 0x29bf6
	mov pc, r0	@ 00029bf6 8746
.org 0x29bf8
	.byte 0xfc,0x9b,0x02,0x08	@ 00029bf8 data
.org 0x29bfc
	.byte 0x20,0x9c,0x02,0x08	@ 00029bfc data
.org 0x29c00
	.byte 0xd4,0x9e,0x02,0x08	@ 00029c00 data
.org 0x29c04
	.byte 0x20,0x9f,0x02,0x08	@ 00029c04 data
