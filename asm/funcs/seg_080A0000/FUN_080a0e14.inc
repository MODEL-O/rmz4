@ FUN_080a0e14  entry 0x080a0e14  size 72
.thumb
.org 0xa0e14
FUN_080a0e14:
	push {lr}	@ 000a0e14 00b5
.org 0xa0e16
	adds r2, r0, #0	@ 000a0e16 021c
.org 0xa0e18
	adds r0, #140	@ 000a0e18 8c30
.org 0xa0e1a
	ldr r0, [r0, #0]	@ 000a0e1a 0068
.org 0xa0e1c
	movs r1, #128	@ 000a0e1c 8021
.org 0xa0e1e
	lsls r1, r1, #2	@ 000a0e1e 8900
.org 0xa0e20
	ands r0, r1	@ 000a0e20 0840
.org 0xa0e22
	cmp r0, #0	@ 000a0e22 0028
.org 0xa0e24
	beq.n 0xa0e4c	@ 000a0e24 12d0
.org 0xa0e26
	ldr r1, [pc, #32]	@ 000a0e26 0849
.org 0xa0e28
	ldrb r0, [r2, #9]	@ 000a0e28 507a
.org 0xa0e2a
	lsls r0, r0, #2	@ 000a0e2a 8000
.org 0xa0e2c
	adds r0, r0, r1	@ 000a0e2c 4018
.org 0xa0e2e
	movs r1, #2	@ 000a0e2e 0221
.org 0xa0e30
	str r1, [r2, #12]	@ 000a0e30 d160
.org 0xa0e32
	ldr r0, [r0, #0]	@ 000a0e32 0068
.org 0xa0e34
	ldr r0, [r0, #8]	@ 000a0e34 8068
.org 0xa0e36
	str r0, [r2, #20]	@ 000a0e36 5061
.org 0xa0e38
	movs r0, #0	@ 000a0e38 0020
.org 0xa0e3a
	strb r0, [r2, #13]	@ 000a0e3a 5073
.org 0xa0e3c
	strb r0, [r2, #14]	@ 000a0e3c 9073
.org 0xa0e3e
	strb r0, [r2, #15]	@ 000a0e3e d073
.org 0xa0e40
	adds r0, r2, #0	@ 000a0e40 101c
.org 0xa0e42
	bl 0xa0f14	@ 000a0e42 00f067f8
.org 0xa0e46
	b.n 0xa0e5c	@ 000a0e46 09e0
.org 0xa0e48
	.byte 0x40,0xdb,0x85,0x08	@ 000a0e48 data
.org 0xa0e4c
	ldr r0, [pc, #16]	@ 000a0e4c 0448
.org 0xa0e4e
	ldrb r1, [r2, #13]	@ 000a0e4e 517b
.org 0xa0e50
	lsls r1, r1, #2	@ 000a0e50 8900
.org 0xa0e52
	adds r1, r1, r0	@ 000a0e52 0918
.org 0xa0e54
	ldr r1, [r1, #0]	@ 000a0e54 0968
.org 0xa0e56
	adds r0, r2, #0	@ 000a0e56 101c
.org 0xa0e58
	bl 0x128f80	@ 000a0e58 88f092f8
