@ FUN_08048d14  entry 0x08048d14  size 134
.thumb
.org 0x48d14
FUN_08048d14:
	push {r4, r5, lr}	@ 00048d14 30b5
.org 0x48d16
	adds r4, r0, #0	@ 00048d16 041c
.org 0x48d18
	lsls r1, r1, #24	@ 00048d18 0906
.org 0x48d1a
	lsrs r5, r1, #24	@ 00048d1a 0d0e
.org 0x48d1c
	ldr r0, [pc, #64]	@ 00048d1c 1048
.org 0x48d1e
	ldr r0, [r0, #0]	@ 00048d1e 0068
.org 0x48d20
	bl 0x5500	@ 00048d20 bcf7eefb
.org 0x48d24
	adds r2, r0, #0	@ 00048d24 021c
.org 0x48d26
	cmp r2, #0	@ 00048d26 002a
.org 0x48d28
	beq.n 0x48da4	@ 00048d28 3cd0
.org 0x48d2a
	adds r0, r4, #0	@ 00048d2a 201c
.org 0x48d2c
	adds r0, #248	@ 00048d2c f830
.org 0x48d2e
	ldrb r0, [r0, #0]	@ 00048d2e 0078
.org 0x48d30
	cmp r0, #2	@ 00048d30 0228
.org 0x48d32
	bne.n 0x48d70	@ 00048d32 1dd1
.org 0x48d34
	ldr r0, [pc, #44]	@ 00048d34 0b48
.org 0x48d36
	movs r1, #33	@ 00048d36 2121
.org 0x48d38
	strb r1, [r2, #9]	@ 00048d38 5172
.org 0x48d3a
	adds r0, #132	@ 00048d3a 8430
.org 0x48d3c
	ldr r0, [r0, #0]	@ 00048d3c 0068
.org 0x48d3e
	ldr r0, [r0, #0]	@ 00048d3e 0068
.org 0x48d40
	str r0, [r2, #20]	@ 00048d40 5061
.org 0x48d42
	ldrb r1, [r2, #11]	@ 00048d42 d17a
.org 0x48d44
	movs r0, #191	@ 00048d44 bf20
.org 0x48d46
	ands r0, r1	@ 00048d46 0840
.org 0x48d48
	strb r0, [r2, #11]	@ 00048d48 d072
.org 0x48d4a
	adds r1, r2, #0	@ 00048d4a 111c
.org 0x48d4c
	adds r1, #37	@ 00048d4c 2531
.org 0x48d4e
	movs r0, #16	@ 00048d4e 1020
.org 0x48d50
	strb r0, [r1, #0]	@ 00048d50 0870
.org 0x48d52
	ldr r0, [pc, #20]	@ 00048d52 0548
.org 0x48d54
	ldrh r0, [r0, #0]	@ 00048d54 0088
.org 0x48d56
	strh r0, [r2, #32]	@ 00048d56 1084
.org 0x48d58
	ldr r0, [pc, #16]	@ 00048d58 0448
.org 0x48d5a
	ldrb r0, [r0, #0]	@ 00048d5a 0078
.org 0x48d5c
	b.n 0x48d98	@ 00048d5c 1ce0
.org 0x48d5e
	.byte 0x00	@ 00048d5e data
.org 0x48d5f
	.byte 0x00	@ 00048d5f data
.org 0x48d60
	.byte 0x88,0xed,0x02,0x02	@ 00048d60 data
.org 0x48d64
	.byte 0xf8,0x39,0x85,0x08	@ 00048d64 data
.org 0x48d68
	.byte 0xfc,0x36,0x85,0x08	@ 00048d68 data
.org 0x48d6c
	.byte 0x04,0x37,0x85,0x08	@ 00048d6c data
.org 0x48d70
	ldr r0, [pc, #56]	@ 00048d70 0e48
.org 0x48d72
	movs r1, #33	@ 00048d72 2121
.org 0x48d74
	strb r1, [r2, #9]	@ 00048d74 5172
.org 0x48d76
	adds r0, #132	@ 00048d76 8430
.org 0x48d78
	ldr r0, [r0, #0]	@ 00048d78 0068
.org 0x48d7a
	ldr r0, [r0, #0]	@ 00048d7a 0068
.org 0x48d7c
	str r0, [r2, #20]	@ 00048d7c 5061
.org 0x48d7e
	ldrb r1, [r2, #11]	@ 00048d7e d17a
.org 0x48d80
	movs r0, #191	@ 00048d80 bf20
.org 0x48d82
	ands r0, r1	@ 00048d82 0840
.org 0x48d84
	strb r0, [r2, #11]	@ 00048d84 d072
.org 0x48d86
	adds r1, r2, #0	@ 00048d86 111c
.org 0x48d88
	adds r1, #37	@ 00048d88 2531
.org 0x48d8a
	movs r0, #16	@ 00048d8a 1020
.org 0x48d8c
	strb r0, [r1, #0]	@ 00048d8c 0870
.org 0x48d8e
	ldr r0, [pc, #32]	@ 00048d8e 0848
.org 0x48d90
	ldrh r0, [r0, #2]	@ 00048d90 4088
.org 0x48d92
	strh r0, [r2, #32]	@ 00048d92 1084
.org 0x48d94
	ldr r0, [pc, #28]	@ 00048d94 0748
.org 0x48d96
	ldrb r0, [r0, #1]	@ 00048d96 4078
.org 0x48d98
	subs r1, #3	@ 00048d98 0339
