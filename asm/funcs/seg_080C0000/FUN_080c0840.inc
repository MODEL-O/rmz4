@ FUN_080c0840  entry 0x080c0840  size 20
.thumb
.org 0xc0840
FUN_080c0840:
	push {lr}	@ 000c0840 00b5
.org 0xc0842
	ldr r2, [pc, #16]	@ 000c0842 044a
.org 0xc0844
	ldrb r1, [r0, #14]	@ 000c0844 817b
.org 0xc0846
	lsls r1, r1, #2	@ 000c0846 8900
.org 0xc0848
	adds r1, r1, r2	@ 000c0848 8918
.org 0xc084a
	ldr r1, [r1, #0]	@ 000c084a 0968
.org 0xc084c
	bl 0x128f80	@ 000c084c 68f098fb
.org 0xc0850
	pop {r0}	@ 000c0850 01bc
.org 0xc0852
	bx r0	@ 000c0852 0047
