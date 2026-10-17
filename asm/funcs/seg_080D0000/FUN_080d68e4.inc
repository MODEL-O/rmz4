@ FUN_080d68e4  entry 0x080d68e4  size 20
.thumb
.org 0xd68e4
FUN_080d68e4:
	push {lr}	@ 000d68e4 00b5
.org 0xd68e6
	ldr r2, [pc, #16]	@ 000d68e6 044a
.org 0xd68e8
	ldrb r1, [r0, #16]	@ 000d68e8 017c
.org 0xd68ea
	lsls r1, r1, #2	@ 000d68ea 8900
.org 0xd68ec
	adds r1, r1, r2	@ 000d68ec 8918
.org 0xd68ee
	ldr r1, [r1, #0]	@ 000d68ee 0968
.org 0xd68f0
	bl 0x128f80	@ 000d68f0 52f046fb
.org 0xd68f4
	pop {r0}	@ 000d68f4 01bc
.org 0xd68f6
	bx r0	@ 000d68f6 0047
