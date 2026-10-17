@ FUN_080b6bc8  entry 0x080b6bc8  size 20
.thumb
.org 0xb6bc8
FUN_080b6bc8:
	push {lr}	@ 000b6bc8 00b5
.org 0xb6bca
	ldr r2, [pc, #16]	@ 000b6bca 044a
.org 0xb6bcc
	ldrb r1, [r0, #16]	@ 000b6bcc 017c
.org 0xb6bce
	lsls r1, r1, #2	@ 000b6bce 8900
.org 0xb6bd0
	adds r1, r1, r2	@ 000b6bd0 8918
.org 0xb6bd2
	ldr r1, [r1, #0]	@ 000b6bd2 0968
.org 0xb6bd4
	bl 0x128f80	@ 000b6bd4 72f0d4f9
.org 0xb6bd8
	pop {r0}	@ 000b6bd8 01bc
.org 0xb6bda
	bx r0	@ 000b6bda 0047
