@ FUN_080f61c0  entry 0x080f61c0  size 50
.thumb
.org 0xf61c0
FUN_080f61c0:
	push {r4, lr}	@ 000f61c0 10b5
.org 0xf61c2
	adds r4, r0, #0	@ 000f61c2 041c
.org 0xf61c4
	ldr r1, [pc, #44]	@ 000f61c4 0b49
.org 0xf61c6
	ldrb r0, [r4, #16]	@ 000f61c6 207c
.org 0xf61c8
	lsls r0, r0, #2	@ 000f61c8 8000
.org 0xf61ca
	adds r0, r0, r1	@ 000f61ca 4018
.org 0xf61cc
	ldr r1, [r0, #0]	@ 000f61cc 0168
.org 0xf61ce
	adds r0, r4, #0	@ 000f61ce 201c
.org 0xf61d0
	bl 0x128f80	@ 000f61d0 32f0d6fe
.org 0xf61d4
	ldr r1, [pc, #32]	@ 000f61d4 0849
.org 0xf61d6
	ldrb r0, [r4, #9]	@ 000f61d6 607a
.org 0xf61d8
	lsls r0, r0, #2	@ 000f61d8 8000
.org 0xf61da
	adds r0, r0, r1	@ 000f61da 4018
.org 0xf61dc
	movs r1, #1	@ 000f61dc 0121
.org 0xf61de
	str r1, [r4, #12]	@ 000f61de e160
.org 0xf61e0
	ldr r0, [r0, #0]	@ 000f61e0 0068
.org 0xf61e2
	ldr r0, [r0, #4]	@ 000f61e2 4068
.org 0xf61e4
	str r0, [r4, #20]	@ 000f61e4 6061
.org 0xf61e6
	adds r0, r4, #0	@ 000f61e6 201c
.org 0xf61e8
	bl 0xf61fc	@ 000f61e8 00f008f8
.org 0xf61ec
	pop {r4}	@ 000f61ec 10bc
.org 0xf61ee
	pop {r0}	@ 000f61ee 01bc
.org 0xf61f0
	bx r0	@ 000f61f0 0047
