@ FUN_080a6df8  entry 0x080a6df8  size 134
.thumb
.org 0xa6df8
FUN_080a6df8:
	push {r4, r5, lr}	@ 000a6df8 30b5
.org 0xa6dfa
	sub sp, #8	@ 000a6dfa 82b0
.org 0xa6dfc
	adds r4, r0, #0	@ 000a6dfc 041c
.org 0xa6dfe
	ldrb r0, [r4, #16]	@ 000a6dfe 207c
.org 0xa6e00
	cmp r0, #1	@ 000a6e00 0128
.org 0xa6e02
	bne.n 0xa6e0c	@ 000a6e02 03d1
.org 0xa6e04
	adds r0, r4, #0	@ 000a6e04 201c
.org 0xa6e06
	bl 0xa6e88	@ 000a6e06 00f03ff8
.org 0xa6e0a
	b.n 0xa6e7a	@ 000a6e0a 36e0
.org 0xa6e0c
	ldrb r0, [r4, #14]	@ 000a6e0c a07b
.org 0xa6e0e
	cmp r0, #0	@ 000a6e0e 0028
.org 0xa6e10
	bne.n 0xa6e6a	@ 000a6e10 2bd1
.org 0xa6e12
	adds r1, r4, #0	@ 000a6e12 211c
.org 0xa6e14
	adds r1, #140	@ 000a6e14 8c31
.org 0xa6e16
	ldr r2, [r1, #0]	@ 000a6e16 0a68
.org 0xa6e18
	movs r0, #128	@ 000a6e18 8020
.org 0xa6e1a
	lsls r0, r0, #9	@ 000a6e1a 4002
.org 0xa6e1c
	ands r2, r0	@ 000a6e1c 0240
.org 0xa6e1e
	adds r5, r1, #0	@ 000a6e1e 0d1c
.org 0xa6e20
	cmp r2, #0	@ 000a6e20 002a
.org 0xa6e22
	beq.n 0xa6e4c	@ 000a6e22 13d0
.org 0xa6e24
	ldr r0, [r4, #84]	@ 000a6e24 606d
.org 0xa6e26
	str r0, [sp, #0]	@ 000a6e26 0090
.org 0xa6e28
	ldr r0, [r4, #88]	@ 000a6e28 a06d
.org 0xa6e2a
	ldr r1, [pc, #28]	@ 000a6e2a 0749
.org 0xa6e2c
	adds r0, r0, r1	@ 000a6e2c 4018
.org 0xa6e2e
	str r0, [sp, #4]	@ 000a6e2e 0190
.org 0xa6e30
	movs r2, #128	@ 000a6e30 8022
.org 0xa6e32
	lsls r2, r2, #2	@ 000a6e32 9200
.org 0xa6e34
	adds r0, r4, #0	@ 000a6e34 201c
.org 0xa6e36
	adds r0, #188	@ 000a6e36 bc30
.org 0xa6e38
	ldrb r3, [r0, #0]	@ 000a6e38 0378
.org 0xa6e3a
	movs r0, #0	@ 000a6e3a 0020
.org 0xa6e3c
	mov r1, sp	@ 000a6e3c 6946
.org 0xa6e3e
	bl 0xd0dc4	@ 000a6e3e 29f0c1ff
.org 0xa6e42
	movs r0, #1	@ 000a6e42 0120
.org 0xa6e44
	strb r0, [r4, #13]	@ 000a6e44 6073
.org 0xa6e46
	b.n 0xa6e4e	@ 000a6e46 02e0
.org 0xa6e48
	.byte 0x00,0xf2,0xff,0xff	@ 000a6e48 data
.org 0xa6e4c
	strb r2, [r4, #13]	@ 000a6e4c 6273
.org 0xa6e4e
	movs r1, #0	@ 000a6e4e 0021
.org 0xa6e50
	str r1, [r5, #0]	@ 000a6e50 2960
.org 0xa6e52
	adds r0, r4, #0	@ 000a6e52 201c
.org 0xa6e54
	adds r0, #144	@ 000a6e54 9030
.org 0xa6e56
	str r1, [r0, #0]	@ 000a6e56 0160
.org 0xa6e58
	adds r0, #4	@ 000a6e58 0430
.org 0xa6e5a
	strb r1, [r0, #0]	@ 000a6e5a 0170
.org 0xa6e5c
	ldrb r1, [r4, #10]	@ 000a6e5c a17a
.org 0xa6e5e
	movs r0, #251	@ 000a6e5e fb20
.org 0xa6e60
	ands r0, r1	@ 000a6e60 0840
.org 0xa6e62
	strb r0, [r4, #10]	@ 000a6e62 a072
.org 0xa6e64
	ldrb r0, [r4, #14]	@ 000a6e64 a07b
.org 0xa6e66
	adds r0, #1	@ 000a6e66 0130
.org 0xa6e68
	strb r0, [r4, #14]	@ 000a6e68 a073
.org 0xa6e6a
	ldr r0, [pc, #24]	@ 000a6e6a 0648
.org 0xa6e6c
	ldrb r1, [r4, #13]	@ 000a6e6c 617b
.org 0xa6e6e
	lsls r1, r1, #2	@ 000a6e6e 8900
.org 0xa6e70
	adds r1, r1, r0	@ 000a6e70 0918
.org 0xa6e72
	ldr r1, [r1, #0]	@ 000a6e72 0968
.org 0xa6e74
	adds r0, r4, #0	@ 000a6e74 201c
.org 0xa6e76
	bl 0x128f80	@ 000a6e76 82f083f8
.org 0xa6e7a
	add sp, #8	@ 000a6e7a 02b0
.org 0xa6e7c
	pop {r4, r5}	@ 000a6e7c 30bc
