@ FUN_080d2a30  entry 0x080d2a30  size 20
.thumb
.org 0xd2a30
FUN_080d2a30:
	push {lr}	@ 000d2a30 00b5
.org 0xd2a32
	ldr r2, [pc, #16]	@ 000d2a32 044a
.org 0xd2a34
	ldrb r1, [r0, #16]	@ 000d2a34 017c
.org 0xd2a36
	lsls r1, r1, #2	@ 000d2a36 8900
.org 0xd2a38
	adds r1, r1, r2	@ 000d2a38 8918
.org 0xd2a3a
	ldr r1, [r1, #0]	@ 000d2a3a 0968
.org 0xd2a3c
	bl 0x128f80	@ 000d2a3c 56f0a0fa
.org 0xd2a40
	pop {r0}	@ 000d2a40 01bc
.org 0xd2a42
	bx r0	@ 000d2a42 0047
