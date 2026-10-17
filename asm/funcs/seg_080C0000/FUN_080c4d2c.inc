@ FUN_080c4d2c  entry 0x080c4d2c  size 148
.thumb
.org 0xc4d2c
FUN_080c4d2c:
	push {r4, r5, r6, lr}	@ 000c4d2c 70b5
.org 0xc4d2e
	adds r6, r0, #0	@ 000c4d2e 061c
.org 0xc4d30
	ldr r0, [r6, #40]	@ 000c4d30 b06a
.org 0xc4d32
	ldrb r4, [r0, #10]	@ 000c4d32 847a
.org 0xc4d34
	lsrs r4, r4, #4	@ 000c4d34 2409
.org 0xc4d36
	movs r2, #1	@ 000c4d36 0122
.org 0xc4d38
	ands r4, r2	@ 000c4d38 1440
.org 0xc4d3a
	ldr r1, [pc, #56]	@ 000c4d3a 0e49
.org 0xc4d3c
	ldrb r0, [r6, #9]	@ 000c4d3c 707a
.org 0xc4d3e
	lsls r0, r0, #2	@ 000c4d3e 8000
.org 0xc4d40
	adds r0, r0, r1	@ 000c4d40 4018
.org 0xc4d42
	str r2, [r6, #12]	@ 000c4d42 f260
.org 0xc4d44
	ldr r0, [r0, #0]	@ 000c4d44 0068
.org 0xc4d46
	ldr r0, [r0, #4]	@ 000c4d46 4068
.org 0xc4d48
	str r0, [r6, #20]	@ 000c4d48 7061
.org 0xc4d4a
	ldrb r1, [r6, #10]	@ 000c4d4a b17a
.org 0xc4d4c
	movs r0, #1	@ 000c4d4c 0120
.org 0xc4d4e
	movs r5, #0	@ 000c4d4e 0025
.org 0xc4d50
	movs r2, #0	@ 000c4d50 0022
.org 0xc4d52
	orrs r0, r1	@ 000c4d52 0843
.org 0xc4d54
	movs r1, #2	@ 000c4d54 0221
.org 0xc4d56
	orrs r0, r1	@ 000c4d56 0843
.org 0xc4d58
	strb r0, [r6, #10]	@ 000c4d58 b072
.org 0xc4d5a
	adds r0, r6, #0	@ 000c4d5a 301c
.org 0xc4d5c
	adds r0, #184	@ 000c4d5c b830
.org 0xc4d5e
	strb r2, [r0, #0]	@ 000c4d5e 0270
.org 0xc4d60
	adds r0, r6, #0	@ 000c4d60 301c
.org 0xc4d62
	bl 0x1cc9c	@ 000c4d62 57f79bff
.org 0xc4d66
	cmp r4, #0	@ 000c4d66 002c
.org 0xc4d68
	beq.n 0xc4d78	@ 000c4d68 06d0
.org 0xc4d6a
	ldrb r0, [r6, #10]	@ 000c4d6a b07a
.org 0xc4d6c
	movs r1, #16	@ 000c4d6c 1021
.org 0xc4d6e
	orrs r0, r1	@ 000c4d6e 0843
.org 0xc4d70
	b.n 0xc4d7e	@ 000c4d70 05e0
.org 0xc4d72
	.byte 0x00	@ 000c4d72 data
.org 0xc4d73
	.byte 0x00	@ 000c4d73 data
.org 0xc4d74
	.byte 0xf4,0x49,0x86,0x08	@ 000c4d74 data
.org 0xc4d78
	ldrb r1, [r6, #10]	@ 000c4d78 b17a
.org 0xc4d7a
	movs r0, #239	@ 000c4d7a ef20
.org 0xc4d7c
	ands r0, r1	@ 000c4d7c 0840
.org 0xc4d7e
	strb r0, [r6, #10]	@ 000c4d7e b072
.org 0xc4d80
	adds r1, r4, #0	@ 000c4d80 211c
.org 0xc4d82
	adds r0, r6, #0	@ 000c4d82 301c
.org 0xc4d84
	adds r0, #76	@ 000c4d84 4c30
.org 0xc4d86
	movs r5, #0	@ 000c4d86 0025
.org 0xc4d88
	strb r1, [r0, #0]	@ 000c4d88 0170
.org 0xc4d8a
	adds r3, r6, #0	@ 000c4d8a 331c
.org 0xc4d8c
	adds r3, #74	@ 000c4d8c 4a33
.org 0xc4d8e
	lsls r1, r1, #4	@ 000c4d8e 0901
.org 0xc4d90
	ldrb r2, [r3, #0]	@ 000c4d90 1a78
.org 0xc4d92
	movs r0, #17	@ 000c4d92 1120
.org 0xc4d94
	negs r0, r0	@ 000c4d94 4042
.org 0xc4d96
	ands r0, r2	@ 000c4d96 1040
.org 0xc4d98
	orrs r0, r1	@ 000c4d98 0843
.org 0xc4d9a
	strb r0, [r3, #0]	@ 000c4d9a 1870
.org 0xc4d9c
	ldrb r1, [r6, #10]	@ 000c4d9c b17a
.org 0xc4d9e
	movs r0, #4	@ 000c4d9e 0420
.org 0xc4da0
	orrs r0, r1	@ 000c4da0 0843
.org 0xc4da2
	strb r0, [r6, #10]	@ 000c4da2 b072
.org 0xc4da4
	adds r4, r6, #0	@ 000c4da4 341c
.org 0xc4da6
	adds r4, #116	@ 000c4da6 7434
.org 0xc4da8
	ldr r1, [pc, #28]	@ 000c4da8 0749
.org 0xc4daa
	adds r2, r6, #0	@ 000c4daa 321c
.org 0xc4dac
	adds r2, #84	@ 000c4dac 5432
.org 0xc4dae
	adds r0, r4, #0	@ 000c4dae 201c
.org 0xc4db0
	movs r3, #64	@ 000c4db0 4023
.org 0xc4db2
	bl 0x5760	@ 000c4db2 40f7d5fc
.org 0xc4db6
	str r6, [r4, #44]	@ 000c4db6 e662
.org 0xc4db8
	str r5, [r4, #36]	@ 000c4db8 6562
.org 0xc4dba
	adds r0, r6, #0	@ 000c4dba 301c
.org 0xc4dbc
	bl 0xc4eac	@ 000c4dbc 00f076f8
