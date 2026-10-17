@ FUN_08045b34  entry 0x08045b34  size 84
.thumb
.org 0x45b34
FUN_08045b34:
	push {r4, r5, lr}	@ 00045b34 30b5
.org 0x45b36
	adds r4, r0, #0	@ 00045b36 041c
.org 0x45b38
	ldr r1, [pc, #76]	@ 00045b38 1349
.org 0x45b3a
	ldrb r0, [r4, #9]	@ 00045b3a 607a
.org 0x45b3c
	lsls r0, r0, #2	@ 00045b3c 8000
.org 0x45b3e
	adds r0, r0, r1	@ 00045b3e 4018
.org 0x45b40
	movs r1, #1	@ 00045b40 0121
.org 0x45b42
	str r1, [r4, #12]	@ 00045b42 e160
.org 0x45b44
	ldr r0, [r0, #0]	@ 00045b44 0068
.org 0x45b46
	ldr r0, [r0, #4]	@ 00045b46 4068
.org 0x45b48
	str r0, [r4, #20]	@ 00045b48 6061
.org 0x45b4a
	adds r0, r4, #0	@ 00045b4a 201c
.org 0x45b4c
	bl 0x1cc9c	@ 00045b4c d7f7a6f8
.org 0x45b50
	adds r0, r4, #0	@ 00045b50 201c
.org 0x45b52
	bl 0x1ceec	@ 00045b52 d7f7cbf9
.org 0x45b56
	ldrb r1, [r4, #10]	@ 00045b56 a17a
.org 0x45b58
	movs r0, #1	@ 00045b58 0120
.org 0x45b5a
	movs r5, #0	@ 00045b5a 0025
.org 0x45b5c
	orrs r0, r1	@ 00045b5c 0843
.org 0x45b5e
	movs r1, #2	@ 00045b5e 0221
.org 0x45b60
	orrs r0, r1	@ 00045b60 0843
.org 0x45b62
	strb r0, [r4, #10]	@ 00045b62 a072
.org 0x45b64
	ldr r1, [pc, #36]	@ 00045b64 0949
.org 0x45b66
	adds r0, r4, #0	@ 00045b66 201c
.org 0x45b68
	bl 0x1cf00	@ 00045b68 d7f7caf9
.org 0x45b6c
	adds r0, r4, #0	@ 00045b6c 201c
.org 0x45b6e
	bl 0x1cff0	@ 00045b6e d7f73ffa
.org 0x45b72
	adds r1, r4, #0	@ 00045b72 211c
.org 0x45b74
	adds r1, #37	@ 00045b74 2531
.org 0x45b76
	movs r0, #15	@ 00045b76 0f20
.org 0x45b78
	strb r0, [r1, #0]	@ 00045b78 0870
.org 0x45b7a
	strb r5, [r4, #18]	@ 00045b7a a574
.org 0x45b7c
	adds r0, r4, #0	@ 00045b7c 201c
.org 0x45b7e
	bl 0x45864	@ 00045b7e fff771fe
.org 0x45b82
	pop {r4, r5}	@ 00045b82 30bc
.org 0x45b84
	pop {r0}	@ 00045b84 01bc
.org 0x45b86
	bx r0	@ 00045b86 0047
