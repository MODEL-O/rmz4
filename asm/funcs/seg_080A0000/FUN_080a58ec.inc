@ FUN_080a58ec  entry 0x080a58ec  size 20
.thumb
.org 0xa58ec
FUN_080a58ec:
	push {lr}	@ 000a58ec 00b5
.org 0xa58ee
	ldr r2, [pc, #16]	@ 000a58ee 044a
.org 0xa58f0
	ldrb r1, [r0, #16]	@ 000a58f0 017c
.org 0xa58f2
	lsls r1, r1, #2	@ 000a58f2 8900
.org 0xa58f4
	adds r1, r1, r2	@ 000a58f4 8918
.org 0xa58f6
	ldr r1, [r1, #0]	@ 000a58f6 0968
.org 0xa58f8
	bl 0x128f80	@ 000a58f8 83f042fb
.org 0xa58fc
	pop {r0}	@ 000a58fc 01bc
.org 0xa58fe
	bx r0	@ 000a58fe 0047
