@ FUN_080d7a30  entry 0x080d7a30  size 62
.thumb
.org 0xd7a30
FUN_080d7a30:
	push {r4, lr}	@ 000d7a30 10b5
.org 0xd7a32
	adds r4, r0, #0	@ 000d7a32 041c
.org 0xd7a34
	ldr r1, [pc, #56]	@ 000d7a34 0e49
.org 0xd7a36
	ldrb r0, [r4, #9]	@ 000d7a36 607a
.org 0xd7a38
	lsls r0, r0, #2	@ 000d7a38 8000
.org 0xd7a3a
	adds r0, r0, r1	@ 000d7a3a 4018
.org 0xd7a3c
	movs r1, #1	@ 000d7a3c 0121
.org 0xd7a3e
	str r1, [r4, #12]	@ 000d7a3e e160
.org 0xd7a40
	ldr r0, [r0, #0]	@ 000d7a40 0068
.org 0xd7a42
	ldr r0, [r0, #4]	@ 000d7a42 4068
.org 0xd7a44
	str r0, [r4, #20]	@ 000d7a44 6061
.org 0xd7a46
	ldr r1, [pc, #44]	@ 000d7a46 0b49
.org 0xd7a48
	ldrb r0, [r4, #16]	@ 000d7a48 207c
.org 0xd7a4a
	adds r0, r0, r1	@ 000d7a4a 4018
.org 0xd7a4c
	ldrb r0, [r0, #0]	@ 000d7a4c 0078
.org 0xd7a4e
	strb r0, [r4, #13]	@ 000d7a4e 6073
.org 0xd7a50
	ldrb r0, [r4, #10]	@ 000d7a50 a07a
.org 0xd7a52
	movs r1, #2	@ 000d7a52 0221
.org 0xd7a54
	orrs r0, r1	@ 000d7a54 0843
.org 0xd7a56
	movs r1, #1	@ 000d7a56 0121
.org 0xd7a58
	orrs r0, r1	@ 000d7a58 0843
.org 0xd7a5a
	strb r0, [r4, #10]	@ 000d7a5a a072
.org 0xd7a5c
	adds r0, r4, #0	@ 000d7a5c 201c
.org 0xd7a5e
	bl 0x1cc9c	@ 000d7a5e 45f71df9
.org 0xd7a62
	adds r0, r4, #0	@ 000d7a62 201c
.org 0xd7a64
	bl 0xd7a78	@ 000d7a64 00f008f8
.org 0xd7a68
	pop {r4}	@ 000d7a68 10bc
.org 0xd7a6a
	pop {r0}	@ 000d7a6a 01bc
.org 0xd7a6c
	bx r0	@ 000d7a6c 0047
