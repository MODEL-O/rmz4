@ FUN_080e971c  entry 0x080e971c  size 54
.thumb
.org 0xe971c
FUN_080e971c:
	push {lr}	@ 000e971c 00b5
.org 0xe971e
	adds r2, r0, #0	@ 000e971e 021c
.org 0xe9720
	adds r0, #140	@ 000e9720 8c30
.org 0xe9722
	ldr r0, [r0, #0]	@ 000e9722 0068
.org 0xe9724
	movs r1, #128	@ 000e9724 8021
.org 0xe9726
	lsls r1, r1, #2	@ 000e9726 8900
.org 0xe9728
	ands r0, r1	@ 000e9728 0840
.org 0xe972a
	cmp r0, #0	@ 000e972a 0028
.org 0xe972c
	beq.n 0xe974c	@ 000e972c 0ed0
.org 0xe972e
	ldr r1, [pc, #24]	@ 000e972e 0649
.org 0xe9730
	ldrb r0, [r2, #9]	@ 000e9730 507a
.org 0xe9732
	lsls r0, r0, #2	@ 000e9732 8000
.org 0xe9734
	adds r0, r0, r1	@ 000e9734 4018
.org 0xe9736
	movs r1, #2	@ 000e9736 0221
.org 0xe9738
	str r1, [r2, #12]	@ 000e9738 d160
.org 0xe973a
	ldr r0, [r0, #0]	@ 000e973a 0068
.org 0xe973c
	ldr r0, [r0, #8]	@ 000e973c 8068
.org 0xe973e
	str r0, [r2, #20]	@ 000e973e 5061
.org 0xe9740
	adds r0, r2, #0	@ 000e9740 101c
.org 0xe9742
	bl 0xe9758	@ 000e9742 00f009f8
.org 0xe9746
	b.n 0xe9752	@ 000e9746 04e0
.org 0xe9748
	.byte 0xfc,0x92,0x86,0x08	@ 000e9748 data
.org 0xe974c
	adds r0, r2, #0	@ 000e974c 101c
.org 0xe974e
	bl 0x1cff0	@ 000e974e 33f74ffc
