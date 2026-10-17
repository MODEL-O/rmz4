@ FUN_0803c86c  entry 0x0803c86c  size 30
.thumb
.org 0x3c86c
FUN_0803c86c:
	push {lr}	@ 0003c86c 00b5
.org 0x3c86e
	ldr r0, [r0, #20]	@ 0003c86e 4069
.org 0x3c870
	movs r1, #4	@ 0003c870 0421
.org 0x3c872
	ands r0, r1	@ 0003c872 0840
.org 0x3c874
	cmp r0, #0	@ 0003c874 0028
.org 0x3c876
	beq.n 0x3c886	@ 0003c876 06d0
.org 0x3c878
	ldr r2, [pc, #16]	@ 0003c878 044a
.org 0x3c87a
	ldrh r1, [r2, #30]	@ 0003c87a d18b
.org 0x3c87c
	ldr r0, [pc, #16]	@ 0003c87c 0448
.org 0x3c87e
	cmp r1, r0	@ 0003c87e 8142
.org 0x3c880
	bhi.n 0x3c886	@ 0003c880 01d8
.org 0x3c882
	adds r0, r1, #1	@ 0003c882 481c
.org 0x3c884
	strh r0, [r2, #30]	@ 0003c884 d083
.org 0x3c886
	pop {r0}	@ 0003c886 01bc
.org 0x3c888
	bx r0	@ 0003c888 0047
