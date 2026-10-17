@ FUN_080c5f50  entry 0x080c5f50  size 20
.thumb
.org 0xc5f50
FUN_080c5f50:
	push {lr}	@ 000c5f50 00b5
.org 0xc5f52
	ldr r2, [pc, #16]	@ 000c5f52 044a
.org 0xc5f54
	ldrb r1, [r0, #16]	@ 000c5f54 017c
.org 0xc5f56
	lsls r1, r1, #2	@ 000c5f56 8900
.org 0xc5f58
	adds r1, r1, r2	@ 000c5f58 8918
.org 0xc5f5a
	ldr r1, [r1, #0]	@ 000c5f5a 0968
.org 0xc5f5c
	bl 0x128f80	@ 000c5f5c 63f010f8
.org 0xc5f60
	pop {r0}	@ 000c5f60 01bc
.org 0xc5f62
	bx r0	@ 000c5f62 0047
