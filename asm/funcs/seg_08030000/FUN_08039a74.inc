@ FUN_08039a74  entry 0x08039a74  size 242
.thumb
.org 0x39a74
FUN_08039a74:
	push {r4, lr}	@ 00039a74 10b5
.org 0x39a76
	adds r1, r0, #0	@ 00039a76 011c
.org 0x39a78
	ldr r0, [pc, #16]	@ 00039a78 0448
.org 0x39a7a
	adds r3, r1, r0	@ 00039a7a 0b18
.org 0x39a7c
	ldrb r0, [r3, #0]	@ 00039a7c 1878
.org 0x39a7e
	cmp r0, #1	@ 00039a7e 0128
.org 0x39a80
	beq.n 0x39ad4	@ 00039a80 28d0
.org 0x39a82
	cmp r0, #1	@ 00039a82 0128
.org 0x39a84
	bgt.n 0x39a90	@ 00039a84 04dc
.org 0x39a86
	cmp r0, #0	@ 00039a86 0028
.org 0x39a88
	beq.n 0x39a9a	@ 00039a88 07d0
.org 0x39a8a
	b.n 0x39b6a	@ 00039a8a 6ee0
.org 0x39a8c
	.byte 0x6d,0x02,0x00,0x00	@ 00039a8c data
.org 0x39a90
	cmp r0, #2	@ 00039a90 0228
.org 0x39a92
	beq.n 0x39b0c	@ 00039a92 3bd0
.org 0x39a94
	cmp r0, #3	@ 00039a94 0328
.org 0x39a96
	beq.n 0x39b4c	@ 00039a96 59d0
.org 0x39a98
	b.n 0x39b6a	@ 00039a98 67e0
.org 0x39a9a
	ldr r2, [pc, #32]	@ 00039a9a 084a
.org 0x39a9c
	adds r0, r1, r2	@ 00039a9c 8818
.org 0x39a9e
	ldrh r2, [r0, #0]	@ 00039a9e 0288
.org 0x39aa0
	movs r0, #64	@ 00039aa0 4020
.org 0x39aa2
	ands r0, r2	@ 00039aa2 1040
.org 0x39aa4
	cmp r0, #0	@ 00039aa4 0028
.org 0x39aa6
	bne.n 0x39b72	@ 00039aa6 64d1
.org 0x39aa8
	movs r0, #16	@ 00039aa8 1020
.org 0x39aaa
	ands r0, r2	@ 00039aaa 1040
.org 0x39aac
	cmp r0, #0	@ 00039aac 0028
.org 0x39aae
	beq.n 0x39ac0	@ 00039aae 07d0
.org 0x39ab0
	movs r4, #155	@ 00039ab0 9b24
.org 0x39ab2
	lsls r4, r4, #2	@ 00039ab2 a400
.org 0x39ab4
	adds r1, r1, r4	@ 00039ab4 0919
.org 0x39ab6
	movs r0, #10	@ 00039ab6 0a20
.org 0x39ab8
	strb r0, [r1, #0]	@ 00039ab8 0870
.org 0x39aba
	b.n 0x39b3e	@ 00039aba 40e0
.org 0x39abc
	.byte 0x52,0x02,0x00,0x00	@ 00039abc data
.org 0x39ac0
	movs r0, #32	@ 00039ac0 2020
.org 0x39ac2
	ands r0, r2	@ 00039ac2 1040
.org 0x39ac4
	cmp r0, #0	@ 00039ac4 0028
.org 0x39ac6
	beq.n 0x39b72	@ 00039ac6 54d0
.org 0x39ac8
	movs r0, #155	@ 00039ac8 9b20
.org 0x39aca
	lsls r0, r0, #2	@ 00039aca 8000
.org 0x39acc
	adds r1, r1, r0	@ 00039acc 0918
.org 0x39ace
	movs r0, #10	@ 00039ace 0a20
.org 0x39ad0
	strb r0, [r1, #0]	@ 00039ad0 0870
.org 0x39ad2
	b.n 0x39b3e	@ 00039ad2 34e0
.org 0x39ad4
	movs r4, #155	@ 00039ad4 9b24
.org 0x39ad6
	lsls r4, r4, #2	@ 00039ad6 a400
.org 0x39ad8
	adds r2, r1, r4	@ 00039ad8 0a19
.org 0x39ada
	ldrb r0, [r2, #0]	@ 00039ada 1078
.org 0x39adc
	subs r0, #1	@ 00039adc 0138
.org 0x39ade
	strb r0, [r2, #0]	@ 00039ade 1070
.org 0x39ae0
	lsls r0, r0, #24	@ 00039ae0 0006
.org 0x39ae2
	lsrs r0, r0, #24	@ 00039ae2 000e
.org 0x39ae4
	cmp r0, #255	@ 00039ae4 ff28
.org 0x39ae6
	bne.n 0x39aec	@ 00039ae6 01d1
.org 0x39ae8
	movs r0, #0	@ 00039ae8 0020
.org 0x39aea
	strb r0, [r3, #0]	@ 00039aea 1870
.org 0x39aec
	ldr r4, [pc, #24]	@ 00039aec 064c
.org 0x39aee
	adds r0, r1, r4	@ 00039aee 0819
.org 0x39af0
	ldrh r1, [r0, #0]	@ 00039af0 0188
.org 0x39af2
	movs r0, #64	@ 00039af2 4020
.org 0x39af4
	ands r0, r1	@ 00039af4 0840
.org 0x39af6
	cmp r0, #0	@ 00039af6 0028
.org 0x39af8
	bne.n 0x39b3a	@ 00039af8 1fd1
.org 0x39afa
	movs r0, #16	@ 00039afa 1020
.org 0x39afc
	ands r0, r1	@ 00039afc 0840
.org 0x39afe
	cmp r0, #0	@ 00039afe 0028
.org 0x39b00
	bne.n 0x39b3a	@ 00039b00 1bd1
.org 0x39b02
	movs r0, #32	@ 00039b02 2020
.org 0x39b04
	b.n 0x39b34	@ 00039b04 16e0
.org 0x39b06
	.byte 0x00	@ 00039b06 data
.org 0x39b07
	.byte 0x00	@ 00039b07 data
.org 0x39b08
	.byte 0x52,0x02,0x00,0x00	@ 00039b08 data
.org 0x39b0c
	movs r0, #155	@ 00039b0c 9b20
.org 0x39b0e
	lsls r0, r0, #2	@ 00039b0e 8000
.org 0x39b10
	adds r2, r1, r0	@ 00039b10 0a18
.org 0x39b12
	ldrb r0, [r2, #0]	@ 00039b12 1078
.org 0x39b14
	subs r0, #1	@ 00039b14 0138
.org 0x39b16
	strb r0, [r2, #0]	@ 00039b16 1070
.org 0x39b18
	lsls r0, r0, #24	@ 00039b18 0006
.org 0x39b1a
	lsrs r0, r0, #24	@ 00039b1a 000e
.org 0x39b1c
	cmp r0, #255	@ 00039b1c ff28
.org 0x39b1e
	bne.n 0x39b24	@ 00039b1e 01d1
.org 0x39b20
	movs r0, #0	@ 00039b20 0020
.org 0x39b22
	strb r0, [r3, #0]	@ 00039b22 1870
.org 0x39b24
	ldr r4, [pc, #32]	@ 00039b24 084c
.org 0x39b26
	adds r0, r1, r4	@ 00039b26 0819
.org 0x39b28
	ldrh r1, [r0, #0]	@ 00039b28 0188
.org 0x39b2a
	movs r0, #48	@ 00039b2a 3020
.org 0x39b2c
	ands r0, r1	@ 00039b2c 0840
.org 0x39b2e
	cmp r0, #0	@ 00039b2e 0028
.org 0x39b30
	bne.n 0x39b72	@ 00039b30 1fd1
.org 0x39b32
	movs r0, #64	@ 00039b32 4020
.org 0x39b34
	ands r0, r1	@ 00039b34 0840
.org 0x39b36
	cmp r0, #0	@ 00039b36 0028
.org 0x39b38
	beq.n 0x39b72	@ 00039b38 1bd0
.org 0x39b3a
	movs r0, #10	@ 00039b3a 0a20
.org 0x39b3c
	strb r0, [r2, #0]	@ 00039b3c 1070
.org 0x39b3e
	ldrb r0, [r3, #0]	@ 00039b3e 1878
.org 0x39b40
	adds r0, #1	@ 00039b40 0130
.org 0x39b42
	strb r0, [r3, #0]	@ 00039b42 1870
.org 0x39b44
	b.n 0x39b72	@ 00039b44 15e0
.org 0x39b46
	.byte 0x00	@ 00039b46 data
.org 0x39b47
	.byte 0x00	@ 00039b47 data
.org 0x39b48
	.byte 0x52,0x02,0x00,0x00	@ 00039b48 data
.org 0x39b4c
	movs r0, #155	@ 00039b4c 9b20
.org 0x39b4e
	lsls r0, r0, #2	@ 00039b4e 8000
.org 0x39b50
	adds r1, r1, r0	@ 00039b50 0918
.org 0x39b52
	ldrb r0, [r1, #0]	@ 00039b52 0878
.org 0x39b54
	subs r0, #1	@ 00039b54 0138
.org 0x39b56
	strb r0, [r1, #0]	@ 00039b56 0870
.org 0x39b58
	lsls r0, r0, #24	@ 00039b58 0006
.org 0x39b5a
	lsrs r0, r0, #24	@ 00039b5a 000e
.org 0x39b5c
	cmp r0, #255	@ 00039b5c ff28
.org 0x39b5e
	bne.n 0x39b66	@ 00039b5e 02d1
.org 0x39b60
	movs r0, #0	@ 00039b60 0020
.org 0x39b62
	strb r0, [r3, #0]	@ 00039b62 1870
.org 0x39b64
	b.n 0x39b74	@ 00039b64 06e0
