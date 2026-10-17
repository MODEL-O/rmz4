@ FUN_08037678  entry 0x08037678  size 146
.thumb
.org 0x37678
FUN_08037678:
	push {r4, r5, r6, lr}	@ 00037678 70b5
.org 0x3767a
	adds r4, r0, #0	@ 0003767a 041c
.org 0x3767c
	movs r1, #167	@ 0003767c a721
.org 0x3767e
	lsls r1, r1, #1	@ 0003767e 4900
.org 0x37680
	adds r0, r4, r1	@ 00037680 6018
.org 0x37682
	movs r6, #3	@ 00037682 0326
.org 0x37684
	strb r6, [r0, #0]	@ 00037684 0670
.org 0x37686
	ldrb r0, [r4, #30]	@ 00037686 a07f
.org 0x37688
	lsls r0, r0, #8	@ 00037688 0002
.org 0x3768a
	adds r1, r4, #0	@ 0003768a 211c
.org 0x3768c
	adds r1, #112	@ 0003768c 7031
.org 0x3768e
	ldrb r1, [r1, #0]	@ 0003768e 0978
.org 0x37690
	orrs r1, r0	@ 00037690 0143
.org 0x37692
	movs r2, #140	@ 00037692 8c22
.org 0x37694
	lsls r2, r2, #6	@ 00037694 9201
.org 0x37696
	cmp r1, r2	@ 00037696 9142
.org 0x37698
	beq.n 0x376a2	@ 00037698 03d0
.org 0x3769a
	adds r0, r4, #0	@ 0003769a 201c
.org 0x3769c
	adds r1, r2, #0	@ 0003769c 111c
.org 0x3769e
	bl 0x1cf00	@ 0003769e e5f72ffc
.org 0x376a2
	movs r0, #129	@ 000376a2 8120
.org 0x376a4
	lsls r0, r0, #1	@ 000376a4 4000
.org 0x376a6
	adds r5, r4, r0	@ 000376a6 2518
.org 0x376a8
	ldrb r0, [r5, #0]	@ 000376a8 2878
.org 0x376aa
	cmp r0, #0	@ 000376aa 0028
.org 0x376ac
	bne.n 0x376be	@ 000376ac 07d1
.org 0x376ae
	adds r0, r4, #0	@ 000376ae 201c
.org 0x376b0
	movs r1, #3	@ 000376b0 0321
.org 0x376b2
	bl 0x3d374	@ 000376b2 05f05ffe
.org 0x376b6
	ldrb r0, [r5, #0]	@ 000376b6 2878
.org 0x376b8
	adds r0, #1	@ 000376b8 0130
.org 0x376ba
	strb r0, [r5, #0]	@ 000376ba 2870
.org 0x376bc
	b.n 0x3770a	@ 000376bc 25e0
.org 0x376be
	movs r0, #162	@ 000376be a220
.org 0x376c0
	lsls r0, r0, #1	@ 000376c0 4000
.org 0x376c2
	adds r1, r4, r0	@ 000376c2 2118
.org 0x376c4
	adds r0, r4, #0	@ 000376c4 201c
.org 0x376c6
	bl 0x39fd8	@ 000376c6 02f087fc
.org 0x376ca
	lsls r0, r0, #24	@ 000376ca 0006
.org 0x376cc
	lsrs r0, r0, #24	@ 000376cc 000e
.org 0x376ce
	cmp r0, #1	@ 000376ce 0128
.org 0x376d0
	bne.n 0x376f0	@ 000376d0 0ed1
.org 0x376d2
	movs r1, #128	@ 000376d2 8021
.org 0x376d4
	lsls r1, r1, #1	@ 000376d4 4900
.org 0x376d6
	adds r0, r4, r1	@ 000376d6 6018
.org 0x376d8
	strb r6, [r0, #0]	@ 000376d8 0670
.org 0x376da
	ldr r0, [pc, #16]	@ 000376da 0448
.org 0x376dc
	adds r1, r4, r0	@ 000376dc 2118
.org 0x376de
	movs r0, #0	@ 000376de 0020
.org 0x376e0
	strb r0, [r1, #0]	@ 000376e0 0870
.org 0x376e2
	adds r0, r4, #0	@ 000376e2 201c
.org 0x376e4
	bl 0x36efc	@ 000376e4 fff70afc
.org 0x376e8
	b.n 0x3770a	@ 000376e8 0fe0
.org 0x376ea
	.byte 0x00	@ 000376ea data
.org 0x376eb
	.byte 0x00	@ 000376eb data
.org 0x376ec
	.byte 0x01,0x01,0x00,0x00	@ 000376ec data
.org 0x376f0
	ldr r1, [pc, #28]	@ 000376f0 0749
.org 0x376f2
	adds r0, r4, r1	@ 000376f2 6018
.org 0x376f4
	ldrb r2, [r0, #0]	@ 000376f4 0278
.org 0x376f6
	cmp r2, #0	@ 000376f6 002a
.org 0x376f8
	bne.n 0x3770a	@ 000376f8 07d1
.org 0x376fa
	ldr r0, [pc, #24]	@ 000376fa 0648
.org 0x376fc
	adds r1, r4, r0	@ 000376fc 2118
.org 0x376fe
	movs r0, #2	@ 000376fe 0220
.org 0x37700
	strb r0, [r1, #0]	@ 00037700 0870
.org 0x37702
	strb r2, [r5, #0]	@ 00037702 2a70
.org 0x37704
	adds r0, r4, #0	@ 00037704 201c
.org 0x37706
	bl 0x37718	@ 00037706 00f007f8
