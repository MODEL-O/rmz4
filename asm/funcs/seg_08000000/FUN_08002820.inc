@ FUN_08002820  entry 0x08002820  size 54
.thumb
.org 0x2820
FUN_08002820:
	push {lr}	@ 00002820 00b5
.org 0x2822
	sub sp, #4	@ 00002822 81b0
.org 0x2824
	ldr r1, [pc, #48]	@ 00002824 0c49
.org 0x2826
	ldr r0, [pc, #52]	@ 00002826 0d48
.org 0x2828
	adds r2, r1, r0	@ 00002828 0a18
.org 0x282a
	movs r0, #130	@ 0000282a 8220
.org 0x282c
	lsls r0, r0, #5	@ 0000282c 4001
.org 0x282e
	str r0, [r2, #0]	@ 0000282e 1060
.org 0x2830
	movs r2, #128	@ 00002830 8022
.org 0x2832
	lsls r2, r2, #3	@ 00002832 d200
.org 0x2834
	adds r0, r1, r2	@ 00002834 8818
.org 0x2836
	str r1, [r0, #0]	@ 00002836 0160
.org 0x2838
	movs r0, #128	@ 00002838 8020
.org 0x283a
	lsls r0, r0, #2	@ 0000283a 8000
.org 0x283c
	str r0, [sp, #0]	@ 0000283c 0090
.org 0x283e
	ldr r0, [pc, #32]	@ 0000283e 0848
.org 0x2840
	mov r2, sp	@ 00002840 6a46
.org 0x2842
	str r2, [r0, #0]	@ 00002842 0260
.org 0x2844
	str r1, [r0, #4]	@ 00002844 4160
.org 0x2846
	ldr r1, [pc, #28]	@ 00002846 0749
.org 0x2848
	str r1, [r0, #8]	@ 00002848 8160
.org 0x284a
	ldr r0, [r0, #8]	@ 0000284a 8068
.org 0x284c
	bl 0x2868	@ 0000284c 00f00cf8
.org 0x2850
	add sp, #4	@ 00002850 01b0
.org 0x2852
	pop {r0}	@ 00002852 01bc
.org 0x2854
	bx r0	@ 00002854 0047
