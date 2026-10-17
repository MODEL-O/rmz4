@ FUN_080f845c  entry 0x080f845c  size 152
.thumb
.org 0xf845c
FUN_080f845c:
	push {r4, r5, lr}	@ 000f845c 30b5
.org 0xf845e
	adds r4, r0, #0	@ 000f845e 041c
.org 0xf8460
	bl 0x1cc9c	@ 000f8460 24f71cfc
.org 0xf8464
	ldrb r1, [r4, #10]	@ 000f8464 a17a
.org 0xf8466
	movs r0, #1	@ 000f8466 0120
.org 0xf8468
	movs r5, #0	@ 000f8468 0025
.org 0xf846a
	orrs r0, r1	@ 000f846a 0843
.org 0xf846c
	movs r1, #2	@ 000f846c 0221
.org 0xf846e
	orrs r0, r1	@ 000f846e 0843
.org 0xf8470
	strb r0, [r4, #10]	@ 000f8470 a072
.org 0xf8472
	ldr r1, [pc, #36]	@ 000f8472 0949
.org 0xf8474
	ldrb r0, [r4, #17]	@ 000f8474 607c
.org 0xf8476
	lsls r0, r0, #1	@ 000f8476 4000
.org 0xf8478
	adds r0, r0, r1	@ 000f8478 4018
.org 0xf847a
	ldrh r1, [r0, #0]	@ 000f847a 0188
.org 0xf847c
	adds r0, r4, #0	@ 000f847c 201c
.org 0xf847e
	bl 0x1cf00	@ 000f847e 24f73ffd
.org 0xf8482
	ldrb r0, [r4, #17]	@ 000f8482 607c
.org 0xf8484
	cmp r0, #0	@ 000f8484 0028
.org 0xf8486
	bne.n 0xf84a0	@ 000f8486 0bd1
.org 0xf8488
	ldrb r0, [r4, #11]	@ 000f8488 e07a
.org 0xf848a
	movs r1, #8	@ 000f848a 0821
.org 0xf848c
	orrs r0, r1	@ 000f848c 0843
.org 0xf848e
	strb r0, [r4, #11]	@ 000f848e e072
.org 0xf8490
	ldr r0, [pc, #8]	@ 000f8490 0248
.org 0xf8492
	str r0, [r4, #48]	@ 000f8492 2063
.org 0xf8494
	movs r0, #15	@ 000f8494 0f20
.org 0xf8496
	b.n 0xf84d6	@ 000f8496 1ee0
.org 0xf8498
	.byte 0xfc,0xa3,0x86,0x08	@ 000f8498 data
.org 0xf849c
	.byte 0xdc,0xa3,0x86,0x08	@ 000f849c data
.org 0xf84a0
	ldr r0, [pc, #28]	@ 000f84a0 0748
.org 0xf84a2
	movs r1, #232	@ 000f84a2 e821
.org 0xf84a4
	lsls r1, r1, #1	@ 000f84a4 4900
.org 0xf84a6
	adds r0, r0, r1	@ 000f84a6 4018
.org 0xf84a8
	ldrh r1, [r0, #0]	@ 000f84a8 0188
.org 0xf84aa
	movs r0, #127	@ 000f84aa 7f20
.org 0xf84ac
	ands r0, r1	@ 000f84ac 0840
.org 0xf84ae
	cmp r0, #15	@ 000f84ae 0f28
.org 0xf84b0
	bne.n 0xf84c8	@ 000f84b0 0ad1
.org 0xf84b2
	ldrb r0, [r4, #11]	@ 000f84b2 e07a
.org 0xf84b4
	movs r1, #8	@ 000f84b4 0821
.org 0xf84b6
	orrs r0, r1	@ 000f84b6 0843
.org 0xf84b8
	strb r0, [r4, #11]	@ 000f84b8 e072
.org 0xf84ba
	ldr r0, [pc, #8]	@ 000f84ba 0248
.org 0xf84bc
	b.n 0xf84d2	@ 000f84bc 09e0
.org 0xf84be
	.byte 0x00	@ 000f84be data
.org 0xf84bf
	.byte 0x00	@ 000f84bf data
.org 0xf84c0
	.byte 0xb0,0x0a,0x00,0x02	@ 000f84c0 data
.org 0xf84c4
	.byte 0xf4,0xa3,0x86,0x08	@ 000f84c4 data
.org 0xf84c8
	ldrb r0, [r4, #11]	@ 000f84c8 e07a
.org 0xf84ca
	movs r1, #8	@ 000f84ca 0821
.org 0xf84cc
	orrs r0, r1	@ 000f84cc 0843
.org 0xf84ce
	strb r0, [r4, #11]	@ 000f84ce e072
.org 0xf84d0
	ldr r0, [pc, #52]	@ 000f84d0 0d48
.org 0xf84d2
	str r0, [r4, #48]	@ 000f84d2 2063
.org 0xf84d4
	ldr r0, [pc, #52]	@ 000f84d4 0d48
.org 0xf84d6
	strh r0, [r4, #38]	@ 000f84d6 e084
.org 0xf84d8
	ldr r1, [pc, #52]	@ 000f84d8 0d49
.org 0xf84da
	ldrb r0, [r4, #16]	@ 000f84da 207c
.org 0xf84dc
	lsls r0, r0, #2	@ 000f84dc 8000
.org 0xf84de
	adds r0, r0, r1	@ 000f84de 4018
.org 0xf84e0
	ldr r1, [r0, #0]	@ 000f84e0 0168
.org 0xf84e2
	adds r0, r4, #0	@ 000f84e2 201c
.org 0xf84e4
	bl 0x128f80	@ 000f84e4 30f04cfd
.org 0xf84e8
	ldr r1, [pc, #40]	@ 000f84e8 0a49
.org 0xf84ea
	ldrb r0, [r4, #9]	@ 000f84ea 607a
.org 0xf84ec
	lsls r0, r0, #2	@ 000f84ec 8000
.org 0xf84ee
	adds r0, r0, r1	@ 000f84ee 4018
.org 0xf84f0
	movs r1, #1	@ 000f84f0 0121
.org 0xf84f2
	str r1, [r4, #12]	@ 000f84f2 e160
