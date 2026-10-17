@ FUN_080c2fe0  entry 0x080c2fe0  size 20
.thumb
.org 0xc2fe0
FUN_080c2fe0:
	push {lr}	@ 000c2fe0 00b5
.org 0xc2fe2
	ldr r2, [pc, #16]	@ 000c2fe2 044a
.org 0xc2fe4
	ldrb r1, [r0, #16]	@ 000c2fe4 017c
.org 0xc2fe6
	lsls r1, r1, #2	@ 000c2fe6 8900
.org 0xc2fe8
	adds r1, r1, r2	@ 000c2fe8 8918
.org 0xc2fea
	ldr r1, [r1, #0]	@ 000c2fea 0968
.org 0xc2fec
	bl 0x128f80	@ 000c2fec 65f0c8ff
.org 0xc2ff0
	pop {r0}	@ 000c2ff0 01bc
.org 0xc2ff2
	bx r0	@ 000c2ff2 0047
