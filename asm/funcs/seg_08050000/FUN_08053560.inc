@ FUN_08053560  entry 0x08053560  size 60
.thumb
.org 0x53560
FUN_08053560:
	push {r4, lr}	@ 00053560 10b5
.org 0x53562
	adds r4, r0, #0	@ 00053562 041c
.org 0x53564
	ldrb r0, [r4, #15]	@ 00053564 e07b
.org 0x53566
	cmp r0, #0	@ 00053566 0028
.org 0x53568
	bne.n 0x5357c	@ 00053568 08d1
.org 0x5356a
	ldr r1, [pc, #48]	@ 0005356a 0c49
.org 0x5356c
	adds r0, r4, #0	@ 0005356c 201c
.org 0x5356e
	bl 0x1cf00	@ 0005356e c9f7c7fc
.org 0x53572
	movs r0, #48	@ 00053572 3020
.org 0x53574
	strb r0, [r4, #18]	@ 00053574 a074
.org 0x53576
	ldrb r0, [r4, #15]	@ 00053576 e07b
.org 0x53578
	adds r0, #1	@ 00053578 0130
.org 0x5357a
	strb r0, [r4, #15]	@ 0005357a e073
.org 0x5357c
	adds r0, r4, #0	@ 0005357c 201c
.org 0x5357e
	bl 0x1cff0	@ 0005357e c9f737fd
.org 0x53582
	ldrb r0, [r4, #18]	@ 00053582 a07c
.org 0x53584
	subs r0, #1	@ 00053584 0138
.org 0x53586
	strb r0, [r4, #18]	@ 00053586 a074
.org 0x53588
	lsls r0, r0, #24	@ 00053588 0006
.org 0x5358a
	lsrs r1, r0, #24	@ 0005358a 010e
.org 0x5358c
	cmp r1, #0	@ 0005358c 0029
.org 0x5358e
	bne.n 0x53596	@ 0005358e 02d1
.org 0x53590
	movs r0, #2	@ 00053590 0220
.org 0x53592
	strb r0, [r4, #14]	@ 00053592 a073
.org 0x53594
	strb r1, [r4, #15]	@ 00053594 e173
.org 0x53596
	pop {r4}	@ 00053596 10bc
.org 0x53598
	pop {r0}	@ 00053598 01bc
.org 0x5359a
	bx r0	@ 0005359a 0047
