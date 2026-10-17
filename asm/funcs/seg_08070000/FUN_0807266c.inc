@ FUN_0807266c  entry 0x0807266c  size 258
.thumb
.org 0x7266c
FUN_0807266c:
	push {r4, r5, r6, lr}	@ 0007266c 70b5
.org 0x7266e
	sub sp, #16	@ 0007266e 84b0
.org 0x72670
	adds r6, r0, #0	@ 00072670 061c
.org 0x72672
	ldr r1, [pc, #192]	@ 00072672 3049
.org 0x72674
	mov r0, sp	@ 00072674 6846
.org 0x72676
	movs r2, #6	@ 00072676 0622
.org 0x72678
	bl 0x129258	@ 00072678 b6f0eefd
.org 0x7267c
	add r5, sp, #8	@ 0007267c 02ad
.org 0x7267e
	ldr r1, [pc, #184]	@ 0007267e 2e49
.org 0x72680
	adds r0, r5, #0	@ 00072680 281c
.org 0x72682
	movs r2, #6	@ 00072682 0622
.org 0x72684
	bl 0x129258	@ 00072684 b6f0e8fd
.org 0x72688
	adds r0, r6, #0	@ 00072688 301c
.org 0x7268a
	adds r0, #195	@ 0007268a c330
.org 0x7268c
	ldrb r4, [r0, #0]	@ 0007268c 0478
.org 0x7268e
	ldrb r0, [r6, #15]	@ 0007268e f07b
.org 0x72690
	cmp r0, #0	@ 00072690 0028
.org 0x72692
	bne.n 0x726b8	@ 00072692 11d1
.org 0x72694
	adds r0, r6, #0	@ 00072694 301c
.org 0x72696
	movs r1, #5	@ 00072696 0521
.org 0x72698
	bl 0x736c4	@ 00072698 01f014f8
.org 0x7269c
	lsls r1, r4, #1	@ 0007269c 6100
.org 0x7269e
	mov r2, sp	@ 0007269e 6a46
.org 0x726a0
	adds r0, r2, r1	@ 000726a0 5018
.org 0x726a2
	movs r2, #0	@ 000726a2 0022
.org 0x726a4
	ldrsh r0, [r0, r2]	@ 000726a4 805e
.org 0x726a6
	negs r0, r0	@ 000726a6 4042
.org 0x726a8
	str r0, [r6, #96]	@ 000726a8 3066
.org 0x726aa
	adds r1, r5, r1	@ 000726aa 6918
.org 0x726ac
	movs r2, #0	@ 000726ac 0022
.org 0x726ae
	ldrsh r0, [r1, r2]	@ 000726ae 885e
.org 0x726b0
	str r0, [r6, #104]	@ 000726b0 b066
.org 0x726b2
	ldrb r0, [r6, #15]	@ 000726b2 f07b
.org 0x726b4
	adds r0, #1	@ 000726b4 0130
.org 0x726b6
	strb r0, [r6, #15]	@ 000726b6 f073
.org 0x726b8
	adds r0, r6, #0	@ 000726b8 301c
.org 0x726ba
	bl 0x1cff0	@ 000726ba aaf799fc
.org 0x726be
	adds r0, r6, #0	@ 000726be 301c
.org 0x726c0
	adds r0, #116	@ 000726c0 7430
.org 0x726c2
	ldr r4, [pc, #120]	@ 000726c2 1e4c
.org 0x726c4
	ldr r3, [pc, #120]	@ 000726c4 1e4b
.org 0x726c6
	adds r1, r6, #0	@ 000726c6 311c
.org 0x726c8
	adds r1, #184	@ 000726c8 b831
.org 0x726ca
	ldrb r2, [r1, #0]	@ 000726ca 0a78
.org 0x726cc
	lsls r1, r2, #1	@ 000726cc 5100
.org 0x726ce
	adds r1, r1, r3	@ 000726ce c918
.org 0x726d0
	ldrh r1, [r1, #0]	@ 000726d0 0988
.org 0x726d2
	lsls r1, r1, #2	@ 000726d2 8900
.org 0x726d4
	adds r1, r1, r4	@ 000726d4 0919
.org 0x726d6
	adds r3, r6, #0	@ 000726d6 331c
.org 0x726d8
	adds r3, #113	@ 000726d8 7133
.org 0x726da
	movs r5, #0	@ 000726da 0025
.org 0x726dc
	ldrsb r5, [r3, r5]	@ 000726dc 5d57
.org 0x726de
	ldr r1, [r1, #0]	@ 000726de 0968
.org 0x726e0
	lsls r3, r5, #2	@ 000726e0 ab00
.org 0x726e2
	adds r3, r3, r1	@ 000726e2 5b18
.org 0x726e4
	ldr r4, [pc, #92]	@ 000726e4 174c
.org 0x726e6
	adds r1, r6, #0	@ 000726e6 311c
.org 0x726e8
	adds r1, #185	@ 000726e8 b931
.org 0x726ea
	ldrb r1, [r1, #0]	@ 000726ea 0978
.org 0x726ec
	lsls r1, r1, #2	@ 000726ec 8900
.org 0x726ee
	adds r1, r1, r4	@ 000726ee 0919
.org 0x726f0
	ldr r1, [r1, #0]	@ 000726f0 0968
.org 0x726f2
	lsls r2, r2, #2	@ 000726f2 9200
.org 0x726f4
	adds r2, r2, r1	@ 000726f4 5218
.org 0x726f6
	ldr r1, [r2, #0]	@ 000726f6 1168
.org 0x726f8
	adds r1, r1, r5	@ 000726f8 4919
.org 0x726fa
	ldrb r1, [r1, #0]	@ 000726fa 0978
.org 0x726fc
	lsls r2, r1, #1	@ 000726fc 4a00
.org 0x726fe
	adds r2, r2, r1	@ 000726fe 5218
.org 0x72700
	lsls r2, r2, #3	@ 00072700 d200
.org 0x72702
	ldr r1, [r3, #0]	@ 00072702 1968
.org 0x72704
	adds r1, r1, r2	@ 00072704 8918
.org 0x72706
	bl 0x5784	@ 00072706 93f73df8
.org 0x7270a
	adds r0, r6, #0	@ 0007270a 301c
.org 0x7270c
	adds r0, #115	@ 0007270c 7330
.org 0x7270e
	ldrb r0, [r0, #0]	@ 0007270e 0078
.org 0x72710
	cmp r0, #3	@ 00072710 0328
.org 0x72712
	bne.n 0x7275c	@ 00072712 23d1
.org 0x72714
	ldr r0, [r6, #88]	@ 00072714 b06d
.org 0x72716
	ldr r1, [r6, #96]	@ 00072716 316e
.org 0x72718
	adds r0, r0, r1	@ 00072718 4018
.org 0x7271a
	str r0, [r6, #88]	@ 0007271a b065
.org 0x7271c
	adds r0, r6, #0	@ 0007271c 301c
.org 0x7271e
	bl 0x737e8	@ 0007271e 01f063f8
.org 0x72722
	cmp r0, #0	@ 00072722 0028
.org 0x72724
	beq.n 0x72748	@ 00072724 10d0
.org 0x72726
	adds r0, r6, #0	@ 00072726 301c
.org 0x72728
	bl 0x739cc	@ 00072728 01f050f9
.org 0x7272c
	movs r0, #0	@ 0007272c 0020
.org 0x7272e
	str r0, [r6, #96]	@ 0007272e 3066
.org 0x72730
	b.n 0x72762	@ 00072730 17e0
.org 0x72732
	.byte 0x00	@ 00072732 data
.org 0x72733
	.byte 0x00	@ 00072733 data
.org 0x72734
	.byte 0x56,0x99,0x12,0x08	@ 00072734 data
.org 0x72738
	.byte 0x5c,0x99,0x12,0x08	@ 00072738 data
.org 0x7273c
	.byte 0x08,0xcb,0x85,0x08	@ 0007273c data
.org 0x72740
	.byte 0x04,0xcc,0x85,0x08	@ 00072740 data
.org 0x72744
	.byte 0xfc,0xcb,0x85,0x08	@ 00072744 data
.org 0x72748
	ldr r0, [r6, #96]	@ 00072748 306e
.org 0x7274a
	ldr r1, [r6, #104]	@ 0007274a b16e
.org 0x7274c
	adds r0, r0, r1	@ 0007274c 4018
.org 0x7274e
	str r0, [r6, #96]	@ 0007274e 3066
.org 0x72750
	movs r1, #224	@ 00072750 e021
.org 0x72752
	lsls r1, r1, #3	@ 00072752 c900
.org 0x72754
	cmp r0, r1	@ 00072754 8842
.org 0x72756
	ble.n 0x72762	@ 00072756 04dd
.org 0x72758
	str r1, [r6, #96]	@ 00072758 3166
.org 0x7275a
	b.n 0x72762	@ 0007275a 02e0
.org 0x7275c
	adds r0, r6, #0	@ 0007275c 301c
.org 0x7275e
	bl 0x73a68	@ 0007275e 01f083f9
.org 0x72762
	ldr r0, [r6, #96]	@ 00072762 306e
.org 0x72764
	negs r0, r0	@ 00072764 4042
.org 0x72766
	ldr r1, [r6, #104]	@ 00072766 b16e
.org 0x72768
	bl 0x128fb8	@ 00072768 b6f026fc
.org 0x7276c
	adds r0, #1	@ 0007276c 0130
