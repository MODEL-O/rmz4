@ FUN_08073850  entry 0x08073850  size 90
.thumb
.org 0x73850
FUN_08073850:
	push {r4, r5, r6, r7, lr}	@ 00073850 f0b5
.org 0x73852
	sub sp, #8	@ 00073852 82b0
.org 0x73854
	ldr r2, [r0, #84]	@ 00073854 426d
.org 0x73856
	ldr r0, [r0, #88]	@ 00073856 806d
.org 0x73858
	ldr r1, [pc, #68]	@ 00073858 1149
.org 0x7385a
	adds r3, r0, r1	@ 0007385a 4318
.org 0x7385c
	movs r0, #224	@ 0007385c e020
.org 0x7385e
	lsls r0, r0, #4	@ 0007385e 0001
.org 0x73860
	adds r5, r3, r0	@ 00073860 1d18
.org 0x73862
	movs r7, #0	@ 00073862 0027
.org 0x73864
	ldr r1, [pc, #60]	@ 00073864 0f49
.org 0x73866
	adds r6, r2, r1	@ 00073866 5618
.org 0x73868
	adds r0, r6, #0	@ 00073868 301c
.org 0x7386a
	adds r1, r5, #0	@ 0007386a 291c
.org 0x7386c
	str r2, [sp, #0]	@ 0007386c 0092
.org 0x7386e
	str r3, [sp, #4]	@ 0007386e 0193
.org 0x73870
	bl 0x7c7c	@ 00073870 94f704fa
.org 0x73874
	lsls r0, r0, #16	@ 00073874 0004
.org 0x73876
	ldr r2, [sp, #0]	@ 00073876 009a
.org 0x73878
	ldr r3, [sp, #4]	@ 00073878 019b
.org 0x7387a
	cmp r0, #0	@ 0007387a 0028
.org 0x7387c
	bne.n 0x738a8	@ 0007387c 14d1
.org 0x7387e
	movs r0, #128	@ 0007387e 8020
.org 0x73880
	lsls r0, r0, #5	@ 00073880 4001
.org 0x73882
	adds r6, r6, r0	@ 00073882 3618
.org 0x73884
	adds r7, #1	@ 00073884 0137
.org 0x73886
	cmp r7, #1	@ 00073886 012f
.org 0x73888
	ble.n 0x73868	@ 00073888 eedd
.org 0x7388a
	movs r1, #160	@ 0007388a a021
.org 0x7388c
	lsls r1, r1, #4	@ 0007388c 0901
.org 0x7388e
	adds r0, r2, r1	@ 0007388e 5018
.org 0x73890
	adds r1, r5, #0	@ 00073890 291c
.org 0x73892
	bl 0x7c7c	@ 00073892 94f7f3f9
.org 0x73896
	lsls r0, r0, #16	@ 00073896 0004
.org 0x73898
	cmp r0, #0	@ 00073898 0028
.org 0x7389a
	bne.n 0x738a8	@ 0007389a 05d1
.org 0x7389c
	movs r0, #0	@ 0007389c 0020
.org 0x7389e
	b.n 0x738aa	@ 0007389e 04e0
.org 0x738a0
	.byte 0x00,0xf2,0xff,0xff	@ 000738a0 data
.org 0x738a4
	.byte 0x00,0xf6,0xff,0xff	@ 000738a4 data
.org 0x738a8
	movs r0, #1	@ 000738a8 0120
