@ FUN_08033d14  entry 0x08033d14  size 114
.thumb
.org 0x33d14
FUN_08033d14:
	push {r4, r5, lr}	@ 00033d14 30b5
.org 0x33d16
	adds r4, r0, #0	@ 00033d16 041c
.org 0x33d18
	movs r0, #129	@ 00033d18 8120
.org 0x33d1a
	lsls r0, r0, #1	@ 00033d1a 4000
.org 0x33d1c
	adds r5, r4, r0	@ 00033d1c 2518
.org 0x33d1e
	ldrb r0, [r5, #0]	@ 00033d1e 2878
.org 0x33d20
	cmp r0, #0	@ 00033d20 0028
.org 0x33d22
	bne.n 0x33d30	@ 00033d22 05d1
.org 0x33d24
	movs r1, #144	@ 00033d24 9021
.org 0x33d26
	lsls r1, r1, #5	@ 00033d26 4901
.org 0x33d28
	adds r0, r4, #0	@ 00033d28 201c
.org 0x33d2a
	bl 0x1cf00	@ 00033d2a e9f7e9f8
.org 0x33d2e
	b.n 0x33d56	@ 00033d2e 12e0
.org 0x33d30
	movs r1, #144	@ 00033d30 9021
.org 0x33d32
	lsls r1, r1, #5	@ 00033d32 4901
.org 0x33d34
	adds r0, r4, #0	@ 00033d34 201c
.org 0x33d36
	bl 0x3a3b0	@ 00033d36 06f03bfb
.org 0x33d3a
	ldrb r0, [r5, #0]	@ 00033d3a 2878
.org 0x33d3c
	cmp r0, #1	@ 00033d3c 0128
.org 0x33d3e
	bne.n 0x33d5c	@ 00033d3e 0dd1
.org 0x33d40
	adds r0, r4, #0	@ 00033d40 201c
.org 0x33d42
	adds r0, #114	@ 00033d42 7230
.org 0x33d44
	ldrb r0, [r0, #0]	@ 00033d44 0078
.org 0x33d46
	lsls r0, r0, #24	@ 00033d46 0006
.org 0x33d48
	asrs r0, r0, #24	@ 00033d48 0016
.org 0x33d4a
	cmp r0, #1	@ 00033d4a 0128
.org 0x33d4c
	bgt.n 0x33d5c	@ 00033d4c 06dc
.org 0x33d4e
	adds r0, r4, #0	@ 00033d4e 201c
.org 0x33d50
	movs r1, #15	@ 00033d50 0f21
.org 0x33d52
	bl 0x3c464	@ 00033d52 08f087fb
.org 0x33d56
	ldrb r0, [r5, #0]	@ 00033d56 2878
.org 0x33d58
	adds r0, #1	@ 00033d58 0130
.org 0x33d5a
	strb r0, [r5, #0]	@ 00033d5a 2870
.org 0x33d5c
	adds r0, r4, #0	@ 00033d5c 201c
.org 0x33d5e
	adds r0, #115	@ 00033d5e 7330
.org 0x33d60
	ldrb r0, [r0, #0]	@ 00033d60 0078
.org 0x33d62
	cmp r0, #3	@ 00033d62 0328
.org 0x33d64
	bne.n 0x33d80	@ 00033d64 0cd1
.org 0x33d66
	movs r0, #0	@ 00033d66 0020
.org 0x33d68
	movs r1, #1	@ 00033d68 0121
.org 0x33d6a
	strb r1, [r4, #13]	@ 00033d6a 6173
.org 0x33d6c
	strb r0, [r4, #14]	@ 00033d6c a073
.org 0x33d6e
	movs r1, #5	@ 00033d6e 0521
.org 0x33d70
	strb r1, [r4, #15]	@ 00033d70 e173
.org 0x33d72
	ldr r3, [pc, #20]	@ 00033d72 054b
.org 0x33d74
	adds r2, r4, r3	@ 00033d74 e218
.org 0x33d76
	strb r1, [r2, #0]	@ 00033d76 1170
.org 0x33d78
	movs r2, #129	@ 00033d78 8122
.org 0x33d7a
	lsls r2, r2, #1	@ 00033d7a 5200
.org 0x33d7c
	adds r1, r4, r2	@ 00033d7c a118
.org 0x33d7e
	strb r0, [r1, #0]	@ 00033d7e 0870
.org 0x33d80
	pop {r4, r5}	@ 00033d80 30bc
.org 0x33d82
	pop {r0}	@ 00033d82 01bc
.org 0x33d84
	bx r0	@ 00033d84 0047
