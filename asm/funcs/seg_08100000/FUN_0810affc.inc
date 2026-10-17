@ FUN_0810affc  entry 0x0810affc  size 70
.thumb
.org 0x10affc
FUN_0810affc:
	push {r4, r5, lr}	@ 0010affc 30b5
.org 0x10affe
	adds r4, r0, #0	@ 0010affe 041c
.org 0x10b000
	ldr r5, [r4, #40]	@ 0010b000 a56a
.org 0x10b002
	ldrb r0, [r4, #10]	@ 0010b002 a07a
.org 0x10b004
	movs r1, #1	@ 0010b004 0121
.org 0x10b006
	orrs r1, r0	@ 0010b006 0143
.org 0x10b008
	strb r1, [r4, #10]	@ 0010b008 a172
.org 0x10b00a
	adds r0, r4, #0	@ 0010b00a 201c
.org 0x10b00c
	bl 0x1cff0	@ 0010b00c 11f7f0ff
.org 0x10b010
	ldrb r0, [r5, #1]	@ 0010b010 6878
.org 0x10b012
	cmp r0, #1	@ 0010b012 0128
.org 0x10b014
	bls.n 0x10b03a	@ 0010b014 11d9
.org 0x10b016
	ldrb r0, [r5, #3]	@ 0010b016 e878
.org 0x10b018
	cmp r0, #1	@ 0010b018 0128
.org 0x10b01a
	bls.n 0x10b03a	@ 0010b01a 0ed9
.org 0x10b01c
	ldrb r0, [r4, #17]	@ 0010b01c 607c
.org 0x10b01e
	cmp r0, #0	@ 0010b01e 0028
.org 0x10b020
	bne.n 0x10b030	@ 0010b020 06d1
.org 0x10b022
	ldr r1, [pc, #8]	@ 0010b022 0249
.org 0x10b024
	adds r0, r5, r1	@ 0010b024 6818
.org 0x10b026
	ldrb r0, [r0, #23]	@ 0010b026 c07d
.org 0x10b028
	b.n 0x10b036	@ 0010b028 05e0
.org 0x10b02a
	.byte 0x00	@ 0010b02a data
.org 0x10b02b
	.byte 0x00	@ 0010b02b data
.org 0x10b02c
	.byte 0xcc,0x0d,0x00,0x00	@ 0010b02c data
.org 0x10b030
	ldr r1, [pc, #20]	@ 0010b030 0549
.org 0x10b032
	adds r0, r5, r1	@ 0010b032 6818
.org 0x10b034
	ldrb r0, [r0, #24]	@ 0010b034 007e
.org 0x10b036
	cmp r0, #0	@ 0010b036 0028
.org 0x10b038
	bne.n 0x10b042	@ 0010b038 03d1
.org 0x10b03a
	ldrb r1, [r4, #10]	@ 0010b03a a17a
.org 0x10b03c
	movs r0, #254	@ 0010b03c fe20
.org 0x10b03e
	ands r0, r1	@ 0010b03e 0840
.org 0x10b040
	strb r0, [r4, #10]	@ 0010b040 a072
