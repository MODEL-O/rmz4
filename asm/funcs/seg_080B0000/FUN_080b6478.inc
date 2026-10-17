@ FUN_080b6478  entry 0x080b6478  size 98
.thumb
.org 0xb6478
FUN_080b6478:
	push {lr}	@ 000b6478 00b5
.org 0xb647a
	mov ip, r0	@ 000b647a 8446
.org 0xb647c
	ldr r0, [r0, #40]	@ 000b647c 806a
.org 0xb647e
	adds r1, r0, #0	@ 000b647e 011c
.org 0xb6480
	adds r1, #204	@ 000b6480 cc31
.org 0xb6482
	ldrh r2, [r1, #0]	@ 000b6482 0a88
.org 0xb6484
	movs r3, #0	@ 000b6484 0023
.org 0xb6486
	ldrsh r0, [r1, r3]	@ 000b6486 c85e
.org 0xb6488
	cmp r0, #0	@ 000b6488 0028
.org 0xb648a
	beq.n 0xb6490	@ 000b648a 01d0
.org 0xb648c
	subs r0, r2, #1	@ 000b648c 501e
.org 0xb648e
	strh r0, [r1, #0]	@ 000b648e 0880
.org 0xb6490
	mov r0, ip	@ 000b6490 6046
.org 0xb6492
	ldr r2, [r0, #40]	@ 000b6492 826a
.org 0xb6494
	adds r2, #206	@ 000b6494 ce32
.org 0xb6496
	mov r1, ip	@ 000b6496 6146
.org 0xb6498
	adds r1, #181	@ 000b6498 b531
.org 0xb649a
	movs r0, #1	@ 000b649a 0120
.org 0xb649c
	ldrb r1, [r1, #0]	@ 000b649c 0978
.org 0xb649e
	lsls r0, r1	@ 000b649e 8840
.org 0xb64a0
	ldrb r1, [r2, #0]	@ 000b64a0 1178
.org 0xb64a2
	bics r1, r0	@ 000b64a2 8143
.org 0xb64a4
	movs r3, #0	@ 000b64a4 0023
.org 0xb64a6
	strb r1, [r2, #0]	@ 000b64a6 1170
.org 0xb64a8
	mov r0, ip	@ 000b64a8 6046
.org 0xb64aa
	adds r0, #140	@ 000b64aa 8c30
.org 0xb64ac
	str r3, [r0, #0]	@ 000b64ac 0360
.org 0xb64ae
	adds r0, #4	@ 000b64ae 0430
.org 0xb64b0
	str r3, [r0, #0]	@ 000b64b0 0360
.org 0xb64b2
	adds r0, #4	@ 000b64b2 0430
.org 0xb64b4
	strb r3, [r0, #0]	@ 000b64b4 0370
.org 0xb64b6
	mov r2, ip	@ 000b64b6 6246
.org 0xb64b8
	ldrb r1, [r2, #10]	@ 000b64b8 917a
.org 0xb64ba
	movs r0, #251	@ 000b64ba fb20
.org 0xb64bc
	ands r0, r1	@ 000b64bc 0840
.org 0xb64be
	movs r1, #254	@ 000b64be fe21
.org 0xb64c0
	ands r0, r1	@ 000b64c0 0840
.org 0xb64c2
	strb r0, [r2, #10]	@ 000b64c2 9072
.org 0xb64c4
	ldr r1, [pc, #20]	@ 000b64c4 0549
.org 0xb64c6
	ldrb r0, [r2, #9]	@ 000b64c6 507a
.org 0xb64c8
	lsls r0, r0, #2	@ 000b64c8 8000
.org 0xb64ca
	adds r0, r0, r1	@ 000b64ca 4018
.org 0xb64cc
	movs r1, #4	@ 000b64cc 0421
.org 0xb64ce
	str r1, [r2, #12]	@ 000b64ce d160
.org 0xb64d0
	ldr r0, [r0, #0]	@ 000b64d0 0068
.org 0xb64d2
	ldr r0, [r0, #16]	@ 000b64d2 0069
.org 0xb64d4
	str r0, [r2, #20]	@ 000b64d4 5061
.org 0xb64d6
	pop {r0}	@ 000b64d6 01bc
.org 0xb64d8
	bx r0	@ 000b64d8 0047
