@ FUN_080c2bb8  entry 0x080c2bb8  size 20
.thumb
.org 0xc2bb8
FUN_080c2bb8:
	push {lr}	@ 000c2bb8 00b5
.org 0xc2bba
	ldr r2, [pc, #16]	@ 000c2bba 044a
.org 0xc2bbc
	ldrb r1, [r0, #16]	@ 000c2bbc 017c
.org 0xc2bbe
	lsls r1, r1, #2	@ 000c2bbe 8900
.org 0xc2bc0
	adds r1, r1, r2	@ 000c2bc0 8918
.org 0xc2bc2
	ldr r1, [r1, #0]	@ 000c2bc2 0968
.org 0xc2bc4
	bl 0x128f80	@ 000c2bc4 66f0dcf9
.org 0xc2bc8
	pop {r0}	@ 000c2bc8 01bc
.org 0xc2bca
	bx r0	@ 000c2bca 0047
