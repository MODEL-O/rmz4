@ FUN_080b38b0  entry 0x080b38b0  size 106
.thumb
.org 0xb38b0
FUN_080b38b0:
	push {r4, lr}	@ 000b38b0 10b5
.org 0xb38b2
	adds r4, r0, #0	@ 000b38b2 041c
.org 0xb38b4
	ldrb r0, [r4, #13]	@ 000b38b4 607b
.org 0xb38b6
	cmp r0, #0	@ 000b38b6 0028
.org 0xb38b8
	beq.n 0xb38e8	@ 000b38b8 16d0
.org 0xb38ba
	adds r0, r4, #0	@ 000b38ba 201c
.org 0xb38bc
	adds r0, #140	@ 000b38bc 8c30
.org 0xb38be
	ldr r0, [r0, #0]	@ 000b38be 0068
.org 0xb38c0
	movs r1, #128	@ 000b38c0 8021
.org 0xb38c2
	lsls r1, r1, #2	@ 000b38c2 8900
.org 0xb38c4
	ands r0, r1	@ 000b38c4 0840
.org 0xb38c6
	cmp r0, #0	@ 000b38c6 0028
.org 0xb38c8
	beq.n 0xb38e8	@ 000b38c8 0ed0
.org 0xb38ca
	ldr r1, [pc, #24]	@ 000b38ca 0649
.org 0xb38cc
	ldrb r0, [r4, #9]	@ 000b38cc 607a
.org 0xb38ce
	lsls r0, r0, #2	@ 000b38ce 8000
.org 0xb38d0
	adds r0, r0, r1	@ 000b38d0 4018
.org 0xb38d2
	movs r1, #2	@ 000b38d2 0221
.org 0xb38d4
	str r1, [r4, #12]	@ 000b38d4 e160
.org 0xb38d6
	ldr r0, [r0, #0]	@ 000b38d6 0068
.org 0xb38d8
	ldr r0, [r0, #8]	@ 000b38d8 8068
.org 0xb38da
	str r0, [r4, #20]	@ 000b38da 6061
.org 0xb38dc
	adds r0, r4, #0	@ 000b38dc 201c
.org 0xb38de
	bl 0xb3924	@ 000b38de 00f021f8
.org 0xb38e2
	b.n 0xb391e	@ 000b38e2 1ce0
.org 0xb38e4
	.byte 0x40,0xdb,0x85,0x08	@ 000b38e4 data
.org 0xb38e8
	adds r0, r4, #0	@ 000b38e8 201c
.org 0xb38ea
	bl 0xb3d68	@ 000b38ea 00f03dfa
.org 0xb38ee
	ldr r0, [r4, #44]	@ 000b38ee e06a
.org 0xb38f0
	cmp r0, #0	@ 000b38f0 0028
.org 0xb38f2
	bne.n 0xb390c	@ 000b38f2 0bd1
.org 0xb38f4
	ldr r0, [pc, #16]	@ 000b38f4 0448
.org 0xb38f6
	ldrb r1, [r4, #13]	@ 000b38f6 617b
.org 0xb38f8
	lsls r1, r1, #2	@ 000b38f8 8900
.org 0xb38fa
	adds r1, r1, r0	@ 000b38fa 0918
.org 0xb38fc
	ldr r1, [r1, #0]	@ 000b38fc 0968
.org 0xb38fe
	adds r0, r4, #0	@ 000b38fe 201c
.org 0xb3900
	bl 0x128f80	@ 000b3900 75f03efb
.org 0xb3904
	b.n 0xb3912	@ 000b3904 05e0
.org 0xb3906
	.byte 0x00	@ 000b3906 data
.org 0xb3907
	.byte 0x00	@ 000b3907 data
.org 0xb3908
	.byte 0x40,0x37,0x86,0x08	@ 000b3908 data
.org 0xb390c
	adds r0, r4, #0	@ 000b390c 201c
.org 0xb390e
	bl 0xb3dbc	@ 000b390e 00f055fa
.org 0xb3912
	ldrb r0, [r4, #13]	@ 000b3912 607b
.org 0xb3914
	cmp r0, #0	@ 000b3914 0028
.org 0xb3916
	beq.n 0xb391e	@ 000b3916 02d0
.org 0xb3918
	adds r0, r4, #0	@ 000b3918 201c
