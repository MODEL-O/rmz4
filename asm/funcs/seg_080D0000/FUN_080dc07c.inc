@ FUN_080dc07c  entry 0x080dc07c  size 130
.thumb
.org 0xdc07c
FUN_080dc07c:
	push {r4, r5, r6, r7, lr}	@ 000dc07c f0b5
.org 0xdc07e
	mov r7, sl	@ 000dc07e 5746
.org 0xdc080
	mov r6, r9	@ 000dc080 4e46
.org 0xdc082
	mov r5, r8	@ 000dc082 4546
.org 0xdc084
	push {r5, r6, r7}	@ 000dc084 e0b4
.org 0xdc086
	sub sp, #4	@ 000dc086 81b0
.org 0xdc088
	mov r9, r0	@ 000dc088 8146
.org 0xdc08a
	adds r6, r1, #0	@ 000dc08a 0e1c
.org 0xdc08c
	mov r8, r2	@ 000dc08c 9046
.org 0xdc08e
	lsls r3, r3, #24	@ 000dc08e 1b06
.org 0xdc090
	lsrs r7, r3, #24	@ 000dc090 1f0e
.org 0xdc092
	movs r5, #0	@ 000dc092 0025
.org 0xdc094
	cmp r5, r7	@ 000dc094 bd42
.org 0xdc096
	bge.n 0xdc0ee	@ 000dc096 2ada
.org 0xdc098
	movs r4, #0	@ 000dc098 0024
.org 0xdc09a
	movs r2, #1	@ 000dc09a 0122
.org 0xdc09c
	ldr r0, [pc, #96]	@ 000dc09c 1848
.org 0xdc09e
	mov sl, r0	@ 000dc09e 8246
.org 0xdc0a0
	ldr r0, [pc, #96]	@ 000dc0a0 1848
.org 0xdc0a2
	ldr r0, [r0, #0]	@ 000dc0a2 0068
.org 0xdc0a4
	str r2, [sp, #0]	@ 000dc0a4 0092
.org 0xdc0a6
	bl 0x5500	@ 000dc0a6 29f72bfa
.org 0xdc0aa
	adds r1, r0, #0	@ 000dc0aa 011c
.org 0xdc0ac
	ldr r2, [sp, #0]	@ 000dc0ac 009a
.org 0xdc0ae
	cmp r1, #0	@ 000dc0ae 0029
.org 0xdc0b0
	beq.n 0xdc0e8	@ 000dc0b0 1ad0
.org 0xdc0b2
	adds r0, #37	@ 000dc0b2 2530
.org 0xdc0b4
	strb r2, [r0, #0]	@ 000dc0b4 0270
.org 0xdc0b6
	movs r0, #43	@ 000dc0b6 2b20
.org 0xdc0b8
	strb r0, [r1, #9]	@ 000dc0b8 4872
.org 0xdc0ba
	mov r3, sl	@ 000dc0ba 5346
.org 0xdc0bc
	ldr r0, [r3, #0]	@ 000dc0bc 1868
.org 0xdc0be
	ldr r0, [r0, #0]	@ 000dc0be 0068
.org 0xdc0c0
	str r0, [r1, #20]	@ 000dc0c0 4861
.org 0xdc0c2
	strh r4, [r1, #32]	@ 000dc0c2 0c84
.org 0xdc0c4
	adds r0, r1, #0	@ 000dc0c4 081c
.org 0xdc0c6
	adds r0, #34	@ 000dc0c6 2230
.org 0xdc0c8
	strb r4, [r0, #0]	@ 000dc0c8 0470
.org 0xdc0ca
	strb r2, [r1, #16]	@ 000dc0ca 0a74
.org 0xdc0cc
	strb r5, [r1, #17]	@ 000dc0cc 4d74
.org 0xdc0ce
	mov r0, r9	@ 000dc0ce 4846
.org 0xdc0d0
	str r0, [r1, #40]	@ 000dc0d0 8862
.org 0xdc0d2
	mov r3, r8	@ 000dc0d2 4346
.org 0xdc0d4
	str r3, [r1, #116]	@ 000dc0d4 4b67
.org 0xdc0d6
	ldr r0, [r6, #0]	@ 000dc0d6 3068
.org 0xdc0d8
	str r0, [r1, #84]	@ 000dc0d8 4865
.org 0xdc0da
	ldr r0, [r6, #4]	@ 000dc0da 7068
.org 0xdc0dc
	str r0, [r1, #88]	@ 000dc0dc 8865
.org 0xdc0de
	adds r0, r1, #0	@ 000dc0de 081c
.org 0xdc0e0
	adds r0, #120	@ 000dc0e0 7830
.org 0xdc0e2
	strb r4, [r0, #0]	@ 000dc0e2 0470
.org 0xdc0e4
	adds r0, #1	@ 000dc0e4 0130
.org 0xdc0e6
	strb r4, [r0, #0]	@ 000dc0e6 0470
.org 0xdc0e8
	adds r5, #1	@ 000dc0e8 0135
.org 0xdc0ea
	cmp r5, r7	@ 000dc0ea bd42
.org 0xdc0ec
	blt.n 0xdc0a0	@ 000dc0ec d8db
.org 0xdc0ee
	add sp, #4	@ 000dc0ee 01b0
.org 0xdc0f0
	pop {r3, r4, r5}	@ 000dc0f0 38bc
.org 0xdc0f2
	mov r8, r3	@ 000dc0f2 9846
.org 0xdc0f4
	mov r9, r4	@ 000dc0f4 a146
.org 0xdc0f6
	mov sl, r5	@ 000dc0f6 aa46
.org 0xdc0f8
	pop {r4, r5, r6, r7}	@ 000dc0f8 f0bc
.org 0xdc0fa
	pop {r0}	@ 000dc0fa 01bc
.org 0xdc0fc
	bx r0	@ 000dc0fc 0047
