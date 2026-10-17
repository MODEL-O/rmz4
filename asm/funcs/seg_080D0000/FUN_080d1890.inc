@ FUN_080d1890  entry 0x080d1890  size 100
.thumb
.org 0xd1890
FUN_080d1890:
	push {r4, lr}	@ 000d1890 10b5
.org 0xd1892
	adds r3, r0, #0	@ 000d1892 031c
.org 0xd1894
	ldrb r4, [r3, #18]	@ 000d1894 9c7c
.org 0xd1896
	adds r2, r4, #1	@ 000d1896 621c
.org 0xd1898
	strb r2, [r3, #18]	@ 000d1898 9a74
.org 0xd189a
	lsls r0, r2, #24	@ 000d189a 1006
.org 0xd189c
	lsrs r0, r0, #24	@ 000d189c 000e
.org 0xd189e
	cmp r0, #32	@ 000d189e 2028
.org 0xd18a0
	bhi.n 0xd18b8	@ 000d18a0 0ad8
.org 0xd18a2
	ldr r1, [pc, #16]	@ 000d18a2 0449
.org 0xd18a4
	lsls r0, r2, #25	@ 000d18a4 5006
.org 0xd18a6
	lsrs r0, r0, #23	@ 000d18a6 c00d
.org 0xd18a8
	adds r0, r0, r1	@ 000d18a8 4018
.org 0xd18aa
	movs r2, #0	@ 000d18aa 0022
.org 0xd18ac
	ldrsh r1, [r0, r2]	@ 000d18ac 815e
.org 0xd18ae
	movs r0, #220	@ 000d18ae dc20
.org 0xd18b0
	muls r0, r1	@ 000d18b0 4843
.org 0xd18b2
	b.n 0xd18d8	@ 000d18b2 11e0
.org 0xd18b4
	.byte 0x0c,0x93,0x12,0x08	@ 000d18b4 data
.org 0xd18b8
	cmp r0, #126	@ 000d18b8 7e28
.org 0xd18ba
	bls.n 0xd18da	@ 000d18ba 0ed9
.org 0xd18bc
	ldr r1, [pc, #56]	@ 000d18bc 0e49
.org 0xd18be
	lsls r0, r4, #25	@ 000d18be 6006
.org 0xd18c0
	movs r2, #132	@ 000d18c0 8422
.org 0xd18c2
	lsls r2, r2, #23	@ 000d18c2 d205
.org 0xd18c4
	adds r0, r0, r2	@ 000d18c4 8018
.org 0xd18c6
	lsrs r0, r0, #23	@ 000d18c6 c00d
.org 0xd18c8
	adds r0, r0, r1	@ 000d18c8 4018
.org 0xd18ca
	movs r2, #0	@ 000d18ca 0022
.org 0xd18cc
	ldrsh r1, [r0, r2]	@ 000d18cc 815e
.org 0xd18ce
	movs r0, #220	@ 000d18ce dc20
.org 0xd18d0
	muls r1, r0	@ 000d18d0 4143
.org 0xd18d2
	movs r0, #220	@ 000d18d2 dc20
.org 0xd18d4
	lsls r0, r0, #9	@ 000d18d4 4002
.org 0xd18d6
	subs r0, r0, r1	@ 000d18d6 401a
.org 0xd18d8
	str r0, [r3, #84]	@ 000d18d8 5865
.org 0xd18da
	ldrb r0, [r3, #18]	@ 000d18da 987c
.org 0xd18dc
	cmp r0, #160	@ 000d18dc a028
.org 0xd18de
	bne.n 0xd18f2	@ 000d18de 08d1
.org 0xd18e0
	ldr r1, [pc, #24]	@ 000d18e0 0649
.org 0xd18e2
	ldrb r0, [r3, #9]	@ 000d18e2 587a
.org 0xd18e4
	lsls r0, r0, #2	@ 000d18e4 8000
.org 0xd18e6
	adds r0, r0, r1	@ 000d18e6 4018
.org 0xd18e8
	movs r1, #2	@ 000d18e8 0221
.org 0xd18ea
	str r1, [r3, #12]	@ 000d18ea d960
.org 0xd18ec
	ldr r0, [r0, #0]	@ 000d18ec 0068
.org 0xd18ee
	ldr r0, [r0, #8]	@ 000d18ee 8068
.org 0xd18f0
	str r0, [r3, #20]	@ 000d18f0 5861
.org 0xd18f2
	pop {r4}	@ 000d18f2 10bc
