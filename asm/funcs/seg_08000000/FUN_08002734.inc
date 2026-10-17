@ FUN_08002734  entry 0x08002734  size 124
.thumb
.org 0x2734
FUN_08002734:
	push {r4, r5, r6, r7, lr}	@ 00002734 f0b5
.org 0x2736
	mov r7, r9	@ 00002736 4f46
.org 0x2738
	mov r6, r8	@ 00002738 4646
.org 0x273a
	push {r6, r7}	@ 0000273a c0b4
.org 0x273c
	ldr r5, [sp, #28]	@ 0000273c 079d
.org 0x273e
	lsls r0, r0, #24	@ 0000273e 0006
.org 0x2740
	lsls r2, r2, #24	@ 00002740 1206
.org 0x2742
	lsrs r0, r0, #28	@ 00002742 000f
.org 0x2744
	lsls r0, r0, #1	@ 00002744 4000
.org 0x2746
	ldr r4, [pc, #104]	@ 00002746 1a4c
.org 0x2748
	adds r0, r0, r4	@ 00002748 0019
.org 0x274a
	ldrh r4, [r0, #0]	@ 0000274a 0488
.org 0x274c
	movs r0, #248	@ 0000274c f820
.org 0x274e
	lsls r0, r0, #5	@ 0000274e 4001
.org 0x2750
	ands r0, r4	@ 00002750 2040
.org 0x2752
	lsls r0, r0, #3	@ 00002752 c000
.org 0x2754
	movs r4, #192	@ 00002754 c024
.org 0x2756
	lsls r4, r4, #19	@ 00002756 e404
.org 0x2758
	adds r6, r0, r4	@ 00002758 0619
.org 0x275a
	lsls r5, r5, #24	@ 0000275a 2d06
.org 0x275c
	asrs r5, r5, #19	@ 0000275c ed14
.org 0x275e
	lsls r3, r3, #24	@ 0000275e 1b06
.org 0x2760
	asrs r3, r3, #24	@ 00002760 1b16
.org 0x2762
	adds r5, r5, r3	@ 00002762 ed18
.org 0x2764
	lsls r5, r5, #1	@ 00002764 6d00
.org 0x2766
	adds r6, r6, r5	@ 00002766 7619
.org 0x2768
	lsrs r2, r2, #22	@ 00002768 920d
.org 0x276a
	adds r0, r2, r1	@ 0000276a 5018
.org 0x276c
	ldr r0, [r0, #0]	@ 0000276c 0068
.org 0x276e
	adds r1, r1, r0	@ 0000276e 0918
.org 0x2770
	adds r1, r1, r2	@ 00002770 8918
.org 0x2772
	ldrh r0, [r1, #4]	@ 00002772 8888
.org 0x2774
	ldrh r4, [r1, #6]	@ 00002774 cc88
.org 0x2776
	adds r5, r1, #0	@ 00002776 0d1c
.org 0x2778
	adds r5, #8	@ 00002778 0835
.org 0x277a
	cmp r4, #0	@ 0000277a 002c
.org 0x277c
	beq.n 0x27a4	@ 0000277c 12d0
.org 0x277e
	lsls r7, r0, #1	@ 0000277e 4700
.org 0x2780
	lsrs r0, r7, #1	@ 00002780 7808
.org 0x2782
	mov r8, r0	@ 00002782 8046
.org 0x2784
	ldr r3, [pc, #44]	@ 00002784 0b4b
.org 0x2786
	mov r9, r3	@ 00002786 9946
.org 0x2788
	adds r0, r5, #0	@ 00002788 281c
.org 0x278a
	adds r1, r6, #0	@ 0000278a 311c
.org 0x278c
	mov r2, r8	@ 0000278c 4246
.org 0x278e
	mov r3, r9	@ 0000278e 4b46
.org 0x2790
	ands r2, r3	@ 00002790 1a40
.org 0x2792
	bl 0x128be4	@ 00002792 26f127fa
.org 0x2796
	subs r0, r4, #1	@ 00002796 601e
.org 0x2798
	lsls r0, r0, #16	@ 00002798 0004
.org 0x279a
	lsrs r4, r0, #16	@ 0000279a 040c
.org 0x279c
	adds r5, r5, r7	@ 0000279c ed19
.org 0x279e
	adds r6, #64	@ 0000279e 4036
.org 0x27a0
	cmp r4, #0	@ 000027a0 002c
.org 0x27a2
	bne.n 0x2788	@ 000027a2 f1d1
.org 0x27a4
	pop {r3, r4}	@ 000027a4 18bc
.org 0x27a6
	mov r8, r3	@ 000027a6 9846
.org 0x27a8
	mov r9, r4	@ 000027a8 a146
.org 0x27aa
	pop {r4, r5, r6, r7}	@ 000027aa f0bc
.org 0x27ac
	pop {r0}	@ 000027ac 01bc
.org 0x27ae
	bx r0	@ 000027ae 0047
