@ FUN_080d7258  entry 0x080d7258  size 130
.thumb
.org 0xd7258
FUN_080d7258:
	push {r4, r5, r6, r7, lr}	@ 000d7258 f0b5
.org 0xd725a
	mov r7, sl	@ 000d725a 5746
.org 0xd725c
	mov r6, r9	@ 000d725c 4e46
.org 0xd725e
	mov r5, r8	@ 000d725e 4546
.org 0xd7260
	push {r5, r6, r7}	@ 000d7260 e0b4
.org 0xd7262
	sub sp, #4	@ 000d7262 81b0
.org 0xd7264
	mov r9, r0	@ 000d7264 8146
.org 0xd7266
	adds r6, r1, #0	@ 000d7266 0e1c
.org 0xd7268
	mov r8, r2	@ 000d7268 9046
.org 0xd726a
	lsls r3, r3, #24	@ 000d726a 1b06
.org 0xd726c
	lsrs r7, r3, #24	@ 000d726c 1f0e
.org 0xd726e
	movs r5, #0	@ 000d726e 0025
.org 0xd7270
	cmp r5, r7	@ 000d7270 bd42
.org 0xd7272
	bge.n 0xd72ca	@ 000d7272 2ada
.org 0xd7274
	movs r4, #0	@ 000d7274 0024
.org 0xd7276
	movs r2, #1	@ 000d7276 0122
.org 0xd7278
	ldr r0, [pc, #96]	@ 000d7278 1848
.org 0xd727a
	mov sl, r0	@ 000d727a 8246
.org 0xd727c
	ldr r0, [pc, #96]	@ 000d727c 1848
.org 0xd727e
	ldr r0, [r0, #0]	@ 000d727e 0068
.org 0xd7280
	str r2, [sp, #0]	@ 000d7280 0092
.org 0xd7282
	bl 0x5500	@ 000d7282 2ef73df9
.org 0xd7286
	adds r1, r0, #0	@ 000d7286 011c
.org 0xd7288
	ldr r2, [sp, #0]	@ 000d7288 009a
.org 0xd728a
	cmp r1, #0	@ 000d728a 0029
.org 0xd728c
	beq.n 0xd72c4	@ 000d728c 1ad0
.org 0xd728e
	adds r0, #37	@ 000d728e 2530
.org 0xd7290
	strb r2, [r0, #0]	@ 000d7290 0270
.org 0xd7292
	movs r0, #23	@ 000d7292 1720
.org 0xd7294
	strb r0, [r1, #9]	@ 000d7294 4872
.org 0xd7296
	mov r3, sl	@ 000d7296 5346
.org 0xd7298
	ldr r0, [r3, #92]	@ 000d7298 d86d
.org 0xd729a
	ldr r0, [r0, #0]	@ 000d729a 0068
.org 0xd729c
	str r0, [r1, #20]	@ 000d729c 4861
.org 0xd729e
	strh r4, [r1, #32]	@ 000d729e 0c84
.org 0xd72a0
	adds r0, r1, #0	@ 000d72a0 081c
.org 0xd72a2
	adds r0, #34	@ 000d72a2 2230
.org 0xd72a4
	strb r4, [r0, #0]	@ 000d72a4 0470
.org 0xd72a6
	strb r4, [r1, #16]	@ 000d72a6 0c74
.org 0xd72a8
	strb r5, [r1, #17]	@ 000d72a8 4d74
.org 0xd72aa
	mov r0, r9	@ 000d72aa 4846
.org 0xd72ac
	str r0, [r1, #40]	@ 000d72ac 8862
.org 0xd72ae
	mov r3, r8	@ 000d72ae 4346
.org 0xd72b0
	str r3, [r1, #116]	@ 000d72b0 4b67
.org 0xd72b2
	ldr r0, [r6, #0]	@ 000d72b2 3068
.org 0xd72b4
	str r0, [r1, #84]	@ 000d72b4 4865
.org 0xd72b6
	ldr r0, [r6, #4]	@ 000d72b6 7068
.org 0xd72b8
	str r0, [r1, #88]	@ 000d72b8 8865
.org 0xd72ba
	adds r0, r1, #0	@ 000d72ba 081c
.org 0xd72bc
	adds r0, #120	@ 000d72bc 7830
.org 0xd72be
	strb r2, [r0, #0]	@ 000d72be 0270
.org 0xd72c0
	adds r0, #1	@ 000d72c0 0130
.org 0xd72c2
	strb r4, [r0, #0]	@ 000d72c2 0470
.org 0xd72c4
	adds r5, #1	@ 000d72c4 0135
.org 0xd72c6
	cmp r5, r7	@ 000d72c6 bd42
.org 0xd72c8
	blt.n 0xd727c	@ 000d72c8 d8db
.org 0xd72ca
	add sp, #4	@ 000d72ca 01b0
.org 0xd72cc
	pop {r3, r4, r5}	@ 000d72cc 38bc
.org 0xd72ce
	mov r8, r3	@ 000d72ce 9846
.org 0xd72d0
	mov r9, r4	@ 000d72d0 a146
.org 0xd72d2
	mov sl, r5	@ 000d72d2 aa46
.org 0xd72d4
	pop {r4, r5, r6, r7}	@ 000d72d4 f0bc
.org 0xd72d6
	pop {r0}	@ 000d72d6 01bc
.org 0xd72d8
	bx r0	@ 000d72d8 0047
