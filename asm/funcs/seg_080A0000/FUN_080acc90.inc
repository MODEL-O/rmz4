@ FUN_080acc90  entry 0x080acc90  size 20
.thumb
.org 0xacc90
FUN_080acc90:
	push {lr}	@ 000acc90 00b5
.org 0xacc92
	ldr r2, [pc, #16]	@ 000acc92 044a
.org 0xacc94
	ldrb r1, [r0, #16]	@ 000acc94 017c
.org 0xacc96
	lsls r1, r1, #2	@ 000acc96 8900
.org 0xacc98
	adds r1, r1, r2	@ 000acc98 8918
.org 0xacc9a
	ldr r1, [r1, #0]	@ 000acc9a 0968
.org 0xacc9c
	bl 0x128f80	@ 000acc9c 7cf070f9
.org 0xacca0
	pop {r0}	@ 000acca0 01bc
.org 0xacca2
	bx r0	@ 000acca2 0047
