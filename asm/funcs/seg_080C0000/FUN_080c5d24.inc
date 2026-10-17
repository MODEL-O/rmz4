@ FUN_080c5d24  entry 0x080c5d24  size 72
.thumb
.org 0xc5d24
FUN_080c5d24:
	push {r4, lr}	@ 000c5d24 10b5
.org 0xc5d26
	adds r4, r0, #0	@ 000c5d26 041c
.org 0xc5d28
	ldrb r0, [r4, #15]	@ 000c5d28 e07b
.org 0xc5d2a
	cmp r0, #0	@ 000c5d2a 0028
.org 0xc5d2c
	bne.n 0xc5d4a	@ 000c5d2c 0dd1
.org 0xc5d2e
	adds r0, r4, #0	@ 000c5d2e 201c
.org 0xc5d30
	adds r0, #116	@ 000c5d30 7430
.org 0xc5d32
	ldr r1, [pc, #56]	@ 000c5d32 0e49
.org 0xc5d34
	bl 0x5784	@ 000c5d34 3ff726fd
.org 0xc5d38
	ldrb r1, [r4, #10]	@ 000c5d38 a17a
.org 0xc5d3a
	movs r0, #1	@ 000c5d3a 0120
.org 0xc5d3c
	orrs r0, r1	@ 000c5d3c 0843
.org 0xc5d3e
	strb r0, [r4, #10]	@ 000c5d3e a072
.org 0xc5d40
	movs r0, #32	@ 000c5d40 2020
.org 0xc5d42
	strb r0, [r4, #18]	@ 000c5d42 a074
.org 0xc5d44
	ldrb r0, [r4, #15]	@ 000c5d44 e07b
.org 0xc5d46
	adds r0, #1	@ 000c5d46 0130
.org 0xc5d48
	strb r0, [r4, #15]	@ 000c5d48 e073
.org 0xc5d4a
	adds r0, r4, #0	@ 000c5d4a 201c
.org 0xc5d4c
	bl 0x1cff0	@ 000c5d4c 57f750f9
.org 0xc5d50
	ldrb r0, [r4, #18]	@ 000c5d50 a07c
.org 0xc5d52
	subs r0, #1	@ 000c5d52 0138
.org 0xc5d54
	strb r0, [r4, #18]	@ 000c5d54 a074
.org 0xc5d56
	lsls r0, r0, #24	@ 000c5d56 0006
.org 0xc5d58
	lsrs r1, r0, #24	@ 000c5d58 010e
.org 0xc5d5a
	cmp r1, #0	@ 000c5d5a 0029
.org 0xc5d5c
	bne.n 0xc5d66	@ 000c5d5c 03d1
.org 0xc5d5e
	movs r0, #2	@ 000c5d5e 0220
.org 0xc5d60
	strb r0, [r4, #13]	@ 000c5d60 6073
.org 0xc5d62
	strb r1, [r4, #14]	@ 000c5d62 a173
.org 0xc5d64
	strb r1, [r4, #15]	@ 000c5d64 e173
.org 0xc5d66
	pop {r4}	@ 000c5d66 10bc
.org 0xc5d68
	pop {r0}	@ 000c5d68 01bc
.org 0xc5d6a
	bx r0	@ 000c5d6a 0047
