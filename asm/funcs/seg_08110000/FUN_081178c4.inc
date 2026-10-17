@ FUN_081178c4  entry 0x081178c4  size 28
.thumb
.org 0x1178c4
FUN_081178c4:
	push {r4, r5, lr}	@ 001178c4 30b5
.org 0x1178c6
	adds r5, r0, #0	@ 001178c6 051c
.org 0x1178c8
	ldrb r0, [r5, #3]	@ 001178c8 e878
.org 0x1178ca
	cmp r0, #17	@ 001178ca 1128
.org 0x1178cc
	bls.n 0x1178d0	@ 001178cc 00d9
.org 0x1178ce
	b.n 0x117a44	@ 001178ce b9e0
.org 0x1178d0
	lsls r0, r0, #2	@ 001178d0 8000
.org 0x1178d2
	ldr r1, [pc, #8]	@ 001178d2 0249
.org 0x1178d4
	adds r0, r0, r1	@ 001178d4 4018
.org 0x1178d6
	ldr r0, [r0, #0]	@ 001178d6 0068
.org 0x1178d8
	mov pc, r0	@ 001178d8 8746
.org 0x1178da
	.byte 0x00	@ 001178da data
.org 0x1178db
	.byte 0x00	@ 001178db data
.org 0x1178dc
	.byte 0xe0,0x78,0x11,0x08	@ 001178dc data
