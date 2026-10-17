@ FUN_08087768  entry 0x08087768  size 20
.thumb
.org 0x87768
FUN_08087768:
	push {lr}	@ 00087768 00b5
.org 0x8776a
	ldr r2, [pc, #16]	@ 0008776a 044a
.org 0x8776c
	ldrb r1, [r0, #14]	@ 0008776c 817b
.org 0x8776e
	lsls r1, r1, #2	@ 0008776e 8900
.org 0x87770
	adds r1, r1, r2	@ 00087770 8918
.org 0x87772
	ldr r1, [r1, #0]	@ 00087772 0968
.org 0x87774
	bl 0x128f80	@ 00087774 a1f004fc
.org 0x87778
	pop {r0}	@ 00087778 01bc
.org 0x8777a
	bx r0	@ 0008777a 0047
