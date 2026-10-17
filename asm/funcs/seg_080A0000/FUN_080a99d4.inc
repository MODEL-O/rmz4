@ FUN_080a99d4  entry 0x080a99d4  size 146
.thumb
.org 0xa99d4
FUN_080a99d4:
	push {r4, r5, r6, lr}	@ 000a99d4 70b5
.org 0xa99d6
	adds r6, r0, #0	@ 000a99d6 061c
.org 0xa99d8
	ldr r0, [r6, #12]	@ 000a99d8 f068
.org 0xa99da
	ldr r5, [r0, #44]	@ 000a99da c56a
.org 0xa99dc
	ldr r4, [r6, #44]	@ 000a99dc f46a
.org 0xa99de
	ldr r0, [r6, #20]	@ 000a99de 7069
.org 0xa99e0
	movs r1, #1	@ 000a99e0 0121
.org 0xa99e2
	ands r0, r1	@ 000a99e2 0840
.org 0xa99e4
	cmp r0, #0	@ 000a99e4 0028
.org 0xa99e6
	beq.n 0xa9a60	@ 000a99e6 3bd0
.org 0xa99e8
	adds r0, r4, #0	@ 000a99e8 201c
.org 0xa99ea
	adds r0, #182	@ 000a99ea b630
.org 0xa99ec
	strb r1, [r0, #0]	@ 000a99ec 0170
.org 0xa99ee
	ldrb r0, [r4, #16]	@ 000a99ee 207c
.org 0xa99f0
	cmp r0, #0	@ 000a99f0 0028
.org 0xa99f2
	bne.n 0xa99fc	@ 000a99f2 03d1
.org 0xa99f4
	movs r0, #44	@ 000a99f4 2c20
.org 0xa99f6
	bl 0x6984	@ 000a99f6 5cf7c5ff
.org 0xa99fa
	b.n 0xa9a02	@ 000a99fa 02e0
.org 0xa99fc
	movs r0, #45	@ 000a99fc 2d20
.org 0xa99fe
	bl 0x6984	@ 000a99fe 5cf7c1ff
.org 0xa9a02
	movs r2, #8	@ 000a9a02 0822
.org 0xa9a04
	ldrsb r2, [r5, r2]	@ 000a9a04 aa56
.org 0xa9a06
	cmp r2, #1	@ 000a9a06 012a
.org 0xa9a08
	bne.n 0xa9a2a	@ 000a9a08 0fd1
.org 0xa9a0a
	ldrb r0, [r5, #9]	@ 000a9a0a 687a
.org 0xa9a0c
	cmp r0, #29	@ 000a9a0c 1d28
.org 0xa9a0e
	bne.n 0xa9a18	@ 000a9a0e 03d1
.org 0xa9a10
	adds r1, r4, #0	@ 000a9a10 211c
.org 0xa9a12
	adds r1, #183	@ 000a9a12 b731
.org 0xa9a14
	movs r0, #2	@ 000a9a14 0220
.org 0xa9a16
	strb r0, [r1, #0]	@ 000a9a16 0870
.org 0xa9a18
	ldrb r0, [r5, #9]	@ 000a9a18 687a
.org 0xa9a1a
	cmp r0, #30	@ 000a9a1a 1e28
.org 0xa9a1c
	bne.n 0xa9a24	@ 000a9a1c 02d1
.org 0xa9a1e
	adds r0, r4, #0	@ 000a9a1e 201c
.org 0xa9a20
	adds r0, #183	@ 000a9a20 b730
.org 0xa9a22
	strb r2, [r0, #0]	@ 000a9a22 0270
.org 0xa9a24
	adds r0, r4, #0	@ 000a9a24 201c
.org 0xa9a26
	bl 0xa9c6c	@ 000a9a26 00f021f9
.org 0xa9a2a
	ldr r1, [r6, #20]	@ 000a9a2a 7169
.org 0xa9a2c
	movs r0, #128	@ 000a9a2c 8020
.org 0xa9a2e
	lsls r0, r0, #2	@ 000a9a2e 8000
.org 0xa9a30
	ands r0, r1	@ 000a9a30 0840
.org 0xa9a32
	cmp r0, #0	@ 000a9a32 0028
.org 0xa9a34
	beq.n 0xa9a60	@ 000a9a34 14d0
.org 0xa9a36
	movs r0, #128	@ 000a9a36 8020
.org 0xa9a38
	lsls r0, r0, #10	@ 000a9a38 8002
.org 0xa9a3a
	ands r1, r0	@ 000a9a3a 0140
.org 0xa9a3c
	cmp r1, #0	@ 000a9a3c 0029
.org 0xa9a3e
	beq.n 0xa9a60	@ 000a9a3e 0fd0
.org 0xa9a40
	adds r0, r4, #0	@ 000a9a40 201c
.org 0xa9a42
	adds r0, #180	@ 000a9a42 b430
.org 0xa9a44
	movs r1, #1	@ 000a9a44 0121
.org 0xa9a46
	strb r1, [r0, #0]	@ 000a9a46 0170
.org 0xa9a48
	ldr r0, [pc, #28]	@ 000a9a48 0748
.org 0xa9a4a
	ldr r3, [r0, #0]	@ 000a9a4a 0368
.org 0xa9a4c
	cmp r3, #0	@ 000a9a4c 002b
.org 0xa9a4e
	beq.n 0xa9a60	@ 000a9a4e 07d0
.org 0xa9a50
	ldr r0, [pc, #24]	@ 000a9a50 0648
.org 0xa9a52
	ldrb r1, [r4, #16]	@ 000a9a52 217c
.org 0xa9a54
	adds r1, r1, r0	@ 000a9a54 0918
.org 0xa9a56
	ldrb r2, [r1, #0]	@ 000a9a56 0a78
.org 0xa9a58
	adds r0, r3, #0	@ 000a9a58 181c
.org 0xa9a5a
	movs r1, #6	@ 000a9a5a 0621
.org 0xa9a5c
	bl 0x3a578	@ 000a9a5c 90f78cfd
.org 0xa9a60
	pop {r4, r5, r6}	@ 000a9a60 70bc
.org 0xa9a62
	pop {r0}	@ 000a9a62 01bc
.org 0xa9a64
	bx r0	@ 000a9a64 0047
