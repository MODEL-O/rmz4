@ FUN_080d0c88  entry 0x080d0c88  size 86
.thumb
.org 0xd0c88
FUN_080d0c88:
	push {r4, r5, r6, lr}	@ 000d0c88 70b5
.org 0xd0c8a
	adds r5, r1, #0	@ 000d0c8a 0d1c
.org 0xd0c8c
	lsls r0, r0, #24	@ 000d0c8c 0006
.org 0xd0c8e
	lsrs r6, r0, #24	@ 000d0c8e 060e
.org 0xd0c90
	ldr r0, [pc, #76]	@ 000d0c90 1348
.org 0xd0c92
	ldr r0, [r0, #0]	@ 000d0c92 0068
.org 0xd0c94
	bl 0x5500	@ 000d0c94 34f734fc
.org 0xd0c98
	adds r4, r0, #0	@ 000d0c98 041c
.org 0xd0c9a
	cmp r4, #0	@ 000d0c9a 002c
.org 0xd0c9c
	beq.n 0xd0cd6	@ 000d0c9c 1bd0
.org 0xd0c9e
	adds r2, r4, #0	@ 000d0c9e 221c
.org 0xd0ca0
	adds r2, #37	@ 000d0ca0 2532
.org 0xd0ca2
	movs r1, #0	@ 000d0ca2 0021
.org 0xd0ca4
	movs r0, #1	@ 000d0ca4 0120
.org 0xd0ca6
	strb r0, [r2, #0]	@ 000d0ca6 1070
.org 0xd0ca8
	ldr r0, [pc, #56]	@ 000d0ca8 0e48
.org 0xd0caa
	strb r1, [r4, #9]	@ 000d0caa 6172
.org 0xd0cac
	ldr r0, [r0, #0]	@ 000d0cac 0068
.org 0xd0cae
	ldr r0, [r0, #0]	@ 000d0cae 0068
.org 0xd0cb0
	str r0, [r4, #20]	@ 000d0cb0 6061
.org 0xd0cb2
	movs r0, #0	@ 000d0cb2 0020
.org 0xd0cb4
	strh r1, [r4, #32]	@ 000d0cb4 2184
.org 0xd0cb6
	adds r1, r4, #0	@ 000d0cb6 211c
.org 0xd0cb8
	adds r1, #34	@ 000d0cb8 2231
.org 0xd0cba
	strb r0, [r1, #0]	@ 000d0cba 0870
.org 0xd0cbc
	ldr r0, [r5, #0]	@ 000d0cbc 2868
.org 0xd0cbe
	str r0, [r4, #84]	@ 000d0cbe 6065
.org 0xd0cc0
	ldr r0, [r5, #4]	@ 000d0cc0 6868
.org 0xd0cc2
	str r0, [r4, #88]	@ 000d0cc2 a065
.org 0xd0cc4
	adds r0, r4, #0	@ 000d0cc4 201c
.org 0xd0cc6
	bl 0x1cc9c	@ 000d0cc6 4bf7e9ff
.org 0xd0cca
	ldr r0, [pc, #28]	@ 000d0cca 0748
.org 0xd0ccc
	adds r0, r6, r0	@ 000d0ccc 3018
.org 0xd0cce
	ldrb r1, [r0, #0]	@ 000d0cce 0178
.org 0xd0cd0
	adds r0, r4, #0	@ 000d0cd0 201c
.org 0xd0cd2
	bl 0x1cf00	@ 000d0cd2 4cf715f9
.org 0xd0cd6
	adds r0, r4, #0	@ 000d0cd6 201c
.org 0xd0cd8
	pop {r4, r5, r6}	@ 000d0cd8 70bc
.org 0xd0cda
	pop {r1}	@ 000d0cda 02bc
.org 0xd0cdc
	bx r1	@ 000d0cdc 0847
