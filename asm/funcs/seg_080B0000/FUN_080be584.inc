@ FUN_080be584  entry 0x080be584  size 130
.thumb
.org 0xbe584
FUN_080be584:
	push {r4, r5, r6, r7, lr}	@ 000be584 f0b5
.org 0xbe586
	adds r6, r0, #0	@ 000be586 061c
.org 0xbe588
	bl 0x1cc9c	@ 000be588 5ef788fb
.org 0xbe58c
	ldrb r1, [r6, #10]	@ 000be58c b17a
.org 0xbe58e
	movs r0, #1	@ 000be58e 0120
.org 0xbe590
	movs r5, #0	@ 000be590 0025
.org 0xbe592
	orrs r0, r1	@ 000be592 0843
.org 0xbe594
	movs r1, #2	@ 000be594 0221
.org 0xbe596
	orrs r0, r1	@ 000be596 0843
.org 0xbe598
	movs r7, #0	@ 000be598 0027
.org 0xbe59a
	movs r1, #4	@ 000be59a 0421
.org 0xbe59c
	orrs r0, r1	@ 000be59c 0843
.org 0xbe59e
	strb r0, [r6, #10]	@ 000be59e b072
.org 0xbe5a0
	adds r4, r6, #0	@ 000be5a0 341c
.org 0xbe5a2
	adds r4, #116	@ 000be5a2 7434
.org 0xbe5a4
	ldr r1, [pc, #28]	@ 000be5a4 0749
.org 0xbe5a6
	adds r2, r6, #0	@ 000be5a6 321c
.org 0xbe5a8
	adds r2, #84	@ 000be5a8 5432
.org 0xbe5aa
	adds r0, r4, #0	@ 000be5aa 201c
.org 0xbe5ac
	movs r3, #0	@ 000be5ac 0023
.org 0xbe5ae
	bl 0x5760	@ 000be5ae 47f7d7f8
.org 0xbe5b2
	str r6, [r4, #44]	@ 000be5b2 e662
.org 0xbe5b4
	str r5, [r4, #36]	@ 000be5b4 6562
.org 0xbe5b6
	ldrb r2, [r6, #17]	@ 000be5b6 727c
.org 0xbe5b8
	cmp r2, #0	@ 000be5b8 002a
.org 0xbe5ba
	beq.n 0xbe5c8	@ 000be5ba 05d0
.org 0xbe5bc
	ldrb r0, [r6, #10]	@ 000be5bc b07a
.org 0xbe5be
	movs r1, #16	@ 000be5be 1021
.org 0xbe5c0
	orrs r0, r1	@ 000be5c0 0843
.org 0xbe5c2
	b.n 0xbe5ce	@ 000be5c2 04e0
.org 0xbe5c4
	.byte 0xcc,0x4d,0x86,0x08	@ 000be5c4 data
.org 0xbe5c8
	ldrb r1, [r6, #10]	@ 000be5c8 b17a
.org 0xbe5ca
	movs r0, #239	@ 000be5ca ef20
.org 0xbe5cc
	ands r0, r1	@ 000be5cc 0840
.org 0xbe5ce
	strb r0, [r6, #10]	@ 000be5ce b072
.org 0xbe5d0
	movs r3, #1	@ 000be5d0 0123
.org 0xbe5d2
	adds r1, r3, #0	@ 000be5d2 191c
.org 0xbe5d4
	ands r1, r2	@ 000be5d4 1140
.org 0xbe5d6
	adds r0, r6, #0	@ 000be5d6 301c
.org 0xbe5d8
	adds r0, #76	@ 000be5d8 4c30
.org 0xbe5da
	strb r1, [r0, #0]	@ 000be5da 0170
.org 0xbe5dc
	adds r4, r6, #0	@ 000be5dc 341c
.org 0xbe5de
	adds r4, #74	@ 000be5de 4a34
.org 0xbe5e0
	lsls r1, r1, #4	@ 000be5e0 0901
.org 0xbe5e2
	ldrb r2, [r4, #0]	@ 000be5e2 2278
.org 0xbe5e4
	movs r0, #17	@ 000be5e4 1120
.org 0xbe5e6
	negs r0, r0	@ 000be5e6 4042
.org 0xbe5e8
	ands r0, r2	@ 000be5e8 1040
.org 0xbe5ea
	orrs r0, r1	@ 000be5ea 0843
.org 0xbe5ec
	strb r0, [r4, #0]	@ 000be5ec 2070
.org 0xbe5ee
	ldr r1, [pc, #28]	@ 000be5ee 0749
.org 0xbe5f0
	ldrb r0, [r6, #9]	@ 000be5f0 707a
.org 0xbe5f2
	lsls r0, r0, #2	@ 000be5f2 8000
.org 0xbe5f4
	adds r0, r0, r1	@ 000be5f4 4018
.org 0xbe5f6
	str r3, [r6, #12]	@ 000be5f6 f360
.org 0xbe5f8
	ldr r0, [r0, #0]	@ 000be5f8 0068
.org 0xbe5fa
	ldr r0, [r0, #4]	@ 000be5fa 4068
.org 0xbe5fc
	str r0, [r6, #20]	@ 000be5fc 7061
.org 0xbe5fe
	adds r0, r6, #0	@ 000be5fe 301c
.org 0xbe600
	bl 0xbe610	@ 000be600 00f006f8
.org 0xbe604
	pop {r4, r5, r6, r7}	@ 000be604 f0bc
