@ FUN_0803fd20  entry 0x0803fd20  size 20
.thumb
.org 0x3fd20
FUN_0803fd20:
	push {lr}	@ 0003fd20 00b5
.org 0x3fd22
	ldr r2, [pc, #16]	@ 0003fd22 044a
.org 0x3fd24
	ldrb r1, [r0, #16]	@ 0003fd24 017c
.org 0x3fd26
	lsls r1, r1, #2	@ 0003fd26 8900
.org 0x3fd28
	adds r1, r1, r2	@ 0003fd28 8918
.org 0x3fd2a
	ldr r1, [r1, #0]	@ 0003fd2a 0968
.org 0x3fd2c
	bl 0x128f80	@ 0003fd2c e9f028f9
.org 0x3fd30
	pop {r0}	@ 0003fd30 01bc
.org 0x3fd32
	bx r0	@ 0003fd32 0047
