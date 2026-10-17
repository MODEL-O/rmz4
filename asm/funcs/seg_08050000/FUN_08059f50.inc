@ FUN_08059f50  entry 0x08059f50  size 20
.thumb
.org 0x59f50
FUN_08059f50:
	push {lr}	@ 00059f50 00b5
.org 0x59f52
	ldr r2, [pc, #16]	@ 00059f52 044a
.org 0x59f54
	ldrb r1, [r0, #14]	@ 00059f54 817b
.org 0x59f56
	lsls r1, r1, #2	@ 00059f56 8900
.org 0x59f58
	adds r1, r1, r2	@ 00059f58 8918
.org 0x59f5a
	ldr r1, [r1, #0]	@ 00059f5a 0968
.org 0x59f5c
	bl 0x128f80	@ 00059f5c cff010f8
.org 0x59f60
	pop {r0}	@ 00059f60 01bc
.org 0x59f62
	bx r0	@ 00059f62 0047
