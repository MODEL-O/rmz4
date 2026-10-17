@ FUN_08042a08  entry 0x08042a08  size 50
.thumb
.org 0x42a08
FUN_08042a08:
	push {r4, lr}	@ 00042a08 10b5
.org 0x42a0a
	adds r4, r0, #0	@ 00042a0a 041c
.org 0x42a0c
	ldr r1, [pc, #44]	@ 00042a0c 0b49
.org 0x42a0e
	ldrb r0, [r4, #9]	@ 00042a0e 607a
.org 0x42a10
	lsls r0, r0, #2	@ 00042a10 8000
.org 0x42a12
	adds r0, r0, r1	@ 00042a12 4018
.org 0x42a14
	movs r1, #1	@ 00042a14 0121
.org 0x42a16
	str r1, [r4, #12]	@ 00042a16 e160
.org 0x42a18
	ldr r0, [r0, #0]	@ 00042a18 0068
.org 0x42a1a
	ldr r0, [r0, #4]	@ 00042a1a 4068
.org 0x42a1c
	str r0, [r4, #20]	@ 00042a1c 6061
.org 0x42a1e
	ldr r1, [pc, #32]	@ 00042a1e 0849
.org 0x42a20
	ldrb r0, [r4, #16]	@ 00042a20 207c
.org 0x42a22
	lsls r0, r0, #2	@ 00042a22 8000
.org 0x42a24
	adds r0, r0, r1	@ 00042a24 4018
.org 0x42a26
	ldr r1, [r0, #0]	@ 00042a26 0168
.org 0x42a28
	adds r0, r4, #0	@ 00042a28 201c
.org 0x42a2a
	bl 0x128f80	@ 00042a2a e6f0a9fa
.org 0x42a2e
	adds r0, r4, #0	@ 00042a2e 201c
.org 0x42a30
	bl 0x42a44	@ 00042a30 00f008f8
.org 0x42a34
	pop {r4}	@ 00042a34 10bc
.org 0x42a36
	pop {r0}	@ 00042a36 01bc
.org 0x42a38
	bx r0	@ 00042a38 0047
