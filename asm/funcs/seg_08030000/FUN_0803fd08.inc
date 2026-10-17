@ FUN_0803fd08  entry 0x0803fd08  size 20
.thumb
.org 0x3fd08
FUN_0803fd08:
	push {lr}	@ 0003fd08 00b5
.org 0x3fd0a
	ldr r2, [pc, #16]	@ 0003fd0a 044a
.org 0x3fd0c
	ldrb r1, [r0, #16]	@ 0003fd0c 017c
.org 0x3fd0e
	lsls r1, r1, #2	@ 0003fd0e 8900
.org 0x3fd10
	adds r1, r1, r2	@ 0003fd10 8918
.org 0x3fd12
	ldr r1, [r1, #0]	@ 0003fd12 0968
.org 0x3fd14
	bl 0x128f80	@ 0003fd14 e9f034f9
.org 0x3fd18
	pop {r0}	@ 0003fd18 01bc
.org 0x3fd1a
	bx r0	@ 0003fd1a 0047
