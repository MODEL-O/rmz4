@ FUN_080b9a44  entry 0x080b9a44  size 90
.thumb
.org 0xb9a44
FUN_080b9a44:
	push {r4, r5, lr}	@ 000b9a44 30b5
.org 0xb9a46
	adds r2, r0, #0	@ 000b9a46 021c
.org 0xb9a48
	adds r4, r1, #0	@ 000b9a48 0c1c
.org 0xb9a4a
	ldrb r0, [r2, #13]	@ 000b9a4a 507b
.org 0xb9a4c
	cmp r0, #3	@ 000b9a4c 0328
.org 0xb9a4e
	beq.n 0xb9a98	@ 000b9a4e 23d0
.org 0xb9a50
	adds r0, r2, #0	@ 000b9a50 101c
.org 0xb9a52
	adds r0, #183	@ 000b9a52 b730
.org 0xb9a54
	ldrb r1, [r0, #0]	@ 000b9a54 0178
.org 0xb9a56
	adds r3, r0, #0	@ 000b9a56 031c
.org 0xb9a58
	cmp r1, #0	@ 000b9a58 0029
.org 0xb9a5a
	bne.n 0xb9a8e	@ 000b9a5a 18d1
.org 0xb9a5c
	subs r0, #3	@ 000b9a5c 0338
.org 0xb9a5e
	ldrb r0, [r0, #0]	@ 000b9a5e 0078
.org 0xb9a60
	cmp r0, #0	@ 000b9a60 0028
.org 0xb9a62
	bne.n 0xb9a74	@ 000b9a62 07d1
.org 0xb9a64
	adds r1, r2, #0	@ 000b9a64 111c
.org 0xb9a66
	adds r1, #192	@ 000b9a66 c031
.org 0xb9a68
	adds r0, r2, #0	@ 000b9a68 101c
.org 0xb9a6a
	adds r0, #184	@ 000b9a6a b830
.org 0xb9a6c
	ldr r0, [r0, #0]	@ 000b9a6c 0068
.org 0xb9a6e
	movs r5, #176	@ 000b9a6e b025
.org 0xb9a70
	lsls r5, r5, #5	@ 000b9a70 6d01
.org 0xb9a72
	b.n 0xb9a80	@ 000b9a72 05e0
.org 0xb9a74
	adds r1, r2, #0	@ 000b9a74 111c
.org 0xb9a76
	adds r1, #192	@ 000b9a76 c031
.org 0xb9a78
	adds r0, r2, #0	@ 000b9a78 101c
.org 0xb9a7a
	adds r0, #184	@ 000b9a7a b830
.org 0xb9a7c
	ldr r0, [r0, #0]	@ 000b9a7c 0068
.org 0xb9a7e
	ldr r5, [pc, #32]	@ 000b9a7e 084d
.org 0xb9a80
	adds r0, r0, r5	@ 000b9a80 4019
.org 0xb9a82
	str r0, [r1, #0]	@ 000b9a82 0860
.org 0xb9a84
	movs r1, #0	@ 000b9a84 0021
.org 0xb9a86
	movs r0, #1	@ 000b9a86 0120
.org 0xb9a88
	strb r0, [r3, #0]	@ 000b9a88 1870
.org 0xb9a8a
	strb r0, [r2, #13]	@ 000b9a8a 5073
.org 0xb9a8c
	strb r1, [r2, #14]	@ 000b9a8c 9173
.org 0xb9a8e
	adds r1, r2, #0	@ 000b9a8e 111c
.org 0xb9a90
	adds r1, #182	@ 000b9a90 b631
.org 0xb9a92
	movs r0, #1	@ 000b9a92 0120
.org 0xb9a94
	strb r0, [r1, #0]	@ 000b9a94 0870
.org 0xb9a96
	str r4, [r2, #40]	@ 000b9a96 9462
.org 0xb9a98
	pop {r4, r5}	@ 000b9a98 30bc
.org 0xb9a9a
	pop {r0}	@ 000b9a9a 01bc
.org 0xb9a9c
	bx r0	@ 000b9a9c 0047
