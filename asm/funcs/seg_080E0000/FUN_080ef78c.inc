@ FUN_080ef78c  entry 0x080ef78c  size 98
.thumb
.org 0xef78c
FUN_080ef78c:
	push {r4, lr}	@ 000ef78c 10b5
.org 0xef78e
	adds r4, r0, #0	@ 000ef78e 041c
.org 0xef790
	ldrb r1, [r4, #10]	@ 000ef790 a17a
.org 0xef792
	movs r0, #1	@ 000ef792 0120
.org 0xef794
	orrs r0, r1	@ 000ef794 0843
.org 0xef796
	movs r1, #2	@ 000ef796 0221
.org 0xef798
	orrs r0, r1	@ 000ef798 0843
.org 0xef79a
	strb r0, [r4, #10]	@ 000ef79a a072
.org 0xef79c
	adds r2, r4, #0	@ 000ef79c 221c
.org 0xef79e
	adds r2, #73	@ 000ef79e 4932
.org 0xef7a0
	ldrb r1, [r2, #0]	@ 000ef7a0 1178
.org 0xef7a2
	movs r0, #13	@ 000ef7a2 0d20
.org 0xef7a4
	negs r0, r0	@ 000ef7a4 4042
.org 0xef7a6
	ands r0, r1	@ 000ef7a6 0840
.org 0xef7a8
	strb r0, [r2, #0]	@ 000ef7a8 1070
.org 0xef7aa
	ldrb r0, [r4, #17]	@ 000ef7aa 607c
.org 0xef7ac
	cmp r0, #1	@ 000ef7ac 0128
.org 0xef7ae
	bne.n 0xef7ca	@ 000ef7ae 0cd1
.org 0xef7b0
	adds r0, r4, #0	@ 000ef7b0 201c
.org 0xef7b2
	bl 0x1cdbc	@ 000ef7b2 2df703fb
.org 0xef7b6
	movs r0, #128	@ 000ef7b6 8020
.org 0xef7b8
	lsls r0, r0, #2	@ 000ef7b8 8000
.org 0xef7ba
	str r0, [r4, #100]	@ 000ef7ba 6066
.org 0xef7bc
	adds r1, r4, #0	@ 000ef7bc 211c
.org 0xef7be
	adds r1, #80	@ 000ef7be 5031
.org 0xef7c0
	strh r0, [r1, #0]	@ 000ef7c0 0880
.org 0xef7c2
	ldr r0, [r4, #100]	@ 000ef7c2 606e
.org 0xef7c4
	adds r1, #2	@ 000ef7c4 0231
.org 0xef7c6
	strh r0, [r1, #0]	@ 000ef7c6 0880
.org 0xef7c8
	b.n 0xef7d0	@ 000ef7c8 02e0
.org 0xef7ca
	adds r0, r4, #0	@ 000ef7ca 201c
.org 0xef7cc
	bl 0x1cc9c	@ 000ef7cc 2df766fa
.org 0xef7d0
	ldr r1, [pc, #28]	@ 000ef7d0 0749
.org 0xef7d2
	ldrb r0, [r4, #9]	@ 000ef7d2 607a
.org 0xef7d4
	lsls r0, r0, #2	@ 000ef7d4 8000
.org 0xef7d6
	adds r0, r0, r1	@ 000ef7d6 4018
.org 0xef7d8
	movs r1, #1	@ 000ef7d8 0121
.org 0xef7da
	str r1, [r4, #12]	@ 000ef7da e160
.org 0xef7dc
	ldr r0, [r0, #0]	@ 000ef7dc 0068
.org 0xef7de
	ldr r0, [r0, #4]	@ 000ef7de 4068
.org 0xef7e0
	str r0, [r4, #20]	@ 000ef7e0 6061
.org 0xef7e2
	adds r0, r4, #0	@ 000ef7e2 201c
.org 0xef7e4
	bl 0xed7c8	@ 000ef7e4 fdf7f0ff
.org 0xef7e8
	pop {r4}	@ 000ef7e8 10bc
.org 0xef7ea
	pop {r0}	@ 000ef7ea 01bc
.org 0xef7ec
	bx r0	@ 000ef7ec 0047
