@ FUN_081057e8  entry 0x081057e8  size 38
.thumb
.org 0x1057e8
FUN_081057e8:
	push {r4, r5, r6, lr}	@ 001057e8 70b5
.org 0x1057ea
	adds r4, r0, #0	@ 001057ea 041c
.org 0x1057ec
	lsls r1, r1, #16	@ 001057ec 0904
.org 0x1057ee
	lsrs r6, r1, #16	@ 001057ee 0e0c
.org 0x1057f0
	lsls r2, r2, #24	@ 001057f0 1206
.org 0x1057f2
	lsrs r5, r2, #24	@ 001057f2 150e
.org 0x1057f4
	ldrb r0, [r4, #15]	@ 001057f4 e07b
.org 0x1057f6
	cmp r0, #5	@ 001057f6 0528
.org 0x1057f8
	bls.n 0x1057fc	@ 001057f8 00d9
.org 0x1057fa
	b.n 0x10594c	@ 001057fa a7e0
.org 0x1057fc
	lsls r0, r0, #2	@ 001057fc 8000
.org 0x1057fe
	ldr r1, [pc, #8]	@ 001057fe 0249
.org 0x105800
	adds r0, r0, r1	@ 00105800 4018
.org 0x105802
	ldr r0, [r0, #0]	@ 00105802 0068
.org 0x105804
	mov pc, r0	@ 00105804 8746
.org 0x105806
	.byte 0x00	@ 00105806 data
.org 0x105807
	.byte 0x00	@ 00105807 data
.org 0x105808
	.byte 0x0c,0x58,0x10,0x08	@ 00105808 data
.org 0x10580c
	.byte 0x24,0x58,0x10,0x08	@ 0010580c data
