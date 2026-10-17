@ FUN_08002d94  entry 0x08002d94  size 112
.thumb
.org 0x2d94
FUN_08002d94:
	push {r4, r5, r6, lr}	@ 00002d94 70b5
.org 0x2d96
	mov r6, r9	@ 00002d96 4e46
.org 0x2d98
	mov r5, r8	@ 00002d98 4546
.org 0x2d9a
	push {r5, r6}	@ 00002d9a 60b4
.org 0x2d9c
	sub sp, #8	@ 00002d9c 82b0
.org 0x2d9e
	adds r4, r0, #0	@ 00002d9e 041c
.org 0x2da0
	mov r8, r1	@ 00002da0 8846
.org 0x2da2
	mov r9, r2	@ 00002da2 9146
.org 0x2da4
	movs r5, #0	@ 00002da4 0025
.org 0x2da6
	adds r6, r4, #0	@ 00002da6 261c
.org 0x2da8
	adds r6, #8	@ 00002da8 0836
.org 0x2daa
	str r5, [sp, #0]	@ 00002daa 0095
.org 0x2dac
	movs r2, #128	@ 00002dac 8022
.org 0x2dae
	lsls r2, r2, #17	@ 00002dae 5204
.org 0x2db0
	mov r0, sp	@ 00002db0 6846
.org 0x2db2
	adds r1, r6, #0	@ 00002db2 311c
.org 0x2db4
	bl 0x128be0	@ 00002db4 25f114ff
.org 0x2db8
	str r5, [sp, #4]	@ 00002db8 0195
.org 0x2dba
	add r0, sp, #4	@ 00002dba 01a8
.org 0x2dbc
	ldr r2, [pc, #68]	@ 00002dbc 114a
.org 0x2dbe
	adds r1, r6, #0	@ 00002dbe 311c
.org 0x2dc0
	bl 0x128be4	@ 00002dc0 25f110ff
.org 0x2dc4
	ldr r1, [pc, #64]	@ 00002dc4 1049
.org 0x2dc6
	adds r0, r4, #0	@ 00002dc6 201c
.org 0x2dc8
	bl 0x2c94	@ 00002dc8 fff764ff
.org 0x2dcc
	ldrb r2, [r4, #17]	@ 00002dcc 627c
.org 0x2dce
	movs r0, #16	@ 00002dce 1020
.org 0x2dd0
	orrs r2, r0	@ 00002dd0 0243
.org 0x2dd2
	ldrb r1, [r4, #21]	@ 00002dd2 617d
.org 0x2dd4
	movs r0, #13	@ 00002dd4 0d20
.org 0x2dd6
	negs r0, r0	@ 00002dd6 4042
.org 0x2dd8
	ands r0, r1	@ 00002dd8 0840
.org 0x2dda
	movs r1, #8	@ 00002dda 0821
.org 0x2ddc
	orrs r0, r1	@ 00002ddc 0843
.org 0x2dde
	strb r0, [r4, #21]	@ 00002dde 6075
.org 0x2de0
	mov r0, r8	@ 00002de0 4046
.org 0x2de2
	str r0, [r4, #8]	@ 00002de2 a060
.org 0x2de4
	mov r0, r9	@ 00002de4 4846
.org 0x2de6
	str r0, [r4, #12]	@ 00002de6 e060
.org 0x2de8
	movs r0, #128	@ 00002de8 8020
.org 0x2dea
	lsls r0, r0, #1	@ 00002dea 4000
.org 0x2dec
	strh r0, [r4, #28]	@ 00002dec a083
.org 0x2dee
	strh r0, [r4, #30]	@ 00002dee e083
.org 0x2df0
	movs r0, #3	@ 00002df0 0320
.org 0x2df2
	orrs r2, r0	@ 00002df2 0243
.org 0x2df4
	strb r2, [r4, #17]	@ 00002df4 6274
.org 0x2df6
	add sp, #8	@ 00002df6 02b0
.org 0x2df8
	pop {r3, r4}	@ 00002df8 18bc
.org 0x2dfa
	mov r8, r3	@ 00002dfa 9846
.org 0x2dfc
	mov r9, r4	@ 00002dfc a146
.org 0x2dfe
	pop {r4, r5, r6}	@ 00002dfe 70bc
.org 0x2e00
	pop {r0}	@ 00002e00 01bc
.org 0x2e02
	bx r0	@ 00002e02 0047
