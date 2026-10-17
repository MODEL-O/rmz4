@ FUN_080ec994  entry 0x080ec994  size 74
.thumb
.org 0xec994
FUN_080ec994:
	push {r4, r5, r6, lr}	@ 000ec994 70b5
.org 0xec996
	adds r2, r0, #0	@ 000ec996 021c
.org 0xec998
	adds r5, r1, #0	@ 000ec998 0d1c
.org 0xec99a
	ldr r1, [r2, #20]	@ 000ec99a 5169
.org 0xec99c
	movs r6, #1	@ 000ec99c 0126
.org 0xec99e
	adds r0, r1, #0	@ 000ec99e 081c
.org 0xec9a0
	ands r0, r6	@ 000ec9a0 3040
.org 0xec9a2
	cmp r0, #0	@ 000ec9a2 0028
.org 0xec9a4
	beq.n 0xec9d8	@ 000ec9a4 18d0
.org 0xec9a6
	ldr r4, [r2, #44]	@ 000ec9a6 d46a
.org 0xec9a8
	ldr r0, [pc, #52]	@ 000ec9a8 0d48
.org 0xec9aa
	ldr r2, [r0, #0]	@ 000ec9aa 0268
.org 0xec9ac
	movs r0, #128	@ 000ec9ac 8020
.org 0xec9ae
	lsls r0, r0, #10	@ 000ec9ae 8002
.org 0xec9b0
	ands r1, r0	@ 000ec9b0 0140
.org 0xec9b2
	cmp r1, #0	@ 000ec9b2 0029
.org 0xec9b4
	beq.n 0xec9d8	@ 000ec9b4 10d0
.org 0xec9b6
	cmp r2, #0	@ 000ec9b6 002a
.org 0xec9b8
	beq.n 0xec9d8	@ 000ec9b8 0ed0
.org 0xec9ba
	adds r0, r2, #0	@ 000ec9ba 101c
.org 0xec9bc
	movs r1, #8	@ 000ec9bc 0821
.org 0xec9be
	movs r2, #0	@ 000ec9be 0022
.org 0xec9c0
	bl 0x3a578	@ 000ec9c0 4df7dafd
.org 0xec9c4
	adds r0, r4, #0	@ 000ec9c4 201c
.org 0xec9c6
	adds r0, #182	@ 000ec9c6 b630
.org 0xec9c8
	strb r6, [r0, #0]	@ 000ec9c8 0670
.org 0xec9ca
	adds r1, r4, #0	@ 000ec9ca 211c
.org 0xec9cc
	adds r1, #188	@ 000ec9cc bc31
.org 0xec9ce
	ldr r0, [r5, #0]	@ 000ec9ce 2868
.org 0xec9d0
	str r0, [r1, #0]	@ 000ec9d0 0860
.org 0xec9d2
	adds r1, #4	@ 000ec9d2 0431
.org 0xec9d4
	ldr r0, [r5, #4]	@ 000ec9d4 6868
.org 0xec9d6
	str r0, [r1, #0]	@ 000ec9d6 0860
.org 0xec9d8
	pop {r4, r5, r6}	@ 000ec9d8 70bc
.org 0xec9da
	pop {r0}	@ 000ec9da 01bc
.org 0xec9dc
	bx r0	@ 000ec9dc 0047
