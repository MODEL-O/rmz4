@ FUN_08078dc4  entry 0x08078dc4  size 32
.thumb
.org 0x78dc4
FUN_08078dc4:
	push {r4, r5, r6, lr}	@ 00078dc4 70b5
.org 0x78dc6
	sub sp, #8	@ 00078dc6 82b0
.org 0x78dc8
	adds r4, r0, #0	@ 00078dc8 041c
.org 0x78dca
	ldrb r0, [r4, #15]	@ 00078dca e07b
.org 0x78dcc
	cmp r0, #7	@ 00078dcc 0728
.org 0x78dce
	bls.n 0x78dd2	@ 00078dce 00d9
.org 0x78dd0
	b.n 0x78f12	@ 00078dd0 9fe0
.org 0x78dd2
	lsls r0, r0, #2	@ 00078dd2 8000
.org 0x78dd4
	ldr r1, [pc, #4]	@ 00078dd4 0149
.org 0x78dd6
	adds r0, r0, r1	@ 00078dd6 4018
.org 0x78dd8
	ldr r0, [r0, #0]	@ 00078dd8 0068
.org 0x78dda
	mov pc, r0	@ 00078dda 8746
.org 0x78ddc
	.byte 0xe0,0x8d,0x07,0x08	@ 00078ddc data
.org 0x78de0
	.byte 0x00,0x8e,0x07,0x08	@ 00078de0 data
