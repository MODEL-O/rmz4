@ FUN_080b5d20  entry 0x080b5d20  size 150
.thumb
.org 0xb5d20
FUN_080b5d20:
	push {r4, r5, r6, lr}	@ 000b5d20 70b5
.org 0xb5d22
	adds r6, r0, #0	@ 000b5d22 061c
.org 0xb5d24
	ldrb r4, [r6, #17]	@ 000b5d24 747c
.org 0xb5d26
	ldr r1, [pc, #64]	@ 000b5d26 1049
.org 0xb5d28
	ldrb r0, [r6, #9]	@ 000b5d28 707a
.org 0xb5d2a
	lsls r0, r0, #2	@ 000b5d2a 8000
.org 0xb5d2c
	adds r0, r0, r1	@ 000b5d2c 4018
.org 0xb5d2e
	movs r1, #1	@ 000b5d2e 0121
.org 0xb5d30
	str r1, [r6, #12]	@ 000b5d30 f160
.org 0xb5d32
	ldr r0, [r0, #0]	@ 000b5d32 0068
.org 0xb5d34
	ldr r0, [r0, #4]	@ 000b5d34 4068
.org 0xb5d36
	str r0, [r6, #20]	@ 000b5d36 7061
.org 0xb5d38
	movs r0, #0	@ 000b5d38 0020
.org 0xb5d3a
	strb r0, [r6, #13]	@ 000b5d3a 7073
.org 0xb5d3c
	strb r0, [r6, #14]	@ 000b5d3c b073
.org 0xb5d3e
	strb r0, [r6, #15]	@ 000b5d3e f073
.org 0xb5d40
	ldrb r0, [r6, #10]	@ 000b5d40 b07a
.org 0xb5d42
	movs r5, #0	@ 000b5d42 0025
.org 0xb5d44
	orrs r0, r1	@ 000b5d44 0843
.org 0xb5d46
	movs r1, #2	@ 000b5d46 0221
.org 0xb5d48
	orrs r0, r1	@ 000b5d48 0843
.org 0xb5d4a
	strb r0, [r6, #10]	@ 000b5d4a b072
.org 0xb5d4c
	adds r0, r6, #0	@ 000b5d4c 301c
.org 0xb5d4e
	bl 0x1cc9c	@ 000b5d4e 66f7a5ff
.org 0xb5d52
	adds r1, r6, #0	@ 000b5d52 311c
.org 0xb5d54
	adds r1, #37	@ 000b5d54 2531
.org 0xb5d56
	movs r0, #8	@ 000b5d56 0820
.org 0xb5d58
	strb r0, [r1, #0]	@ 000b5d58 0870
.org 0xb5d5a
	cmp r4, #0	@ 000b5d5a 002c
.org 0xb5d5c
	beq.n 0xb5d6c	@ 000b5d5c 06d0
.org 0xb5d5e
	ldrb r0, [r6, #10]	@ 000b5d5e b07a
.org 0xb5d60
	movs r1, #16	@ 000b5d60 1021
.org 0xb5d62
	orrs r0, r1	@ 000b5d62 0843
.org 0xb5d64
	b.n 0xb5d72	@ 000b5d64 05e0
.org 0xb5d66
	.byte 0x00	@ 000b5d66 data
.org 0xb5d67
	.byte 0x00	@ 000b5d67 data
.org 0xb5d68
	.byte 0x40,0xdb,0x85,0x08	@ 000b5d68 data
.org 0xb5d6c
	ldrb r1, [r6, #10]	@ 000b5d6c b17a
.org 0xb5d6e
	movs r0, #239	@ 000b5d6e ef20
.org 0xb5d70
	ands r0, r1	@ 000b5d70 0840
.org 0xb5d72
	strb r0, [r6, #10]	@ 000b5d72 b072
.org 0xb5d74
	movs r1, #1	@ 000b5d74 0121
.org 0xb5d76
	ands r1, r4	@ 000b5d76 2140
.org 0xb5d78
	adds r0, r6, #0	@ 000b5d78 301c
.org 0xb5d7a
	adds r0, #76	@ 000b5d7a 4c30
.org 0xb5d7c
	movs r5, #0	@ 000b5d7c 0025
.org 0xb5d7e
	strb r1, [r0, #0]	@ 000b5d7e 0170
.org 0xb5d80
	adds r3, r6, #0	@ 000b5d80 331c
.org 0xb5d82
	adds r3, #74	@ 000b5d82 4a33
.org 0xb5d84
	lsls r1, r1, #4	@ 000b5d84 0901
.org 0xb5d86
	ldrb r2, [r3, #0]	@ 000b5d86 1a78
.org 0xb5d88
	movs r0, #17	@ 000b5d88 1120
.org 0xb5d8a
	negs r0, r0	@ 000b5d8a 4042
.org 0xb5d8c
	ands r0, r2	@ 000b5d8c 1040
.org 0xb5d8e
	orrs r0, r1	@ 000b5d8e 0843
.org 0xb5d90
	strb r0, [r3, #0]	@ 000b5d90 1870
.org 0xb5d92
	ldrb r1, [r6, #10]	@ 000b5d92 b17a
.org 0xb5d94
	movs r0, #4	@ 000b5d94 0420
.org 0xb5d96
	orrs r0, r1	@ 000b5d96 0843
.org 0xb5d98
	strb r0, [r6, #10]	@ 000b5d98 b072
.org 0xb5d9a
	adds r4, r6, #0	@ 000b5d9a 341c
.org 0xb5d9c
	adds r4, #116	@ 000b5d9c 7434
.org 0xb5d9e
	ldr r1, [pc, #28]	@ 000b5d9e 0749
.org 0xb5da0
	adds r2, r6, #0	@ 000b5da0 321c
.org 0xb5da2
	adds r2, #84	@ 000b5da2 5432
.org 0xb5da4
	adds r0, r4, #0	@ 000b5da4 201c
.org 0xb5da6
	movs r3, #16	@ 000b5da6 1023
.org 0xb5da8
	bl 0x5760	@ 000b5da8 4ff7dafc
.org 0xb5dac
	str r6, [r4, #44]	@ 000b5dac e662
.org 0xb5dae
	str r5, [r4, #36]	@ 000b5dae 6562
.org 0xb5db0
	adds r0, r6, #0	@ 000b5db0 301c
.org 0xb5db2
	bl 0xb5dc0	@ 000b5db2 00f005f8
