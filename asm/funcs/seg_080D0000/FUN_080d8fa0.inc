@ FUN_080d8fa0  entry 0x080d8fa0  size 66
.thumb
.org 0xd8fa0
FUN_080d8fa0:
	push {r4, lr}	@ 000d8fa0 10b5
.org 0xd8fa2
	adds r4, r0, #0	@ 000d8fa2 041c
.org 0xd8fa4
	bl 0x1cc9c	@ 000d8fa4 43f77afe
.org 0xd8fa8
	ldrb r1, [r4, #10]	@ 000d8fa8 a17a
.org 0xd8faa
	movs r0, #1	@ 000d8faa 0120
.org 0xd8fac
	orrs r0, r1	@ 000d8fac 0843
.org 0xd8fae
	movs r1, #2	@ 000d8fae 0221
.org 0xd8fb0
	orrs r0, r1	@ 000d8fb0 0843
.org 0xd8fb2
	strb r0, [r4, #10]	@ 000d8fb2 a072
.org 0xd8fb4
	ldr r1, [pc, #44]	@ 000d8fb4 0b49
.org 0xd8fb6
	ldrb r0, [r4, #17]	@ 000d8fb6 607c
.org 0xd8fb8
	lsls r0, r0, #2	@ 000d8fb8 8000
.org 0xd8fba
	adds r0, r0, r1	@ 000d8fba 4018
.org 0xd8fbc
	ldr r1, [r0, #0]	@ 000d8fbc 0168
.org 0xd8fbe
	adds r0, r4, #0	@ 000d8fbe 201c
.org 0xd8fc0
	bl 0x128f80	@ 000d8fc0 4ff0deff
.org 0xd8fc4
	ldr r1, [pc, #32]	@ 000d8fc4 0849
.org 0xd8fc6
	ldrb r0, [r4, #9]	@ 000d8fc6 607a
.org 0xd8fc8
	lsls r0, r0, #2	@ 000d8fc8 8000
.org 0xd8fca
	adds r0, r0, r1	@ 000d8fca 4018
.org 0xd8fcc
	movs r1, #1	@ 000d8fcc 0121
.org 0xd8fce
	str r1, [r4, #12]	@ 000d8fce e160
.org 0xd8fd0
	ldr r0, [r0, #0]	@ 000d8fd0 0068
.org 0xd8fd2
	ldr r0, [r0, #4]	@ 000d8fd2 4068
.org 0xd8fd4
	str r0, [r4, #20]	@ 000d8fd4 6061
.org 0xd8fd6
	adds r0, r4, #0	@ 000d8fd6 201c
.org 0xd8fd8
	bl 0xd8fec	@ 000d8fd8 00f008f8
.org 0xd8fdc
	pop {r4}	@ 000d8fdc 10bc
.org 0xd8fde
	pop {r0}	@ 000d8fde 01bc
.org 0xd8fe0
	bx r0	@ 000d8fe0 0047
