@ FUN_08088db4  entry 0x08088db4  size 272
.thumb
.org 0x88db4
FUN_08088db4:
	push {r4, r5, r6, r7, lr}	@ 00088db4 f0b5
.org 0x88db6
	mov r7, sl	@ 00088db6 5746
.org 0x88db8
	mov r6, r9	@ 00088db8 4e46
.org 0x88dba
	mov r5, r8	@ 00088dba 4546
.org 0x88dbc
	push {r5, r6, r7}	@ 00088dbc e0b4
.org 0x88dbe
	sub sp, #4	@ 00088dbe 81b0
.org 0x88dc0
	mov sl, r0	@ 00088dc0 8246
.org 0x88dc2
	ldrb r2, [r0, #10]	@ 00088dc2 827a
.org 0x88dc4
	lsrs r2, r2, #5	@ 00088dc4 5209
.org 0x88dc6
	movs r0, #1	@ 00088dc6 0120
.org 0x88dc8
	ands r2, r0	@ 00088dc8 0240
.org 0x88dca
	mov r3, sl	@ 00088dca 5346
.org 0x88dcc
	ldr r0, [r3, #84]	@ 00088dcc 586d
.org 0x88dce
	adds r7, r0, r1	@ 00088dce 4718
.org 0x88dd0
	str r7, [sp, #0]	@ 00088dd0 0097
.org 0x88dd2
	lsls r0, r2, #1	@ 00088dd2 5000
.org 0x88dd4
	adds r0, r0, r2	@ 00088dd4 8018
.org 0x88dd6
	lsls r0, r0, #10	@ 00088dd6 8002
.org 0x88dd8
	ldr r2, [r3, #88]	@ 00088dd8 9a6d
.org 0x88dda
	adds r2, r2, r0	@ 00088dda 1218
.org 0x88ddc
	mov r9, r2	@ 00088ddc 9146
.org 0x88dde
	cmp r1, #0	@ 00088dde 0029
.org 0x88de0
	bge.n 0x88e50	@ 00088de0 36da
.org 0x88de2
	ldr r0, [pc, #96]	@ 00088de2 1848
.org 0x88de4
	adds r4, r7, r0	@ 00088de4 3c18
.org 0x88de6
	mov r6, r9	@ 00088de6 4e46
.org 0x88de8
	movs r1, #0	@ 00088de8 0021
.org 0x88dea
	mov r8, r1	@ 00088dea 8846
.org 0x88dec
	adds r0, r4, #0	@ 00088dec 201c
.org 0x88dee
	adds r1, r6, #0	@ 00088dee 311c
.org 0x88df0
	bl 0x7c7c	@ 00088df0 7ef744ff
.org 0x88df4
	lsls r0, r0, #16	@ 00088df4 0004
.org 0x88df6
	cmp r0, #0	@ 00088df6 0028
.org 0x88df8
	beq.n 0x88e0e	@ 00088df8 09d0
.org 0x88dfa
	adds r0, r4, #0	@ 00088dfa 201c
.org 0x88dfc
	adds r1, r6, #0	@ 00088dfc 311c
.org 0x88dfe
	bl 0x8988	@ 00088dfe 7ff7c3fd
.org 0x88e02
	movs r3, #128	@ 00088e02 8023
.org 0x88e04
	lsls r3, r3, #4	@ 00088e04 1b01
.org 0x88e06
	adds r0, r0, r3	@ 00088e06 c018
.org 0x88e08
	cmp r0, r7	@ 00088e08 b842
.org 0x88e0a
	ble.n 0x88e0e	@ 00088e0a 00dd
.org 0x88e0c
	adds r7, r0, #0	@ 00088e0c 071c
.org 0x88e0e
	ldr r0, [pc, #56]	@ 00088e0e 0e48
.org 0x88e10
	adds r6, r6, r0	@ 00088e10 3618
.org 0x88e12
	movs r1, #1	@ 00088e12 0121
.org 0x88e14
	negs r1, r1	@ 00088e14 4942
.org 0x88e16
	add r8, r1	@ 00088e16 8844
.org 0x88e18
	mov r3, r8	@ 00088e18 4346
.org 0x88e1a
	cmp r3, #0	@ 00088e1a 002b
.org 0x88e1c
	bge.n 0x88dec	@ 00088e1c e6da
.org 0x88e1e
	ldr r6, [pc, #44]	@ 00088e1e 0b4e
.org 0x88e20
	add r6, r9	@ 00088e20 4e44
.org 0x88e22
	adds r0, r4, #0	@ 00088e22 201c
.org 0x88e24
	adds r1, r6, #0	@ 00088e24 311c
.org 0x88e26
	bl 0x7c7c	@ 00088e26 7ef729ff
.org 0x88e2a
	lsls r0, r0, #16	@ 00088e2a 0004
.org 0x88e2c
	cmp r0, #0	@ 00088e2c 0028
.org 0x88e2e
	beq.n 0x88eb0	@ 00088e2e 3fd0
.org 0x88e30
	adds r0, r4, #0	@ 00088e30 201c
.org 0x88e32
	adds r1, r6, #0	@ 00088e32 311c
.org 0x88e34
	bl 0x8988	@ 00088e34 7ff7a8fd
.org 0x88e38
	movs r1, #128	@ 00088e38 8021
.org 0x88e3a
	lsls r1, r1, #4	@ 00088e3a 0901
.org 0x88e3c
	adds r0, r0, r1	@ 00088e3c 4018
.org 0x88e3e
	cmp r0, r7	@ 00088e3e b842
.org 0x88e40
	ble.n 0x88eb0	@ 00088e40 36dd
.org 0x88e42
	b.n 0x88eae	@ 00088e42 34e0
.org 0x88e44
	.byte 0x00,0xf8,0xff,0xff	@ 00088e44 data
.org 0x88e48
	.byte 0x00,0xf0,0xff,0xff	@ 00088e48 data
.org 0x88e4c
	.byte 0x00,0xf4,0xff,0xff	@ 00088e4c data
.org 0x88e50
	movs r3, #128	@ 00088e50 8023
.org 0x88e52
	lsls r3, r3, #4	@ 00088e52 1b01
.org 0x88e54
	adds r4, r7, r3	@ 00088e54 fc18
.org 0x88e56
	mov r6, r9	@ 00088e56 4e46
.org 0x88e58
	movs r0, #0	@ 00088e58 0020
.org 0x88e5a
	mov r8, r0	@ 00088e5a 8046
.org 0x88e5c
	adds r0, r4, #0	@ 00088e5c 201c
.org 0x88e5e
	adds r1, r6, #0	@ 00088e5e 311c
.org 0x88e60
	bl 0x7c7c	@ 00088e60 7ef70cff
.org 0x88e64
	lsls r0, r0, #16	@ 00088e64 0004
.org 0x88e66
	cmp r0, #0	@ 00088e66 0028
.org 0x88e68
	beq.n 0x88e7c	@ 00088e68 08d0
.org 0x88e6a
	adds r0, r4, #0	@ 00088e6a 201c
.org 0x88e6c
	adds r1, r6, #0	@ 00088e6c 311c
.org 0x88e6e
	bl 0x8868	@ 00088e6e 7ff7fbfc
.org 0x88e72
	ldr r1, [pc, #76]	@ 00088e72 1349
.org 0x88e74
	adds r0, r0, r1	@ 00088e74 4018
.org 0x88e76
	cmp r0, r7	@ 00088e76 b842
.org 0x88e78
	bge.n 0x88e7c	@ 00088e78 00da
.org 0x88e7a
	adds r7, r0, #0	@ 00088e7a 071c
.org 0x88e7c
	ldr r3, [pc, #68]	@ 00088e7c 114b
.org 0x88e7e
	adds r6, r6, r3	@ 00088e7e f618
.org 0x88e80
	movs r0, #1	@ 00088e80 0120
.org 0x88e82
	negs r0, r0	@ 00088e82 4042
.org 0x88e84
	add r8, r0	@ 00088e84 8044
.org 0x88e86
	mov r1, r8	@ 00088e86 4146
.org 0x88e88
	cmp r1, #0	@ 00088e88 0029
.org 0x88e8a
	bge.n 0x88e5c	@ 00088e8a e7da
.org 0x88e8c
	ldr r6, [pc, #56]	@ 00088e8c 0e4e
.org 0x88e8e
	add r6, r9	@ 00088e8e 4e44
.org 0x88e90
	adds r0, r4, #0	@ 00088e90 201c
.org 0x88e92
	adds r1, r6, #0	@ 00088e92 311c
.org 0x88e94
	bl 0x7c7c	@ 00088e94 7ef7f2fe
.org 0x88e98
	lsls r0, r0, #16	@ 00088e98 0004
.org 0x88e9a
	cmp r0, #0	@ 00088e9a 0028
.org 0x88e9c
	beq.n 0x88eb0	@ 00088e9c 08d0
.org 0x88e9e
	adds r0, r4, #0	@ 00088e9e 201c
.org 0x88ea0
	adds r1, r6, #0	@ 00088ea0 311c
.org 0x88ea2
	bl 0x8868	@ 00088ea2 7ff7e1fc
.org 0x88ea6
	ldr r3, [pc, #24]	@ 00088ea6 064b
.org 0x88ea8
	adds r0, r0, r3	@ 00088ea8 c018
.org 0x88eaa
	cmp r0, r7	@ 00088eaa b842
.org 0x88eac
	bge.n 0x88eb0	@ 00088eac 00da
.org 0x88eae
	adds r7, r0, #0	@ 00088eae 071c
.org 0x88eb0
	mov r0, sl	@ 00088eb0 5046
.org 0x88eb2
	str r7, [r0, #84]	@ 00088eb2 4765
.org 0x88eb4
	ldr r1, [sp, #0]	@ 00088eb4 0099
.org 0x88eb6
	cmp r7, r1	@ 00088eb6 8f42
.org 0x88eb8
	bne.n 0x88ecc	@ 00088eb8 08d1
.org 0x88eba
	movs r0, #0	@ 00088eba 0020
.org 0x88ebc
	b.n 0x88ece	@ 00088ebc 07e0
.org 0x88ebe
	.byte 0x00	@ 00088ebe data
.org 0x88ebf
	.byte 0x00	@ 00088ebf data
.org 0x88ec0
	.byte 0x00,0xf8,0xff,0xff	@ 00088ec0 data
