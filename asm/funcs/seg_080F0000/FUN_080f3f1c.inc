@ FUN_080f3f1c  entry 0x080f3f1c  size 20
.thumb
.org 0xf3f1c
FUN_080f3f1c:
	push {lr}	@ 000f3f1c 00b5
.org 0xf3f1e
	ldr r2, [pc, #16]	@ 000f3f1e 044a
.org 0xf3f20
	ldrb r1, [r0, #16]	@ 000f3f20 017c
.org 0xf3f22
	lsls r1, r1, #2	@ 000f3f22 8900
.org 0xf3f24
	adds r1, r1, r2	@ 000f3f24 8918
.org 0xf3f26
	ldr r1, [r1, #0]	@ 000f3f26 0968
.org 0xf3f28
	bl 0x128f80	@ 000f3f28 35f02af8
.org 0xf3f2c
	pop {r0}	@ 000f3f2c 01bc
.org 0xf3f2e
	bx r0	@ 000f3f2e 0047
