@ FUN_080dbe4c  entry 0x080dbe4c  size 130
.thumb
.org 0xdbe4c
FUN_080dbe4c:
	push {r4, r5, r6, r7, lr}	@ 000dbe4c f0b5
.org 0xdbe4e
	mov r7, sl	@ 000dbe4e 5746
.org 0xdbe50
	mov r6, r9	@ 000dbe50 4e46
.org 0xdbe52
	mov r5, r8	@ 000dbe52 4546
.org 0xdbe54
	push {r5, r6, r7}	@ 000dbe54 e0b4
.org 0xdbe56
	sub sp, #4	@ 000dbe56 81b0
.org 0xdbe58
	mov r9, r0	@ 000dbe58 8146
.org 0xdbe5a
	adds r6, r1, #0	@ 000dbe5a 0e1c
.org 0xdbe5c
	mov r8, r2	@ 000dbe5c 9046
.org 0xdbe5e
	lsls r3, r3, #24	@ 000dbe5e 1b06
.org 0xdbe60
	lsrs r7, r3, #24	@ 000dbe60 1f0e
.org 0xdbe62
	movs r5, #0	@ 000dbe62 0025
.org 0xdbe64
	cmp r5, r7	@ 000dbe64 bd42
.org 0xdbe66
	bge.n 0xdbebe	@ 000dbe66 2ada
.org 0xdbe68
	movs r4, #0	@ 000dbe68 0024
.org 0xdbe6a
	movs r2, #1	@ 000dbe6a 0122
.org 0xdbe6c
	ldr r0, [pc, #96]	@ 000dbe6c 1848
.org 0xdbe6e
	mov sl, r0	@ 000dbe6e 8246
.org 0xdbe70
	ldr r0, [pc, #96]	@ 000dbe70 1848
.org 0xdbe72
	ldr r0, [r0, #0]	@ 000dbe72 0068
.org 0xdbe74
	str r2, [sp, #0]	@ 000dbe74 0092
.org 0xdbe76
	bl 0x5500	@ 000dbe76 29f743fb
.org 0xdbe7a
	adds r1, r0, #0	@ 000dbe7a 011c
.org 0xdbe7c
	ldr r2, [sp, #0]	@ 000dbe7c 009a
.org 0xdbe7e
	cmp r1, #0	@ 000dbe7e 0029
.org 0xdbe80
	beq.n 0xdbeb8	@ 000dbe80 1ad0
.org 0xdbe82
	adds r0, #37	@ 000dbe82 2530
.org 0xdbe84
	strb r2, [r0, #0]	@ 000dbe84 0270
.org 0xdbe86
	movs r0, #43	@ 000dbe86 2b20
.org 0xdbe88
	strb r0, [r1, #9]	@ 000dbe88 4872
.org 0xdbe8a
	mov r3, sl	@ 000dbe8a 5346
.org 0xdbe8c
	ldr r0, [r3, #0]	@ 000dbe8c 1868
.org 0xdbe8e
	ldr r0, [r0, #0]	@ 000dbe8e 0068
.org 0xdbe90
	str r0, [r1, #20]	@ 000dbe90 4861
.org 0xdbe92
	strh r4, [r1, #32]	@ 000dbe92 0c84
.org 0xdbe94
	adds r0, r1, #0	@ 000dbe94 081c
.org 0xdbe96
	adds r0, #34	@ 000dbe96 2230
.org 0xdbe98
	strb r4, [r0, #0]	@ 000dbe98 0470
.org 0xdbe9a
	strb r4, [r1, #16]	@ 000dbe9a 0c74
.org 0xdbe9c
	strb r5, [r1, #17]	@ 000dbe9c 4d74
.org 0xdbe9e
	mov r0, r9	@ 000dbe9e 4846
.org 0xdbea0
	str r0, [r1, #40]	@ 000dbea0 8862
.org 0xdbea2
	mov r3, r8	@ 000dbea2 4346
.org 0xdbea4
	str r3, [r1, #116]	@ 000dbea4 4b67
.org 0xdbea6
	ldr r0, [r6, #0]	@ 000dbea6 3068
.org 0xdbea8
	str r0, [r1, #84]	@ 000dbea8 4865
.org 0xdbeaa
	ldr r0, [r6, #4]	@ 000dbeaa 7068
.org 0xdbeac
	str r0, [r1, #88]	@ 000dbeac 8865
.org 0xdbeae
	adds r0, r1, #0	@ 000dbeae 081c
.org 0xdbeb0
	adds r0, #120	@ 000dbeb0 7830
.org 0xdbeb2
	strb r2, [r0, #0]	@ 000dbeb2 0270
.org 0xdbeb4
	adds r0, #1	@ 000dbeb4 0130
.org 0xdbeb6
	strb r4, [r0, #0]	@ 000dbeb6 0470
.org 0xdbeb8
	adds r5, #1	@ 000dbeb8 0135
.org 0xdbeba
	cmp r5, r7	@ 000dbeba bd42
.org 0xdbebc
	blt.n 0xdbe70	@ 000dbebc d8db
.org 0xdbebe
	add sp, #4	@ 000dbebe 01b0
.org 0xdbec0
	pop {r3, r4, r5}	@ 000dbec0 38bc
.org 0xdbec2
	mov r8, r3	@ 000dbec2 9846
.org 0xdbec4
	mov r9, r4	@ 000dbec4 a146
.org 0xdbec6
	mov sl, r5	@ 000dbec6 aa46
.org 0xdbec8
	pop {r4, r5, r6, r7}	@ 000dbec8 f0bc
.org 0xdbeca
	pop {r0}	@ 000dbeca 01bc
.org 0xdbecc
	bx r0	@ 000dbecc 0047
