@ FUN_080e1248  entry 0x080e1248  size 20
.thumb
.org 0xe1248
FUN_080e1248:
	push {lr}	@ 000e1248 00b5
.org 0xe124a
	ldr r2, [pc, #16]	@ 000e124a 044a
.org 0xe124c
	ldrb r1, [r0, #16]	@ 000e124c 017c
.org 0xe124e
	lsls r1, r1, #2	@ 000e124e 8900
.org 0xe1250
	adds r1, r1, r2	@ 000e1250 8918
.org 0xe1252
	ldr r1, [r1, #0]	@ 000e1252 0968
.org 0xe1254
	bl 0x128f80	@ 000e1254 47f094fe
.org 0xe1258
	pop {r0}	@ 000e1258 01bc
.org 0xe125a
	bx r0	@ 000e125a 0047
