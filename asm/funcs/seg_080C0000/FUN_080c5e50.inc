@ FUN_080c5e50  entry 0x080c5e50  size 20
.thumb
.org 0xc5e50
FUN_080c5e50:
	push {lr}	@ 000c5e50 00b5
.org 0xc5e52
	ldr r2, [pc, #16]	@ 000c5e52 044a
.org 0xc5e54
	ldrb r1, [r0, #16]	@ 000c5e54 017c
.org 0xc5e56
	lsls r1, r1, #2	@ 000c5e56 8900
.org 0xc5e58
	adds r1, r1, r2	@ 000c5e58 8918
.org 0xc5e5a
	ldr r1, [r1, #0]	@ 000c5e5a 0968
.org 0xc5e5c
	bl 0x128f80	@ 000c5e5c 63f090f8
.org 0xc5e60
	pop {r0}	@ 000c5e60 01bc
.org 0xc5e62
	bx r0	@ 000c5e62 0047
