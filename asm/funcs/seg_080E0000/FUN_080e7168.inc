@ FUN_080e7168  entry 0x080e7168  size 66
.thumb
.org 0xe7168
FUN_080e7168:
	push {r4, lr}	@ 000e7168 10b5
.org 0xe716a
	adds r4, r0, #0	@ 000e716a 041c
.org 0xe716c
	bl 0x1cc9c	@ 000e716c 35f796fd
.org 0xe7170
	ldrb r1, [r4, #10]	@ 000e7170 a17a
.org 0xe7172
	movs r0, #1	@ 000e7172 0120
.org 0xe7174
	orrs r0, r1	@ 000e7174 0843
.org 0xe7176
	movs r1, #2	@ 000e7176 0221
.org 0xe7178
	orrs r0, r1	@ 000e7178 0843
.org 0xe717a
	strb r0, [r4, #10]	@ 000e717a a072
.org 0xe717c
	ldr r1, [pc, #44]	@ 000e717c 0b49
.org 0xe717e
	ldrb r0, [r4, #9]	@ 000e717e 607a
.org 0xe7180
	lsls r0, r0, #2	@ 000e7180 8000
.org 0xe7182
	adds r0, r0, r1	@ 000e7182 4018
.org 0xe7184
	movs r1, #1	@ 000e7184 0121
.org 0xe7186
	str r1, [r4, #12]	@ 000e7186 e160
.org 0xe7188
	ldr r0, [r0, #0]	@ 000e7188 0068
.org 0xe718a
	ldr r0, [r0, #4]	@ 000e718a 4068
.org 0xe718c
	str r0, [r4, #20]	@ 000e718c 6061
.org 0xe718e
	ldr r1, [pc, #32]	@ 000e718e 0849
.org 0xe7190
	ldrb r0, [r4, #16]	@ 000e7190 207c
.org 0xe7192
	lsls r0, r0, #2	@ 000e7192 8000
.org 0xe7194
	adds r0, r0, r1	@ 000e7194 4018
.org 0xe7196
	ldr r1, [r0, #0]	@ 000e7196 0168
.org 0xe7198
	adds r0, r4, #0	@ 000e7198 201c
.org 0xe719a
	bl 0x128f80	@ 000e719a 41f0f1fe
.org 0xe719e
	adds r0, r4, #0	@ 000e719e 201c
.org 0xe71a0
	bl 0xe71b4	@ 000e71a0 00f008f8
.org 0xe71a4
	pop {r4}	@ 000e71a4 10bc
.org 0xe71a6
	pop {r0}	@ 000e71a6 01bc
.org 0xe71a8
	bx r0	@ 000e71a8 0047
