@ FUN_08097bc4  entry 0x08097bc4  size 232
.thumb
.org 0x97bc4
FUN_08097bc4:
	push {r4, r5, r6, lr}	@ 00097bc4 70b5
.org 0x97bc6
	sub sp, #8	@ 00097bc6 82b0
.org 0x97bc8
	adds r6, r0, #0	@ 00097bc8 061c
.org 0x97bca
	ldrb r0, [r6, #15]	@ 00097bca f07b
.org 0x97bcc
	cmp r0, #0	@ 00097bcc 0028
.org 0x97bce
	bne.n 0x97c14	@ 00097bce 21d1
.org 0x97bd0
	ldr r1, [pc, #24]	@ 00097bd0 0649
.org 0x97bd2
	adds r0, r6, #0	@ 00097bd2 301c
.org 0x97bd4
	bl 0x1cf00	@ 00097bd4 85f794f9
.org 0x97bd8
	ldrb r1, [r6, #10]	@ 00097bd8 b17a
.org 0x97bda
	movs r2, #16	@ 00097bda 1022
.org 0x97bdc
	adds r0, r2, #0	@ 00097bdc 101c
.org 0x97bde
	ands r0, r1	@ 00097bde 0840
.org 0x97be0
	cmp r0, #0	@ 00097be0 0028
.org 0x97be2
	beq.n 0x97bf0	@ 00097be2 05d0
.org 0x97be4
	movs r0, #16	@ 00097be4 1020
.org 0x97be6
	negs r0, r0	@ 00097be6 4042
.org 0x97be8
	str r0, [r6, #100]	@ 00097be8 7066
.org 0x97bea
	b.n 0x97bf2	@ 00097bea 02e0
.org 0x97bec
	.byte 0x06,0x50,0x00,0x00	@ 00097bec data
.org 0x97bf0
	str r2, [r6, #100]	@ 00097bf0 7266
.org 0x97bf2
	ldr r0, [r6, #100]	@ 00097bf2 706e
.org 0x97bf4
	lsls r0, r0, #4	@ 00097bf4 0001
.org 0x97bf6
	negs r0, r0	@ 00097bf6 4042
.org 0x97bf8
	str r0, [r6, #92]	@ 00097bf8 f065
.org 0x97bfa
	adds r0, r6, #0	@ 00097bfa 301c
.org 0x97bfc
	adds r0, #84	@ 00097bfc 5430
.org 0x97bfe
	ldrb r3, [r6, #10]	@ 00097bfe b37a
.org 0x97c00
	lsrs r3, r3, #4	@ 00097c00 1b09
.org 0x97c02
	movs r1, #1	@ 00097c02 0121
.org 0x97c04
	ands r3, r1	@ 00097c04 0b40
.org 0x97c06
	movs r1, #0	@ 00097c06 0021
.org 0x97c08
	movs r2, #0	@ 00097c08 0022
.org 0x97c0a
	bl 0xdd574	@ 00097c0a 45f0b3fc
.org 0x97c0e
	ldrb r0, [r6, #15]	@ 00097c0e f07b
.org 0x97c10
	adds r0, #1	@ 00097c10 0130
.org 0x97c12
	strb r0, [r6, #15]	@ 00097c12 f073
.org 0x97c14
	adds r0, r6, #0	@ 00097c14 301c
.org 0x97c16
	bl 0x1cff0	@ 00097c16 85f7ebf9
.org 0x97c1a
	ldr r0, [r6, #84]	@ 00097c1a 706d
.org 0x97c1c
	ldr r1, [r6, #92]	@ 00097c1c f16d
.org 0x97c1e
	adds r2, r0, r1	@ 00097c1e 4218
.org 0x97c20
	str r2, [r6, #84]	@ 00097c20 7265
.org 0x97c22
	ldr r0, [r6, #100]	@ 00097c22 706e
.org 0x97c24
	adds r1, r1, r0	@ 00097c24 0918
.org 0x97c26
	str r1, [r6, #92]	@ 00097c26 f165
.org 0x97c28
	cmp r1, #0	@ 00097c28 0029
.org 0x97c2a
	bne.n 0x97ca8	@ 00097c2a 3dd1
.org 0x97c2c
	str r2, [sp, #0]	@ 00097c2c 0092
.org 0x97c2e
	ldr r0, [r6, #88]	@ 00097c2e b06d
.org 0x97c30
	ldr r1, [pc, #124]	@ 00097c30 1f49
.org 0x97c32
	adds r0, r0, r1	@ 00097c32 4018
.org 0x97c34
	str r0, [sp, #4]	@ 00097c34 0190
.org 0x97c36
	ldr r5, [pc, #124]	@ 00097c36 1f4d
.org 0x97c38
	ldrb r0, [r6, #10]	@ 00097c38 b07a
.org 0x97c3a
	movs r4, #16	@ 00097c3a 1024
.org 0x97c3c
	adds r3, r4, #0	@ 00097c3c 231c
.org 0x97c3e
	ands r3, r0	@ 00097c3e 0340
.org 0x97c40
	lsls r3, r3, #24	@ 00097c40 1b06
.org 0x97c42
	lsrs r3, r3, #24	@ 00097c42 1b0e
.org 0x97c44
	mov r0, sp	@ 00097c44 6846
.org 0x97c46
	adds r1, r5, #0	@ 00097c46 291c
.org 0x97c48
	movs r2, #0	@ 00097c48 0022
.org 0x97c4a
	bl 0xd4c8c	@ 00097c4a 3df01ff8
.org 0x97c4e
	adds r5, #84	@ 00097c4e 5435
.org 0x97c50
	ldrb r0, [r6, #10]	@ 00097c50 b07a
.org 0x97c52
	ands r4, r0	@ 00097c52 0440
.org 0x97c54
	lsls r4, r4, #24	@ 00097c54 2406
.org 0x97c56
	lsrs r4, r4, #24	@ 00097c56 240e
.org 0x97c58
	mov r0, sp	@ 00097c58 6846
.org 0x97c5a
	adds r1, r5, #0	@ 00097c5a 291c
.org 0x97c5c
	movs r2, #0	@ 00097c5c 0022
.org 0x97c5e
	adds r3, r4, #0	@ 00097c5e 231c
.org 0x97c60
	bl 0xd4c8c	@ 00097c60 3df014f8
.org 0x97c64
	movs r0, #1	@ 00097c64 0120
.org 0x97c66
	mov r1, sp	@ 00097c66 6946
.org 0x97c68
	bl 0xd0c88	@ 00097c68 39f00ef8
.org 0x97c6c
	movs r0, #42	@ 00097c6c 2a20
.org 0x97c6e
	bl 0x2b10	@ 00097c6e 6af74fff
.org 0x97c72
	adds r4, r6, #0	@ 00097c72 341c
.org 0x97c74
	adds r4, #84	@ 00097c74 5434
.org 0x97c76
	movs r0, #4	@ 00097c76 0420
.org 0x97c78
	movs r1, #2	@ 00097c78 0221
.org 0x97c7a
	adds r2, r4, #0	@ 00097c7a 221c
.org 0x97c7c
	bl 0x2ab88	@ 00097c7c 92f784ff
.org 0x97c80
	ldr r2, [pc, #52]	@ 00097c80 0d4a
.org 0x97c82
	ldrh r1, [r2, #12]	@ 00097c82 9189
.org 0x97c84
	ldr r0, [pc, #52]	@ 00097c84 0d48
.org 0x97c86
	cmp r1, r0	@ 00097c86 8142
.org 0x97c88
	bhi.n 0x97c8e	@ 00097c88 01d8
.org 0x97c8a
	adds r0, r1, #1	@ 00097c8a 481c
.org 0x97c8c
	strh r0, [r2, #12]	@ 00097c8c 9081
.org 0x97c8e
	adds r0, r6, #0	@ 00097c8e 301c
.org 0x97c90
	adds r1, r4, #0	@ 00097c90 211c
.org 0x97c92
	bl 0x2abe0	@ 00097c92 92f7a5ff
.org 0x97c96
	ldr r1, [pc, #40]	@ 00097c96 0a49
.org 0x97c98
	ldrb r0, [r6, #9]	@ 00097c98 707a
.org 0x97c9a
	lsls r0, r0, #2	@ 00097c9a 8000
.org 0x97c9c
	adds r0, r0, r1	@ 00097c9c 4018
.org 0x97c9e
	movs r1, #4	@ 00097c9e 0421
.org 0x97ca0
	str r1, [r6, #12]	@ 00097ca0 f160
.org 0x97ca2
	ldr r0, [r0, #0]	@ 00097ca2 0068
.org 0x97ca4
	ldr r0, [r0, #16]	@ 00097ca4 0069
.org 0x97ca6
	str r0, [r6, #20]	@ 00097ca6 7061
.org 0x97ca8
	add sp, #8	@ 00097ca8 02b0
.org 0x97caa
	pop {r4, r5, r6}	@ 00097caa 70bc
