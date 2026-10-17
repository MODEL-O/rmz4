@ FUN_080b1a58  entry 0x080b1a58  size 48
.thumb
.org 0xb1a58
FUN_080b1a58:
	push {r4, r5, lr}	@ 000b1a58 30b5
.org 0xb1a5a
	adds r4, r0, #0	@ 000b1a5a 041c
.org 0xb1a5c
	adds r5, r4, #0	@ 000b1a5c 251c
.org 0xb1a5e
	adds r5, #192	@ 000b1a5e c035
.org 0xb1a60
	ldr r0, [r5, #0]	@ 000b1a60 2868
.org 0xb1a62
	bl 0x2b3e4	@ 000b1a62 79f7bffc
.org 0xb1a66
	cmp r0, #0	@ 000b1a66 0028
.org 0xb1a68
	beq.n 0xb1a82	@ 000b1a68 0bd0
.org 0xb1a6a
	adds r0, r4, #0	@ 000b1a6a 201c
.org 0xb1a6c
	adds r0, #116	@ 000b1a6c 7430
.org 0xb1a6e
	ldr r1, [pc, #24]	@ 000b1a6e 0649
.org 0xb1a70
	bl 0x5784	@ 000b1a70 53f788fe
.org 0xb1a74
	movs r1, #0	@ 000b1a74 0021
.org 0xb1a76
	str r1, [r5, #0]	@ 000b1a76 2960
.org 0xb1a78
	movs r0, #1	@ 000b1a78 0120
.org 0xb1a7a
	strb r0, [r4, #13]	@ 000b1a7a 6073
.org 0xb1a7c
	movs r0, #3	@ 000b1a7c 0320
.org 0xb1a7e
	strb r0, [r4, #14]	@ 000b1a7e a073
.org 0xb1a80
	strb r1, [r4, #18]	@ 000b1a80 a174
.org 0xb1a82
	pop {r4, r5}	@ 000b1a82 30bc
.org 0xb1a84
	pop {r0}	@ 000b1a84 01bc
.org 0xb1a86
	bx r0	@ 000b1a86 0047
