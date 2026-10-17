@ FUN_08063da0  entry 0x08063da0  size 240
.thumb
.org 0x63da0
FUN_08063da0:
	push {r4, r5, r6, r7, lr}	@ 00063da0 f0b5
.org 0x63da2
	mov r7, r8	@ 00063da2 4746
.org 0x63da4
	push {r7}	@ 00063da4 80b4
.org 0x63da6
	sub sp, #12	@ 00063da6 83b0
.org 0x63da8
	adds r6, r0, #0	@ 00063da8 061c
.org 0x63daa
	ldr r1, [pc, #228]	@ 00063daa 3949
.org 0x63dac
	mov r0, sp	@ 00063dac 6846
.org 0x63dae
	movs r2, #4	@ 00063dae 0422
.org 0x63db0
	bl 0x129258	@ 00063db0 c5f052fa
.org 0x63db4
	ldrb r0, [r6, #10]	@ 00063db4 b07a
.org 0x63db6
	lsrs r5, r0, #4	@ 00063db6 0509
.org 0x63db8
	movs r0, #1	@ 00063db8 0120
.org 0x63dba
	ands r5, r0	@ 00063dba 0540
.org 0x63dbc
	ldrb r0, [r6, #15]	@ 00063dbc f07b
.org 0x63dbe
	cmp r0, #0	@ 00063dbe 0028
.org 0x63dc0
	bne.n 0x63e10	@ 00063dc0 26d1
.org 0x63dc2
	movs r0, #135	@ 00063dc2 8720
.org 0x63dc4
	lsls r0, r0, #1	@ 00063dc4 4000
.org 0x63dc6
	bl 0x2b10	@ 00063dc6 9ef7a3fe
.org 0x63dca
	ldr r0, [r6, #84]	@ 00063dca 706d
.org 0x63dcc
	str r0, [sp, #4]	@ 00063dcc 0190
.org 0x63dce
	ldr r0, [r6, #88]	@ 00063dce b06d
.org 0x63dd0
	add r1, sp, #4	@ 00063dd0 01a9
.org 0x63dd2
	str r0, [r1, #4]	@ 00063dd2 4860
.org 0x63dd4
	movs r4, #0	@ 00063dd4 0024
.org 0x63dd6
	mov r8, r1	@ 00063dd6 8846
.org 0x63dd8
	lsls r7, r5, #1	@ 00063dd8 6f00
.org 0x63dda
	mov r1, sp	@ 00063dda 6946
.org 0x63ddc
	adds r0, r1, r4	@ 00063ddc 0819
.org 0x63dde
	ldrb r3, [r0, #0]	@ 00063dde 0378
.org 0x63de0
	movs r0, #160	@ 00063de0 a020
.org 0x63de2
	lsls r0, r0, #1	@ 00063de2 4000
.org 0x63de4
	subs r0, r0, r3	@ 00063de4 c01a
.org 0x63de6
	muls r0, r7	@ 00063de6 7843
.org 0x63de8
	adds r3, r3, r0	@ 00063de8 1b18
.org 0x63dea
	lsls r3, r3, #24	@ 00063dea 1b06
.org 0x63dec
	lsrs r3, r3, #24	@ 00063dec 1b0e
.org 0x63dee
	adds r0, r6, #0	@ 00063dee 301c
.org 0x63df0
	mov r1, r8	@ 00063df0 4146
.org 0x63df2
	adds r2, r5, #0	@ 00063df2 2a1c
.org 0x63df4
	bl 0xc76c8	@ 00063df4 63f068fc
.org 0x63df8
	adds r4, #1	@ 00063df8 0134
.org 0x63dfa
	cmp r4, #3	@ 00063dfa 032c
.org 0x63dfc
	ble.n 0x63dda	@ 00063dfc eddd
.org 0x63dfe
	adds r0, r6, #0	@ 00063dfe 301c
.org 0x63e00
	movs r1, #15	@ 00063e00 0f21
.org 0x63e02
	bl 0x65a94	@ 00063e02 01f047fe
.org 0x63e06
	movs r0, #48	@ 00063e06 3020
.org 0x63e08
	strb r0, [r6, #18]	@ 00063e08 b074
.org 0x63e0a
	ldrb r0, [r6, #15]	@ 00063e0a f07b
.org 0x63e0c
	adds r0, #1	@ 00063e0c 0130
.org 0x63e0e
	strb r0, [r6, #15]	@ 00063e0e f073
.org 0x63e10
	adds r0, r6, #0	@ 00063e10 301c
.org 0x63e12
	bl 0x1cff0	@ 00063e12 b9f7edf8
.org 0x63e16
	adds r0, r6, #0	@ 00063e16 301c
.org 0x63e18
	adds r0, #116	@ 00063e18 7430
.org 0x63e1a
	ldr r4, [pc, #120]	@ 00063e1a 1e4c
.org 0x63e1c
	ldr r3, [pc, #120]	@ 00063e1c 1e4b
.org 0x63e1e
	adds r1, r6, #0	@ 00063e1e 311c
.org 0x63e20
	adds r1, #180	@ 00063e20 b431
.org 0x63e22
	ldrb r2, [r1, #0]	@ 00063e22 0a78
.org 0x63e24
	lsls r1, r2, #1	@ 00063e24 5100
.org 0x63e26
	adds r1, r1, r3	@ 00063e26 c918
.org 0x63e28
	ldrh r1, [r1, #0]	@ 00063e28 0988
.org 0x63e2a
	lsls r1, r1, #2	@ 00063e2a 8900
.org 0x63e2c
	adds r1, r1, r4	@ 00063e2c 0919
.org 0x63e2e
	adds r3, r6, #0	@ 00063e2e 331c
.org 0x63e30
	adds r3, #113	@ 00063e30 7133
.org 0x63e32
	movs r5, #0	@ 00063e32 0025
.org 0x63e34
	ldrsb r5, [r3, r5]	@ 00063e34 5d57
.org 0x63e36
	ldr r1, [r1, #0]	@ 00063e36 0968
.org 0x63e38
	lsls r3, r5, #2	@ 00063e38 ab00
.org 0x63e3a
	adds r3, r3, r1	@ 00063e3a 5b18
.org 0x63e3c
	ldr r4, [pc, #92]	@ 00063e3c 174c
.org 0x63e3e
	adds r1, r6, #0	@ 00063e3e 311c
.org 0x63e40
	adds r1, #181	@ 00063e40 b531
.org 0x63e42
	ldrb r1, [r1, #0]	@ 00063e42 0978
.org 0x63e44
	lsls r1, r1, #2	@ 00063e44 8900
.org 0x63e46
	adds r1, r1, r4	@ 00063e46 0919
.org 0x63e48
	ldr r1, [r1, #0]	@ 00063e48 0968
.org 0x63e4a
	lsls r2, r2, #2	@ 00063e4a 9200
.org 0x63e4c
	adds r2, r2, r1	@ 00063e4c 5218
.org 0x63e4e
	ldr r1, [r2, #0]	@ 00063e4e 1168
.org 0x63e50
	adds r1, r1, r5	@ 00063e50 4919
.org 0x63e52
	ldrb r1, [r1, #0]	@ 00063e52 0978
.org 0x63e54
	lsls r2, r1, #1	@ 00063e54 4a00
.org 0x63e56
	adds r2, r2, r1	@ 00063e56 5218
.org 0x63e58
	lsls r2, r2, #3	@ 00063e58 d200
.org 0x63e5a
	ldr r1, [r3, #0]	@ 00063e5a 1968
.org 0x63e5c
	adds r1, r1, r2	@ 00063e5c 8918
.org 0x63e5e
	bl 0x5784	@ 00063e5e a1f791fc
.org 0x63e62
	ldrb r0, [r6, #18]	@ 00063e62 b07c
.org 0x63e64
	cmp r0, #0	@ 00063e64 0028
.org 0x63e66
	beq.n 0x63e72	@ 00063e66 04d0
.org 0x63e68
	subs r0, #1	@ 00063e68 0138
.org 0x63e6a
	strb r0, [r6, #18]	@ 00063e6a b074
.org 0x63e6c
	lsls r0, r0, #24	@ 00063e6c 0006
.org 0x63e6e
	cmp r0, #0	@ 00063e6e 0028
.org 0x63e70
	bne.n 0x63e84	@ 00063e70 08d1
.org 0x63e72
	adds r0, r6, #0	@ 00063e72 301c
.org 0x63e74
	adds r0, #115	@ 00063e74 7330
.org 0x63e76
	ldrb r0, [r0, #0]	@ 00063e76 0078
.org 0x63e78
	cmp r0, #3	@ 00063e78 0328
.org 0x63e7a
	bne.n 0x63e84	@ 00063e7a 03d1
.org 0x63e7c
	movs r1, #0	@ 00063e7c 0021
.org 0x63e7e
	movs r0, #2	@ 00063e7e 0220
.org 0x63e80
	strb r0, [r6, #14]	@ 00063e80 b073
.org 0x63e82
	strb r1, [r6, #15]	@ 00063e82 f173
.org 0x63e84
	add sp, #12	@ 00063e84 03b0
.org 0x63e86
	pop {r3}	@ 00063e86 08bc
.org 0x63e88
	mov r8, r3	@ 00063e88 9846
.org 0x63e8a
	pop {r4, r5, r6, r7}	@ 00063e8a f0bc
.org 0x63e8c
	pop {r0}	@ 00063e8c 01bc
.org 0x63e8e
	bx r0	@ 00063e8e 0047
