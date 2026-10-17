@ FUN_080dc228  entry 0x080dc228  size 128
.thumb
.org 0xdc228
FUN_080dc228:
	push {r4, r5, r6, r7, lr}	@ 000dc228 f0b5
.org 0xdc22a
	mov r7, r9	@ 000dc22a 4f46
.org 0xdc22c
	mov r6, r8	@ 000dc22c 4646
.org 0xdc22e
	push {r6, r7}	@ 000dc22e c0b4
.org 0xdc230
	adds r6, r0, #0	@ 000dc230 061c
.org 0xdc232
	adds r4, r1, #0	@ 000dc232 0c1c
.org 0xdc234
	adds r5, r2, #0	@ 000dc234 151c
.org 0xdc236
	mov r8, r3	@ 000dc236 9846
.org 0xdc238
	ldr r0, [sp, #32]	@ 000dc238 0898
.org 0xdc23a
	lsls r0, r0, #24	@ 000dc23a 0006
.org 0xdc23c
	lsrs r0, r0, #24	@ 000dc23c 000e
.org 0xdc23e
	mov r9, r0	@ 000dc23e 8146
.org 0xdc240
	ldr r0, [pc, #100]	@ 000dc240 1948
.org 0xdc242
	ldr r0, [r0, #0]	@ 000dc242 0068
.org 0xdc244
	bl 0x5500	@ 000dc244 29f75cf9
.org 0xdc248
	mov ip, r0	@ 000dc248 8446
.org 0xdc24a
	cmp r0, #0	@ 000dc24a 0028
.org 0xdc24c
	beq.n 0xdc29c	@ 000dc24c 26d0
.org 0xdc24e
	adds r0, #37	@ 000dc24e 2530
.org 0xdc250
	movs r2, #0	@ 000dc250 0022
.org 0xdc252
	movs r3, #1	@ 000dc252 0123
.org 0xdc254
	strb r3, [r0, #0]	@ 000dc254 0370
.org 0xdc256
	ldr r0, [pc, #84]	@ 000dc256 1548
.org 0xdc258
	movs r1, #43	@ 000dc258 2b21
.org 0xdc25a
	mov r7, ip	@ 000dc25a 6746
.org 0xdc25c
	strb r1, [r7, #9]	@ 000dc25c 7972
.org 0xdc25e
	adds r0, #172	@ 000dc25e ac30
.org 0xdc260
	ldr r0, [r0, #0]	@ 000dc260 0068
.org 0xdc262
	ldr r0, [r0, #0]	@ 000dc262 0068
.org 0xdc264
	str r0, [r7, #20]	@ 000dc264 7861
.org 0xdc266
	movs r1, #0	@ 000dc266 0021
.org 0xdc268
	strh r2, [r7, #32]	@ 000dc268 3a84
.org 0xdc26a
	mov r0, ip	@ 000dc26a 6046
.org 0xdc26c
	adds r0, #34	@ 000dc26c 2230
.org 0xdc26e
	strb r1, [r0, #0]	@ 000dc26e 0170
.org 0xdc270
	movs r0, #3	@ 000dc270 0320
.org 0xdc272
	strb r0, [r7, #16]	@ 000dc272 3874
.org 0xdc274
	str r6, [r7, #40]	@ 000dc274 be62
.org 0xdc276
	ldr r0, [sp, #28]	@ 000dc276 0798
.org 0xdc278
	str r0, [r7, #116]	@ 000dc278 7867
.org 0xdc27a
	ldr r0, [r4, #0]	@ 000dc27a 2068
.org 0xdc27c
	str r0, [r7, #84]	@ 000dc27c 7865
.org 0xdc27e
	ldr r0, [r4, #4]	@ 000dc27e 6068
.org 0xdc280
	str r0, [r7, #88]	@ 000dc280 b865
.org 0xdc282
	ldr r0, [r5, #0]	@ 000dc282 2868
.org 0xdc284
	str r0, [r7, #92]	@ 000dc284 f865
.org 0xdc286
	ldr r0, [r5, #4]	@ 000dc286 6868
.org 0xdc288
	str r0, [r7, #96]	@ 000dc288 3866
.org 0xdc28a
	mov r0, r8	@ 000dc28a 4046
.org 0xdc28c
	str r0, [r7, #104]	@ 000dc28c b866
.org 0xdc28e
	mov r2, r9	@ 000dc28e 4a46
.org 0xdc290
	strb r2, [r7, #18]	@ 000dc290 ba74
.org 0xdc292
	mov r0, ip	@ 000dc292 6046
.org 0xdc294
	adds r0, #120	@ 000dc294 7830
.org 0xdc296
	strb r3, [r0, #0]	@ 000dc296 0370
.org 0xdc298
	adds r0, #1	@ 000dc298 0130
.org 0xdc29a
	strb r1, [r0, #0]	@ 000dc29a 0170
.org 0xdc29c
	pop {r3, r4}	@ 000dc29c 18bc
.org 0xdc29e
	mov r8, r3	@ 000dc29e 9846
.org 0xdc2a0
	mov r9, r4	@ 000dc2a0 a146
.org 0xdc2a2
	pop {r4, r5, r6, r7}	@ 000dc2a2 f0bc
.org 0xdc2a4
	pop {r0}	@ 000dc2a4 01bc
.org 0xdc2a6
	bx r0	@ 000dc2a6 0047
