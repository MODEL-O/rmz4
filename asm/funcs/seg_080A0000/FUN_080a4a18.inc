@ FUN_080a4a18  entry 0x080a4a18  size 20
.thumb
.org 0xa4a18
FUN_080a4a18:
	push {lr}	@ 000a4a18 00b5
.org 0xa4a1a
	ldr r2, [pc, #16]	@ 000a4a1a 044a
.org 0xa4a1c
	ldrb r1, [r0, #16]	@ 000a4a1c 017c
.org 0xa4a1e
	lsls r1, r1, #2	@ 000a4a1e 8900
.org 0xa4a20
	adds r1, r1, r2	@ 000a4a20 8918
.org 0xa4a22
	ldr r1, [r1, #0]	@ 000a4a22 0968
.org 0xa4a24
	bl 0x128f80	@ 000a4a24 84f0acfa
.org 0xa4a28
	pop {r0}	@ 000a4a28 01bc
.org 0xa4a2a
	bx r0	@ 000a4a2a 0047
