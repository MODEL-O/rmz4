@ FUN_080be688  entry 0x080be688  size 140
.thumb
.org 0xbe688
FUN_080be688:
	push {r4, lr}	@ 000be688 10b5
.org 0xbe68a
	adds r4, r0, #0	@ 000be68a 041c
.org 0xbe68c
	ldrb r0, [r4, #14]	@ 000be68c a07b
.org 0xbe68e
	cmp r0, #0	@ 000be68e 0028
.org 0xbe690
	beq.n 0xbe698	@ 000be690 02d0
.org 0xbe692
	cmp r0, #1	@ 000be692 0128
.org 0xbe694
	beq.n 0xbe6b8	@ 000be694 10d0
.org 0xbe696
	b.n 0xbe718	@ 000be696 3fe0
.org 0xbe698
	ldr r1, [pc, #80]	@ 000be698 1449
.org 0xbe69a
	adds r0, r4, #0	@ 000be69a 201c
.org 0xbe69c
	bl 0x1cf00	@ 000be69c 5ef730fc
.org 0xbe6a0
	ldrb r1, [r4, #10]	@ 000be6a0 a17a
.org 0xbe6a2
	movs r0, #16	@ 000be6a2 1020
.org 0xbe6a4
	ands r0, r1	@ 000be6a4 0840
.org 0xbe6a6
	ldr r1, [pc, #72]	@ 000be6a6 1249
.org 0xbe6a8
	cmp r0, #0	@ 000be6a8 0028
.org 0xbe6aa
	beq.n 0xbe6b0	@ 000be6aa 01d0
.org 0xbe6ac
	movs r1, #160	@ 000be6ac a021
.org 0xbe6ae
	lsls r1, r1, #2	@ 000be6ae 8900
.org 0xbe6b0
	str r1, [r4, #92]	@ 000be6b0 e165
.org 0xbe6b2
	ldrb r0, [r4, #14]	@ 000be6b2 a07b
.org 0xbe6b4
	adds r0, #1	@ 000be6b4 0130
.org 0xbe6b6
	strb r0, [r4, #14]	@ 000be6b6 a073
.org 0xbe6b8
	adds r0, r4, #0	@ 000be6b8 201c
.org 0xbe6ba
	bl 0x1cff0	@ 000be6ba 5ef799fc
.org 0xbe6be
	ldr r0, [r4, #84]	@ 000be6be 606d
.org 0xbe6c0
	ldr r1, [r4, #92]	@ 000be6c0 e16d
.org 0xbe6c2
	adds r0, r0, r1	@ 000be6c2 4018
.org 0xbe6c4
	str r0, [r4, #84]	@ 000be6c4 6065
.org 0xbe6c6
	ldr r1, [r4, #88]	@ 000be6c6 a16d
.org 0xbe6c8
	bl 0x7c7c	@ 000be6c8 49f7d8fa
.org 0xbe6cc
	lsls r0, r0, #16	@ 000be6cc 0004
.org 0xbe6ce
	lsrs r1, r0, #16	@ 000be6ce 010c
.org 0xbe6d0
	cmp r1, #0	@ 000be6d0 0029
.org 0xbe6d2
	beq.n 0xbe6f4	@ 000be6d2 0fd0
.org 0xbe6d4
	movs r0, #128	@ 000be6d4 8020
.org 0xbe6d6
	lsls r0, r0, #8	@ 000be6d6 0002
.org 0xbe6d8
	ands r0, r1	@ 000be6d8 0840
.org 0xbe6da
	cmp r0, #0	@ 000be6da 0028
.org 0xbe6dc
	bne.n 0xbe6f4	@ 000be6dc 0ad1
.org 0xbe6de
	adds r1, r4, #0	@ 000be6de 211c
.org 0xbe6e0
	adds r1, #84	@ 000be6e0 5431
.org 0xbe6e2
	movs r0, #3	@ 000be6e2 0320
.org 0xbe6e4
	bl 0xd0c88	@ 000be6e4 12f0d0fa
.org 0xbe6e8
	b.n 0xbe706	@ 000be6e8 0de0
.org 0xbe6ea
	.byte 0x00	@ 000be6ea data
.org 0xbe6eb
	.byte 0x00	@ 000be6eb data
.org 0xbe6ec
	.byte 0x0b,0x20,0x00,0x00	@ 000be6ec data
.org 0xbe6f0
	.byte 0x80,0xfd,0xff,0xff	@ 000be6f0 data
.org 0xbe6f4
	ldr r0, [pc, #40]	@ 000be6f4 0a48
.org 0xbe6f6
	adds r1, r4, #0	@ 000be6f6 211c
.org 0xbe6f8
	adds r1, #84	@ 000be6f8 5431
.org 0xbe6fa
	bl 0x1fb14	@ 000be6fa 61f70bfa
.org 0xbe6fe
	movs r1, #128	@ 000be6fe 8021
.org 0xbe700
	lsls r1, r1, #5	@ 000be700 4901
.org 0xbe702
	cmp r0, r1	@ 000be702 8842
.org 0xbe704
	bls.n 0xbe718	@ 000be704 08d9
.org 0xbe706
	ldr r1, [pc, #28]	@ 000be706 0749
.org 0xbe708
	ldrb r0, [r4, #9]	@ 000be708 607a
.org 0xbe70a
	lsls r0, r0, #2	@ 000be70a 8000
.org 0xbe70c
	adds r0, r0, r1	@ 000be70c 4018
.org 0xbe70e
	movs r1, #2	@ 000be70e 0221
.org 0xbe710
	str r1, [r4, #12]	@ 000be710 e160
.org 0xbe712
	ldr r0, [r0, #0]	@ 000be712 0068
