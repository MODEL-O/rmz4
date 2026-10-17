@ FUN_080c6690  entry 0x080c6690  size 114
.thumb
.org 0xc6690
FUN_080c6690:
	push {r4, r5, lr}	@ 000c6690 30b5
.org 0xc6692
	adds r4, r0, #0	@ 000c6692 041c
.org 0xc6694
	bl 0x1cc9c	@ 000c6694 56f702fb
.org 0xc6698
	ldrb r1, [r4, #10]	@ 000c6698 a17a
.org 0xc669a
	movs r0, #1	@ 000c669a 0120
.org 0xc669c
	movs r5, #0	@ 000c669c 0025
.org 0xc669e
	orrs r0, r1	@ 000c669e 0843
.org 0xc66a0
	movs r1, #2	@ 000c66a0 0221
.org 0xc66a2
	orrs r0, r1	@ 000c66a2 0843
.org 0xc66a4
	strb r0, [r4, #10]	@ 000c66a4 a072
.org 0xc66a6
	ldr r1, [pc, #20]	@ 000c66a6 0549
.org 0xc66a8
	adds r0, r4, #0	@ 000c66a8 201c
.org 0xc66aa
	bl 0x1cf00	@ 000c66aa 56f729fc
.org 0xc66ae
	ldrb r2, [r4, #17]	@ 000c66ae 627c
.org 0xc66b0
	cmp r2, #0	@ 000c66b0 002a
.org 0xc66b2
	beq.n 0xc66c0	@ 000c66b2 05d0
.org 0xc66b4
	ldrb r0, [r4, #10]	@ 000c66b4 a07a
.org 0xc66b6
	movs r1, #16	@ 000c66b6 1021
.org 0xc66b8
	orrs r0, r1	@ 000c66b8 0843
.org 0xc66ba
	b.n 0xc66c6	@ 000c66ba 04e0
.org 0xc66bc
	.byte 0x01,0x63,0x00,0x00	@ 000c66bc data
.org 0xc66c0
	ldrb r1, [r4, #10]	@ 000c66c0 a17a
.org 0xc66c2
	movs r0, #239	@ 000c66c2 ef20
.org 0xc66c4
	ands r0, r1	@ 000c66c4 0840
.org 0xc66c6
	strb r0, [r4, #10]	@ 000c66c6 a072
.org 0xc66c8
	movs r3, #1	@ 000c66c8 0123
.org 0xc66ca
	adds r1, r3, #0	@ 000c66ca 191c
.org 0xc66cc
	ands r1, r2	@ 000c66cc 1140
.org 0xc66ce
	adds r0, r4, #0	@ 000c66ce 201c
.org 0xc66d0
	adds r0, #76	@ 000c66d0 4c30
.org 0xc66d2
	strb r1, [r0, #0]	@ 000c66d2 0170
.org 0xc66d4
	movs r0, #74	@ 000c66d4 4a20
.org 0xc66d6
	adds r0, r0, r4	@ 000c66d6 0019
.org 0xc66d8
	mov ip, r0	@ 000c66d8 8446
.org 0xc66da
	lsls r1, r1, #4	@ 000c66da 0901
.org 0xc66dc
	ldrb r2, [r0, #0]	@ 000c66dc 0278
.org 0xc66de
	movs r0, #17	@ 000c66de 1120
.org 0xc66e0
	negs r0, r0	@ 000c66e0 4042
.org 0xc66e2
	ands r0, r2	@ 000c66e2 1040
.org 0xc66e4
	orrs r0, r1	@ 000c66e4 0843
.org 0xc66e6
	mov r1, ip	@ 000c66e6 6146
.org 0xc66e8
	strb r0, [r1, #0]	@ 000c66e8 0870
.org 0xc66ea
	ldr r1, [pc, #28]	@ 000c66ea 0749
.org 0xc66ec
	ldrb r0, [r4, #9]	@ 000c66ec 607a
.org 0xc66ee
	lsls r0, r0, #2	@ 000c66ee 8000
.org 0xc66f0
	adds r0, r0, r1	@ 000c66f0 4018
.org 0xc66f2
	str r3, [r4, #12]	@ 000c66f2 e360
.org 0xc66f4
	ldr r0, [r0, #0]	@ 000c66f4 0068
.org 0xc66f6
	ldr r0, [r0, #4]	@ 000c66f6 4068
.org 0xc66f8
	str r0, [r4, #20]	@ 000c66f8 6061
.org 0xc66fa
	adds r0, r4, #0	@ 000c66fa 201c
.org 0xc66fc
	bl 0xc6518	@ 000c66fc fff70cff
.org 0xc6700
	pop {r4, r5}	@ 000c6700 30bc
