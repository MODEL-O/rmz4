@ FUN_080c3b00  entry 0x080c3b00  size 194
.thumb
.org 0xc3b00
FUN_080c3b00:
	push {r4, lr}	@ 000c3b00 10b5
.org 0xc3b02
	sub sp, #8	@ 000c3b02 82b0
.org 0xc3b04
	adds r4, r0, #0	@ 000c3b04 041c
.org 0xc3b06
	bl 0x1cff0	@ 000c3b06 59f773fa
.org 0xc3b0a
	ldrb r0, [r4, #17]	@ 000c3b0a 607c
.org 0xc3b0c
	cmp r0, #0	@ 000c3b0c 0028
.org 0xc3b0e
	beq.n 0xc3b7c	@ 000c3b0e 35d0
.org 0xc3b10
	ldrb r0, [r4, #18]	@ 000c3b10 a07c
.org 0xc3b12
	adds r0, #1	@ 000c3b12 0130
.org 0xc3b14
	strb r0, [r4, #18]	@ 000c3b14 a074
.org 0xc3b16
	lsls r0, r0, #24	@ 000c3b16 0006
.org 0xc3b18
	lsrs r0, r0, #24	@ 000c3b18 000e
.org 0xc3b1a
	cmp r0, #9	@ 000c3b1a 0928
.org 0xc3b1c
	bne.n 0xc3b7c	@ 000c3b1c 2ed1
.org 0xc3b1e
	ldrb r1, [r4, #10]	@ 000c3b1e a17a
.org 0xc3b20
	movs r0, #16	@ 000c3b20 1020
.org 0xc3b22
	ands r0, r1	@ 000c3b22 0840
.org 0xc3b24
	cmp r0, #0	@ 000c3b24 0028
.org 0xc3b26
	beq.n 0xc3b30	@ 000c3b26 03d0
.org 0xc3b28
	ldr r0, [r4, #84]	@ 000c3b28 606d
.org 0xc3b2a
	movs r1, #128	@ 000c3b2a 8021
.org 0xc3b2c
	lsls r1, r1, #5	@ 000c3b2c 4901
.org 0xc3b2e
	b.n 0xc3b34	@ 000c3b2e 01e0
.org 0xc3b30
	ldr r0, [r4, #84]	@ 000c3b30 606d
.org 0xc3b32
	ldr r1, [pc, #32]	@ 000c3b32 0849
.org 0xc3b34
	adds r0, r0, r1	@ 000c3b34 4018
.org 0xc3b36
	str r0, [sp, #0]	@ 000c3b36 0090
.org 0xc3b38
	ldr r1, [r4, #88]	@ 000c3b38 a16d
.org 0xc3b3a
	str r1, [sp, #4]	@ 000c3b3a 0191
.org 0xc3b3c
	ldr r0, [sp, #0]	@ 000c3b3c 0098
.org 0xc3b3e
	bl 0x8534	@ 000c3b3e 44f7f9fc
.org 0xc3b42
	ldr r1, [sp, #4]	@ 000c3b42 0199
.org 0xc3b44
	subs r2, r0, r1	@ 000c3b44 421a
.org 0xc3b46
	cmp r2, #0	@ 000c3b46 002a
.org 0xc3b48
	blt.n 0xc3b5c	@ 000c3b48 08db
.org 0xc3b4a
	ldr r0, [pc, #12]	@ 000c3b4a 0348
.org 0xc3b4c
	cmp r2, r0	@ 000c3b4c 8242
.org 0xc3b4e
	ble.n 0xc3b64	@ 000c3b4e 09dd
.org 0xc3b50
	b.n 0xc3b7c	@ 000c3b50 14e0
.org 0xc3b52
	.byte 0x00	@ 000c3b52 data
.org 0xc3b53
	.byte 0x00	@ 000c3b53 data
.org 0xc3b54
	.byte 0x00,0xf0,0xff,0xff	@ 000c3b54 data
.org 0xc3b58
	.byte 0xff,0x0e,0x00,0x00	@ 000c3b58 data
.org 0xc3b5c
	subs r1, r1, r0	@ 000c3b5c 091a
.org 0xc3b5e
	ldr r0, [pc, #56]	@ 000c3b5e 0e48
.org 0xc3b60
	cmp r1, r0	@ 000c3b60 8142
.org 0xc3b62
	bgt.n 0xc3b7c	@ 000c3b62 0bdc
.org 0xc3b64
	ldrb r2, [r4, #17]	@ 000c3b64 627c
.org 0xc3b66
	subs r2, #1	@ 000c3b66 013a
.org 0xc3b68
	lsls r2, r2, #24	@ 000c3b68 1206
.org 0xc3b6a
	lsrs r2, r2, #24	@ 000c3b6a 120e
.org 0xc3b6c
	ldrb r3, [r4, #10]	@ 000c3b6c a37a
.org 0xc3b6e
	lsrs r3, r3, #4	@ 000c3b6e 1b09
.org 0xc3b70
	movs r0, #1	@ 000c3b70 0120
.org 0xc3b72
	ands r3, r0	@ 000c3b72 0340
.org 0xc3b74
	mov r0, sp	@ 000c3b74 6846
.org 0xc3b76
	movs r1, #0	@ 000c3b76 0021
.org 0xc3b78
	bl 0xc3998	@ 000c3b78 fff70eff
.org 0xc3b7c
	adds r0, r4, #0	@ 000c3b7c 201c
.org 0xc3b7e
	adds r0, #113	@ 000c3b7e 7130
.org 0xc3b80
	ldrb r0, [r0, #0]	@ 000c3b80 0078
.org 0xc3b82
	subs r0, #1	@ 000c3b82 0138
.org 0xc3b84
	lsls r0, r0, #24	@ 000c3b84 0006
.org 0xc3b86
	lsrs r0, r0, #24	@ 000c3b86 000e
.org 0xc3b88
	cmp r0, #9	@ 000c3b88 0928
.org 0xc3b8a
	bhi.n 0xc3ba0	@ 000c3b8a 09d8
.org 0xc3b8c
	adds r0, r4, #0	@ 000c3b8c 201c
.org 0xc3b8e
	adds r0, #116	@ 000c3b8e 7430
.org 0xc3b90
	ldr r1, [pc, #8]	@ 000c3b90 0249
.org 0xc3b92
	bl 0x5784	@ 000c3b92 41f7f7fd
.org 0xc3b96
	b.n 0xc3baa	@ 000c3b96 08e0
.org 0xc3b98
	.byte 0xff,0x0e,0x00,0x00	@ 000c3b98 data
.org 0xc3b9c
	.byte 0xfc,0x55,0x86,0x08	@ 000c3b9c data
.org 0xc3ba0
	adds r0, r4, #0	@ 000c3ba0 201c
.org 0xc3ba2
	adds r0, #116	@ 000c3ba2 7430
.org 0xc3ba4
	ldr r1, [pc, #44]	@ 000c3ba4 0b49
.org 0xc3ba6
	bl 0x5784	@ 000c3ba6 41f7edfd
.org 0xc3baa
	adds r0, r4, #0	@ 000c3baa 201c
.org 0xc3bac
	adds r0, #115	@ 000c3bac 7330
.org 0xc3bae
	ldrb r0, [r0, #0]	@ 000c3bae 0078
.org 0xc3bb0
	cmp r0, #3	@ 000c3bb0 0328
.org 0xc3bb2
	bne.n 0xc3bcc	@ 000c3bb2 0bd1
.org 0xc3bb4
	ldr r1, [pc, #32]	@ 000c3bb4 0849
.org 0xc3bb6
	ldrb r0, [r4, #9]	@ 000c3bb6 607a
.org 0xc3bb8
	lsls r0, r0, #2	@ 000c3bb8 8000
.org 0xc3bba
	adds r0, r0, r1	@ 000c3bba 4018
.org 0xc3bbc
	movs r1, #2	@ 000c3bbc 0221
.org 0xc3bbe
	str r1, [r4, #12]	@ 000c3bbe e160
.org 0xc3bc0
	ldr r0, [r0, #0]	@ 000c3bc0 0068
