@ FUN_0804584c  entry 0x0804584c  size 20
.thumb
.org 0x4584c
FUN_0804584c:
	push {lr}	@ 0004584c 00b5
.org 0x4584e
	ldr r2, [pc, #16]	@ 0004584e 044a
.org 0x45850
	ldrb r1, [r0, #16]	@ 00045850 017c
.org 0x45852
	lsls r1, r1, #2	@ 00045852 8900
.org 0x45854
	adds r1, r1, r2	@ 00045854 8918
.org 0x45856
	ldr r1, [r1, #0]	@ 00045856 0968
.org 0x45858
	bl 0x128f80	@ 00045858 e3f092fb
.org 0x4585c
	pop {r0}	@ 0004585c 01bc
.org 0x4585e
	bx r0	@ 0004585e 0047
