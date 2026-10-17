@ FUN_080f7abc  entry 0x080f7abc  size 228
.thumb
.org 0xf7abc
FUN_080f7abc:
	push {r4, r5, lr}	@ 000f7abc 30b5
.org 0xf7abe
	adds r4, r0, #0	@ 000f7abe 041c
.org 0xf7ac0
	ldrb r0, [r4, #14]	@ 000f7ac0 a07b
.org 0xf7ac2
	cmp r0, #4	@ 000f7ac2 0428
.org 0xf7ac4
	bhi.n 0xf7b08	@ 000f7ac4 20d8
.org 0xf7ac6
	lsls r0, r0, #2	@ 000f7ac6 8000
.org 0xf7ac8
	ldr r1, [pc, #4]	@ 000f7ac8 0149
.org 0xf7aca
	adds r0, r0, r1	@ 000f7aca 4018
.org 0xf7acc
	ldr r0, [r0, #0]	@ 000f7acc 0068
.org 0xf7ace
	mov pc, r0	@ 000f7ace 8746
.org 0xf7ad0
	.byte 0xd4,0x7a,0x0f,0x08	@ 000f7ad0 data
.org 0xf7ad4
	.byte 0x08,0x7b,0x0f,0x08	@ 000f7ad4 data
.org 0xf7ad8
	.byte 0xe8,0x7a,0x0f,0x08	@ 000f7ad8 data
.org 0xf7adc
	.byte 0xf2,0x7a,0x0f,0x08	@ 000f7adc data
.org 0xf7ae0
	.byte 0xf8,0x7a,0x0f,0x08	@ 000f7ae0 data
.org 0xf7ae4
	.byte 0x04,0x7b,0x0f,0x08	@ 000f7ae4 data
.org 0xf7ae8
	.byte 0x20	@ 000f7ae8 data
.org 0xf7ae9
	.byte 0x6e	@ 000f7ae9 data
.org 0xf7aea
	.byte 0x80	@ 000f7aea data
.org 0xf7aeb
	.byte 0x21	@ 000f7aeb data
.org 0xf7aec
	.byte 0x49	@ 000f7aec data
.org 0xf7aed
	.byte 0x00	@ 000f7aed data
.org 0xf7aee
	.byte 0x40	@ 000f7aee data
.org 0xf7aef
	.byte 0x18	@ 000f7aef data
.org 0xf7af0
	.byte 0x09	@ 000f7af0 data
.org 0xf7af1
	.byte 0xe0	@ 000f7af1 data
.org 0xf7af2
	.byte 0xc0	@ 000f7af2 data
.org 0xf7af3
	.byte 0x20	@ 000f7af3 data
.org 0xf7af4
	.byte 0x80	@ 000f7af4 data
.org 0xf7af5
	.byte 0x00	@ 000f7af5 data
.org 0xf7af6
	.byte 0x06	@ 000f7af6 data
.org 0xf7af7
	.byte 0xe0	@ 000f7af7 data
.org 0xf7af8
	.byte 0x20	@ 000f7af8 data
.org 0xf7af9
	.byte 0x6e	@ 000f7af9 data
.org 0xf7afa
	.byte 0x01	@ 000f7afa data
.org 0xf7afb
	.byte 0x4a	@ 000f7afb data
.org 0xf7afc
	.byte 0x80	@ 000f7afc data
.org 0xf7afd
	.byte 0x18	@ 000f7afd data
.org 0xf7afe
	.byte 0x02	@ 000f7afe data
.org 0xf7aff
	.byte 0xe0	@ 000f7aff data
.org 0xf7b00
	.byte 0x00	@ 000f7b00 data
.org 0xf7b01
	.byte 0xff	@ 000f7b01 data
.org 0xf7b02
	.byte 0xff	@ 000f7b02 data
.org 0xf7b03
	.byte 0xff	@ 000f7b03 data
.org 0xf7b04
	.byte 0x07	@ 000f7b04 data
.org 0xf7b05
	.byte 0x48	@ 000f7b05 data
.org 0xf7b06
	.byte 0x20	@ 000f7b06 data
.org 0xf7b07
	.byte 0x66	@ 000f7b07 data
.org 0xf7b08
	ldr r0, [pc, #28]	@ 000f7b08 0748
.org 0xf7b0a
	ldr r0, [r0, #0]	@ 000f7b0a 0068
.org 0xf7b0c
	ldr r1, [pc, #28]	@ 000f7b0c 0749
.org 0xf7b0e
	adds r0, r0, r1	@ 000f7b0e 4018
.org 0xf7b10
	ldrh r1, [r0, #0]	@ 000f7b10 0188
.org 0xf7b12
	ldrb r0, [r4, #17]	@ 000f7b12 607c
.org 0xf7b14
	cmp r0, #1	@ 000f7b14 0128
.org 0xf7b16
	beq.n 0xf7b5c	@ 000f7b16 21d0
.org 0xf7b18
	cmp r0, #1	@ 000f7b18 0128
.org 0xf7b1a
	bgt.n 0xf7b30	@ 000f7b1a 09dc
.org 0xf7b1c
	cmp r0, #0	@ 000f7b1c 0028
.org 0xf7b1e
	beq.n 0xf7b3a	@ 000f7b1e 0cd0
.org 0xf7b20
	b.n 0xf7bc6	@ 000f7b20 51e0
.org 0xf7b22
	.byte 0x00	@ 000f7b22 data
.org 0xf7b23
	.byte 0x00	@ 000f7b23 data
.org 0xf7b24
	.byte 0x00	@ 000f7b24 data
.org 0xf7b25
	.byte 0xf0	@ 000f7b25 data
.org 0xf7b26
	.byte 0xff	@ 000f7b26 data
.org 0xf7b27
	.byte 0xff	@ 000f7b27 data
.org 0xf7b28
	.byte 0xf0,0xdb,0x02,0x02	@ 000f7b28 data
.org 0xf7b2c
	.byte 0x7e,0x02,0x00,0x00	@ 000f7b2c data
.org 0xf7b30
	cmp r0, #2	@ 000f7b30 0228
.org 0xf7b32
	beq.n 0xf7b94	@ 000f7b32 2fd0
.org 0xf7b34
	cmp r0, #4	@ 000f7b34 0428
.org 0xf7b36
	beq.n 0xf7ba2	@ 000f7b36 34d0
.org 0xf7b38
	b.n 0xf7bc6	@ 000f7b38 45e0
.org 0xf7b3a
	movs r2, #0	@ 000f7b3a 0022
.org 0xf7b3c
	movs r0, #250	@ 000f7b3c fa20
.org 0xf7b3e
	lsls r0, r0, #2	@ 000f7b3e 8000
.org 0xf7b40
	cmp r1, r0	@ 000f7b40 8142
.org 0xf7b42
	bne.n 0xf7b46	@ 000f7b42 00d1
.org 0xf7b44
	movs r2, #1	@ 000f7b44 0122
.org 0xf7b46
	cmp r2, #0	@ 000f7b46 002a
.org 0xf7b48
	beq.n 0xf7b54	@ 000f7b48 04d0
.org 0xf7b4a
	ldr r1, [pc, #4]	@ 000f7b4a 0149
.org 0xf7b4c
	b.n 0xf7bb8	@ 000f7b4c 34e0
.org 0xf7b4e
	.byte 0x00	@ 000f7b4e data
.org 0xf7b4f
	.byte 0x00	@ 000f7b4f data
.org 0xf7b50
	.byte 0x01,0x67,0x00,0x00	@ 000f7b50 data
.org 0xf7b54
	ldrb r1, [r4, #10]	@ 000f7b54 a17a
.org 0xf7b56
	movs r0, #254	@ 000f7b56 fe20
.org 0xf7b58
	ands r0, r1	@ 000f7b58 0840
.org 0xf7b5a
	b.n 0xf7bc4	@ 000f7b5a 33e0
.org 0xf7b5c
	movs r5, #0	@ 000f7b5c 0025
.org 0xf7b5e
	movs r0, #250	@ 000f7b5e fa20
.org 0xf7b60
	lsls r0, r0, #2	@ 000f7b60 8000
.org 0xf7b62
	cmp r1, r0	@ 000f7b62 8142
.org 0xf7b64
	bne.n 0xf7b68	@ 000f7b64 00d1
.org 0xf7b66
	movs r5, #1	@ 000f7b66 0125
.org 0xf7b68
	adds r0, r1, #0	@ 000f7b68 081c
.org 0xf7b6a
	movs r1, #100	@ 000f7b6a 6421
.org 0xf7b6c
	bl 0x129120	@ 000f7b6c 31f0d8fa
.org 0xf7b70
	lsls r0, r0, #16	@ 000f7b70 0004
.org 0xf7b72
	lsrs r0, r0, #16	@ 000f7b72 000c
.org 0xf7b74
	movs r1, #10	@ 000f7b74 0a21
.org 0xf7b76
	bl 0x129198	@ 000f7b76 31f00ffb
.org 0xf7b7a
	lsls r0, r0, #24	@ 000f7b7a 0006
.org 0xf7b7c
	lsrs r1, r0, #24	@ 000f7b7c 010e
.org 0xf7b7e
	cmp r1, #0	@ 000f7b7e 0029
.org 0xf7b80
	bne.n 0xf7bb0	@ 000f7b80 16d1
.org 0xf7b82
	cmp r5, #0	@ 000f7b82 002d
.org 0xf7b84
	beq.n 0xf7b8c	@ 000f7b84 02d0
.org 0xf7b86
	movs r1, #206	@ 000f7b86 ce21
.org 0xf7b88
	lsls r1, r1, #7	@ 000f7b88 c901
.org 0xf7b8a
	b.n 0xf7bb8	@ 000f7b8a 15e0
.org 0xf7b8c
	ldrb r1, [r4, #10]	@ 000f7b8c a17a
.org 0xf7b8e
	movs r0, #254	@ 000f7b8e fe20
.org 0xf7b90
	ands r0, r1	@ 000f7b90 0840
.org 0xf7b92
	b.n 0xf7bc4	@ 000f7b92 17e0
.org 0xf7b94
	adds r0, r1, #0	@ 000f7b94 081c
.org 0xf7b96
	movs r1, #10	@ 000f7b96 0a21
.org 0xf7b98
	bl 0x129120	@ 000f7b98 31f0c2fa
.org 0xf7b9c
	lsls r0, r0, #16	@ 000f7b9c 0004
.org 0xf7b9e
	lsrs r0, r0, #16	@ 000f7b9e 000c
