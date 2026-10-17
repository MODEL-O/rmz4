@ FUN_080737e8  entry 0x080737e8  size 88
.thumb
.org 0x737e8
FUN_080737e8:
	push {r4, r5, r6, r7, lr}	@ 000737e8 f0b5
.org 0x737ea
	sub sp, #8	@ 000737ea 82b0
.org 0x737ec
	ldr r2, [r0, #84]	@ 000737ec 426d
.org 0x737ee
	ldr r0, [r0, #88]	@ 000737ee 806d
.org 0x737f0
	ldr r1, [pc, #68]	@ 000737f0 1149
.org 0x737f2
	adds r3, r0, r1	@ 000737f2 4318
.org 0x737f4
	ldr r1, [pc, #68]	@ 000737f4 1149
.org 0x737f6
	adds r5, r0, r1	@ 000737f6 4518
.org 0x737f8
	movs r7, #0	@ 000737f8 0027
.org 0x737fa
	ldr r0, [pc, #68]	@ 000737fa 1148
.org 0x737fc
	adds r6, r2, r0	@ 000737fc 1618
.org 0x737fe
	adds r0, r6, #0	@ 000737fe 301c
.org 0x73800
	adds r1, r5, #0	@ 00073800 291c
.org 0x73802
	str r2, [sp, #0]	@ 00073802 0092
.org 0x73804
	str r3, [sp, #4]	@ 00073804 0193
.org 0x73806
	bl 0x7c7c	@ 00073806 94f739fa
.org 0x7380a
	lsls r0, r0, #16	@ 0007380a 0004
.org 0x7380c
	ldr r2, [sp, #0]	@ 0007380c 009a
.org 0x7380e
	ldr r3, [sp, #4]	@ 0007380e 019b
.org 0x73810
	cmp r0, #0	@ 00073810 0028
.org 0x73812
	bne.n 0x73844	@ 00073812 17d1
.org 0x73814
	movs r1, #128	@ 00073814 8021
.org 0x73816
	lsls r1, r1, #5	@ 00073816 4901
.org 0x73818
	adds r6, r6, r1	@ 00073818 7618
.org 0x7381a
	adds r7, #1	@ 0007381a 0137
.org 0x7381c
	cmp r7, #1	@ 0007381c 012f
.org 0x7381e
	ble.n 0x737fe	@ 0007381e eedd
.org 0x73820
	movs r1, #160	@ 00073820 a021
.org 0x73822
	lsls r1, r1, #4	@ 00073822 0901
.org 0x73824
	adds r0, r2, r1	@ 00073824 5018
.org 0x73826
	adds r1, r5, #0	@ 00073826 291c
.org 0x73828
	bl 0x7c7c	@ 00073828 94f728fa
.org 0x7382c
	lsls r0, r0, #16	@ 0007382c 0004
.org 0x7382e
	cmp r0, #0	@ 0007382e 0028
.org 0x73830
	bne.n 0x73844	@ 00073830 08d1
.org 0x73832
	movs r0, #0	@ 00073832 0020
.org 0x73834
	b.n 0x73846	@ 00073834 07e0
.org 0x73836
	.byte 0x00	@ 00073836 data
.org 0x73837
	.byte 0x00	@ 00073837 data
.org 0x73838
	.byte 0x00,0xf2,0xff,0xff	@ 00073838 data
.org 0x7383c
	.byte 0x00,0xe4,0xff,0xff	@ 0007383c data
