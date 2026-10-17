@ FUN_0810e748  entry 0x0810e748  size 20
.thumb
.org 0x10e748
FUN_0810e748:
	push {lr}	@ 0010e748 00b5
.org 0x10e74a
	ldr r2, [pc, #16]	@ 0010e74a 044a
.org 0x10e74c
	ldrb r1, [r0, #12]	@ 0010e74c 017b
.org 0x10e74e
	lsls r1, r1, #2	@ 0010e74e 8900
.org 0x10e750
	adds r1, r1, r2	@ 0010e750 8918
.org 0x10e752
	ldr r1, [r1, #0]	@ 0010e752 0968
.org 0x10e754
	bl 0x128f80	@ 0010e754 1af014fc
.org 0x10e758
	pop {r0}	@ 0010e758 01bc
.org 0x10e75a
	bx r0	@ 0010e75a 0047
