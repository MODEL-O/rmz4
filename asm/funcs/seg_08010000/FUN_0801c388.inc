@ FUN_0801c388  entry 0x0801c388  size 92
.thumb
.org 0x1c388
FUN_0801c388:
	push {r4, lr}	@ 0001c388 10b5
.org 0x1c38a
	adds r4, r0, #0	@ 0001c38a 041c
.org 0x1c38c
	ldrb r3, [r4, #14]	@ 0001c38c a37b
.org 0x1c38e
	cmp r3, #0	@ 0001c38e 002b
.org 0x1c390
	bne.n 0x1c3bc	@ 0001c390 14d1
.org 0x1c392
	ldr r1, [r4, #92]	@ 0001c392 e16d
.org 0x1c394
	lsrs r1, r1, #4	@ 0001c394 0909
.org 0x1c396
	lsls r1, r1, #1	@ 0001c396 4900
.org 0x1c398
	ldr r0, [pc, #72]	@ 0001c398 1248
.org 0x1c39a
	adds r1, r1, r0	@ 0001c39a 0918
.org 0x1c39c
	ldrh r2, [r1, #0]	@ 0001c39c 0a88
.org 0x1c39e
	ldr r0, [pc, #72]	@ 0001c39e 1248
.org 0x1c3a0
	ands r0, r2	@ 0001c3a0 1040
.org 0x1c3a2
	movs r2, #3	@ 0001c3a2 0322
.org 0x1c3a4
	orrs r0, r2	@ 0001c3a4 1043
.org 0x1c3a6
	strh r0, [r1, #0]	@ 0001c3a6 0880
.org 0x1c3a8
	str r3, [r4, #108]	@ 0001c3a8 e366
.org 0x1c3aa
	movs r0, #0	@ 0001c3aa 0020
.org 0x1c3ac
	movs r1, #0	@ 0001c3ac 0021
.org 0x1c3ae
	movs r2, #0	@ 0001c3ae 0022
.org 0x1c3b0
	bl 0x1040c0	@ 0001c3b0 e7f086fe
.org 0x1c3b4
	str r0, [r4, #104]	@ 0001c3b4 a066
.org 0x1c3b6
	ldrb r0, [r4, #14]	@ 0001c3b6 a07b
.org 0x1c3b8
	adds r0, #1	@ 0001c3b8 0130
.org 0x1c3ba
	strb r0, [r4, #14]	@ 0001c3ba a073
.org 0x1c3bc
	ldr r0, [r4, #108]	@ 0001c3bc e06e
.org 0x1c3be
	cmp r0, #0	@ 0001c3be 0028
.org 0x1c3c0
	bne.n 0x1c3ce	@ 0001c3c0 05d1
.org 0x1c3c2
	movs r0, #0	@ 0001c3c2 0020
.org 0x1c3c4
	movs r1, #0	@ 0001c3c4 0021
.org 0x1c3c6
	movs r2, #1	@ 0001c3c6 0122
.org 0x1c3c8
	bl 0x1040c0	@ 0001c3c8 e7f07afe
.org 0x1c3cc
	str r0, [r4, #108]	@ 0001c3cc e066
.org 0x1c3ce
	ldr r0, [pc, #28]	@ 0001c3ce 0748
.org 0x1c3d0
	ldr r1, [pc, #28]	@ 0001c3d0 0749
.org 0x1c3d2
	adds r0, r0, r1	@ 0001c3d2 4018
.org 0x1c3d4
	ldr r1, [r0, #0]	@ 0001c3d4 0168
.org 0x1c3d6
	lsrs r1, r1, #6	@ 0001c3d6 8909
.org 0x1c3d8
	movs r0, #60	@ 0001c3d8 3c20
.org 0x1c3da
	subs r0, r0, r1	@ 0001c3da 401a
.org 0x1c3dc
	str r0, [r4, #80]	@ 0001c3dc 2065
.org 0x1c3de
	pop {r4}	@ 0001c3de 10bc
.org 0x1c3e0
	pop {r0}	@ 0001c3e0 01bc
.org 0x1c3e2
	bx r0	@ 0001c3e2 0047
