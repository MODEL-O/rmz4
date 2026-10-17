@ FUN_080b4c18  entry 0x080b4c18  size 20
.thumb
.org 0xb4c18
FUN_080b4c18:
	ldr r2, [pc, #16]	@ 000b4c18 044a
.org 0xb4c1a
	ldrb r1, [r0, #9]	@ 000b4c1a 417a
.org 0xb4c1c
	lsls r1, r1, #2	@ 000b4c1c 8900
.org 0xb4c1e
	adds r1, r1, r2	@ 000b4c1e 8918
.org 0xb4c20
	movs r2, #4	@ 000b4c20 0422
.org 0xb4c22
	str r2, [r0, #12]	@ 000b4c22 c260
.org 0xb4c24
	ldr r1, [r1, #0]	@ 000b4c24 0968
.org 0xb4c26
	ldr r1, [r1, #16]	@ 000b4c26 0969
.org 0xb4c28
	str r1, [r0, #20]	@ 000b4c28 4161
.org 0xb4c2a
	bx lr	@ 000b4c2a 7047
