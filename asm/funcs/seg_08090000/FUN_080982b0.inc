@ FUN_080982b0  entry 0x080982b0  size 94
.thumb
.org 0x982b0
FUN_080982b0:
	push {r4, r5, lr}	@ 000982b0 30b5
.org 0x982b2
	adds r4, r0, #0	@ 000982b2 041c
.org 0x982b4
	ldr r0, [r4, #20]	@ 000982b4 6069
.org 0x982b6
	movs r1, #1	@ 000982b6 0121
.org 0x982b8
	ands r0, r1	@ 000982b8 0840
.org 0x982ba
	cmp r0, #0	@ 000982ba 0028
.org 0x982bc
	beq.n 0x98308	@ 000982bc 24d0
.org 0x982be
	movs r0, #58	@ 000982be 3a20
.org 0x982c0
	bl 0x6984	@ 000982c0 6ef760fb
.org 0x982c4
	ldr r0, [r4, #12]	@ 000982c4 e068
.org 0x982c6
	ldr r0, [r0, #44]	@ 000982c6 c06a
.org 0x982c8
	ldr r5, [r4, #44]	@ 000982c8 e56a
.org 0x982ca
	movs r2, #0	@ 000982ca 0022
.org 0x982cc
	ldr r1, [r0, #84]	@ 000982cc 416d
.org 0x982ce
	ldr r0, [r5, #84]	@ 000982ce 686d
.org 0x982d0
	cmp r1, r0	@ 000982d0 8142
.org 0x982d2
	ble.n 0x982d6	@ 000982d2 00dd
.org 0x982d4
	movs r2, #1	@ 000982d4 0122
.org 0x982d6
	adds r0, r5, #0	@ 000982d6 281c
.org 0x982d8
	adds r0, #188	@ 000982d8 bc30
.org 0x982da
	strb r2, [r0, #0]	@ 000982da 0270
.org 0x982dc
	ldr r1, [r4, #20]	@ 000982dc 6169
.org 0x982de
	movs r0, #128	@ 000982de 8020
.org 0x982e0
	lsls r0, r0, #2	@ 000982e0 8000
.org 0x982e2
	ands r0, r1	@ 000982e2 0840
.org 0x982e4
	cmp r0, #0	@ 000982e4 0028
.org 0x982e6
	beq.n 0x98308	@ 000982e6 0fd0
.org 0x982e8
	movs r0, #128	@ 000982e8 8020
.org 0x982ea
	lsls r0, r0, #10	@ 000982ea 8002
.org 0x982ec
	ands r1, r0	@ 000982ec 0140
.org 0x982ee
	cmp r1, #0	@ 000982ee 0029
.org 0x982f0
	beq.n 0x98308	@ 000982f0 0ad0
.org 0x982f2
	ldr r0, [pc, #28]	@ 000982f2 0748
.org 0x982f4
	ldr r0, [r0, #0]	@ 000982f4 0068
.org 0x982f6
	cmp r0, #0	@ 000982f6 0028
.org 0x982f8
	beq.n 0x98308	@ 000982f8 06d0
.org 0x982fa
	movs r1, #3	@ 000982fa 0321
.org 0x982fc
	movs r2, #15	@ 000982fc 0f22
.org 0x982fe
	bl 0x3a578	@ 000982fe a2f73bf9
.org 0x98302
	adds r1, r5, #0	@ 00098302 291c
.org 0x98304
	adds r1, #189	@ 00098304 bd31
.org 0x98306
	strb r0, [r1, #0]	@ 00098306 0870
.org 0x98308
	pop {r4, r5}	@ 00098308 30bc
.org 0x9830a
	pop {r0}	@ 0009830a 01bc
.org 0x9830c
	bx r0	@ 0009830c 0047
