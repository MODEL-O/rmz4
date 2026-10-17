@ FUN_0806d8a8  entry 0x0806d8a8  size 90
.thumb
.org 0x6d8a8
FUN_0806d8a8:
	push {r4, lr}	@ 0006d8a8 10b5
.org 0x6d8aa
	adds r4, r0, #0	@ 0006d8aa 041c
.org 0x6d8ac
	ldrb r3, [r4, #14]	@ 0006d8ac a37b
.org 0x6d8ae
	cmp r3, #0	@ 0006d8ae 002b
.org 0x6d8b0
	bne.n 0x6d8e6	@ 0006d8b0 19d1
.org 0x6d8b2
	adds r2, r4, #0	@ 0006d8b2 221c
.org 0x6d8b4
	adds r2, #180	@ 0006d8b4 b432
.org 0x6d8b6
	ldr r0, [r2, #0]	@ 0006d8b6 1068
.org 0x6d8b8
	negs r1, r0	@ 0006d8b8 4142
.org 0x6d8ba
	orrs r1, r0	@ 0006d8ba 0143
.org 0x6d8bc
	lsrs r1, r1, #31	@ 0006d8bc c90f
.org 0x6d8be
	ldr r0, [r2, #4]	@ 0006d8be 5068
.org 0x6d8c0
	cmp r0, #0	@ 0006d8c0 0028
.org 0x6d8c2
	beq.n 0x6d8c6	@ 0006d8c2 00d0
.org 0x6d8c4
	adds r1, #1	@ 0006d8c4 0131
.org 0x6d8c6
	ldr r0, [r2, #8]	@ 0006d8c6 9068
.org 0x6d8c8
	cmp r0, #0	@ 0006d8c8 0028
.org 0x6d8ca
	beq.n 0x6d8d2	@ 0006d8ca 02d0
.org 0x6d8cc
	adds r0, r1, #1	@ 0006d8cc 481c
.org 0x6d8ce
	lsls r0, r0, #24	@ 0006d8ce 0006
.org 0x6d8d0
	lsrs r1, r0, #24	@ 0006d8d0 010e
.org 0x6d8d2
	ldr r0, [r2, #12]	@ 0006d8d2 d068
.org 0x6d8d4
	cmp r0, #0	@ 0006d8d4 0028
.org 0x6d8d6
	beq.n 0x6d8de	@ 0006d8d6 02d0
.org 0x6d8d8
	adds r0, r1, #1	@ 0006d8d8 481c
.org 0x6d8da
	lsls r0, r0, #24	@ 0006d8da 0006
.org 0x6d8dc
	lsrs r1, r0, #24	@ 0006d8dc 010e
.org 0x6d8de
	lsls r0, r1, #4	@ 0006d8de 0801
.org 0x6d8e0
	strb r0, [r4, #18]	@ 0006d8e0 a074
.org 0x6d8e2
	adds r0, r3, #1	@ 0006d8e2 581c
.org 0x6d8e4
	strb r0, [r4, #14]	@ 0006d8e4 a073
.org 0x6d8e6
	adds r0, r4, #0	@ 0006d8e6 201c
.org 0x6d8e8
	bl 0x1cff0	@ 0006d8e8 aff782fb
.org 0x6d8ec
	adds r0, r4, #0	@ 0006d8ec 201c
.org 0x6d8ee
	adds r0, #218	@ 0006d8ee da30
.org 0x6d8f0
	ldrb r1, [r0, #0]	@ 0006d8f0 0178
.org 0x6d8f2
	cmp r1, #0	@ 0006d8f2 0029
.org 0x6d8f4
	bne.n 0x6d8fc	@ 0006d8f4 02d1
.org 0x6d8f6
	movs r0, #6	@ 0006d8f6 0620
.org 0x6d8f8
	strb r0, [r4, #13]	@ 0006d8f8 6073
.org 0x6d8fa
	strb r1, [r4, #14]	@ 0006d8fa a173
.org 0x6d8fc
	pop {r4}	@ 0006d8fc 10bc
.org 0x6d8fe
	pop {r0}	@ 0006d8fe 01bc
.org 0x6d900
	bx r0	@ 0006d900 0047
