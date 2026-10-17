@ FUN_080c528c  entry 0x080c528c  size 108
.thumb
.org 0xc528c
FUN_080c528c:
	push {r4, lr}	@ 000c528c 10b5
.org 0xc528e
	adds r4, r0, #0	@ 000c528e 041c
.org 0xc5290
	bl 0x1cff0	@ 000c5290 57f7aefe
.org 0xc5294
	ldr r0, [r4, #88]	@ 000c5294 a06d
.org 0xc5296
	ldr r1, [r4, #96]	@ 000c5296 216e
.org 0xc5298
	adds r0, r0, r1	@ 000c5298 4018
.org 0xc529a
	str r0, [r4, #88]	@ 000c529a a065
.org 0xc529c
	ldr r0, [pc, #88]	@ 000c529c 1648
.org 0xc529e
	adds r1, r4, #0	@ 000c529e 211c
.org 0xc52a0
	adds r1, #84	@ 000c52a0 5431
.org 0xc52a2
	bl 0x1fb14	@ 000c52a2 5af737fc
.org 0xc52a6
	movs r1, #160	@ 000c52a6 a021
.org 0xc52a8
	lsls r1, r1, #6	@ 000c52a8 8901
.org 0xc52aa
	cmp r0, r1	@ 000c52aa 8842
.org 0xc52ac
	bhi.n 0xc52bc	@ 000c52ac 06d8
.org 0xc52ae
	ldr r0, [r4, #84]	@ 000c52ae 606d
.org 0xc52b0
	ldr r1, [r4, #88]	@ 000c52b0 a16d
.org 0xc52b2
	bl 0x7c7c	@ 000c52b2 42f7e3fc
.org 0xc52b6
	lsls r0, r0, #16	@ 000c52b6 0004
.org 0xc52b8
	cmp r0, #0	@ 000c52b8 0028
.org 0xc52ba
	beq.n 0xc52f2	@ 000c52ba 1ad0
.org 0xc52bc
	ldrb r1, [r4, #10]	@ 000c52bc a17a
.org 0xc52be
	movs r0, #254	@ 000c52be fe20
.org 0xc52c0
	ands r0, r1	@ 000c52c0 0840
.org 0xc52c2
	movs r2, #0	@ 000c52c2 0022
.org 0xc52c4
	movs r1, #253	@ 000c52c4 fd21
.org 0xc52c6
	ands r0, r1	@ 000c52c6 0840
.org 0xc52c8
	strb r0, [r4, #10]	@ 000c52c8 a072
.org 0xc52ca
	adds r0, r4, #0	@ 000c52ca 201c
.org 0xc52cc
	adds r0, #140	@ 000c52cc 8c30
.org 0xc52ce
	str r2, [r0, #0]	@ 000c52ce 0260
.org 0xc52d0
	adds r0, #4	@ 000c52d0 0430
.org 0xc52d2
	str r2, [r0, #0]	@ 000c52d2 0260
.org 0xc52d4
	adds r0, #4	@ 000c52d4 0430
.org 0xc52d6
	strb r2, [r0, #0]	@ 000c52d6 0270
.org 0xc52d8
	ldrb r1, [r4, #10]	@ 000c52d8 a17a
.org 0xc52da
	movs r0, #251	@ 000c52da fb20
.org 0xc52dc
	ands r0, r1	@ 000c52dc 0840
.org 0xc52de
	strb r0, [r4, #10]	@ 000c52de a072
.org 0xc52e0
	ldr r1, [pc, #24]	@ 000c52e0 0649
.org 0xc52e2
	ldrb r0, [r4, #9]	@ 000c52e2 607a
.org 0xc52e4
	lsls r0, r0, #2	@ 000c52e4 8000
.org 0xc52e6
	adds r0, r0, r1	@ 000c52e6 4018
.org 0xc52e8
	movs r1, #3	@ 000c52e8 0321
.org 0xc52ea
	str r1, [r4, #12]	@ 000c52ea e160
.org 0xc52ec
	ldr r0, [r0, #0]	@ 000c52ec 0068
.org 0xc52ee
	ldr r0, [r0, #12]	@ 000c52ee c068
.org 0xc52f0
	str r0, [r4, #20]	@ 000c52f0 6061
.org 0xc52f2
	pop {r4}	@ 000c52f2 10bc
.org 0xc52f4
	pop {r0}	@ 000c52f4 01bc
.org 0xc52f6
	bx r0	@ 000c52f6 0047
