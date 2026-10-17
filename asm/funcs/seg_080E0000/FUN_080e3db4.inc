@ FUN_080e3db4  entry 0x080e3db4  size 132
.thumb
.org 0xe3db4
FUN_080e3db4:
	push {r4, r5, r6, r7, lr}	@ 000e3db4 f0b5
.org 0xe3db6
	mov r7, sl	@ 000e3db6 5746
.org 0xe3db8
	mov r6, r9	@ 000e3db8 4e46
.org 0xe3dba
	mov r5, r8	@ 000e3dba 4546
.org 0xe3dbc
	push {r5, r6, r7}	@ 000e3dbc e0b4
.org 0xe3dbe
	adds r5, r0, #0	@ 000e3dbe 051c
.org 0xe3dc0
	mov sl, r1	@ 000e3dc0 8a46
.org 0xe3dc2
	lsls r2, r2, #24	@ 000e3dc2 1206
.org 0xe3dc4
	lsrs r7, r2, #24	@ 000e3dc4 170e
.org 0xe3dc6
	lsls r6, r3, #24	@ 000e3dc6 1e06
.org 0xe3dc8
	lsrs r0, r6, #24	@ 000e3dc8 300e
.org 0xe3dca
	mov r8, r0	@ 000e3dca 8046
.org 0xe3dcc
	ldr r0, [pc, #104]	@ 000e3dcc 1a48
.org 0xe3dce
	ldr r0, [r0, #0]	@ 000e3dce 0068
.org 0xe3dd0
	bl 0x5500	@ 000e3dd0 21f796fb
.org 0xe3dd4
	mov ip, r0	@ 000e3dd4 8446
.org 0xe3dd6
	cmp r0, #0	@ 000e3dd6 0028
.org 0xe3dd8
	beq.n 0xe3e28	@ 000e3dd8 26d0
.org 0xe3dda
	adds r0, #37	@ 000e3dda 2530
.org 0xe3ddc
	movs r3, #0	@ 000e3ddc 0023
.org 0xe3dde
	movs r1, #1	@ 000e3dde 0121
.org 0xe3de0
	mov r9, r1	@ 000e3de0 8946
.org 0xe3de2
	movs r4, #1	@ 000e3de2 0124
.org 0xe3de4
	strb r4, [r0, #0]	@ 000e3de4 0470
.org 0xe3de6
	ldr r0, [pc, #84]	@ 000e3de6 1548
.org 0xe3de8
	movs r1, #72	@ 000e3de8 4821
.org 0xe3dea
	mov r2, ip	@ 000e3dea 6246
.org 0xe3dec
	strb r1, [r2, #9]	@ 000e3dec 5172
.org 0xe3dee
	adds r1, #216	@ 000e3dee d831
.org 0xe3df0
	adds r0, r0, r1	@ 000e3df0 4018
.org 0xe3df2
	ldr r0, [r0, #0]	@ 000e3df2 0068
.org 0xe3df4
	ldr r0, [r0, #0]	@ 000e3df4 0068
.org 0xe3df6
	str r0, [r2, #20]	@ 000e3df6 5061
.org 0xe3df8
	movs r2, #0	@ 000e3df8 0022
.org 0xe3dfa
	mov r0, ip	@ 000e3dfa 6046
.org 0xe3dfc
	strh r3, [r0, #32]	@ 000e3dfc 0384
.org 0xe3dfe
	adds r0, #34	@ 000e3dfe 2230
.org 0xe3e00
	strb r2, [r0, #0]	@ 000e3e00 0270
.org 0xe3e02
	ldr r0, [r5, #0]	@ 000e3e02 2868
.org 0xe3e04
	ldr r1, [r5, #4]	@ 000e3e04 6968
.org 0xe3e06
	mov r3, ip	@ 000e3e06 6346
.org 0xe3e08
	str r0, [r3, #84]	@ 000e3e08 5865
.org 0xe3e0a
	str r1, [r3, #88]	@ 000e3e0a 9965
.org 0xe3e0c
	strb r7, [r3, #16]	@ 000e3e0c 1f74
.org 0xe3e0e
	strb r2, [r3, #17]	@ 000e3e0e 5a74
.org 0xe3e10
	lsrs r0, r6, #28	@ 000e3e10 300f
.org 0xe3e12
	mov r1, r9	@ 000e3e12 4946
.org 0xe3e14
	ands r0, r1	@ 000e3e14 0840
.org 0xe3e16
	mov r1, ip	@ 000e3e16 6146
.org 0xe3e18
	adds r1, #120	@ 000e3e18 7831
.org 0xe3e1a
	strb r0, [r1, #0]	@ 000e3e1a 0870
.org 0xe3e1c
	mov r0, r8	@ 000e3e1c 4046
.org 0xe3e1e
	ands r0, r4	@ 000e3e1e 2040
.org 0xe3e20
	adds r1, #1	@ 000e3e20 0131
.org 0xe3e22
	strb r0, [r1, #0]	@ 000e3e22 0870
.org 0xe3e24
	mov r2, sl	@ 000e3e24 5246
.org 0xe3e26
	str r2, [r3, #124]	@ 000e3e26 da67
.org 0xe3e28
	mov r0, ip	@ 000e3e28 6046
.org 0xe3e2a
	pop {r3, r4, r5}	@ 000e3e2a 38bc
.org 0xe3e2c
	mov r8, r3	@ 000e3e2c 9846
.org 0xe3e2e
	mov r9, r4	@ 000e3e2e a146
.org 0xe3e30
	mov sl, r5	@ 000e3e30 aa46
.org 0xe3e32
	pop {r4, r5, r6, r7}	@ 000e3e32 f0bc
.org 0xe3e34
	pop {r1}	@ 000e3e34 02bc
.org 0xe3e36
	bx r1	@ 000e3e36 0847
