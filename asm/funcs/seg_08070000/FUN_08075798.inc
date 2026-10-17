@ FUN_08075798  entry 0x08075798  size 164
.thumb
.org 0x75798
FUN_08075798:
	push {r4, r5, lr}	@ 00075798 30b5
.org 0x7579a
	adds r4, r0, #0	@ 0007579a 041c
.org 0x7579c
	ldrb r5, [r4, #14]	@ 0007579c a57b
.org 0x7579e
	cmp r5, #0	@ 0007579e 002d
.org 0x757a0
	bne.n 0x757b0	@ 000757a0 06d1
.org 0x757a2
	ldr r1, [pc, #112]	@ 000757a2 1c49
.org 0x757a4
	bl 0x1cf00	@ 000757a4 a7f7acfb
.org 0x757a8
	strb r5, [r4, #15]	@ 000757a8 e573
.org 0x757aa
	ldrb r0, [r4, #14]	@ 000757aa a07b
.org 0x757ac
	adds r0, #1	@ 000757ac 0130
.org 0x757ae
	strb r0, [r4, #14]	@ 000757ae a073
.org 0x757b0
	adds r0, r4, #0	@ 000757b0 201c
.org 0x757b2
	bl 0x1cff0	@ 000757b2 a7f71dfc
.org 0x757b6
	ldrb r0, [r4, #15]	@ 000757b6 e07b
.org 0x757b8
	cmp r0, #0	@ 000757b8 0028
.org 0x757ba
	bne.n 0x7582c	@ 000757ba 37d1
.org 0x757bc
	adds r0, r4, #0	@ 000757bc 201c
.org 0x757be
	adds r0, #115	@ 000757be 7330
.org 0x757c0
	ldrb r0, [r0, #0]	@ 000757c0 0078
.org 0x757c2
	cmp r0, #3	@ 000757c2 0328
.org 0x757c4
	bne.n 0x7583e	@ 000757c4 3bd1
.org 0x757c6
	ldr r1, [pc, #76]	@ 000757c6 1349
.org 0x757c8
	adds r0, r4, #0	@ 000757c8 201c
.org 0x757ca
	bl 0x1cf00	@ 000757ca a7f799fb
.org 0x757ce
	adds r0, r4, #0	@ 000757ce 201c
.org 0x757d0
	bl 0x1cff0	@ 000757d0 a7f70efc
.org 0x757d4
	movs r3, #0	@ 000757d4 0023
.org 0x757d6
	ldr r0, [pc, #64]	@ 000757d6 1048
.org 0x757d8
	ldr r2, [r0, #0]	@ 000757d8 0268
.org 0x757da
	ldr r1, [r4, #84]	@ 000757da 616d
.org 0x757dc
	ldr r0, [r2, #84]	@ 000757dc 506d
.org 0x757de
	cmp r1, r0	@ 000757de 8142
.org 0x757e0
	bge.n 0x757e4	@ 000757e0 00da
.org 0x757e2
	movs r3, #1	@ 000757e2 0123
.org 0x757e4
	adds r0, r4, #0	@ 000757e4 201c
.org 0x757e6
	adds r0, #76	@ 000757e6 4c30
.org 0x757e8
	strb r3, [r0, #0]	@ 000757e8 0370
.org 0x757ea
	movs r3, #0	@ 000757ea 0023
.org 0x757ec
	ldr r1, [r4, #84]	@ 000757ec 616d
.org 0x757ee
	ldr r0, [r2, #84]	@ 000757ee 506d
.org 0x757f0
	cmp r1, r0	@ 000757f0 8142
.org 0x757f2
	bge.n 0x757f6	@ 000757f2 00da
.org 0x757f4
	movs r3, #1	@ 000757f4 0123
.org 0x757f6
	adds r5, r4, #0	@ 000757f6 251c
.org 0x757f8
	adds r5, #74	@ 000757f8 4a35
.org 0x757fa
	lsls r2, r3, #4	@ 000757fa 1a01
.org 0x757fc
	ldrb r1, [r5, #0]	@ 000757fc 2978
.org 0x757fe
	movs r0, #17	@ 000757fe 1120
.org 0x75800
	negs r0, r0	@ 00075800 4042
.org 0x75802
	ands r0, r1	@ 00075802 0840
.org 0x75804
	orrs r0, r2	@ 00075804 1043
.org 0x75806
	strb r0, [r5, #0]	@ 00075806 2870
.org 0x75808
	cmp r3, #0	@ 00075808 002b
.org 0x7580a
	beq.n 0x7581c	@ 0007580a 07d0
.org 0x7580c
	ldrb r0, [r4, #10]	@ 0007580c a07a
.org 0x7580e
	movs r1, #16	@ 0007580e 1021
.org 0x75810
	orrs r0, r1	@ 00075810 0843
.org 0x75812
	b.n 0x75822	@ 00075812 06e0
.org 0x75814
	.byte 0x17,0xaf,0x00,0x00	@ 00075814 data
.org 0x75818
	.byte 0xf0,0xdb,0x02,0x02	@ 00075818 data
.org 0x7581c
	ldrb r1, [r4, #10]	@ 0007581c a17a
.org 0x7581e
	movs r0, #239	@ 0007581e ef20
.org 0x75820
	ands r0, r1	@ 00075820 0840
.org 0x75822
	strb r0, [r4, #10]	@ 00075822 a072
.org 0x75824
	ldrb r0, [r4, #15]	@ 00075824 e07b
.org 0x75826
	adds r0, #1	@ 00075826 0130
.org 0x75828
	strb r0, [r4, #15]	@ 00075828 e073
.org 0x7582a
	b.n 0x7583e	@ 0007582a 08e0
.org 0x7582c
	adds r0, r4, #0	@ 0007582c 201c
.org 0x7582e
	adds r0, #115	@ 0007582e 7330
.org 0x75830
	ldrb r0, [r0, #0]	@ 00075830 0078
.org 0x75832
	cmp r0, #3	@ 00075832 0328
.org 0x75834
	bne.n 0x7583e	@ 00075834 03d1
.org 0x75836
	movs r1, #0	@ 00075836 0021
.org 0x75838
	movs r0, #2	@ 00075838 0220
.org 0x7583a
	strb r0, [r4, #13]	@ 0007583a 6073
