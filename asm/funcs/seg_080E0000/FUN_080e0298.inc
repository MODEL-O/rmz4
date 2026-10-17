@ FUN_080e0298  entry 0x080e0298  size 70
.thumb
.org 0xe0298
FUN_080e0298:
	push {r4, lr}	@ 000e0298 10b5
.org 0xe029a
	adds r4, r0, #0	@ 000e029a 041c
.org 0xe029c
	bl 0x1cff0	@ 000e029c 3cf7a8fe
.org 0xe02a0
	ldr r0, [r4, #84]	@ 000e02a0 606d
.org 0xe02a2
	ldr r1, [r4, #92]	@ 000e02a2 e16d
.org 0xe02a4
	adds r0, r0, r1	@ 000e02a4 4018
.org 0xe02a6
	str r0, [r4, #84]	@ 000e02a6 6065
.org 0xe02a8
	ldr r0, [r4, #88]	@ 000e02a8 a06d
.org 0xe02aa
	ldr r1, [r4, #96]	@ 000e02aa 216e
.org 0xe02ac
	adds r0, r0, r1	@ 000e02ac 4018
.org 0xe02ae
	str r0, [r4, #88]	@ 000e02ae a065
.org 0xe02b0
	ldr r0, [r4, #104]	@ 000e02b0 a06e
.org 0xe02b2
	subs r1, r1, r0	@ 000e02b2 091a
.org 0xe02b4
	str r1, [r4, #96]	@ 000e02b4 2166
.org 0xe02b6
	adds r0, r4, #0	@ 000e02b6 201c
.org 0xe02b8
	adds r0, #115	@ 000e02b8 7330
.org 0xe02ba
	ldrb r0, [r0, #0]	@ 000e02ba 0078
.org 0xe02bc
	cmp r0, #3	@ 000e02bc 0328
.org 0xe02be
	bne.n 0xe02d8	@ 000e02be 0bd1
.org 0xe02c0
	ldr r1, [pc, #28]	@ 000e02c0 0749
.org 0xe02c2
	ldrb r0, [r4, #9]	@ 000e02c2 607a
.org 0xe02c4
	lsls r0, r0, #2	@ 000e02c4 8000
.org 0xe02c6
	adds r0, r0, r1	@ 000e02c6 4018
.org 0xe02c8
	movs r1, #2	@ 000e02c8 0221
.org 0xe02ca
	str r1, [r4, #12]	@ 000e02ca e160
.org 0xe02cc
	ldr r0, [r0, #0]	@ 000e02cc 0068
.org 0xe02ce
	ldr r0, [r0, #8]	@ 000e02ce 8068
.org 0xe02d0
	str r0, [r4, #20]	@ 000e02d0 6061
.org 0xe02d2
	adds r0, r4, #0	@ 000e02d2 201c
.org 0xe02d4
	bl 0xdff80	@ 000e02d4 fff754fe
.org 0xe02d8
	pop {r4}	@ 000e02d8 10bc
.org 0xe02da
	pop {r0}	@ 000e02da 01bc
.org 0xe02dc
	bx r0	@ 000e02dc 0047
