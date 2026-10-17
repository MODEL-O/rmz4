@ FUN_080c3f4c  entry 0x080c3f4c  size 20
.thumb
.org 0xc3f4c
FUN_080c3f4c:
	push {lr}	@ 000c3f4c 00b5
.org 0xc3f4e
	ldr r2, [pc, #16]	@ 000c3f4e 044a
.org 0xc3f50
	ldrb r1, [r0, #16]	@ 000c3f50 017c
.org 0xc3f52
	lsls r1, r1, #2	@ 000c3f52 8900
.org 0xc3f54
	adds r1, r1, r2	@ 000c3f54 8918
.org 0xc3f56
	ldr r1, [r1, #0]	@ 000c3f56 0968
.org 0xc3f58
	bl 0x128f80	@ 000c3f58 65f012f8
.org 0xc3f5c
	pop {r0}	@ 000c3f5c 01bc
.org 0xc3f5e
	bx r0	@ 000c3f5e 0047
