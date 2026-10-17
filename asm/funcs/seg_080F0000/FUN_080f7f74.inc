@ FUN_080f7f74  entry 0x080f7f74  size 50
.thumb
.org 0xf7f74
FUN_080f7f74:
	push {r4, lr}	@ 000f7f74 10b5
.org 0xf7f76
	adds r4, r0, #0	@ 000f7f76 041c
.org 0xf7f78
	ldr r1, [pc, #44]	@ 000f7f78 0b49
.org 0xf7f7a
	ldrb r0, [r4, #16]	@ 000f7f7a 207c
.org 0xf7f7c
	lsls r0, r0, #2	@ 000f7f7c 8000
.org 0xf7f7e
	adds r0, r0, r1	@ 000f7f7e 4018
.org 0xf7f80
	ldr r1, [r0, #0]	@ 000f7f80 0168
.org 0xf7f82
	adds r0, r4, #0	@ 000f7f82 201c
.org 0xf7f84
	bl 0x128f80	@ 000f7f84 30f0fcff
.org 0xf7f88
	ldr r1, [pc, #32]	@ 000f7f88 0849
.org 0xf7f8a
	ldrb r0, [r4, #9]	@ 000f7f8a 607a
.org 0xf7f8c
	lsls r0, r0, #2	@ 000f7f8c 8000
.org 0xf7f8e
	adds r0, r0, r1	@ 000f7f8e 4018
.org 0xf7f90
	movs r1, #1	@ 000f7f90 0121
.org 0xf7f92
	str r1, [r4, #12]	@ 000f7f92 e160
.org 0xf7f94
	ldr r0, [r0, #0]	@ 000f7f94 0068
.org 0xf7f96
	ldr r0, [r0, #4]	@ 000f7f96 4068
.org 0xf7f98
	str r0, [r4, #20]	@ 000f7f98 6061
.org 0xf7f9a
	adds r0, r4, #0	@ 000f7f9a 201c
.org 0xf7f9c
	bl 0xf7fb0	@ 000f7f9c 00f008f8
.org 0xf7fa0
	pop {r4}	@ 000f7fa0 10bc
.org 0xf7fa2
	pop {r0}	@ 000f7fa2 01bc
.org 0xf7fa4
	bx r0	@ 000f7fa4 0047
