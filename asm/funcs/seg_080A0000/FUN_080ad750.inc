@ FUN_080ad750  entry 0x080ad750  size 20
.thumb
.org 0xad750
FUN_080ad750:
	push {lr}	@ 000ad750 00b5
.org 0xad752
	ldr r2, [pc, #16]	@ 000ad752 044a
.org 0xad754
	ldrb r1, [r0, #16]	@ 000ad754 017c
.org 0xad756
	lsls r1, r1, #2	@ 000ad756 8900
.org 0xad758
	adds r1, r1, r2	@ 000ad758 8918
.org 0xad75a
	ldr r1, [r1, #0]	@ 000ad75a 0968
.org 0xad75c
	bl 0x128f80	@ 000ad75c 7bf010fc
.org 0xad760
	pop {r0}	@ 000ad760 01bc
.org 0xad762
	bx r0	@ 000ad762 0047
