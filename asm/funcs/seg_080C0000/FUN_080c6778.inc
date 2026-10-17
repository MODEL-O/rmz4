@ FUN_080c6778  entry 0x080c6778  size 96
.thumb
.org 0xc6778
FUN_080c6778:
	push {r4, r5, r6, lr}	@ 000c6778 70b5
.org 0xc677a
	adds r4, r0, #0	@ 000c677a 041c
.org 0xc677c
	bl 0x1cc9c	@ 000c677c 56f78efa
.org 0xc6780
	ldrb r1, [r4, #10]	@ 000c6780 a17a
.org 0xc6782
	movs r0, #1	@ 000c6782 0120
.org 0xc6784
	movs r6, #0	@ 000c6784 0026
.org 0xc6786
	orrs r0, r1	@ 000c6786 0843
.org 0xc6788
	movs r1, #2	@ 000c6788 0221
.org 0xc678a
	orrs r0, r1	@ 000c678a 0843
.org 0xc678c
	strb r0, [r4, #10]	@ 000c678c a072
.org 0xc678e
	adds r0, r4, #0	@ 000c678e 201c
.org 0xc6790
	bl 0x1ceec	@ 000c6790 56f7acfb
.org 0xc6794
	ldr r1, [pc, #64]	@ 000c6794 1049
.org 0xc6796
	adds r0, r4, #0	@ 000c6796 201c
.org 0xc6798
	bl 0x1cf00	@ 000c6798 56f7b2fb
.org 0xc679c
	ldrb r1, [r4, #10]	@ 000c679c a17a
.org 0xc679e
	movs r0, #4	@ 000c679e 0420
.org 0xc67a0
	orrs r0, r1	@ 000c67a0 0843
.org 0xc67a2
	strb r0, [r4, #10]	@ 000c67a2 a072
.org 0xc67a4
	adds r5, r4, #0	@ 000c67a4 251c
.org 0xc67a6
	adds r5, #116	@ 000c67a6 7435
.org 0xc67a8
	ldr r1, [pc, #48]	@ 000c67a8 0c49
.org 0xc67aa
	adds r2, r4, #0	@ 000c67aa 221c
.org 0xc67ac
	adds r2, #84	@ 000c67ac 5432
.org 0xc67ae
	adds r0, r5, #0	@ 000c67ae 281c
.org 0xc67b0
	movs r3, #8	@ 000c67b0 0823
.org 0xc67b2
	bl 0x5760	@ 000c67b2 3ef7d5ff
.org 0xc67b6
	str r4, [r5, #44]	@ 000c67b6 ec62
.org 0xc67b8
	str r6, [r5, #36]	@ 000c67b8 6e62
.org 0xc67ba
	ldr r1, [pc, #36]	@ 000c67ba 0949
.org 0xc67bc
	ldrb r0, [r4, #9]	@ 000c67bc 607a
.org 0xc67be
	lsls r0, r0, #2	@ 000c67be 8000
.org 0xc67c0
	adds r0, r0, r1	@ 000c67c0 4018
.org 0xc67c2
	movs r1, #1	@ 000c67c2 0121
.org 0xc67c4
	str r1, [r4, #12]	@ 000c67c4 e160
.org 0xc67c6
	ldr r0, [r0, #0]	@ 000c67c6 0068
.org 0xc67c8
	ldr r0, [r0, #4]	@ 000c67c8 4068
.org 0xc67ca
	str r0, [r4, #20]	@ 000c67ca 6061
.org 0xc67cc
	adds r0, r4, #0	@ 000c67cc 201c
.org 0xc67ce
	bl 0xc6518	@ 000c67ce fff7a3fe
.org 0xc67d2
	pop {r4, r5, r6}	@ 000c67d2 70bc
.org 0xc67d4
	pop {r0}	@ 000c67d4 01bc
.org 0xc67d6
	bx r0	@ 000c67d6 0047
