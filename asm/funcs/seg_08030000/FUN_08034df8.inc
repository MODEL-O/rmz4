@ FUN_08034df8  entry 0x08034df8  size 82
.thumb
.org 0x34df8
FUN_08034df8:
	push {r4, lr}	@ 00034df8 10b5
.org 0x34dfa
	adds r3, r0, #0	@ 00034dfa 031c
.org 0x34dfc
	adds r4, r3, #0	@ 00034dfc 1c1c
.org 0x34dfe
	adds r4, #180	@ 00034dfe b434
.org 0x34e00
	ldr r0, [pc, #24]	@ 00034e00 0648
.org 0x34e02
	adds r2, r3, r0	@ 00034e02 1a18
.org 0x34e04
	ldrb r1, [r2, #0]	@ 00034e04 1178
.org 0x34e06
	movs r0, #1	@ 00034e06 0120
.org 0x34e08
	ands r0, r1	@ 00034e08 0840
.org 0x34e0a
	cmp r0, #0	@ 00034e0a 0028
.org 0x34e0c
	beq.n 0x34e20	@ 00034e0c 08d0
.org 0x34e0e
	movs r0, #0	@ 00034e0e 0020
.org 0x34e10
	strb r0, [r3, #14]	@ 00034e10 9873
.org 0x34e12
	adds r0, r3, #0	@ 00034e12 181c
.org 0x34e14
	bl 0x33704	@ 00034e14 fef776fc
.org 0x34e18
	b.n 0x34e4a	@ 00034e18 17e0
.org 0x34e1a
	.byte 0x00	@ 00034e1a data
.org 0x34e1b
	.byte 0x00	@ 00034e1b data
.org 0x34e1c
	.byte 0x53,0x01,0x00,0x00	@ 00034e1c data
.org 0x34e20
	movs r0, #8	@ 00034e20 0820
.org 0x34e22
	orrs r1, r0	@ 00034e22 0143
.org 0x34e24
	strb r1, [r2, #0]	@ 00034e24 1170
.org 0x34e26
	ldrb r0, [r4, #12]	@ 00034e26 207b
.org 0x34e28
	cmp r0, #1	@ 00034e28 0128
.org 0x34e2a
	bne.n 0x34e30	@ 00034e2a 01d1
.org 0x34e2c
	movs r0, #16	@ 00034e2c 1020
.org 0x34e2e
	b.n 0x34e32	@ 00034e2e 00e0
.org 0x34e30
	movs r0, #32	@ 00034e30 2020
.org 0x34e32
	orrs r1, r0	@ 00034e32 0143
.org 0x34e34
	strb r1, [r2, #0]	@ 00034e34 1170
.org 0x34e36
	ldr r0, [pc, #24]	@ 00034e36 0648
.org 0x34e38
	ldr r2, [pc, #24]	@ 00034e38 064a
.org 0x34e3a
	adds r1, r3, r2	@ 00034e3a 9918
.org 0x34e3c
	ldrb r1, [r1, #0]	@ 00034e3c 0978
.org 0x34e3e
	lsls r1, r1, #2	@ 00034e3e 8900
.org 0x34e40
	adds r1, r1, r0	@ 00034e40 0918
.org 0x34e42
	ldr r1, [r1, #0]	@ 00034e42 0968
.org 0x34e44
	adds r0, r3, #0	@ 00034e44 181c
.org 0x34e46
	bl 0x128f80	@ 00034e46 f4f09bf8
