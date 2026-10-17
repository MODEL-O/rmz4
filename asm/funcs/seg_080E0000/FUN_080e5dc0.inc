@ FUN_080e5dc0  entry 0x080e5dc0  size 66
.thumb
.org 0xe5dc0
FUN_080e5dc0:
	push {r4, lr}	@ 000e5dc0 10b5
.org 0xe5dc2
	adds r4, r0, #0	@ 000e5dc2 041c
.org 0xe5dc4
	bl 0x1cc9c	@ 000e5dc4 36f76aff
.org 0xe5dc8
	ldrb r1, [r4, #10]	@ 000e5dc8 a17a
.org 0xe5dca
	movs r0, #1	@ 000e5dca 0120
.org 0xe5dcc
	orrs r0, r1	@ 000e5dcc 0843
.org 0xe5dce
	movs r1, #2	@ 000e5dce 0221
.org 0xe5dd0
	orrs r0, r1	@ 000e5dd0 0843
.org 0xe5dd2
	strb r0, [r4, #10]	@ 000e5dd2 a072
.org 0xe5dd4
	ldr r1, [pc, #44]	@ 000e5dd4 0b49
.org 0xe5dd6
	ldrb r0, [r4, #9]	@ 000e5dd6 607a
.org 0xe5dd8
	lsls r0, r0, #2	@ 000e5dd8 8000
.org 0xe5dda
	adds r0, r0, r1	@ 000e5dda 4018
.org 0xe5ddc
	movs r1, #1	@ 000e5ddc 0121
.org 0xe5dde
	str r1, [r4, #12]	@ 000e5dde e160
.org 0xe5de0
	ldr r0, [r0, #0]	@ 000e5de0 0068
.org 0xe5de2
	ldr r0, [r0, #4]	@ 000e5de2 4068
.org 0xe5de4
	str r0, [r4, #20]	@ 000e5de4 6061
.org 0xe5de6
	ldr r1, [pc, #32]	@ 000e5de6 0849
.org 0xe5de8
	ldrb r0, [r4, #16]	@ 000e5de8 207c
.org 0xe5dea
	lsls r0, r0, #2	@ 000e5dea 8000
.org 0xe5dec
	adds r0, r0, r1	@ 000e5dec 4018
.org 0xe5dee
	ldr r1, [r0, #0]	@ 000e5dee 0168
.org 0xe5df0
	adds r0, r4, #0	@ 000e5df0 201c
.org 0xe5df2
	bl 0x128f80	@ 000e5df2 43f0c5f8
.org 0xe5df6
	adds r0, r4, #0	@ 000e5df6 201c
.org 0xe5df8
	bl 0xe5e0c	@ 000e5df8 00f008f8
.org 0xe5dfc
	pop {r4}	@ 000e5dfc 10bc
.org 0xe5dfe
	pop {r0}	@ 000e5dfe 01bc
.org 0xe5e00
	bx r0	@ 000e5e00 0047
