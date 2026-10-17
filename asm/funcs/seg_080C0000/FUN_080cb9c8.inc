@ FUN_080cb9c8  entry 0x080cb9c8  size 164
.thumb
.org 0xcb9c8
FUN_080cb9c8:
	push {r4, r5, r6, lr}	@ 000cb9c8 70b5
.org 0xcb9ca
	adds r6, r0, #0	@ 000cb9ca 061c
.org 0xcb9cc
	ldr r0, [r6, #40]	@ 000cb9cc b06a
.org 0xcb9ce
	ldrb r4, [r0, #10]	@ 000cb9ce 847a
.org 0xcb9d0
	lsrs r4, r4, #4	@ 000cb9d0 2409
.org 0xcb9d2
	movs r2, #1	@ 000cb9d2 0122
.org 0xcb9d4
	ands r4, r2	@ 000cb9d4 1440
.org 0xcb9d6
	ldr r1, [pc, #56]	@ 000cb9d6 0e49
.org 0xcb9d8
	ldrb r0, [r6, #9]	@ 000cb9d8 707a
.org 0xcb9da
	lsls r0, r0, #2	@ 000cb9da 8000
.org 0xcb9dc
	adds r0, r0, r1	@ 000cb9dc 4018
.org 0xcb9de
	str r2, [r6, #12]	@ 000cb9de f260
.org 0xcb9e0
	ldr r0, [r0, #0]	@ 000cb9e0 0068
.org 0xcb9e2
	ldr r0, [r0, #4]	@ 000cb9e2 4068
.org 0xcb9e4
	str r0, [r6, #20]	@ 000cb9e4 7061
.org 0xcb9e6
	movs r0, #0	@ 000cb9e6 0020
.org 0xcb9e8
	strb r0, [r6, #13]	@ 000cb9e8 7073
.org 0xcb9ea
	strb r0, [r6, #14]	@ 000cb9ea b073
.org 0xcb9ec
	strb r0, [r6, #15]	@ 000cb9ec f073
.org 0xcb9ee
	ldrb r0, [r6, #10]	@ 000cb9ee b07a
.org 0xcb9f0
	movs r1, #1	@ 000cb9f0 0121
.org 0xcb9f2
	movs r5, #0	@ 000cb9f2 0025
.org 0xcb9f4
	orrs r0, r1	@ 000cb9f4 0843
.org 0xcb9f6
	movs r1, #2	@ 000cb9f6 0221
.org 0xcb9f8
	orrs r0, r1	@ 000cb9f8 0843
.org 0xcb9fa
	strb r0, [r6, #10]	@ 000cb9fa b072
.org 0xcb9fc
	adds r0, r6, #0	@ 000cb9fc 301c
.org 0xcb9fe
	bl 0x1cc9c	@ 000cb9fe 51f74df9
.org 0xcba02
	cmp r4, #0	@ 000cba02 002c
.org 0xcba04
	beq.n 0xcba14	@ 000cba04 06d0
.org 0xcba06
	ldrb r0, [r6, #10]	@ 000cba06 b07a
.org 0xcba08
	movs r1, #16	@ 000cba08 1021
.org 0xcba0a
	orrs r0, r1	@ 000cba0a 0843
.org 0xcba0c
	b.n 0xcba1a	@ 000cba0c 05e0
.org 0xcba0e
	.byte 0x00	@ 000cba0e data
.org 0xcba0f
	.byte 0x00	@ 000cba0f data
.org 0xcba10
	.byte 0xf4,0x49,0x86,0x08	@ 000cba10 data
.org 0xcba14
	ldrb r1, [r6, #10]	@ 000cba14 b17a
.org 0xcba16
	movs r0, #239	@ 000cba16 ef20
.org 0xcba18
	ands r0, r1	@ 000cba18 0840
.org 0xcba1a
	strb r0, [r6, #10]	@ 000cba1a b072
.org 0xcba1c
	adds r1, r4, #0	@ 000cba1c 211c
.org 0xcba1e
	adds r0, r6, #0	@ 000cba1e 301c
.org 0xcba20
	adds r0, #76	@ 000cba20 4c30
.org 0xcba22
	movs r5, #0	@ 000cba22 0025
.org 0xcba24
	strb r1, [r0, #0]	@ 000cba24 0170
.org 0xcba26
	adds r3, r6, #0	@ 000cba26 331c
.org 0xcba28
	adds r3, #74	@ 000cba28 4a33
.org 0xcba2a
	lsls r1, r1, #4	@ 000cba2a 0901
.org 0xcba2c
	ldrb r2, [r3, #0]	@ 000cba2c 1a78
.org 0xcba2e
	movs r0, #17	@ 000cba2e 1120
.org 0xcba30
	negs r0, r0	@ 000cba30 4042
.org 0xcba32
	ands r0, r2	@ 000cba32 1040
.org 0xcba34
	orrs r0, r1	@ 000cba34 0843
.org 0xcba36
	strb r0, [r3, #0]	@ 000cba36 1870
.org 0xcba38
	movs r1, #146	@ 000cba38 9221
.org 0xcba3a
	lsls r1, r1, #8	@ 000cba3a 0902
.org 0xcba3c
	adds r0, r6, #0	@ 000cba3c 301c
.org 0xcba3e
	bl 0x1cf00	@ 000cba3e 51f75ffa
.org 0xcba42
	adds r0, r6, #0	@ 000cba42 301c
.org 0xcba44
	bl 0x1cff0	@ 000cba44 51f7d4fa
.org 0xcba48
	ldrb r1, [r6, #10]	@ 000cba48 b17a
.org 0xcba4a
	movs r0, #4	@ 000cba4a 0420
.org 0xcba4c
	orrs r0, r1	@ 000cba4c 0843
.org 0xcba4e
	strb r0, [r6, #10]	@ 000cba4e b072
.org 0xcba50
	adds r4, r6, #0	@ 000cba50 341c
.org 0xcba52
	adds r4, #116	@ 000cba52 7434
.org 0xcba54
	ldr r1, [pc, #28]	@ 000cba54 0749
.org 0xcba56
	adds r2, r6, #0	@ 000cba56 321c
.org 0xcba58
	adds r2, #84	@ 000cba58 5432
.org 0xcba5a
	adds r0, r4, #0	@ 000cba5a 201c
.org 0xcba5c
	movs r3, #64	@ 000cba5c 4023
.org 0xcba5e
	bl 0x5760	@ 000cba5e 39f77ffe
.org 0xcba62
	str r6, [r4, #44]	@ 000cba62 e662
.org 0xcba64
	str r5, [r4, #36]	@ 000cba64 6562
.org 0xcba66
	adds r0, r6, #0	@ 000cba66 301c
.org 0xcba68
	bl 0xcbb04	@ 000cba68 00f04cf8
