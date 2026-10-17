@ FUN_080ad48c  entry 0x080ad48c  size 68
.thumb
.org 0xad48c
FUN_080ad48c:
	push {r4, r5, r6, lr}	@ 000ad48c 70b5
.org 0xad48e
	adds r3, r0, #0	@ 000ad48e 031c
.org 0xad490
	ldr r5, [r3, #40]	@ 000ad490 9d6a
.org 0xad492
	ldrb r6, [r3, #17]	@ 000ad492 5e7c
.org 0xad494
	adds r4, r3, #0	@ 000ad494 1c1c
.org 0xad496
	adds r4, #184	@ 000ad496 b834
.org 0xad498
	ldr r0, [r4, #0]	@ 000ad498 2068
.org 0xad49a
	cmp r0, #0	@ 000ad49a 0028
.org 0xad49c
	beq.n 0xad4b6	@ 000ad49c 0bd0
.org 0xad49e
	adds r0, #180	@ 000ad49e b430
.org 0xad4a0
	movs r2, #0	@ 000ad4a0 0022
.org 0xad4a2
	movs r1, #1	@ 000ad4a2 0121
.org 0xad4a4
	strb r1, [r0, #0]	@ 000ad4a4 0170
.org 0xad4a6
	str r2, [r4, #0]	@ 000ad4a6 2260
.org 0xad4a8
	adds r1, r5, #0	@ 000ad4a8 291c
.org 0xad4aa
	adds r1, #188	@ 000ad4aa bc31
.org 0xad4ac
	ldrb r0, [r1, #0]	@ 000ad4ac 0878
.org 0xad4ae
	cmp r0, #0	@ 000ad4ae 0028
.org 0xad4b0
	beq.n 0xad4b6	@ 000ad4b0 01d0
.org 0xad4b2
	adds r0, #255	@ 000ad4b2 ff30
.org 0xad4b4
	strb r0, [r1, #0]	@ 000ad4b4 0870
.org 0xad4b6
	adds r2, r5, #0	@ 000ad4b6 2a1c
.org 0xad4b8
	adds r2, #180	@ 000ad4b8 b432
.org 0xad4ba
	movs r1, #1	@ 000ad4ba 0121
.org 0xad4bc
	lsls r1, r6	@ 000ad4bc b140
.org 0xad4be
	ldrb r0, [r2, #0]	@ 000ad4be 1078
.org 0xad4c0
	bics r0, r1	@ 000ad4c0 8843
.org 0xad4c2
	strb r0, [r2, #0]	@ 000ad4c2 1070
.org 0xad4c4
	adds r0, r3, #0	@ 000ad4c4 181c
.org 0xad4c6
	bl 0x7f8ec	@ 000ad4c6 d2f711fa
.org 0xad4ca
	pop {r4, r5, r6}	@ 000ad4ca 70bc
.org 0xad4cc
	pop {r0}	@ 000ad4cc 01bc
.org 0xad4ce
	bx r0	@ 000ad4ce 0047
