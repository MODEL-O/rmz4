@ FUN_080b7df4  entry 0x080b7df4  size 70
.thumb
.org 0xb7df4
FUN_080b7df4:
	push {lr}	@ 000b7df4 00b5
.org 0xb7df6
	adds r2, r0, #0	@ 000b7df6 021c
.org 0xb7df8
	ldr r3, [r2, #40]	@ 000b7df8 936a
.org 0xb7dfa
	ldrb r0, [r3, #12]	@ 000b7dfa 187b
.org 0xb7dfc
	cmp r0, #1	@ 000b7dfc 0128
.org 0xb7dfe
	bls.n 0xb7e2c	@ 000b7dfe 15d9
.org 0xb7e00
	ldrb r1, [r2, #11]	@ 000b7e00 d17a
.org 0xb7e02
	movs r0, #16	@ 000b7e02 1020
.org 0xb7e04
	orrs r0, r1	@ 000b7e04 0843
.org 0xb7e06
	strb r0, [r2, #11]	@ 000b7e06 d072
.org 0xb7e08
	ldrb r0, [r3, #28]	@ 000b7e08 187f
.org 0xb7e0a
	strb r0, [r2, #29]	@ 000b7e0a 5077
.org 0xb7e0c
	ldr r1, [pc, #24]	@ 000b7e0c 0649
.org 0xb7e0e
	ldrb r0, [r2, #9]	@ 000b7e0e 507a
.org 0xb7e10
	lsls r0, r0, #2	@ 000b7e10 8000
.org 0xb7e12
	adds r0, r0, r1	@ 000b7e12 4018
.org 0xb7e14
	movs r1, #2	@ 000b7e14 0221
.org 0xb7e16
	str r1, [r2, #12]	@ 000b7e16 d160
.org 0xb7e18
	ldr r0, [r0, #0]	@ 000b7e18 0068
.org 0xb7e1a
	ldr r0, [r0, #8]	@ 000b7e1a 8068
.org 0xb7e1c
	str r0, [r2, #20]	@ 000b7e1c 5061
.org 0xb7e1e
	adds r0, r2, #0	@ 000b7e1e 101c
.org 0xb7e20
	bl 0xb7e44	@ 000b7e20 00f010f8
.org 0xb7e24
	b.n 0xb7e3c	@ 000b7e24 0ae0
.org 0xb7e26
	.byte 0x00	@ 000b7e26 data
.org 0xb7e27
	.byte 0x00	@ 000b7e27 data
.org 0xb7e28
	.byte 0x40,0xdb,0x85,0x08	@ 000b7e28 data
.org 0xb7e2c
	ldr r0, [pc, #16]	@ 000b7e2c 0448
.org 0xb7e2e
	ldrb r1, [r2, #13]	@ 000b7e2e 517b
.org 0xb7e30
	lsls r1, r1, #2	@ 000b7e30 8900
.org 0xb7e32
	adds r1, r1, r0	@ 000b7e32 0918
.org 0xb7e34
	ldr r1, [r1, #0]	@ 000b7e34 0968
.org 0xb7e36
	adds r0, r2, #0	@ 000b7e36 101c
.org 0xb7e38
	bl 0x128f80	@ 000b7e38 71f0a2f8
