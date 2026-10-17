@ FUN_080a9500  entry 0x080a9500  size 60
.thumb
.org 0xa9500
FUN_080a9500:
	push {r4, r5, lr}	@ 000a9500 30b5
.org 0xa9502
	adds r4, r0, #0	@ 000a9502 041c
.org 0xa9504
	ldr r5, [r4, #40]	@ 000a9504 a56a
.org 0xa9506
	ldrb r0, [r4, #14]	@ 000a9506 a07b
.org 0xa9508
	cmp r0, #0	@ 000a9508 0028
.org 0xa950a
	bne.n 0xa9524	@ 000a950a 0bd1
.org 0xa950c
	adds r0, r5, #0	@ 000a950c 281c
.org 0xa950e
	adds r0, #180	@ 000a950e b430
.org 0xa9510
	ldrh r0, [r0, #40]	@ 000a9510 008d
.org 0xa9512
	cmp r0, #0	@ 000a9512 0028
.org 0xa9514
	beq.n 0xa9524	@ 000a9514 06d0
.org 0xa9516
	ldr r1, [pc, #36]	@ 000a9516 0949
.org 0xa9518
	adds r0, r4, #0	@ 000a9518 201c
.org 0xa951a
	bl 0x1cf00	@ 000a951a 73f7f1fc
.org 0xa951e
	ldrb r0, [r4, #14]	@ 000a951e a07b
.org 0xa9520
	adds r0, #1	@ 000a9520 0130
.org 0xa9522
	strb r0, [r4, #14]	@ 000a9522 a073
.org 0xa9524
	adds r0, r4, #0	@ 000a9524 201c
.org 0xa9526
	bl 0x1cff0	@ 000a9526 73f763fd
.org 0xa952a
	ldrb r0, [r5, #13]	@ 000a952a 687b
.org 0xa952c
	cmp r0, #3	@ 000a952c 0328
.org 0xa952e
	bne.n 0xa9536	@ 000a952e 02d1
.org 0xa9530
	movs r0, #0	@ 000a9530 0020
.org 0xa9532
	strb r0, [r4, #13]	@ 000a9532 6073
.org 0xa9534
	strb r0, [r4, #14]	@ 000a9534 a073
.org 0xa9536
	pop {r4, r5}	@ 000a9536 30bc
.org 0xa9538
	pop {r0}	@ 000a9538 01bc
.org 0xa953a
	bx r0	@ 000a953a 0047
