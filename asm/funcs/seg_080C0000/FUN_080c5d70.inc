@ FUN_080c5d70  entry 0x080c5d70  size 212
.thumb
.org 0xc5d70
FUN_080c5d70:
	push {r4, r5, r6, r7, lr}	@ 000c5d70 f0b5
.org 0xc5d72
	sub sp, #8	@ 000c5d72 82b0
.org 0xc5d74
	adds r4, r0, #0	@ 000c5d74 041c
.org 0xc5d76
	ldrb r0, [r4, #10]	@ 000c5d76 a07a
.org 0xc5d78
	lsrs r5, r0, #4	@ 000c5d78 0509
.org 0xc5d7a
	movs r0, #1	@ 000c5d7a 0120
.org 0xc5d7c
	ands r5, r0	@ 000c5d7c 0540
.org 0xc5d7e
	adds r7, r5, #0	@ 000c5d7e 2f1c
.org 0xc5d80
	ldrb r6, [r4, #15]	@ 000c5d80 e67b
.org 0xc5d82
	cmp r6, #0	@ 000c5d82 002e
.org 0xc5d84
	bne.n 0xc5da4	@ 000c5d84 0ed1
.org 0xc5d86
	adds r0, r4, #0	@ 000c5d86 201c
.org 0xc5d88
	adds r0, #116	@ 000c5d88 7430
.org 0xc5d8a
	ldr r1, [pc, #184]	@ 000c5d8a 2e49
.org 0xc5d8c
	bl 0x5784	@ 000c5d8c 3ff7fafc
.org 0xc5d90
	str r6, [r4, #92]	@ 000c5d90 e665
.org 0xc5d92
	movs r0, #32	@ 000c5d92 2020
.org 0xc5d94
	str r0, [r4, #100]	@ 000c5d94 6066
.org 0xc5d96
	adds r0, r4, #0	@ 000c5d96 201c
.org 0xc5d98
	adds r0, #184	@ 000c5d98 b830
.org 0xc5d9a
	ldrb r0, [r0, #0]	@ 000c5d9a 0078
.org 0xc5d9c
	str r0, [r4, #104]	@ 000c5d9c a066
.org 0xc5d9e
	ldrb r0, [r4, #15]	@ 000c5d9e e07b
.org 0xc5da0
	adds r0, #1	@ 000c5da0 0130
.org 0xc5da2
	strb r0, [r4, #15]	@ 000c5da2 e073
.org 0xc5da4
	adds r0, r4, #0	@ 000c5da4 201c
.org 0xc5da6
	bl 0x1cff0	@ 000c5da6 57f723f9
.org 0xc5daa
	ldr r0, [r4, #104]	@ 000c5daa a06e
.org 0xc5dac
	adds r0, #1	@ 000c5dac 0130
.org 0xc5dae
	str r0, [r4, #104]	@ 000c5dae a066
.org 0xc5db0
	lsls r0, r5, #1	@ 000c5db0 6800
.org 0xc5db2
	subs r5, r0, #1	@ 000c5db2 451e
.org 0xc5db4
	ldr r1, [r4, #92]	@ 000c5db4 e16d
.org 0xc5db6
	adds r2, r1, #0	@ 000c5db6 0a1c
.org 0xc5db8
	muls r2, r5	@ 000c5db8 6a43
.org 0xc5dba
	ldr r0, [r4, #84]	@ 000c5dba 606d
.org 0xc5dbc
	adds r0, r0, r2	@ 000c5dbc 8018
.org 0xc5dbe
	str r0, [r4, #84]	@ 000c5dbe 6065
.org 0xc5dc0
	ldr r0, [r4, #100]	@ 000c5dc0 606e
.org 0xc5dc2
	adds r1, r1, r0	@ 000c5dc2 0918
.org 0xc5dc4
	str r1, [r4, #92]	@ 000c5dc4 e165
.org 0xc5dc6
	adds r0, r4, #0	@ 000c5dc6 201c
.org 0xc5dc8
	adds r0, #180	@ 000c5dc8 b430
.org 0xc5dca
	ldr r0, [r0, #0]	@ 000c5dca 0068
.org 0xc5dcc
	cmp r1, r0	@ 000c5dcc 8142
.org 0xc5dce
	ble.n 0xc5dd2	@ 000c5dce 00dd
.org 0xc5dd0
	str r0, [r4, #92]	@ 000c5dd0 e065
.org 0xc5dd2
	ldr r0, [r4, #104]	@ 000c5dd2 a06e
.org 0xc5dd4
	movs r1, #9	@ 000c5dd4 0921
.org 0xc5dd6
	bl 0x129050	@ 000c5dd6 63f03bf9
.org 0xc5dda
	cmp r0, #0	@ 000c5dda 0028
.org 0xc5ddc
	bne.n 0xc5df4	@ 000c5ddc 0ad1
.org 0xc5dde
	lsls r0, r5, #12	@ 000c5dde 2803
.org 0xc5de0
	ldr r1, [r4, #84]	@ 000c5de0 616d
.org 0xc5de2
	subs r1, r1, r0	@ 000c5de2 091a
.org 0xc5de4
	str r1, [sp, #0]	@ 000c5de4 0091
.org 0xc5de6
	ldr r0, [r4, #88]	@ 000c5de6 a06d
.org 0xc5de8
	str r0, [sp, #4]	@ 000c5de8 0190
.org 0xc5dea
	mov r0, sp	@ 000c5dea 6846
.org 0xc5dec
	movs r1, #0	@ 000c5dec 0021
.org 0xc5dee
	adds r2, r7, #0	@ 000c5dee 3a1c
.org 0xc5df0
	bl 0xde468	@ 000c5df0 18f03afb
.org 0xc5df4
	ldr r0, [pc, #80]	@ 000c5df4 1448
.org 0xc5df6
	adds r1, r4, #0	@ 000c5df6 211c
.org 0xc5df8
	adds r1, #84	@ 000c5df8 5431
.org 0xc5dfa
	bl 0x1fb14	@ 000c5dfa 59f78bfe
.org 0xc5dfe
	movs r1, #128	@ 000c5dfe 8021
.org 0xc5e00
	lsls r1, r1, #6	@ 000c5e00 8901
.org 0xc5e02
	cmp r0, r1	@ 000c5e02 8842
.org 0xc5e04
	bls.n 0xc5e3c	@ 000c5e04 1ad9
.org 0xc5e06
	ldrb r1, [r4, #10]	@ 000c5e06 a17a
.org 0xc5e08
	movs r0, #254	@ 000c5e08 fe20
.org 0xc5e0a
	ands r0, r1	@ 000c5e0a 0840
.org 0xc5e0c
	movs r2, #0	@ 000c5e0c 0022
.org 0xc5e0e
	movs r1, #253	@ 000c5e0e fd21
.org 0xc5e10
	ands r0, r1	@ 000c5e10 0840
.org 0xc5e12
	strb r0, [r4, #10]	@ 000c5e12 a072
.org 0xc5e14
	adds r0, r4, #0	@ 000c5e14 201c
.org 0xc5e16
	adds r0, #140	@ 000c5e16 8c30
.org 0xc5e18
	str r2, [r0, #0]	@ 000c5e18 0260
.org 0xc5e1a
	adds r0, #4	@ 000c5e1a 0430
.org 0xc5e1c
	str r2, [r0, #0]	@ 000c5e1c 0260
.org 0xc5e1e
	adds r0, #4	@ 000c5e1e 0430
.org 0xc5e20
	strb r2, [r0, #0]	@ 000c5e20 0270
.org 0xc5e22
	ldrb r1, [r4, #10]	@ 000c5e22 a17a
.org 0xc5e24
	movs r0, #251	@ 000c5e24 fb20
.org 0xc5e26
	ands r0, r1	@ 000c5e26 0840
.org 0xc5e28
	strb r0, [r4, #10]	@ 000c5e28 a072
.org 0xc5e2a
	ldr r1, [pc, #32]	@ 000c5e2a 0849
.org 0xc5e2c
	ldrb r0, [r4, #9]	@ 000c5e2c 607a
.org 0xc5e2e
	lsls r0, r0, #2	@ 000c5e2e 8000
.org 0xc5e30
	adds r0, r0, r1	@ 000c5e30 4018
.org 0xc5e32
	movs r1, #3	@ 000c5e32 0321
.org 0xc5e34
	str r1, [r4, #12]	@ 000c5e34 e160
.org 0xc5e36
	ldr r0, [r0, #0]	@ 000c5e36 0068
.org 0xc5e38
	ldr r0, [r0, #12]	@ 000c5e38 c068
.org 0xc5e3a
	str r0, [r4, #20]	@ 000c5e3a 6061
.org 0xc5e3c
	add sp, #8	@ 000c5e3c 02b0
.org 0xc5e3e
	pop {r4, r5, r6, r7}	@ 000c5e3e f0bc
.org 0xc5e40
	pop {r0}	@ 000c5e40 01bc
.org 0xc5e42
	bx r0	@ 000c5e42 0047
