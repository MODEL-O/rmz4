@ FUN_080f5da0  entry 0x080f5da0  size 50
.thumb
.org 0xf5da0
FUN_080f5da0:
	push {r4, lr}	@ 000f5da0 10b5
.org 0xf5da2
	adds r4, r0, #0	@ 000f5da2 041c
.org 0xf5da4
	ldr r1, [pc, #44]	@ 000f5da4 0b49
.org 0xf5da6
	ldrb r0, [r4, #16]	@ 000f5da6 207c
.org 0xf5da8
	lsls r0, r0, #2	@ 000f5da8 8000
.org 0xf5daa
	adds r0, r0, r1	@ 000f5daa 4018
.org 0xf5dac
	ldr r1, [r0, #0]	@ 000f5dac 0168
.org 0xf5dae
	adds r0, r4, #0	@ 000f5dae 201c
.org 0xf5db0
	bl 0x128f80	@ 000f5db0 33f0e6f8
.org 0xf5db4
	ldr r1, [pc, #32]	@ 000f5db4 0849
.org 0xf5db6
	ldrb r0, [r4, #9]	@ 000f5db6 607a
.org 0xf5db8
	lsls r0, r0, #2	@ 000f5db8 8000
.org 0xf5dba
	adds r0, r0, r1	@ 000f5dba 4018
.org 0xf5dbc
	movs r1, #1	@ 000f5dbc 0121
.org 0xf5dbe
	str r1, [r4, #12]	@ 000f5dbe e160
.org 0xf5dc0
	ldr r0, [r0, #0]	@ 000f5dc0 0068
.org 0xf5dc2
	ldr r0, [r0, #4]	@ 000f5dc2 4068
.org 0xf5dc4
	str r0, [r4, #20]	@ 000f5dc4 6061
.org 0xf5dc6
	adds r0, r4, #0	@ 000f5dc6 201c
.org 0xf5dc8
	bl 0xf5ddc	@ 000f5dc8 00f008f8
.org 0xf5dcc
	pop {r4}	@ 000f5dcc 10bc
.org 0xf5dce
	pop {r0}	@ 000f5dce 01bc
.org 0xf5dd0
	bx r0	@ 000f5dd0 0047
