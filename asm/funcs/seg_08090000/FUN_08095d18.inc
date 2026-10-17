@ FUN_08095d18  entry 0x08095d18  size 206
.thumb
.org 0x95d18
FUN_08095d18:
	push {r4, r5, r6, r7, lr}	@ 00095d18 f0b5
.org 0x95d1a
	mov r7, sl	@ 00095d1a 5746
.org 0x95d1c
	mov r6, r9	@ 00095d1c 4e46
.org 0x95d1e
	mov r5, r8	@ 00095d1e 4546
.org 0x95d20
	push {r5, r6, r7}	@ 00095d20 e0b4
.org 0x95d22
	sub sp, #32	@ 00095d22 88b0
.org 0x95d24
	adds r7, r0, #0	@ 00095d24 071c
.org 0x95d26
	ldr r1, [pc, #192]	@ 00095d26 3049
.org 0x95d28
	mov r0, sp	@ 00095d28 6846
.org 0x95d2a
	movs r2, #4	@ 00095d2a 0422
.org 0x95d2c
	bl 0x129258	@ 00095d2c 93f094fa
.org 0x95d30
	add r2, sp, #4	@ 00095d30 01aa
.org 0x95d32
	adds r1, r2, #0	@ 00095d32 111c
.org 0x95d34
	ldr r0, [pc, #180]	@ 00095d34 2d48
.org 0x95d36
	ldmia r0!, {r3, r4, r5}	@ 00095d36 38c8
.org 0x95d38
	stmia r1!, {r3, r4, r5}	@ 00095d38 38c1
.org 0x95d3a
	ldr r0, [r0, #0]	@ 00095d3a 0068
.org 0x95d3c
	str r0, [r1, #0]	@ 00095d3c 0860
.org 0x95d3e
	ldrb r0, [r7, #17]	@ 00095d3e 787c
.org 0x95d40
	mov r8, r0	@ 00095d40 8046
.org 0x95d42
	ldrb r0, [r7, #10]	@ 00095d42 b87a
.org 0x95d44
	lsrs r5, r0, #4	@ 00095d44 0509
.org 0x95d46
	movs r0, #1	@ 00095d46 0120
.org 0x95d48
	ands r5, r0	@ 00095d48 0540
.org 0x95d4a
	adds r1, r7, #0	@ 00095d4a 391c
.org 0x95d4c
	adds r1, #181	@ 00095d4c b531
.org 0x95d4e
	str r1, [sp, #28]	@ 00095d4e 0791
.org 0x95d50
	ldrb r0, [r1, #0]	@ 00095d50 0878
.org 0x95d52
	subs r0, #1	@ 00095d52 0138
.org 0x95d54
	cmp r0, #0	@ 00095d54 0028
.org 0x95d56
	bgt.n 0x95dd2	@ 00095d56 3cdc
.org 0x95d58
	mov r3, r8	@ 00095d58 4346
.org 0x95d5a
	lsls r0, r3, #2	@ 00095d5a 9800
.org 0x95d5c
	adds r0, r2, r0	@ 00095d5c 1018
.org 0x95d5e
	ldr r4, [r0, #0]	@ 00095d5e 0468
.org 0x95d60
	ldr r0, [pc, #140]	@ 00095d60 2348
.org 0x95d62
	mov r9, r0	@ 00095d62 8146
.org 0x95d64
	ldr r0, [r0, #0]	@ 00095d64 0068
.org 0x95d66
	ldr r1, [pc, #140]	@ 00095d66 2349
.org 0x95d68
	muls r0, r1	@ 00095d68 4843
.org 0x95d6a
	ldr r2, [pc, #140]	@ 00095d6a 234a
.org 0x95d6c
	adds r0, r0, r2	@ 00095d6c 8018
.org 0x95d6e
	lsls r0, r0, #1	@ 00095d6e 4000
.org 0x95d70
	lsrs r6, r0, #1	@ 00095d70 4608
.org 0x95d72
	mov r3, r9	@ 00095d72 4b46
.org 0x95d74
	str r6, [r3, #0]	@ 00095d74 1e60
.org 0x95d76
	lsrs r0, r0, #17	@ 00095d76 400c
.org 0x95d78
	lsls r1, r4, #1	@ 00095d78 6100
.org 0x95d7a
	mov sl, r1	@ 00095d7a 8a46
.org 0x95d7c
	bl 0x129198	@ 00095d7c 93f00cfa
.org 0x95d80
	subs r0, r0, r4	@ 00095d80 001b
.org 0x95d82
	ldr r1, [r7, #84]	@ 00095d82 796d
.org 0x95d84
	adds r1, r1, r0	@ 00095d84 0918
.org 0x95d86
	str r1, [sp, #20]	@ 00095d86 0591
.org 0x95d88
	ldr r2, [pc, #104]	@ 00095d88 1a4a
.org 0x95d8a
	adds r0, r6, #0	@ 00095d8a 301c
.org 0x95d8c
	muls r0, r2	@ 00095d8c 5043
.org 0x95d8e
	ldr r3, [pc, #104]	@ 00095d8e 1a4b
.org 0x95d90
	adds r0, r0, r3	@ 00095d90 c018
.org 0x95d92
	lsls r0, r0, #1	@ 00095d92 4000
.org 0x95d94
	lsrs r1, r0, #1	@ 00095d94 4108
.org 0x95d96
	mov r2, r9	@ 00095d96 4a46
.org 0x95d98
	str r1, [r2, #0]	@ 00095d98 1160
.org 0x95d9a
	lsrs r0, r0, #17	@ 00095d9a 400c
.org 0x95d9c
	mov r1, sl	@ 00095d9c 5146
.org 0x95d9e
	bl 0x129198	@ 00095d9e 93f0fbf9
.org 0x95da2
	subs r0, r0, r4	@ 00095da2 001b
.org 0x95da4
	ldr r1, [r7, #88]	@ 00095da4 b96d
.org 0x95da6
	adds r1, r1, r0	@ 00095da6 0918
.org 0x95da8
	add r0, sp, #20	@ 00095da8 05a8
.org 0x95daa
	str r1, [r0, #4]	@ 00095daa 4160
.org 0x95dac
	mov r1, sp	@ 00095dac 6946
.org 0x95dae
	add r1, r8	@ 00095dae 4144
.org 0x95db0
	ldrb r1, [r1, #0]	@ 00095db0 0978
.org 0x95db2
	adds r2, r5, #0	@ 00095db2 2a1c
.org 0x95db4
	bl 0xe03d8	@ 00095db4 4af010fb
.org 0x95db8
	mov r3, r9	@ 00095db8 4b46
.org 0x95dba
	ldr r0, [r3, #0]	@ 00095dba 1868
.org 0x95dbc
	ldr r4, [pc, #52]	@ 00095dbc 0d4c
.org 0x95dbe
	muls r0, r4	@ 00095dbe 6043
.org 0x95dc0
	ldr r5, [pc, #52]	@ 00095dc0 0d4d
.org 0x95dc2
	adds r0, r0, r5	@ 00095dc2 4019
.org 0x95dc4
	lsls r0, r0, #1	@ 00095dc4 4000
.org 0x95dc6
	lsrs r1, r0, #1	@ 00095dc6 4108
.org 0x95dc8
	str r1, [r3, #0]	@ 00095dc8 1960
.org 0x95dca
	lsrs r0, r0, #17	@ 00095dca 400c
.org 0x95dcc
	movs r1, #3	@ 00095dcc 0321
.org 0x95dce
	ands r0, r1	@ 00095dce 0840
.org 0x95dd0
	adds r0, #3	@ 00095dd0 0330
.org 0x95dd2
	ldr r1, [sp, #28]	@ 00095dd2 0799
.org 0x95dd4
	strb r0, [r1, #0]	@ 00095dd4 0870
.org 0x95dd6
	add sp, #32	@ 00095dd6 08b0
.org 0x95dd8
	pop {r3, r4, r5}	@ 00095dd8 38bc
.org 0x95dda
	mov r8, r3	@ 00095dda 9846
.org 0x95ddc
	mov r9, r4	@ 00095ddc a146
.org 0x95dde
	mov sl, r5	@ 00095dde aa46
.org 0x95de0
	pop {r4, r5, r6, r7}	@ 00095de0 f0bc
.org 0x95de2
	pop {r0}	@ 00095de2 01bc
.org 0x95de4
	bx r0	@ 00095de4 0047
