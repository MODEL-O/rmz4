@ FUN_080fb398  entry 0x080fb398  size 72
.thumb
.org 0xfb398
FUN_080fb398:
	push {r4, r5, r6, lr}	@ 000fb398 70b5
.org 0xfb39a
	adds r4, r0, #0	@ 000fb39a 041c
.org 0xfb39c
	ldr r0, [r4, #20]	@ 000fb39c 6069
.org 0xfb39e
	movs r6, #1	@ 000fb39e 0126
.org 0xfb3a0
	ands r0, r6	@ 000fb3a0 3040
.org 0xfb3a2
	cmp r0, #0	@ 000fb3a2 0028
.org 0xfb3a4
	beq.n 0xfb3da	@ 000fb3a4 19d0
.org 0xfb3a6
	ldr r5, [r4, #44]	@ 000fb3a6 e56a
.org 0xfb3a8
	movs r0, #35	@ 000fb3a8 2320
.org 0xfb3aa
	bl 0x6984	@ 000fb3aa 0bf7ebfa
.org 0xfb3ae
	ldr r1, [r4, #20]	@ 000fb3ae 6169
.org 0xfb3b0
	movs r0, #128	@ 000fb3b0 8020
.org 0xfb3b2
	lsls r0, r0, #2	@ 000fb3b2 8000
.org 0xfb3b4
	ands r0, r1	@ 000fb3b4 0840
.org 0xfb3b6
	cmp r0, #0	@ 000fb3b6 0028
.org 0xfb3b8
	beq.n 0xfb3da	@ 000fb3b8 0fd0
.org 0xfb3ba
	movs r0, #128	@ 000fb3ba 8020
.org 0xfb3bc
	lsls r0, r0, #10	@ 000fb3bc 8002
.org 0xfb3be
	ands r1, r0	@ 000fb3be 0140
.org 0xfb3c0
	cmp r1, #0	@ 000fb3c0 0029
.org 0xfb3c2
	beq.n 0xfb3da	@ 000fb3c2 0ad0
.org 0xfb3c4
	adds r0, r5, #0	@ 000fb3c4 281c
.org 0xfb3c6
	adds r0, #181	@ 000fb3c6 b530
.org 0xfb3c8
	strb r6, [r0, #0]	@ 000fb3c8 0670
.org 0xfb3ca
	ldr r0, [pc, #20]	@ 000fb3ca 0548
.org 0xfb3cc
	ldr r0, [r0, #0]	@ 000fb3cc 0068
.org 0xfb3ce
	cmp r0, #0	@ 000fb3ce 0028
.org 0xfb3d0
	beq.n 0xfb3da	@ 000fb3d0 03d0
.org 0xfb3d2
	movs r1, #7	@ 000fb3d2 0721
.org 0xfb3d4
	movs r2, #1	@ 000fb3d4 0122
.org 0xfb3d6
	bl 0x3a578	@ 000fb3d6 3ff7cff8
.org 0xfb3da
	pop {r4, r5, r6}	@ 000fb3da 70bc
.org 0xfb3dc
	pop {r0}	@ 000fb3dc 01bc
.org 0xfb3de
	bx r0	@ 000fb3de 0047
