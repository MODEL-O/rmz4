@ FUN_08101cf8  entry 0x08101cf8  size 84
.thumb
.org 0x101cf8
FUN_08101cf8:
	push {r4, r5, lr}	@ 00101cf8 30b5
.org 0x101cfa
	adds r5, r0, #0	@ 00101cfa 051c
.org 0x101cfc
	ldr r0, [pc, #76]	@ 00101cfc 1348
.org 0x101cfe
	ldr r0, [r0, #0]	@ 00101cfe 0068
.org 0x101d00
	bl 0x5500	@ 00101d00 03f7fefb
.org 0x101d04
	adds r4, r0, #0	@ 00101d04 041c
.org 0x101d06
	cmp r4, #0	@ 00101d06 002c
.org 0x101d08
	beq.n 0x101d44	@ 00101d08 1cd0
.org 0x101d0a
	adds r1, r4, #0	@ 00101d0a 211c
.org 0x101d0c
	adds r1, #37	@ 00101d0c 2531
.org 0x101d0e
	movs r3, #0	@ 00101d0e 0023
.org 0x101d10
	movs r0, #30	@ 00101d10 1e20
.org 0x101d12
	strb r0, [r1, #0]	@ 00101d12 0870
.org 0x101d14
	ldr r0, [pc, #56]	@ 00101d14 0e48
.org 0x101d16
	movs r1, #64	@ 00101d16 4021
.org 0x101d18
	strb r1, [r4, #9]	@ 00101d18 6172
.org 0x101d1a
	adds r1, #192	@ 00101d1a c031
.org 0x101d1c
	adds r0, r0, r1	@ 00101d1c 4018
.org 0x101d1e
	ldr r0, [r0, #0]	@ 00101d1e 0068
.org 0x101d20
	ldr r0, [r0, #0]	@ 00101d20 0068
.org 0x101d22
	str r0, [r4, #20]	@ 00101d22 6061
.org 0x101d24
	movs r2, #0	@ 00101d24 0022
.org 0x101d26
	strh r3, [r4, #32]	@ 00101d26 2384
.org 0x101d28
	adds r0, r4, #0	@ 00101d28 201c
.org 0x101d2a
	adds r0, #34	@ 00101d2a 2230
.org 0x101d2c
	strb r2, [r0, #0]	@ 00101d2c 0270
.org 0x101d2e
	ldrb r1, [r4, #11]	@ 00101d2e e17a
.org 0x101d30
	movs r0, #16	@ 00101d30 1020
.org 0x101d32
	orrs r0, r1	@ 00101d32 0843
.org 0x101d34
	strb r0, [r4, #11]	@ 00101d34 e072
.org 0x101d36
	ldrb r0, [r4, #28]	@ 00101d36 207f
.org 0x101d38
	strb r0, [r4, #29]	@ 00101d38 6077
.org 0x101d3a
	str r5, [r4, #40]	@ 00101d3a a562
.org 0x101d3c
	str r3, [r4, #84]	@ 00101d3c 6365
.org 0x101d3e
	str r3, [r4, #88]	@ 00101d3e a365
.org 0x101d40
	strb r2, [r4, #16]	@ 00101d40 2274
.org 0x101d42
	strb r2, [r4, #17]	@ 00101d42 6274
.org 0x101d44
	adds r0, r4, #0	@ 00101d44 201c
.org 0x101d46
	pop {r4, r5}	@ 00101d46 30bc
.org 0x101d48
	pop {r1}	@ 00101d48 02bc
.org 0x101d4a
	bx r1	@ 00101d4a 0847
