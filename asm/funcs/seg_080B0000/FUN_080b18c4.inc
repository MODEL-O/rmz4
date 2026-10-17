@ FUN_080b18c4  entry 0x080b18c4  size 72
.thumb
.org 0xb18c4
FUN_080b18c4:
	push {r4, r5, r6, lr}	@ 000b18c4 70b5
.org 0xb18c6
	adds r4, r0, #0	@ 000b18c6 041c
.org 0xb18c8
	ldr r0, [r4, #20]	@ 000b18c8 6069
.org 0xb18ca
	movs r6, #1	@ 000b18ca 0126
.org 0xb18cc
	ands r0, r6	@ 000b18cc 3040
.org 0xb18ce
	cmp r0, #0	@ 000b18ce 0028
.org 0xb18d0
	beq.n 0xb1906	@ 000b18d0 19d0
.org 0xb18d2
	ldr r5, [r4, #44]	@ 000b18d2 e56a
.org 0xb18d4
	movs r0, #5	@ 000b18d4 0520
.org 0xb18d6
	bl 0x6984	@ 000b18d6 55f755f8
.org 0xb18da
	ldr r1, [r4, #20]	@ 000b18da 6169
.org 0xb18dc
	movs r0, #128	@ 000b18dc 8020
.org 0xb18de
	lsls r0, r0, #2	@ 000b18de 8000
.org 0xb18e0
	ands r0, r1	@ 000b18e0 0840
.org 0xb18e2
	cmp r0, #0	@ 000b18e2 0028
.org 0xb18e4
	beq.n 0xb1906	@ 000b18e4 0fd0
.org 0xb18e6
	movs r0, #128	@ 000b18e6 8020
.org 0xb18e8
	lsls r0, r0, #10	@ 000b18e8 8002
.org 0xb18ea
	ands r1, r0	@ 000b18ea 0140
.org 0xb18ec
	cmp r1, #0	@ 000b18ec 0029
.org 0xb18ee
	beq.n 0xb1906	@ 000b18ee 0ad0
.org 0xb18f0
	adds r0, r5, #0	@ 000b18f0 281c
.org 0xb18f2
	adds r0, #180	@ 000b18f2 b430
.org 0xb18f4
	strb r6, [r0, #0]	@ 000b18f4 0670
.org 0xb18f6
	ldr r0, [pc, #20]	@ 000b18f6 0548
.org 0xb18f8
	ldr r0, [r0, #0]	@ 000b18f8 0068
.org 0xb18fa
	cmp r0, #0	@ 000b18fa 0028
.org 0xb18fc
	beq.n 0xb1906	@ 000b18fc 03d0
.org 0xb18fe
	movs r1, #3	@ 000b18fe 0321
.org 0xb1900
	movs r2, #17	@ 000b1900 1122
.org 0xb1902
	bl 0x3a578	@ 000b1902 88f739fe
.org 0xb1906
	pop {r4, r5, r6}	@ 000b1906 70bc
.org 0xb1908
	pop {r0}	@ 000b1908 01bc
.org 0xb190a
	bx r0	@ 000b190a 0047
