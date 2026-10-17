@ FUN_080353c0  entry 0x080353c0  size 24
.thumb
.org 0x353c0
FUN_080353c0:
	push {lr}	@ 000353c0 00b5
.org 0x353c2
	ldr r2, [pc, #20]	@ 000353c2 054a
.org 0x353c4
	ldr r3, [pc, #20]	@ 000353c4 054b
.org 0x353c6
	adds r1, r0, r3	@ 000353c6 c118
.org 0x353c8
	ldrb r1, [r1, #0]	@ 000353c8 0978
.org 0x353ca
	lsls r1, r1, #2	@ 000353ca 8900
.org 0x353cc
	adds r1, r1, r2	@ 000353cc 8918
.org 0x353ce
	ldr r1, [r1, #0]	@ 000353ce 0968
.org 0x353d0
	bl 0x128f80	@ 000353d0 f3f0d6fd
.org 0x353d4
	pop {r0}	@ 000353d4 01bc
.org 0x353d6
	bx r0	@ 000353d6 0047
