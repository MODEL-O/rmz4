@ FUN_080c24ec  entry 0x080c24ec  size 20
.thumb
.org 0xc24ec
FUN_080c24ec:
	push {lr}	@ 000c24ec 00b5
.org 0xc24ee
	ldr r2, [pc, #16]	@ 000c24ee 044a
.org 0xc24f0
	ldrb r1, [r0, #16]	@ 000c24f0 017c
.org 0xc24f2
	lsls r1, r1, #2	@ 000c24f2 8900
.org 0xc24f4
	adds r1, r1, r2	@ 000c24f4 8918
.org 0xc24f6
	ldr r1, [r1, #0]	@ 000c24f6 0968
.org 0xc24f8
	bl 0x128f80	@ 000c24f8 66f042fd
.org 0xc24fc
	pop {r0}	@ 000c24fc 01bc
.org 0xc24fe
	bx r0	@ 000c24fe 0047
