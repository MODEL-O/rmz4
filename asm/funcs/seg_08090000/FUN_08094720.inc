@ FUN_08094720  entry 0x08094720  size 136
.thumb
.org 0x94720
FUN_08094720:
	push {r4, r5, r6, r7, lr}	@ 00094720 f0b5
.org 0x94722
	mov r7, r8	@ 00094722 4746
.org 0x94724
	push {r7}	@ 00094724 80b4
.org 0x94726
	sub sp, #8	@ 00094726 82b0
.org 0x94728
	ldr r1, [r0, #88]	@ 00094728 816d
.org 0x9472a
	ldr r2, [pc, #112]	@ 0009472a 1c4a
.org 0x9472c
	adds r5, r1, r2	@ 0009472c 8d18
.org 0x9472e
	ldr r0, [r0, #84]	@ 0009472e 406d
.org 0x94730
	ldr r1, [pc, #108]	@ 00094730 1b49
.org 0x94732
	adds r0, r0, r1	@ 00094732 4018
.org 0x94734
	str r0, [sp, #0]	@ 00094734 0090
.org 0x94736
	movs r7, #0	@ 00094736 0027
.org 0x94738
	adds r6, r0, #0	@ 00094738 061c
.org 0x9473a
	movs r2, #128	@ 0009473a 8022
.org 0x9473c
	lsls r2, r2, #8	@ 0009473c 1202
.org 0x9473e
	mov r8, r2	@ 0009473e 9046
.org 0x94740
	adds r0, r6, #0	@ 00094740 301c
.org 0x94742
	adds r1, r5, #0	@ 00094742 291c
.org 0x94744
	bl 0x7c7c	@ 00094744 73f79afa
.org 0x94748
	lsls r0, r0, #16	@ 00094748 0004
.org 0x9474a
	lsrs r1, r0, #16	@ 0009474a 010c
.org 0x9474c
	cmp r1, #0	@ 0009474c 0029
.org 0x9474e
	beq.n 0x94762	@ 0009474e 08d0
.org 0x94750
	adds r0, r1, #0	@ 00094750 081c
.org 0x94752
	mov r2, r8	@ 00094752 4246
.org 0x94754
	ands r0, r2	@ 00094754 1040
.org 0x94756
	cmp r0, #0	@ 00094756 0028
.org 0x94758
	bne.n 0x94762	@ 00094758 03d1
.org 0x9475a
	movs r0, #15	@ 0009475a 0f20
.org 0x9475c
	ands r1, r0	@ 0009475c 0140
.org 0x9475e
	cmp r1, #15	@ 0009475e 0f29
.org 0x94760
	bne.n 0x94796	@ 00094760 19d1
.org 0x94762
	movs r0, #128	@ 00094762 8020
.org 0x94764
	lsls r0, r0, #5	@ 00094764 4001
.org 0x94766
	adds r6, r6, r0	@ 00094766 3618
.org 0x94768
	adds r7, #1	@ 00094768 0137
.org 0x9476a
	cmp r7, #0	@ 0009476a 002f
.org 0x9476c
	ble.n 0x94740	@ 0009476c e8dd
.org 0x9476e
	ldr r1, [sp, #0]	@ 0009476e 0099
.org 0x94770
	movs r2, #224	@ 00094770 e022
.org 0x94772
	lsls r2, r2, #4	@ 00094772 1201
.org 0x94774
	adds r0, r1, r2	@ 00094774 8818
.org 0x94776
	adds r1, r5, #0	@ 00094776 291c
.org 0x94778
	bl 0x7c7c	@ 00094778 73f780fa
.org 0x9477c
	lsls r0, r0, #16	@ 0009477c 0004
.org 0x9477e
	lsrs r1, r0, #16	@ 0009477e 010c
.org 0x94780
	cmp r1, #0	@ 00094780 0029
.org 0x94782
	beq.n 0x947a4	@ 00094782 0fd0
.org 0x94784
	movs r0, #128	@ 00094784 8020
.org 0x94786
	lsls r0, r0, #8	@ 00094786 0002
.org 0x94788
	ands r0, r1	@ 00094788 0840
.org 0x9478a
	cmp r0, #0	@ 0009478a 0028
.org 0x9478c
	bne.n 0x947a4	@ 0009478c 0ad1
.org 0x9478e
	movs r0, #15	@ 0009478e 0f20
.org 0x94790
	ands r1, r0	@ 00094790 0140
.org 0x94792
	cmp r1, #15	@ 00094792 0f29
.org 0x94794
	beq.n 0x947a4	@ 00094794 06d0
.org 0x94796
	movs r0, #1	@ 00094796 0120
.org 0x94798
	b.n 0x947a6	@ 00094798 05e0
.org 0x9479a
	.byte 0x00	@ 0009479a data
.org 0x9479b
	.byte 0x00	@ 0009479b data
.org 0x9479c
	.byte 0x00,0xe0,0xff,0xff	@ 0009479c data
.org 0x947a0
	.byte 0x00,0xf9,0xff,0xff	@ 000947a0 data
.org 0x947a4
	movs r0, #0	@ 000947a4 0020
.org 0x947a6
	add sp, #8	@ 000947a6 02b0
