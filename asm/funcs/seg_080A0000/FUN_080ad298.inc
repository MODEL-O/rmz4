@ FUN_080ad298  entry 0x080ad298  size 190
.thumb
.org 0xad298
FUN_080ad298:
	push {r4, r5, r6, r7, lr}	@ 000ad298 f0b5
.org 0xad29a
	sub sp, #28	@ 000ad29a 87b0
.org 0xad29c
	adds r5, r0, #0	@ 000ad29c 051c
.org 0xad29e
	mov r1, sp	@ 000ad29e 6946
.org 0xad2a0
	ldr r0, [pc, #180]	@ 000ad2a0 2d48
.org 0xad2a2
	ldmia r0!, {r2, r3, r4}	@ 000ad2a2 1cc8
.org 0xad2a4
	stmia r1!, {r2, r3, r4}	@ 000ad2a4 1cc1
.org 0xad2a6
	ldr r0, [r0, #0]	@ 000ad2a6 0068
.org 0xad2a8
	str r0, [r1, #0]	@ 000ad2a8 0860
.org 0xad2aa
	add r4, sp, #16	@ 000ad2aa 04ac
.org 0xad2ac
	ldr r1, [pc, #172]	@ 000ad2ac 2b49
.org 0xad2ae
	adds r0, r4, #0	@ 000ad2ae 201c
.org 0xad2b0
	movs r2, #4	@ 000ad2b0 0422
.org 0xad2b2
	bl 0x129258	@ 000ad2b2 7bf0d1ff
.org 0xad2b6
	ldr r7, [r5, #40]	@ 000ad2b6 af6a
.org 0xad2b8
	ldr r2, [r7, #40]	@ 000ad2b8 ba6a
.org 0xad2ba
	ldrb r6, [r5, #17]	@ 000ad2ba 6e7c
.org 0xad2bc
	adds r4, r4, r6	@ 000ad2bc a419
.org 0xad2be
	ldrb r3, [r4, #0]	@ 000ad2be 2378
.org 0xad2c0
	adds r4, r3, #0	@ 000ad2c0 1c1c
.org 0xad2c2
	ldrb r0, [r5, #15]	@ 000ad2c2 e87b
.org 0xad2c4
	cmp r0, #0	@ 000ad2c4 0028
.org 0xad2c6
	bne.n 0xad2fc	@ 000ad2c6 19d1
.org 0xad2c8
	lsls r0, r3, #1	@ 000ad2c8 5800
.org 0xad2ca
	subs r0, #1	@ 000ad2ca 0138
.org 0xad2cc
	lsls r1, r0, #2	@ 000ad2cc 8100
.org 0xad2ce
	adds r1, r1, r0	@ 000ad2ce 0918
.org 0xad2d0
	lsls r1, r1, #10	@ 000ad2d0 8902
.org 0xad2d2
	ldr r0, [r5, #84]	@ 000ad2d2 686d
.org 0xad2d4
	adds r0, r0, r1	@ 000ad2d4 4018
.org 0xad2d6
	str r0, [sp, #20]	@ 000ad2d6 0590
.org 0xad2d8
	ldr r0, [r5, #88]	@ 000ad2d8 a86d
.org 0xad2da
	add r1, sp, #20	@ 000ad2da 05a9
.org 0xad2dc
	str r0, [r1, #4]	@ 000ad2dc 4860
.org 0xad2de
	adds r0, r2, #0	@ 000ad2de 101c
.org 0xad2e0
	movs r2, #0	@ 000ad2e0 0022
.org 0xad2e2
	bl 0xe8b0c	@ 000ad2e2 3bf013fc
.org 0xad2e6
	lsls r0, r6, #2	@ 000ad2e6 b000
.org 0xad2e8
	add r0, sp	@ 000ad2e8 6844
.org 0xad2ea
	ldrh r1, [r0, #0]	@ 000ad2ea 0188
.org 0xad2ec
	adds r0, r5, #0	@ 000ad2ec 281c
.org 0xad2ee
	bl 0x1cf00	@ 000ad2ee 6ff707fe
.org 0xad2f2
	movs r0, #16	@ 000ad2f2 1020
.org 0xad2f4
	strb r0, [r5, #18]	@ 000ad2f4 a874
.org 0xad2f6
	ldrb r0, [r5, #15]	@ 000ad2f6 e87b
.org 0xad2f8
	adds r0, #1	@ 000ad2f8 0130
.org 0xad2fa
	strb r0, [r5, #15]	@ 000ad2fa e873
.org 0xad2fc
	adds r0, r5, #0	@ 000ad2fc 281c
.org 0xad2fe
	bl 0x1cff0	@ 000ad2fe 6ff777fe
.org 0xad302
	ldrb r0, [r5, #18]	@ 000ad302 a87c
.org 0xad304
	cmp r0, #0	@ 000ad304 0028
.org 0xad306
	beq.n 0xad32c	@ 000ad306 11d0
.org 0xad308
	subs r0, #1	@ 000ad308 0138
.org 0xad30a
	strb r0, [r5, #18]	@ 000ad30a a874
.org 0xad30c
	lsls r0, r0, #24	@ 000ad30c 0006
.org 0xad30e
	cmp r0, #0	@ 000ad30e 0028
.org 0xad310
	bne.n 0xad32c	@ 000ad310 0cd1
.org 0xad312
	lsls r1, r4, #12	@ 000ad312 2103
.org 0xad314
	ldr r0, [pc, #72]	@ 000ad314 1248
.org 0xad316
	adds r1, r1, r0	@ 000ad316 0918
.org 0xad318
	ldr r0, [r5, #84]	@ 000ad318 686d
.org 0xad31a
	adds r0, r0, r1	@ 000ad31a 4018
.org 0xad31c
	str r0, [sp, #20]	@ 000ad31c 0590
.org 0xad31e
	add r0, sp, #20	@ 000ad31e 05a8
.org 0xad320
	ldr r1, [r5, #88]	@ 000ad320 a96d
.org 0xad322
	str r1, [r0, #4]	@ 000ad322 4160
.org 0xad324
	movs r1, #0	@ 000ad324 0021
.org 0xad326
	adds r2, r4, #0	@ 000ad326 221c
.org 0xad328
	bl 0xcd2dc	@ 000ad328 1ff0d8ff
.org 0xad32c
	adds r2, r7, #0	@ 000ad32c 3a1c
.org 0xad32e
	adds r2, #181	@ 000ad32e b532
.org 0xad330
	movs r0, #1	@ 000ad330 0120
.org 0xad332
	lsls r0, r6	@ 000ad332 b040
.org 0xad334
	ldrb r1, [r2, #0]	@ 000ad334 1178
.org 0xad336
	orrs r0, r1	@ 000ad336 0843
.org 0xad338
	strb r0, [r2, #0]	@ 000ad338 1070
.org 0xad33a
	adds r0, r5, #0	@ 000ad33a 281c
.org 0xad33c
	adds r0, #115	@ 000ad33c 7330
.org 0xad33e
	ldrb r0, [r0, #0]	@ 000ad33e 0078
.org 0xad340
	cmp r0, #3	@ 000ad340 0328
.org 0xad342
	bne.n 0xad34e	@ 000ad342 04d1
.org 0xad344
	ldrb r0, [r5, #18]	@ 000ad344 a87c
.org 0xad346
	cmp r0, #0	@ 000ad346 0028
.org 0xad348
	bne.n 0xad34e	@ 000ad348 01d1
.org 0xad34a
	strb r0, [r5, #14]	@ 000ad34a a873
.org 0xad34c
	strb r0, [r5, #15]	@ 000ad34c e873
.org 0xad34e
	add sp, #28	@ 000ad34e 07b0
.org 0xad350
	pop {r4, r5, r6, r7}	@ 000ad350 f0bc
.org 0xad352
	pop {r0}	@ 000ad352 01bc
.org 0xad354
	bx r0	@ 000ad354 0047
