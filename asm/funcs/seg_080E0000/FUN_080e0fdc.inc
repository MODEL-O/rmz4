@ FUN_080e0fdc  entry 0x080e0fdc  size 20
.thumb
.org 0xe0fdc
FUN_080e0fdc:
	push {lr}	@ 000e0fdc 00b5
.org 0xe0fde
	ldr r2, [pc, #16]	@ 000e0fde 044a
.org 0xe0fe0
	ldrb r1, [r0, #16]	@ 000e0fe0 017c
.org 0xe0fe2
	lsls r1, r1, #2	@ 000e0fe2 8900
.org 0xe0fe4
	adds r1, r1, r2	@ 000e0fe4 8918
.org 0xe0fe6
	ldr r1, [r1, #0]	@ 000e0fe6 0968
.org 0xe0fe8
	bl 0x128f80	@ 000e0fe8 47f0caff
.org 0xe0fec
	pop {r0}	@ 000e0fec 01bc
.org 0xe0fee
	bx r0	@ 000e0fee 0047
