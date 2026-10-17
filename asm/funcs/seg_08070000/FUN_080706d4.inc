@ FUN_080706d4  entry 0x080706d4  size 132
.thumb
.org 0x706d4
FUN_080706d4:
	push {r4, r5, r6, lr}	@ 000706d4 70b5
.org 0x706d6
	adds r6, r0, #0	@ 000706d6 061c
.org 0x706d8
	ldrb r0, [r6, #15]	@ 000706d8 f07b
.org 0x706da
	cmp r0, #0	@ 000706da 0028
.org 0x706dc
	bne.n 0x706ec	@ 000706dc 06d1
.org 0x706de
	adds r0, r6, #0	@ 000706de 301c
.org 0x706e0
	movs r1, #18	@ 000706e0 1221
.org 0x706e2
	bl 0x736c4	@ 000706e2 02f0efff
.org 0x706e6
	ldrb r0, [r6, #15]	@ 000706e6 f07b
.org 0x706e8
	adds r0, #1	@ 000706e8 0130
.org 0x706ea
	strb r0, [r6, #15]	@ 000706ea f073
.org 0x706ec
	adds r0, r6, #0	@ 000706ec 301c
.org 0x706ee
	bl 0x1cff0	@ 000706ee acf77ffc
.org 0x706f2
	adds r0, r6, #0	@ 000706f2 301c
.org 0x706f4
	adds r0, #116	@ 000706f4 7430
.org 0x706f6
	ldr r4, [pc, #96]	@ 000706f6 184c
.org 0x706f8
	ldr r3, [pc, #96]	@ 000706f8 184b
.org 0x706fa
	adds r1, r6, #0	@ 000706fa 311c
.org 0x706fc
	adds r1, #184	@ 000706fc b831
.org 0x706fe
	ldrb r2, [r1, #0]	@ 000706fe 0a78
.org 0x70700
	lsls r1, r2, #1	@ 00070700 5100
.org 0x70702
	adds r1, r1, r3	@ 00070702 c918
.org 0x70704
	ldrh r1, [r1, #0]	@ 00070704 0988
.org 0x70706
	lsls r1, r1, #2	@ 00070706 8900
.org 0x70708
	adds r1, r1, r4	@ 00070708 0919
.org 0x7070a
	adds r3, r6, #0	@ 0007070a 331c
.org 0x7070c
	adds r3, #113	@ 0007070c 7133
.org 0x7070e
	movs r5, #0	@ 0007070e 0025
.org 0x70710
	ldrsb r5, [r3, r5]	@ 00070710 5d57
.org 0x70712
	ldr r1, [r1, #0]	@ 00070712 0968
.org 0x70714
	lsls r3, r5, #2	@ 00070714 ab00
.org 0x70716
	adds r3, r3, r1	@ 00070716 5b18
.org 0x70718
	ldr r4, [pc, #68]	@ 00070718 114c
.org 0x7071a
	adds r1, r6, #0	@ 0007071a 311c
.org 0x7071c
	adds r1, #185	@ 0007071c b931
.org 0x7071e
	ldrb r1, [r1, #0]	@ 0007071e 0978
.org 0x70720
	lsls r1, r1, #2	@ 00070720 8900
.org 0x70722
	adds r1, r1, r4	@ 00070722 0919
.org 0x70724
	ldr r1, [r1, #0]	@ 00070724 0968
.org 0x70726
	lsls r2, r2, #2	@ 00070726 9200
.org 0x70728
	adds r2, r2, r1	@ 00070728 5218
.org 0x7072a
	ldr r1, [r2, #0]	@ 0007072a 1168
.org 0x7072c
	adds r1, r1, r5	@ 0007072c 4919
.org 0x7072e
	ldrb r1, [r1, #0]	@ 0007072e 0978
.org 0x70730
	lsls r2, r1, #1	@ 00070730 4a00
.org 0x70732
	adds r2, r2, r1	@ 00070732 5218
.org 0x70734
	lsls r2, r2, #3	@ 00070734 d200
.org 0x70736
	ldr r1, [r3, #0]	@ 00070736 1968
.org 0x70738
	adds r1, r1, r2	@ 00070738 8918
.org 0x7073a
	bl 0x5784	@ 0007073a 95f723f8
.org 0x7073e
	adds r0, r6, #0	@ 0007073e 301c
.org 0x70740
	adds r0, #115	@ 00070740 7330
.org 0x70742
	ldrb r0, [r0, #0]	@ 00070742 0078
.org 0x70744
	cmp r0, #3	@ 00070744 0328
.org 0x70746
	bne.n 0x70752	@ 00070746 04d1
.org 0x70748
	ldrb r0, [r6, #14]	@ 00070748 b07b
.org 0x7074a
	adds r0, #1	@ 0007074a 0130
.org 0x7074c
	movs r1, #0	@ 0007074c 0021
.org 0x7074e
	strb r0, [r6, #14]	@ 0007074e b073
.org 0x70750
	strb r1, [r6, #15]	@ 00070750 f173
.org 0x70752
	pop {r4, r5, r6}	@ 00070752 70bc
.org 0x70754
	pop {r0}	@ 00070754 01bc
.org 0x70756
	bx r0	@ 00070756 0047
