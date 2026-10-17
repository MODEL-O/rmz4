@ FUN_08008448  entry 0x08008448  size 214
.thumb
.org 0x8448
FUN_08008448:
	push {r4, r5, r6, r7, lr}	@ 00008448 f0b5
.org 0x844a
	mov r7, sl	@ 0000844a 5746
.org 0x844c
	mov r6, r9	@ 0000844c 4e46
.org 0x844e
	mov r5, r8	@ 0000844e 4546
.org 0x8450
	push {r5, r6, r7}	@ 00008450 e0b4
.org 0x8452
	adds r4, r0, #0	@ 00008452 041c
.org 0x8454
	mov r8, r1	@ 00008454 8846
.org 0x8456
	adds r5, r4, #0	@ 00008456 251c
.org 0x8458
	ldr r6, [pc, #124]	@ 00008458 1f4e
.org 0x845a
	movs r1, #232	@ 0000845a e821
.org 0x845c
	lsls r1, r1, #1	@ 0000845c 4900
.org 0x845e
	adds r0, r6, r1	@ 0000845e 7018
.org 0x8460
	ldrh r0, [r0, #0]	@ 00008460 0088
.org 0x8462
	cmp r0, #4	@ 00008462 0428
.org 0x8464
	bne.n 0x847a	@ 00008464 09d1
.org 0x8466
	ldr r2, [pc, #116]	@ 00008466 1d4a
.org 0x8468
	adds r0, r4, r2	@ 00008468 a018
.org 0x846a
	movs r1, #240	@ 0000846a f021
.org 0x846c
	lsls r1, r1, #10	@ 0000846c 8902
.org 0x846e
	bl 0x129050	@ 0000846e 20f1effd
.org 0x8472
	movs r3, #240	@ 00008472 f023
.org 0x8474
	lsls r3, r3, #8	@ 00008474 1b02
.org 0x8476
	adds r4, r0, r3	@ 00008476 c418
.org 0x8478
	adds r5, r4, #0	@ 00008478 251c
.org 0x847a
	movs r7, #0	@ 0000847a 0027
.org 0x847c
	mov r0, r8	@ 0000847c 4046
.org 0x847e
	asrs r0, r0, #12	@ 0000847e 0013
.org 0x8480
	mov r9, r0	@ 00008480 8146
.org 0x8482
	movs r1, #220	@ 00008482 dc21
.org 0x8484
	lsls r1, r1, #1	@ 00008484 4900
.org 0x8486
	adds r1, r1, r6	@ 00008486 8919
.org 0x8488
	mov sl, r1	@ 00008488 8a46
.org 0x848a
	movs r2, #252	@ 0000848a fc22
.org 0x848c
	lsls r2, r2, #3	@ 0000848c d200
.org 0x848e
	adds r6, r6, r2	@ 0000848e b618
.org 0x8490
	ldrh r0, [r6, #0]	@ 00008490 3088
.org 0x8492
	mov r3, r9	@ 00008492 4b46
.org 0x8494
	muls r3, r0	@ 00008494 4343
.org 0x8496
	adds r0, r3, #0	@ 00008496 181c
.org 0x8498
	asrs r1, r4, #12	@ 00008498 2113
.org 0x849a
	adds r0, r0, r1	@ 0000849a 4018
.org 0x849c
	adds r0, #2	@ 0000849c 0230
.org 0x849e
	lsls r0, r0, #1	@ 0000849e 4000
.org 0x84a0
	adds r0, r0, r6	@ 000084a0 8019
.org 0x84a2
	ldrh r0, [r0, #0]	@ 000084a2 0088
.org 0x84a4
	mov r2, sl	@ 000084a4 5246
.org 0x84a6
	ldr r1, [r2, #0]	@ 000084a6 1168
.org 0x84a8
	lsls r0, r0, #1	@ 000084a8 4000
.org 0x84aa
	adds r0, r0, r1	@ 000084aa 4018
.org 0x84ac
	ldrh r0, [r0, #0]	@ 000084ac 0088
.org 0x84ae
	adds r1, r0, #0	@ 000084ae 011c
.org 0x84b0
	movs r2, #15	@ 000084b0 0f22
.org 0x84b2
	ands r2, r1	@ 000084b2 0a40
.org 0x84b4
	cmp r2, #0	@ 000084b4 002a
.org 0x84b6
	beq.n 0x850e	@ 000084b6 2ad0
.org 0x84b8
	cmp r2, #15	@ 000084b8 0f2a
.org 0x84ba
	beq.n 0x850e	@ 000084ba 28d0
.org 0x84bc
	movs r3, #132	@ 000084bc 8423
.org 0x84be
	lsls r3, r3, #8	@ 000084be 1b02
.org 0x84c0
	adds r0, r3, #0	@ 000084c0 181c
.org 0x84c2
	ands r1, r0	@ 000084c2 0140
.org 0x84c4
	cmp r1, #0	@ 000084c4 0029
.org 0x84c6
	bne.n 0x850e	@ 000084c6 22d1
.org 0x84c8
	cmp r2, #1	@ 000084c8 012a
.org 0x84ca
	bne.n 0x84e4	@ 000084ca 0bd1
.org 0x84cc
	movs r0, #128	@ 000084cc 8020
.org 0x84ce
	lsls r0, r0, #5	@ 000084ce 4001
.org 0x84d0
	adds r4, r4, r0	@ 000084d0 2418
.org 0x84d2
	ldr r0, [pc, #12]	@ 000084d2 0348
.org 0x84d4
	ands r4, r0	@ 000084d4 0440
.org 0x84d6
	b.n 0x851c	@ 000084d6 21e0
.org 0x84d8
	.byte 0xb0,0x0a,0x00,0x02	@ 000084d8 data
.org 0x84dc
	.byte 0x00,0x10,0xff,0xff	@ 000084dc data
.org 0x84e0
	.byte 0x00,0xf0,0xff,0xff	@ 000084e0 data
.org 0x84e4
	ldr r1, [pc, #44]	@ 000084e4 0b49
.org 0x84e6
	lsls r0, r2, #2	@ 000084e6 9000
.org 0x84e8
	adds r0, r0, r1	@ 000084e8 4018
.org 0x84ea
	ldr r2, [pc, #44]	@ 000084ea 0b4a
.org 0x84ec
	adds r1, r2, #0	@ 000084ec 111c
.org 0x84ee
	bics r1, r4	@ 000084ee a143
.org 0x84f0
	ldr r3, [r0, #0]	@ 000084f0 0368
.org 0x84f2
	mov r0, r8	@ 000084f2 4046
.org 0x84f4
	ands r0, r2	@ 000084f4 1040
.org 0x84f6
	bl 0x128f88	@ 000084f6 20f147fd
.org 0x84fa
	cmp r0, #0	@ 000084fa 0028
.org 0x84fc
	beq.n 0x850e	@ 000084fc 07d0
.org 0x84fe
	adds r1, r4, #0	@ 000084fe 211c
.org 0x8500
	subs r4, r4, r0	@ 00008500 241a
.org 0x8502
	eors r1, r4	@ 00008502 6140
.org 0x8504
	movs r0, #128	@ 00008504 8020
.org 0x8506
	lsls r0, r0, #5	@ 00008506 4001
.org 0x8508
	ands r1, r0	@ 00008508 0140
.org 0x850a
	cmp r1, #0	@ 0000850a 0029
.org 0x850c
	bne.n 0x851c	@ 0000850c 06d1
.org 0x850e
	subs r0, r4, r5	@ 0000850e 601b
.org 0x8510
	b.n 0x8526	@ 00008510 09e0
.org 0x8512
	.byte 0x00	@ 00008512 data
.org 0x8513
	.byte 0x00	@ 00008513 data
.org 0x8514
	.byte 0x94,0xb1,0x82,0x08	@ 00008514 data
.org 0x8518
	.byte 0xff,0x0f,0x00,0x00	@ 00008518 data
.org 0x851c
	adds r7, #1	@ 0000851c 0137
