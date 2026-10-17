@ FUN_08051ae4  entry 0x08051ae4  size 152
.thumb
.org 0x51ae4
FUN_08051ae4:
	push {r4, lr}	@ 00051ae4 10b5
.org 0x51ae6
	adds r4, r0, #0	@ 00051ae6 041c
.org 0x51ae8
	ldrb r0, [r4, #14]	@ 00051ae8 a07b
.org 0x51aea
	cmp r0, #0	@ 00051aea 0028
.org 0x51aec
	bne.n 0x51b4c	@ 00051aec 2ed1
.org 0x51aee
	ldr r1, [pc, #24]	@ 00051aee 0649
.org 0x51af0
	adds r0, r4, #0	@ 00051af0 201c
.org 0x51af2
	bl 0x1cf00	@ 00051af2 cbf705fa
.org 0x51af6
	adds r0, r4, #0	@ 00051af6 201c
.org 0x51af8
	adds r0, #164	@ 00051af8 a430
.org 0x51afa
	movs r1, #0	@ 00051afa 0021
.org 0x51afc
	ldrsh r0, [r0, r1]	@ 00051afc 405e
.org 0x51afe
	cmp r0, #32	@ 00051afe 2028
.org 0x51b00
	ble.n 0x51b0c	@ 00051b00 04dd
.org 0x51b02
	movs r0, #64	@ 00051b02 4020
.org 0x51b04
	b.n 0x51b16	@ 00051b04 07e0
.org 0x51b06
	.byte 0x00	@ 00051b06 data
.org 0x51b07
	.byte 0x00	@ 00051b07 data
.org 0x51b08
	.byte 0x06,0xa1,0x00,0x00	@ 00051b08 data
.org 0x51b0c
	cmp r0, #16	@ 00051b0c 1028
.org 0x51b0e
	ble.n 0x51b14	@ 00051b0e 01dd
.org 0x51b10
	movs r0, #50	@ 00051b10 3220
.org 0x51b12
	b.n 0x51b16	@ 00051b12 00e0
.org 0x51b14
	movs r0, #40	@ 00051b14 2820
.org 0x51b16
	strb r0, [r4, #18]	@ 00051b16 a074
.org 0x51b18
	movs r0, #231	@ 00051b18 e720
.org 0x51b1a
	bl 0x2b10	@ 00051b1a b0f7f9ff
.org 0x51b1e
	ldr r2, [pc, #100]	@ 00051b1e 194a
.org 0x51b20
	ldr r1, [r2, #0]	@ 00051b20 1168
.org 0x51b22
	ldr r0, [pc, #100]	@ 00051b22 1948
.org 0x51b24
	muls r1, r0	@ 00051b24 4143
.org 0x51b26
	ldr r0, [pc, #100]	@ 00051b26 1948
.org 0x51b28
	adds r1, r1, r0	@ 00051b28 0918
.org 0x51b2a
	lsls r1, r1, #1	@ 00051b2a 4900
.org 0x51b2c
	lsrs r0, r1, #1	@ 00051b2c 4808
.org 0x51b2e
	str r0, [r2, #0]	@ 00051b2e 1060
.org 0x51b30
	lsrs r1, r1, #17	@ 00051b30 490c
.org 0x51b32
	movs r0, #3	@ 00051b32 0320
.org 0x51b34
	ands r1, r0	@ 00051b34 0140
.org 0x51b36
	adds r0, r4, #0	@ 00051b36 201c
.org 0x51b38
	bl 0x90dac	@ 00051b38 3ff038f9
.org 0x51b3c
	adds r1, r4, #0	@ 00051b3c 211c
.org 0x51b3e
	adds r1, #214	@ 00051b3e d631
.org 0x51b40
	ldrb r0, [r1, #0]	@ 00051b40 0878
.org 0x51b42
	subs r0, #1	@ 00051b42 0138
.org 0x51b44
	strb r0, [r1, #0]	@ 00051b44 0870
.org 0x51b46
	ldrb r0, [r4, #14]	@ 00051b46 a07b
.org 0x51b48
	adds r0, #1	@ 00051b48 0130
.org 0x51b4a
	strb r0, [r4, #14]	@ 00051b4a a073
.org 0x51b4c
	adds r0, r4, #0	@ 00051b4c 201c
.org 0x51b4e
	bl 0x1cff0	@ 00051b4e cbf74ffa
.org 0x51b52
	ldrb r0, [r4, #18]	@ 00051b52 a07c
.org 0x51b54
	subs r0, #1	@ 00051b54 0138
.org 0x51b56
	strb r0, [r4, #18]	@ 00051b56 a074
.org 0x51b58
	lsls r0, r0, #24	@ 00051b58 0006
.org 0x51b5a
	lsrs r0, r0, #24	@ 00051b5a 000e
.org 0x51b5c
	cmp r0, #255	@ 00051b5c ff28
.org 0x51b5e
	bne.n 0x51b7c	@ 00051b5e 0dd1
.org 0x51b60
	adds r0, r4, #0	@ 00051b60 201c
.org 0x51b62
	adds r0, #214	@ 00051b62 d630
.org 0x51b64
	ldrb r0, [r0, #0]	@ 00051b64 0078
.org 0x51b66
	cmp r0, #0	@ 00051b66 0028
.org 0x51b68
	beq.n 0x51b74	@ 00051b68 04d0
.org 0x51b6a
	adds r0, r4, #0	@ 00051b6a 201c
.org 0x51b6c
	adds r0, #213	@ 00051b6c d530
.org 0x51b6e
	ldrb r0, [r0, #0]	@ 00051b6e 0078
.org 0x51b70
	cmp r0, #5	@ 00051b70 0528
.org 0x51b72
	bls.n 0x51b78	@ 00051b72 01d9
.org 0x51b74
	movs r0, #15	@ 00051b74 0f20
.org 0x51b76
	strb r0, [r4, #13]	@ 00051b76 6073
.org 0x51b78
	movs r0, #0	@ 00051b78 0020
.org 0x51b7a
	strb r0, [r4, #14]	@ 00051b7a a073
