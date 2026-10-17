@ FUN_080156f8  entry 0x080156f8  size 148
.thumb
.org 0x156f8
FUN_080156f8:
	push {r4, lr}	@ 000156f8 10b5
.org 0x156fa
	adds r2, r0, #0	@ 000156fa 021c
.org 0x156fc
	ldr r0, [pc, #108]	@ 000156fc 1b48
.org 0x156fe
	ldr r1, [pc, #112]	@ 000156fe 1c49
.org 0x15700
	adds r0, r0, r1	@ 00015700 4018
.org 0x15702
	ldrb r1, [r0, #0]	@ 00015702 0178
.org 0x15704
	movs r0, #15	@ 00015704 0f20
.org 0x15706
	ands r0, r1	@ 00015706 0840
.org 0x15708
	cmp r0, #1	@ 00015708 0128
.org 0x1570a
	bne.n 0x15784	@ 0001570a 3bd1
.org 0x1570c
	ldrb r3, [r2, #14]	@ 0001570c 937b
.org 0x1570e
	adds r1, r3, #0	@ 0001570e 191c
.org 0x15710
	ldr r4, [pc, #96]	@ 00015710 184c
.org 0x15712
	cmp r1, #0	@ 00015712 0029
.org 0x15714
	bne.n 0x1572a	@ 00015714 09d1
.org 0x15716
	ldr r0, [pc, #96]	@ 00015716 1848
.org 0x15718
	strh r0, [r4, #0]	@ 00015718 2080
.org 0x1571a
	ldr r0, [pc, #96]	@ 0001571a 1848
.org 0x1571c
	strh r0, [r4, #2]	@ 0001571c 6080
.org 0x1571e
	movs r0, #160	@ 0001571e a020
.org 0x15720
	lsls r0, r0, #5	@ 00015720 4001
.org 0x15722
	str r0, [r2, #104]	@ 00015722 9066
.org 0x15724
	strh r1, [r2, #16]	@ 00015724 1182
.org 0x15726
	adds r0, r3, #1	@ 00015726 581c
.org 0x15728
	strb r0, [r2, #14]	@ 00015728 9073
.org 0x1572a
	ldrh r0, [r2, #16]	@ 0001572a 108a
.org 0x1572c
	adds r0, #4	@ 0001572c 0430
.org 0x1572e
	strh r0, [r2, #16]	@ 0001572e 1082
.org 0x15730
	lsls r0, r0, #16	@ 00015730 0004
.org 0x15732
	lsrs r0, r0, #16	@ 00015732 000c
.org 0x15734
	cmp r0, #255	@ 00015734 ff28
.org 0x15736
	bls.n 0x15742	@ 00015736 04d9
.org 0x15738
	movs r0, #0	@ 00015738 0020
.org 0x1573a
	strh r0, [r2, #16]	@ 0001573a 1082
.org 0x1573c
	movs r0, #160	@ 0001573c a020
.org 0x1573e
	lsls r0, r0, #5	@ 0001573e 4001
.org 0x15740
	str r0, [r2, #104]	@ 00015740 9066
.org 0x15742
	ldr r1, [pc, #60]	@ 00015742 0f49
.org 0x15744
	ldrb r0, [r2, #16]	@ 00015744 107c
.org 0x15746
	lsls r0, r0, #1	@ 00015746 4000
.org 0x15748
	adds r0, r0, r1	@ 00015748 4018
.org 0x1574a
	movs r1, #0	@ 0001574a 0021
.org 0x1574c
	ldrsh r0, [r0, r1]	@ 0001574c 405e
.org 0x1574e
	ldr r1, [r2, #104]	@ 0001574e 916e
.org 0x15750
	adds r1, r1, r0	@ 00015750 0918
.org 0x15752
	str r1, [r2, #104]	@ 00015752 9166
.org 0x15754
	asrs r2, r1, #10	@ 00015754 8a12
.org 0x15756
	movs r0, #31	@ 00015756 1f20
.org 0x15758
	ands r2, r0	@ 00015758 0240
.org 0x1575a
	movs r0, #160	@ 0001575a a020
.org 0x1575c
	lsls r0, r0, #5	@ 0001575c 4001
.org 0x1575e
	subs r0, r0, r1	@ 0001575e 401a
.org 0x15760
	asrs r0, r0, #10	@ 00015760 8012
.org 0x15762
	adds r0, #12	@ 00015762 0c30
.org 0x15764
	lsls r0, r0, #8	@ 00015764 0002
.org 0x15766
	orrs r2, r0	@ 00015766 0243
.org 0x15768
	strh r2, [r4, #2]	@ 00015768 6280
.org 0x1576a
	b.n 0x1579e	@ 0001576a 18e0
.org 0x1576c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001576c data
.org 0x15770
	.byte 0x10,0xc0,0x02,0x00	@ 00015770 data
.org 0x15774
	.byte 0x40,0x0a,0x00,0x02	@ 00015774 data
.org 0x15778
	.byte 0x44,0x3b,0x00,0x00	@ 00015778 data
.org 0x1577c
	.byte 0x08,0x0c,0x00,0x00	@ 0001577c data
.org 0x15780
	.byte 0x0c,0x93,0x12,0x08	@ 00015780 data
.org 0x15784
	ldrb r4, [r2, #14]	@ 00015784 947b
.org 0x15786
	adds r3, r4, #0	@ 00015786 231c
.org 0x15788
	cmp r3, #0	@ 00015788 002b
.org 0x1578a
	bne.n 0x1579e	@ 0001578a 08d1
