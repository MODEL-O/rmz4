@ FUN_0805408c  entry 0x0805408c  size 20
.thumb
.org 0x5408c
FUN_0805408c:
	push {lr}	@ 0005408c 00b5
.org 0x5408e
	ldr r2, [pc, #16]	@ 0005408e 044a
.org 0x54090
	ldrb r1, [r0, #14]	@ 00054090 817b
.org 0x54092
	lsls r1, r1, #2	@ 00054092 8900
.org 0x54094
	adds r1, r1, r2	@ 00054094 8918
.org 0x54096
	ldr r1, [r1, #0]	@ 00054096 0968
.org 0x54098
	bl 0x128f80	@ 00054098 d4f072ff
.org 0x5409c
	pop {r0}	@ 0005409c 01bc
.org 0x5409e
	bx r0	@ 0005409e 0047
