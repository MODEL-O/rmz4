@ FUN_08090f1c  entry 0x08090f1c  size 50
.thumb
.org 0x90f1c
FUN_08090f1c:
	push {r4, lr}	@ 00090f1c 10b5
.org 0x90f1e
	adds r4, r0, #0	@ 00090f1e 041c
.org 0x90f20
	ldr r1, [pc, #44]	@ 00090f20 0b49
.org 0x90f22
	ldrb r0, [r4, #9]	@ 00090f22 607a
.org 0x90f24
	lsls r0, r0, #2	@ 00090f24 8000
.org 0x90f26
	adds r0, r0, r1	@ 00090f26 4018
.org 0x90f28
	movs r1, #1	@ 00090f28 0121
.org 0x90f2a
	str r1, [r4, #12]	@ 00090f2a e160
.org 0x90f2c
	ldr r0, [r0, #0]	@ 00090f2c 0068
.org 0x90f2e
	ldr r0, [r0, #4]	@ 00090f2e 4068
.org 0x90f30
	str r0, [r4, #20]	@ 00090f30 6061
.org 0x90f32
	ldr r1, [pc, #32]	@ 00090f32 0849
.org 0x90f34
	ldrb r0, [r4, #16]	@ 00090f34 207c
.org 0x90f36
	lsls r0, r0, #2	@ 00090f36 8000
.org 0x90f38
	adds r0, r0, r1	@ 00090f38 4018
.org 0x90f3a
	ldr r1, [r0, #0]	@ 00090f3a 0168
.org 0x90f3c
	adds r0, r4, #0	@ 00090f3c 201c
.org 0x90f3e
	bl 0x128f80	@ 00090f3e 98f01ff8
.org 0x90f42
	adds r0, r4, #0	@ 00090f42 201c
.org 0x90f44
	bl 0x90f58	@ 00090f44 00f008f8
.org 0x90f48
	pop {r4}	@ 00090f48 10bc
.org 0x90f4a
	pop {r0}	@ 00090f4a 01bc
.org 0x90f4c
	bx r0	@ 00090f4c 0047
