@ FUN_080099c4  entry 0x080099c4  size 248
.thumb
.org 0x99c4
FUN_080099c4:
	push {lr}	@ 000099c4 00b5
.org 0x99c6
	ldr r0, [pc, #44]	@ 000099c6 0b48
.org 0x99c8
	ldr r2, [pc, #44]	@ 000099c8 0b4a
.org 0x99ca
	adds r1, r0, r2	@ 000099ca 8118
.org 0x99cc
	ldrh r2, [r1, #0]	@ 000099cc 0a88
.org 0x99ce
	lsrs r1, r2, #8	@ 000099ce 110a
.org 0x99d0
	adds r3, r0, #0	@ 000099d0 031c
.org 0x99d2
	cmp r1, #0	@ 000099d2 0029
.org 0x99d4
	bne.n 0x9a00	@ 000099d4 14d1
.org 0x99d6
	movs r0, #255	@ 000099d6 ff20
.org 0x99d8
	ands r0, r2	@ 000099d8 1040
.org 0x99da
	cmp r0, #0	@ 000099da 0028
.org 0x99dc
	bne.n 0x9a00	@ 000099dc 10d1
.org 0x99de
	ldr r0, [pc, #28]	@ 000099de 0748
.org 0x99e0
	adds r2, r3, r0	@ 000099e0 1a18
.org 0x99e2
	ldrh r1, [r2, #0]	@ 000099e2 1188
.org 0x99e4
	movs r0, #1	@ 000099e4 0120
.org 0x99e6
	ands r0, r1	@ 000099e6 0840
.org 0x99e8
	cmp r0, #0	@ 000099e8 0028
.org 0x99ea
	bne.n 0x9a14	@ 000099ea 13d1
.org 0x99ec
	movs r0, #1	@ 000099ec 0120
.org 0x99ee
	orrs r0, r1	@ 000099ee 0843
.org 0x99f0
	b.n 0x9a12	@ 000099f0 0fe0
.org 0x99f2
	.byte 0x00	@ 000099f2 data
.org 0x99f3
	.byte 0x00	@ 000099f3 data
.org 0x99f4
	.byte 0xb0,0x0a,0x00,0x02	@ 000099f4 data
.org 0x99f8
	.byte 0xd4,0x07,0x00,0x00	@ 000099f8 data
.org 0x99fc
	.byte 0x36,0xd0,0x02,0x00	@ 000099fc data
.org 0x9a00
	ldr r1, [pc, #56]	@ 00009a00 0e49
.org 0x9a02
	adds r2, r3, r1	@ 00009a02 5a18
.org 0x9a04
	ldrh r1, [r2, #0]	@ 00009a04 1188
.org 0x9a06
	movs r0, #1	@ 00009a06 0120
.org 0x9a08
	ands r0, r1	@ 00009a08 0840
.org 0x9a0a
	cmp r0, #0	@ 00009a0a 0028
.org 0x9a0c
	beq.n 0x9a14	@ 00009a0c 02d0
.org 0x9a0e
	movs r0, #1	@ 00009a0e 0120
.org 0x9a10
	eors r0, r1	@ 00009a10 4840
.org 0x9a12
	strh r0, [r2, #0]	@ 00009a12 1080
.org 0x9a14
	ldr r2, [pc, #40]	@ 00009a14 0a4a
.org 0x9a16
	adds r0, r3, r2	@ 00009a16 9818
.org 0x9a18
	ldrh r1, [r0, #0]	@ 00009a18 0188
.org 0x9a1a
	lsrs r0, r1, #8	@ 00009a1a 080a
.org 0x9a1c
	cmp r0, #0	@ 00009a1c 0028
.org 0x9a1e
	bne.n 0x9a44	@ 00009a1e 11d1
.org 0x9a20
	movs r0, #255	@ 00009a20 ff20
.org 0x9a22
	ands r0, r1	@ 00009a22 0840
.org 0x9a24
	cmp r0, #2	@ 00009a24 0228
.org 0x9a26
	bne.n 0x9a44	@ 00009a26 0dd1
.org 0x9a28
	ldr r1, [pc, #16]	@ 00009a28 0449
.org 0x9a2a
	adds r2, r3, r1	@ 00009a2a 5a18
.org 0x9a2c
	ldrh r1, [r2, #0]	@ 00009a2c 1188
.org 0x9a2e
	ands r0, r1	@ 00009a2e 0840
.org 0x9a30
	cmp r0, #0	@ 00009a30 0028
.org 0x9a32
	bne.n 0x9a58	@ 00009a32 11d1
.org 0x9a34
	movs r0, #2	@ 00009a34 0220
.org 0x9a36
	orrs r0, r1	@ 00009a36 0843
.org 0x9a38
	b.n 0x9a56	@ 00009a38 0de0
.org 0x9a3a
	.byte 0x00	@ 00009a3a data
.org 0x9a3b
	.byte 0x00	@ 00009a3b data
.org 0x9a3c
	.byte 0x36,0xd0,0x02,0x00	@ 00009a3c data
.org 0x9a40
	.byte 0xd6,0x07,0x00,0x00	@ 00009a40 data
.org 0x9a44
	ldr r0, [pc, #56]	@ 00009a44 0e48
.org 0x9a46
	adds r2, r3, r0	@ 00009a46 1a18
.org 0x9a48
	ldrh r1, [r2, #0]	@ 00009a48 1188
.org 0x9a4a
	movs r0, #2	@ 00009a4a 0220
.org 0x9a4c
	ands r0, r1	@ 00009a4c 0840
.org 0x9a4e
	cmp r0, #0	@ 00009a4e 0028
.org 0x9a50
	beq.n 0x9a58	@ 00009a50 02d0
.org 0x9a52
	movs r0, #2	@ 00009a52 0220
.org 0x9a54
	eors r0, r1	@ 00009a54 4840
.org 0x9a56
	strh r0, [r2, #0]	@ 00009a56 1080
.org 0x9a58
	ldr r1, [pc, #40]	@ 00009a58 0a49
.org 0x9a5a
	adds r0, r3, r1	@ 00009a5a 5818
.org 0x9a5c
	ldrh r1, [r0, #0]	@ 00009a5c 0188
.org 0x9a5e
	lsrs r0, r1, #8	@ 00009a5e 080a
.org 0x9a60
	cmp r0, #0	@ 00009a60 0028
.org 0x9a62
	bne.n 0x9a88	@ 00009a62 11d1
.org 0x9a64
	movs r0, #255	@ 00009a64 ff20
.org 0x9a66
	ands r0, r1	@ 00009a66 0840
.org 0x9a68
	cmp r0, #3	@ 00009a68 0328
.org 0x9a6a
	bne.n 0x9a88	@ 00009a6a 0dd1
.org 0x9a6c
	ldr r0, [pc, #16]	@ 00009a6c 0448
.org 0x9a6e
	adds r2, r3, r0	@ 00009a6e 1a18
.org 0x9a70
	ldrh r1, [r2, #0]	@ 00009a70 1188
.org 0x9a72
	movs r0, #4	@ 00009a72 0420
.org 0x9a74
	ands r0, r1	@ 00009a74 0840
.org 0x9a76
	cmp r0, #0	@ 00009a76 0028
.org 0x9a78
	bne.n 0x9a9c	@ 00009a78 10d1
.org 0x9a7a
	movs r0, #4	@ 00009a7a 0420
.org 0x9a7c
	orrs r0, r1	@ 00009a7c 0843
.org 0x9a7e
	b.n 0x9a9a	@ 00009a7e 0ce0
.org 0x9a80
	.byte 0x36,0xd0,0x02,0x00	@ 00009a80 data
.org 0x9a84
	.byte 0xd4,0x07,0x00,0x00	@ 00009a84 data
.org 0x9a88
	ldr r1, [pc, #56]	@ 00009a88 0e49
.org 0x9a8a
	adds r2, r3, r1	@ 00009a8a 5a18
.org 0x9a8c
	ldrh r1, [r2, #0]	@ 00009a8c 1188
.org 0x9a8e
	movs r0, #4	@ 00009a8e 0420
.org 0x9a90
	ands r0, r1	@ 00009a90 0840
.org 0x9a92
	cmp r0, #0	@ 00009a92 0028
.org 0x9a94
	beq.n 0x9a9c	@ 00009a94 02d0
.org 0x9a96
	movs r0, #4	@ 00009a96 0420
.org 0x9a98
	eors r0, r1	@ 00009a98 4840
.org 0x9a9a
	strh r0, [r2, #0]	@ 00009a9a 1080
.org 0x9a9c
	ldr r2, [pc, #40]	@ 00009a9c 0a4a
.org 0x9a9e
	adds r0, r3, r2	@ 00009a9e 9818
.org 0x9aa0
	ldrh r1, [r0, #0]	@ 00009aa0 0188
.org 0x9aa2
	lsrs r0, r1, #8	@ 00009aa2 080a
.org 0x9aa4
	cmp r0, #0	@ 00009aa4 0028
.org 0x9aa6
	bne.n 0x9acc	@ 00009aa6 11d1
.org 0x9aa8
	movs r0, #255	@ 00009aa8 ff20
.org 0x9aaa
	ands r0, r1	@ 00009aaa 0840
.org 0x9aac
	cmp r0, #4	@ 00009aac 0428
.org 0x9aae
	bne.n 0x9acc	@ 00009aae 0dd1
.org 0x9ab0
	ldr r0, [pc, #16]	@ 00009ab0 0448
.org 0x9ab2
	adds r2, r3, r0	@ 00009ab2 1a18
.org 0x9ab4
	ldrh r1, [r2, #0]	@ 00009ab4 1188
.org 0x9ab6
	movs r0, #8	@ 00009ab6 0820
.org 0x9ab8
	ands r0, r1	@ 00009ab8 0840
.org 0x9aba
	cmp r0, #0	@ 00009aba 0028
