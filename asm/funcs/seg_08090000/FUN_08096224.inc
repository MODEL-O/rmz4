@ FUN_08096224  entry 0x08096224  size 20
.thumb
.org 0x96224
FUN_08096224:
	push {lr}	@ 00096224 00b5
.org 0x96226
	ldr r2, [pc, #16]	@ 00096226 044a
.org 0x96228
	ldrb r1, [r0, #16]	@ 00096228 017c
.org 0x9622a
	lsls r1, r1, #2	@ 0009622a 8900
.org 0x9622c
	adds r1, r1, r2	@ 0009622c 8918
.org 0x9622e
	ldr r1, [r1, #0]	@ 0009622e 0968
.org 0x96230
	bl 0x128f80	@ 00096230 92f0a6fe
.org 0x96234
	pop {r0}	@ 00096234 01bc
.org 0x96236
	bx r0	@ 00096236 0047
