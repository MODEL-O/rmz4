@ FUN_080c4ae8  entry 0x080c4ae8  size 20
.thumb
.org 0xc4ae8
FUN_080c4ae8:
	push {lr}	@ 000c4ae8 00b5
.org 0xc4aea
	ldr r2, [pc, #16]	@ 000c4aea 044a
.org 0xc4aec
	ldrb r1, [r0, #16]	@ 000c4aec 017c
.org 0xc4aee
	lsls r1, r1, #2	@ 000c4aee 8900
.org 0xc4af0
	adds r1, r1, r2	@ 000c4af0 8918
.org 0xc4af2
	ldr r1, [r1, #0]	@ 000c4af2 0968
.org 0xc4af4
	bl 0x128f80	@ 000c4af4 64f044fa
.org 0xc4af8
	pop {r0}	@ 000c4af8 01bc
.org 0xc4afa
	bx r0	@ 000c4afa 0047
