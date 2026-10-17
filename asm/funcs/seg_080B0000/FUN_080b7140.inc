@ FUN_080b7140  entry 0x080b7140  size 20
.thumb
.org 0xb7140
FUN_080b7140:
	push {lr}	@ 000b7140 00b5
.org 0xb7142
	ldr r2, [pc, #16]	@ 000b7142 044a
.org 0xb7144
	ldrb r1, [r0, #16]	@ 000b7144 017c
.org 0xb7146
	lsls r1, r1, #2	@ 000b7146 8900
.org 0xb7148
	adds r1, r1, r2	@ 000b7148 8918
.org 0xb714a
	ldr r1, [r1, #0]	@ 000b714a 0968
.org 0xb714c
	bl 0x128f80	@ 000b714c 71f018ff
.org 0xb7150
	pop {r0}	@ 000b7150 01bc
.org 0xb7152
	bx r0	@ 000b7152 0047
