@ FUN_0804c5b8  entry 0x0804c5b8  size 106
.thumb
.org 0x4c5b8
FUN_0804c5b8:
	push {lr}	@ 0004c5b8 00b5
.org 0x4c5ba
	adds r3, r0, #0	@ 0004c5ba 031c
.org 0x4c5bc
	ldr r0, [r3, #40]	@ 0004c5bc 986a
.org 0x4c5be
	adds r2, r0, #0	@ 0004c5be 021c
.org 0x4c5c0
	adds r2, #180	@ 0004c5c0 b432
.org 0x4c5c2
	movs r1, #173	@ 0004c5c2 ad21
.org 0x4c5c4
	lsls r1, r1, #1	@ 0004c5c4 4900
.org 0x4c5c6
	adds r0, r0, r1	@ 0004c5c6 4018
.org 0x4c5c8
	ldrh r1, [r0, #0]	@ 0004c5c8 0188
.org 0x4c5ca
	movs r0, #1	@ 0004c5ca 0120
.org 0x4c5cc
	ands r0, r1	@ 0004c5cc 0840
.org 0x4c5ce
	cmp r0, #0	@ 0004c5ce 0028
.org 0x4c5d0
	beq.n 0x4c5dc	@ 0004c5d0 04d0
.org 0x4c5d2
	ldrb r1, [r3, #10]	@ 0004c5d2 997a
.org 0x4c5d4
	movs r0, #254	@ 0004c5d4 fe20
.org 0x4c5d6
	ands r0, r1	@ 0004c5d6 0840
.org 0x4c5d8
	movs r2, #0	@ 0004c5d8 0022
.org 0x4c5da
	b.n 0x4c5f0	@ 0004c5da 09e0
.org 0x4c5dc
	ldrh r1, [r2, #20]	@ 0004c5dc 918a
.org 0x4c5de
	movs r0, #8	@ 0004c5de 0820
.org 0x4c5e0
	ands r0, r1	@ 0004c5e0 0840
.org 0x4c5e2
	lsls r0, r0, #16	@ 0004c5e2 0004
.org 0x4c5e4
	lsrs r2, r0, #19	@ 0004c5e4 c20c
.org 0x4c5e6
	cmp r2, #0	@ 0004c5e6 002a
.org 0x4c5e8
	bne.n 0x4c61e	@ 0004c5e8 19d1
.org 0x4c5ea
	ldrb r1, [r3, #10]	@ 0004c5ea 997a
.org 0x4c5ec
	movs r0, #254	@ 0004c5ec fe20
.org 0x4c5ee
	ands r0, r1	@ 0004c5ee 0840
.org 0x4c5f0
	movs r1, #253	@ 0004c5f0 fd21
.org 0x4c5f2
	ands r0, r1	@ 0004c5f2 0840
.org 0x4c5f4
	strb r0, [r3, #10]	@ 0004c5f4 9872
.org 0x4c5f6
	adds r0, r3, #0	@ 0004c5f6 181c
.org 0x4c5f8
	adds r0, #140	@ 0004c5f8 8c30
.org 0x4c5fa
	str r2, [r0, #0]	@ 0004c5fa 0260
.org 0x4c5fc
	adds r0, #4	@ 0004c5fc 0430
.org 0x4c5fe
	str r2, [r0, #0]	@ 0004c5fe 0260
.org 0x4c600
	adds r0, #4	@ 0004c600 0430
.org 0x4c602
	strb r2, [r0, #0]	@ 0004c602 0270
.org 0x4c604
	ldrb r1, [r3, #10]	@ 0004c604 997a
.org 0x4c606
	movs r0, #251	@ 0004c606 fb20
.org 0x4c608
	ands r0, r1	@ 0004c608 0840
.org 0x4c60a
	strb r0, [r3, #10]	@ 0004c60a 9872
.org 0x4c60c
	ldr r1, [pc, #20]	@ 0004c60c 0549
.org 0x4c60e
	ldrb r0, [r3, #9]	@ 0004c60e 587a
.org 0x4c610
	lsls r0, r0, #2	@ 0004c610 8000
.org 0x4c612
	adds r0, r0, r1	@ 0004c612 4018
.org 0x4c614
	movs r1, #3	@ 0004c614 0321
.org 0x4c616
	str r1, [r3, #12]	@ 0004c616 d960
.org 0x4c618
	ldr r0, [r0, #0]	@ 0004c618 0068
.org 0x4c61a
	ldr r0, [r0, #12]	@ 0004c61a c068
.org 0x4c61c
	str r0, [r3, #20]	@ 0004c61c 5861
.org 0x4c61e
	pop {r0}	@ 0004c61e 01bc
.org 0x4c620
	bx r0	@ 0004c620 0047
