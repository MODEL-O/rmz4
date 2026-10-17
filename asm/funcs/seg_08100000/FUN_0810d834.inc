@ FUN_0810d834  entry 0x0810d834  size 38
.thumb
.org 0x10d834
FUN_0810d834:
	push {lr}	@ 0010d834 00b5
.org 0x10d836
	adds r2, r0, #0	@ 0010d836 021c
.org 0x10d838
	movs r0, #1	@ 0010d838 0120
.org 0x10d83a
	b.n 0x10d84c	@ 0010d83a 07e0
.org 0x10d83c
	cmp r1, #252	@ 0010d83c fc29
.org 0x10d83e
	bne.n 0x10d84a	@ 0010d83e 04d1
.org 0x10d840
	lsls r0, r0, #16	@ 0010d840 0004
.org 0x10d842
	movs r1, #128	@ 0010d842 8021
.org 0x10d844
	lsls r1, r1, #9	@ 0010d844 4902
.org 0x10d846
	adds r0, r0, r1	@ 0010d846 4018
.org 0x10d848
	lsrs r0, r0, #16	@ 0010d848 000c
.org 0x10d84a
	adds r2, #1	@ 0010d84a 0132
.org 0x10d84c
	ldrb r1, [r2, #0]	@ 0010d84c 1178
.org 0x10d84e
	cmp r1, #252	@ 0010d84e fc29
.org 0x10d850
	bls.n 0x10d83c	@ 0010d850 f4d9
.org 0x10d852
	lsls r0, r0, #16	@ 0010d852 0004
.org 0x10d854
	asrs r0, r0, #16	@ 0010d854 0014
.org 0x10d856
	pop {r1}	@ 0010d856 02bc
.org 0x10d858
	bx r1	@ 0010d858 0847
