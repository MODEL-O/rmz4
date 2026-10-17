@ FUN_080308f4  entry 0x080308f4  size 20
.thumb
.org 0x308f4
FUN_080308f4:
	push {lr}	@ 000308f4 00b5
.org 0x308f6
	ldr r2, [pc, #16]	@ 000308f6 044a
.org 0x308f8
	ldrb r1, [r0, #15]	@ 000308f8 c17b
.org 0x308fa
	lsls r1, r1, #2	@ 000308fa 8900
.org 0x308fc
	adds r1, r1, r2	@ 000308fc 8918
.org 0x308fe
	ldr r1, [r1, #0]	@ 000308fe 0968
.org 0x30900
	bl 0x128f80	@ 00030900 f8f03efb
.org 0x30904
	pop {r0}	@ 00030904 01bc
.org 0x30906
	bx r0	@ 00030906 0047
