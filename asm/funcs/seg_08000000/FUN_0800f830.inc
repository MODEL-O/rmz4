@ FUN_0800f830  entry 0x0800f830  size 54
.thumb
.org 0xf830
FUN_0800f830:
	push {lr}	@ 0000f830 00b5
.org 0xf832
	adds r2, r0, #0	@ 0000f832 021c
.org 0xf834
	adds r3, r1, #0	@ 0000f834 0b1c
.org 0xf836
	ldr r0, [pc, #36]	@ 0000f836 0948
.org 0xf838
	ldr r1, [pc, #36]	@ 0000f838 0949
.org 0xf83a
	adds r0, r0, r1	@ 0000f83a 4018
.org 0xf83c
	ldrb r1, [r0, #0]	@ 0000f83c 0178
.org 0xf83e
	movs r0, #15	@ 0000f83e 0f20
.org 0xf840
	ands r0, r1	@ 0000f840 0840
.org 0xf842
	cmp r0, #2	@ 0000f842 0228
.org 0xf844
	bne.n 0xf864	@ 0000f844 0ed1
.org 0xf846
	adds r0, r2, #0	@ 0000f846 101c
.org 0xf848
	adds r0, #108	@ 0000f848 6c30
.org 0xf84a
	ldrh r0, [r0, #0]	@ 0000f84a 0088
.org 0xf84c
	lsrs r0, r0, #4	@ 0000f84c 0009
.org 0xf84e
	str r0, [r2, #76]	@ 0000f84e d064
.org 0xf850
	adds r0, r2, #0	@ 0000f850 101c
.org 0xf852
	adds r1, r3, #0	@ 0000f852 191c
.org 0xf854
	bl 0x7638	@ 0000f854 f7f7f0fe
.org 0xf858
	b.n 0xf86c	@ 0000f858 08e0
.org 0xf85a
	.byte 0x00	@ 0000f85a data
.org 0xf85b
	.byte 0x00	@ 0000f85b data
.org 0xf85c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000f85c data
.org 0xf860
	.byte 0x10,0xc0,0x02,0x00	@ 0000f860 data
.org 0xf864
	adds r0, r2, #0	@ 0000f864 101c
