@ FUN_080f3f68  entry 0x080f3f68  size 82
.thumb
.org 0xf3f68
FUN_080f3f68:
	push {r4, r5, lr}	@ 000f3f68 30b5
.org 0xf3f6a
	adds r4, r0, #0	@ 000f3f6a 041c
.org 0xf3f6c
	bl 0x1cc9c	@ 000f3f6c 28f796fe
.org 0xf3f70
	ldr r1, [pc, #72]	@ 000f3f70 1249
.org 0xf3f72
	adds r0, r4, #0	@ 000f3f72 201c
.org 0xf3f74
	bl 0x1cf00	@ 000f3f74 28f7c4ff
.org 0xf3f78
	movs r3, #1	@ 000f3f78 0123
.org 0xf3f7a
	ldrb r1, [r4, #10]	@ 000f3f7a a17a
.org 0xf3f7c
	movs r0, #16	@ 000f3f7c 1020
.org 0xf3f7e
	orrs r0, r1	@ 000f3f7e 0843
.org 0xf3f80
	strb r0, [r4, #10]	@ 000f3f80 a072
.org 0xf3f82
	movs r2, #1	@ 000f3f82 0122
.org 0xf3f84
	adds r0, r4, #0	@ 000f3f84 201c
.org 0xf3f86
	adds r0, #76	@ 000f3f86 4c30
.org 0xf3f88
	movs r5, #0	@ 000f3f88 0025
.org 0xf3f8a
	strb r3, [r0, #0]	@ 000f3f8a 0370
.org 0xf3f8c
	movs r0, #74	@ 000f3f8c 4a20
.org 0xf3f8e
	adds r0, r0, r4	@ 000f3f8e 0019
.org 0xf3f90
	mov ip, r0	@ 000f3f90 8446
.org 0xf3f92
	movs r3, #16	@ 000f3f92 1023
.org 0xf3f94
	ldrb r1, [r0, #0]	@ 000f3f94 0178
.org 0xf3f96
	movs r0, #17	@ 000f3f96 1120
.org 0xf3f98
	negs r0, r0	@ 000f3f98 4042
.org 0xf3f9a
	ands r0, r1	@ 000f3f9a 0840
.org 0xf3f9c
	orrs r0, r3	@ 000f3f9c 1843
.org 0xf3f9e
	mov r1, ip	@ 000f3f9e 6146
.org 0xf3fa0
	strb r0, [r1, #0]	@ 000f3fa0 0870
.org 0xf3fa2
	ldrb r0, [r4, #10]	@ 000f3fa2 a07a
.org 0xf3fa4
	orrs r2, r0	@ 000f3fa4 0243
.org 0xf3fa6
	strb r2, [r4, #10]	@ 000f3fa6 a272
.org 0xf3fa8
	adds r0, r4, #0	@ 000f3fa8 201c
.org 0xf3faa
	adds r0, #182	@ 000f3faa b630
.org 0xf3fac
	strb r5, [r0, #0]	@ 000f3fac 0570
.org 0xf3fae
	adds r4, #37	@ 000f3fae 2534
.org 0xf3fb0
	movs r0, #14	@ 000f3fb0 0e20
.org 0xf3fb2
	strb r0, [r4, #0]	@ 000f3fb2 2070
.org 0xf3fb4
	pop {r4, r5}	@ 000f3fb4 30bc
.org 0xf3fb6
	pop {r0}	@ 000f3fb6 01bc
.org 0xf3fb8
	bx r0	@ 000f3fb8 0047
