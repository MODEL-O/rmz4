@ FUN_080c2d5c  entry 0x080c2d5c  size 174
.thumb
.org 0xc2d5c
FUN_080c2d5c:
	push {r4, r5, r6, r7, lr}	@ 000c2d5c f0b5
.org 0xc2d5e
	mov r7, sl	@ 000c2d5e 5746
.org 0xc2d60
	mov r6, r9	@ 000c2d60 4e46
.org 0xc2d62
	mov r5, r8	@ 000c2d62 4546
.org 0xc2d64
	push {r5, r6, r7}	@ 000c2d64 e0b4
.org 0xc2d66
	sub sp, #12	@ 000c2d66 83b0
.org 0xc2d68
	adds r5, r0, #0	@ 000c2d68 051c
.org 0xc2d6a
	ldr r0, [pc, #52]	@ 000c2d6a 0d48
.org 0xc2d6c
	ldr r1, [r0, #4]	@ 000c2d6c 4168
.org 0xc2d6e
	ldr r0, [r0, #0]	@ 000c2d6e 0068
.org 0xc2d70
	str r0, [sp, #4]	@ 000c2d70 0190
.org 0xc2d72
	str r1, [sp, #8]	@ 000c2d72 0291
.org 0xc2d74
	ldr r1, [pc, #44]	@ 000c2d74 0b49
.org 0xc2d76
	mov r0, sp	@ 000c2d76 6846
.org 0xc2d78
	movs r2, #2	@ 000c2d78 0222
.org 0xc2d7a
	bl 0x129258	@ 000c2d7a 66f06dfa
.org 0xc2d7e
	ldrb r7, [r5, #17]	@ 000c2d7e 6f7c
.org 0xc2d80
	ldrb r0, [r5, #15]	@ 000c2d80 e87b
.org 0xc2d82
	cmp r0, #0	@ 000c2d82 0028
.org 0xc2d84
	bne.n 0xc2dec	@ 000c2d84 32d1
.org 0xc2d86
	movs r0, #166	@ 000c2d86 a620
.org 0xc2d88
	bl 0x2b10	@ 000c2d88 3ff7c2fe
.org 0xc2d8c
	movs r6, #0	@ 000c2d8c 0026
.org 0xc2d8e
	mov r0, sp	@ 000c2d8e 6846
.org 0xc2d90
	adds r0, r0, r7	@ 000c2d90 c019
.org 0xc2d92
	mov r8, r0	@ 000c2d92 8046
.org 0xc2d94
	lsls r0, r7, #2	@ 000c2d94 b800
.org 0xc2d96
	mov sl, r0	@ 000c2d96 8246
.org 0xc2d98
	add r0, sp, #4	@ 000c2d98 01a8
.org 0xc2d9a
	mov r9, r0	@ 000c2d9a 8146
.org 0xc2d9c
	b.n 0xc2db4	@ 000c2d9c 0ae0
.org 0xc2d9e
	.byte 0x00	@ 000c2d9e data
.org 0xc2d9f
	.byte 0x00	@ 000c2d9f data
.org 0xc2da0
	.byte 0x44,0xa1,0x12,0x08	@ 000c2da0 data
.org 0xc2da4
	.byte 0x4c,0xa1,0x12,0x08	@ 000c2da4 data
.org 0xc2da8
	adds r1, r5, #0	@ 000c2da8 291c
.org 0xc2daa
	adds r1, #181	@ 000c2daa b531
.org 0xc2dac
	ldrb r0, [r1, #0]	@ 000c2dac 0878
.org 0xc2dae
	adds r0, #1	@ 000c2dae 0130
.org 0xc2db0
	strb r0, [r1, #0]	@ 000c2db0 0870
.org 0xc2db2
	adds r6, #1	@ 000c2db2 0136
.org 0xc2db4
	mov r0, r8	@ 000c2db4 4046
.org 0xc2db6
	ldrb r1, [r0, #0]	@ 000c2db6 0178
.org 0xc2db8
	cmp r6, r1	@ 000c2db8 8e42
.org 0xc2dba
	bge.n 0xc2dda	@ 000c2dba 0eda
.org 0xc2dbc
	adds r4, r5, #0	@ 000c2dbc 2c1c
.org 0xc2dbe
	adds r4, #84	@ 000c2dbe 5434
.org 0xc2dc0
	lsls r0, r6, #8	@ 000c2dc0 3002
.org 0xc2dc2
	bl 0x128fb8	@ 000c2dc2 66f0f9f8
.org 0xc2dc6
	adds r3, r0, #0	@ 000c2dc6 031c
.org 0xc2dc8
	lsls r3, r3, #24	@ 000c2dc8 1b06
.org 0xc2dca
	lsrs r3, r3, #24	@ 000c2dca 1b0e
.org 0xc2dcc
	adds r0, r5, #0	@ 000c2dcc 281c
.org 0xc2dce
	adds r1, r4, #0	@ 000c2dce 211c
.org 0xc2dd0
	adds r2, r7, #0	@ 000c2dd0 3a1c
.org 0xc2dd2
	bl 0xc298c	@ 000c2dd2 fff7dbfd
.org 0xc2dd6
	cmp r0, #0	@ 000c2dd6 0028
.org 0xc2dd8
	bne.n 0xc2da8	@ 000c2dd8 e6d1
.org 0xc2dda
	mov r0, sl	@ 000c2dda 5046
.org 0xc2ddc
	add r0, r9	@ 000c2ddc 4844
.org 0xc2dde
	ldrh r1, [r0, #0]	@ 000c2dde 0188
.org 0xc2de0
	adds r0, r5, #0	@ 000c2de0 281c
.org 0xc2de2
	bl 0x1cf00	@ 000c2de2 5af78df8
.org 0xc2de6
	ldrb r0, [r5, #15]	@ 000c2de6 e87b
.org 0xc2de8
	adds r0, #1	@ 000c2de8 0130
.org 0xc2dea
	strb r0, [r5, #15]	@ 000c2dea e873
.org 0xc2dec
	adds r0, r5, #0	@ 000c2dec 281c
.org 0xc2dee
	bl 0x1cff0	@ 000c2dee 5af7fff8
.org 0xc2df2
	adds r0, r5, #0	@ 000c2df2 281c
.org 0xc2df4
	adds r0, #115	@ 000c2df4 7330
.org 0xc2df6
	ldrb r1, [r0, #0]	@ 000c2df6 0178
.org 0xc2df8
	cmp r1, #3	@ 000c2df8 0329
.org 0xc2dfa
	bne.n 0xc2e04	@ 000c2dfa 03d1
.org 0xc2dfc
	movs r0, #0	@ 000c2dfc 0020
.org 0xc2dfe
	strb r1, [r5, #13]	@ 000c2dfe 6973
.org 0xc2e00
	strb r0, [r5, #14]	@ 000c2e00 a873
.org 0xc2e02
	strb r0, [r5, #15]	@ 000c2e02 e873
.org 0xc2e04
	add sp, #12	@ 000c2e04 03b0
.org 0xc2e06
	pop {r3, r4, r5}	@ 000c2e06 38bc
.org 0xc2e08
	mov r8, r3	@ 000c2e08 9846
