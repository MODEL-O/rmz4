@ FUN_080848b0  entry 0x080848b0  size 90
.thumb
.org 0x848b0
FUN_080848b0:
	push {r4, r5, lr}	@ 000848b0 30b5
.org 0x848b2
	adds r4, r0, #0	@ 000848b2 041c
.org 0x848b4
	ldr r0, [r4, #20]	@ 000848b4 6069
.org 0x848b6
	movs r1, #1	@ 000848b6 0121
.org 0x848b8
	ands r0, r1	@ 000848b8 0840
.org 0x848ba
	cmp r0, #0	@ 000848ba 0028
.org 0x848bc
	beq.n 0x84904	@ 000848bc 22d0
.org 0x848be
	movs r0, #22	@ 000848be 1620
.org 0x848c0
	bl 0x6984	@ 000848c0 82f760f8
.org 0x848c4
	ldr r0, [r4, #12]	@ 000848c4 e068
.org 0x848c6
	ldr r1, [r0, #44]	@ 000848c6 c16a
.org 0x848c8
	ldr r0, [r4, #44]	@ 000848c8 e06a
.org 0x848ca
	adds r5, r0, #0	@ 000848ca 051c
.org 0x848cc
	adds r5, #180	@ 000848cc b435
.org 0x848ce
	movs r2, #0	@ 000848ce 0022
.org 0x848d0
	ldr r1, [r1, #84]	@ 000848d0 496d
.org 0x848d2
	ldr r0, [r0, #84]	@ 000848d2 406d
.org 0x848d4
	cmp r1, r0	@ 000848d4 8142
.org 0x848d6
	ble.n 0x848da	@ 000848d6 00dd
.org 0x848d8
	movs r2, #1	@ 000848d8 0122
.org 0x848da
	strb r2, [r5, #8]	@ 000848da 2a72
.org 0x848dc
	ldr r1, [r4, #20]	@ 000848dc 6169
.org 0x848de
	movs r0, #128	@ 000848de 8020
.org 0x848e0
	lsls r0, r0, #2	@ 000848e0 8000
.org 0x848e2
	ands r0, r1	@ 000848e2 0840
.org 0x848e4
	cmp r0, #0	@ 000848e4 0028
.org 0x848e6
	beq.n 0x84904	@ 000848e6 0dd0
.org 0x848e8
	movs r0, #128	@ 000848e8 8020
.org 0x848ea
	lsls r0, r0, #10	@ 000848ea 8002
.org 0x848ec
	ands r1, r0	@ 000848ec 0140
.org 0x848ee
	cmp r1, #0	@ 000848ee 0029
.org 0x848f0
	beq.n 0x84904	@ 000848f0 08d0
.org 0x848f2
	ldr r0, [pc, #24]	@ 000848f2 0648
.org 0x848f4
	ldr r0, [r0, #0]	@ 000848f4 0068
.org 0x848f6
	cmp r0, #0	@ 000848f6 0028
.org 0x848f8
	beq.n 0x84904	@ 000848f8 04d0
.org 0x848fa
	movs r1, #3	@ 000848fa 0321
.org 0x848fc
	movs r2, #5	@ 000848fc 0522
.org 0x848fe
	bl 0x3a578	@ 000848fe b5f73bfe
.org 0x84902
	strb r0, [r5, #10]	@ 00084902 a872
.org 0x84904
	pop {r4, r5}	@ 00084904 30bc
.org 0x84906
	pop {r0}	@ 00084906 01bc
.org 0x84908
	bx r0	@ 00084908 0047
