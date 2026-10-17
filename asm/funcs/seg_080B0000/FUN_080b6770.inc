@ FUN_080b6770  entry 0x080b6770  size 366
.thumb
.org 0xb6770
FUN_080b6770:
	push {r4, r5, r6, r7, lr}	@ 000b6770 f0b5
.org 0xb6772
	sub sp, #20	@ 000b6772 85b0
.org 0xb6774
	adds r4, r0, #0	@ 000b6774 041c
.org 0xb6776
	ldr r0, [pc, #96]	@ 000b6776 1848
.org 0xb6778
	ldr r1, [r0, #4]	@ 000b6778 4168
.org 0xb677a
	ldr r0, [r0, #0]	@ 000b677a 0068
.org 0xb677c
	str r0, [sp, #4]	@ 000b677c 0190
.org 0xb677e
	str r1, [sp, #8]	@ 000b677e 0291
.org 0xb6780
	ldr r1, [pc, #88]	@ 000b6780 1649
.org 0xb6782
	mov r0, sp	@ 000b6782 6846
.org 0xb6784
	movs r2, #2	@ 000b6784 0222
.org 0xb6786
	bl 0x129258	@ 000b6786 72f067fd
.org 0xb678a
	ldr r7, [r4, #40]	@ 000b678a a76a
.org 0xb678c
	ldrb r6, [r4, #16]	@ 000b678c 267c
.org 0xb678e
	ldrb r0, [r4, #15]	@ 000b678e e07b
.org 0xb6790
	add r5, sp, #12	@ 000b6790 03ad
.org 0xb6792
	cmp r0, #0	@ 000b6792 0028
.org 0xb6794
	bne.n 0xb6858	@ 000b6794 60d1
.org 0xb6796
	ldr r0, [pc, #72]	@ 000b6796 1248
.org 0xb6798
	bl 0x2b10	@ 000b6798 4cf7baf9
.org 0xb679c
	adds r0, r4, #0	@ 000b679c 201c
.org 0xb679e
	adds r0, #116	@ 000b679e 7430
.org 0xb67a0
	mov r2, sp	@ 000b67a0 6a46
.org 0xb67a2
	adds r1, r2, r6	@ 000b67a2 9119
.org 0xb67a4
	ldrb r2, [r1, #0]	@ 000b67a4 0a78
.org 0xb67a6
	lsls r1, r2, #1	@ 000b67a6 5100
.org 0xb67a8
	adds r1, r1, r2	@ 000b67a8 8918
.org 0xb67aa
	lsls r1, r1, #3	@ 000b67aa c900
.org 0xb67ac
	ldr r2, [pc, #52]	@ 000b67ac 0d4a
.org 0xb67ae
	adds r1, r1, r2	@ 000b67ae 8918
.org 0xb67b0
	bl 0x5784	@ 000b67b0 4ef7e8ff
.org 0xb67b4
	lsls r0, r6, #2	@ 000b67b4 b000
.org 0xb67b6
	add r1, sp, #4	@ 000b67b6 01a9
.org 0xb67b8
	adds r0, r0, r1	@ 000b67b8 4018
.org 0xb67ba
	ldrh r1, [r0, #0]	@ 000b67ba 0188
.org 0xb67bc
	adds r0, r4, #0	@ 000b67bc 201c
.org 0xb67be
	bl 0x1cf00	@ 000b67be 66f79ffb
.org 0xb67c2
	cmp r6, #1	@ 000b67c2 012e
.org 0xb67c4
	bne.n 0xb67f0	@ 000b67c4 14d1
.org 0xb67c6
	ldr r0, [pc, #32]	@ 000b67c6 0848
.org 0xb67c8
	ldr r1, [r0, #0]	@ 000b67c8 0168
.org 0xb67ca
	ldr r0, [r1, #84]	@ 000b67ca 486d
.org 0xb67cc
	str r0, [sp, #12]	@ 000b67cc 0390
.org 0xb67ce
	ldr r0, [r1, #88]	@ 000b67ce 886d
.org 0xb67d0
	ldr r6, [pc, #24]	@ 000b67d0 064e
.org 0xb67d2
	adds r0, r0, r6	@ 000b67d2 8019
.org 0xb67d4
	b.n 0xb680a	@ 000b67d4 19e0
.org 0xb67d6
	.byte 0x00	@ 000b67d6 data
.org 0xb67d7
	.byte 0x00	@ 000b67d7 data
.org 0xb67d8
	.byte 0x6c,0x9e,0x12,0x08	@ 000b67d8 data
.org 0xb67dc
	.byte 0x68,0x9e,0x12,0x08	@ 000b67dc data
.org 0xb67e0
	.byte 0x9b,0x01,0x00,0x00	@ 000b67e0 data
.org 0xb67e4
	.byte 0xa8,0x3b,0x86,0x08	@ 000b67e4 data
.org 0xb67e8
	.byte 0xf0,0xdb,0x02,0x02	@ 000b67e8 data
.org 0xb67ec
	.byte 0x00,0xe8,0xff,0xff	@ 000b67ec data
.org 0xb67f0
	adds r0, r7, #0	@ 000b67f0 381c
.org 0xb67f2
	adds r0, #180	@ 000b67f2 b430
.org 0xb67f4
	ldr r0, [r0, #0]	@ 000b67f4 0068
.org 0xb67f6
	movs r1, #240	@ 000b67f6 f021
.org 0xb67f8
	lsls r1, r1, #7	@ 000b67f8 c901
.org 0xb67fa
	adds r0, r0, r1	@ 000b67fa 4018
.org 0xb67fc
	str r0, [sp, #12]	@ 000b67fc 0390
.org 0xb67fe
	adds r0, r7, #0	@ 000b67fe 381c
.org 0xb6800
	adds r0, #184	@ 000b6800 b830
.org 0xb6802
	ldr r0, [r0, #0]	@ 000b6802 0068
.org 0xb6804
	movs r2, #144	@ 000b6804 9022
.org 0xb6806
	lsls r2, r2, #7	@ 000b6806 d201
.org 0xb6808
	adds r0, r0, r2	@ 000b6808 8018
.org 0xb680a
	str r0, [r5, #4]	@ 000b680a 6860
.org 0xb680c
	adds r0, r4, #0	@ 000b680c 201c
.org 0xb680e
	adds r0, #84	@ 000b680e 5430
.org 0xb6810
	adds r1, r5, #0	@ 000b6810 291c
.org 0xb6812
	bl 0x10d3ac	@ 000b6812 56f0cbfd
.org 0xb6816
	lsls r0, r0, #24	@ 000b6816 0006
.org 0xb6818
	lsrs r0, r0, #24	@ 000b6818 000e
.org 0xb681a
	adds r2, r0, #0	@ 000b681a 021c
.org 0xb681c
	ldr r3, [pc, #140]	@ 000b681c 234b
.org 0xb681e
	adds r0, #64	@ 000b681e 4030
.org 0xb6820
	lsls r0, r0, #24	@ 000b6820 0006
.org 0xb6822
	lsrs r0, r0, #23	@ 000b6822 c00d
.org 0xb6824
	adds r0, r0, r3	@ 000b6824 c018
.org 0xb6826
	movs r6, #0	@ 000b6826 0026
.org 0xb6828
	ldrsh r1, [r0, r6]	@ 000b6828 815f
.org 0xb682a
	lsls r0, r1, #3	@ 000b682a c800
.org 0xb682c
	subs r0, r0, r1	@ 000b682c 401a
.org 0xb682e
	lsls r0, r0, #7	@ 000b682e c001
.org 0xb6830
	cmp r0, #0	@ 000b6830 0028
.org 0xb6832
	bge.n 0xb6836	@ 000b6832 00da
.org 0xb6834
	adds r0, #255	@ 000b6834 ff30
.org 0xb6836
	asrs r0, r0, #8	@ 000b6836 0012
.org 0xb6838
	str r0, [r4, #92]	@ 000b6838 e065
.org 0xb683a
	lsls r0, r2, #1	@ 000b683a 5000
.org 0xb683c
	adds r0, r0, r3	@ 000b683c c018
.org 0xb683e
	movs r2, #0	@ 000b683e 0022
.org 0xb6840
	ldrsh r1, [r0, r2]	@ 000b6840 815e
.org 0xb6842
	lsls r0, r1, #3	@ 000b6842 c800
.org 0xb6844
	subs r0, r0, r1	@ 000b6844 401a
.org 0xb6846
	lsls r0, r0, #7	@ 000b6846 c001
.org 0xb6848
	cmp r0, #0	@ 000b6848 0028
.org 0xb684a
	bge.n 0xb684e	@ 000b684a 00da
.org 0xb684c
	adds r0, #255	@ 000b684c ff30
.org 0xb684e
	asrs r0, r0, #8	@ 000b684e 0012
.org 0xb6850
	str r0, [r4, #96]	@ 000b6850 2066
.org 0xb6852
	ldrb r0, [r4, #15]	@ 000b6852 e07b
.org 0xb6854
	adds r0, #1	@ 000b6854 0130
.org 0xb6856
	strb r0, [r4, #15]	@ 000b6856 e073
.org 0xb6858
	adds r0, r4, #0	@ 000b6858 201c
.org 0xb685a
	bl 0x1cff0	@ 000b685a 66f7c9fb
.org 0xb685e
	ldr r2, [r4, #84]	@ 000b685e 626d
.org 0xb6860
	ldr r0, [r4, #92]	@ 000b6860 e06d
.org 0xb6862
	adds r2, r2, r0	@ 000b6862 1218
.org 0xb6864
	str r2, [r4, #84]	@ 000b6864 6265
.org 0xb6866
	ldr r1, [r4, #88]	@ 000b6866 a16d
.org 0xb6868
	ldr r0, [r4, #96]	@ 000b6868 206e
.org 0xb686a
	adds r1, r1, r0	@ 000b686a 0918
.org 0xb686c
	str r1, [r4, #88]	@ 000b686c a165
.org 0xb686e
	str r2, [sp, #12]	@ 000b686e 0392
.org 0xb6870
	movs r6, #128	@ 000b6870 8026
.org 0xb6872
	lsls r6, r6, #3	@ 000b6872 f600
.org 0xb6874
	adds r1, r1, r6	@ 000b6874 8919
.org 0xb6876
	str r1, [r5, #4]	@ 000b6876 6960
.org 0xb6878
	ldr r0, [sp, #12]	@ 000b6878 0398
.org 0xb687a
	bl 0x7c7c	@ 000b687a 51f7fff9
.org 0xb687e
	lsls r0, r0, #16	@ 000b687e 0004
.org 0xb6880
	lsrs r5, r0, #16	@ 000b6880 050c
.org 0xb6882
	cmp r5, #0	@ 000b6882 002d
.org 0xb6884
	beq.n 0xb68b4	@ 000b6884 16d0
.org 0xb6886
	ldr r1, [pc, #40]	@ 000b6886 0a49
.org 0xb6888
	ldrb r0, [r4, #9]	@ 000b6888 607a
.org 0xb688a
	lsls r0, r0, #2	@ 000b688a 8000
.org 0xb688c
	adds r0, r0, r1	@ 000b688c 4018
.org 0xb688e
	movs r1, #2	@ 000b688e 0221
.org 0xb6890
	str r1, [r4, #12]	@ 000b6890 e160
.org 0xb6892
	ldr r0, [r0, #0]	@ 000b6892 0068
.org 0xb6894
	ldr r0, [r0, #8]	@ 000b6894 8068
.org 0xb6896
	str r0, [r4, #20]	@ 000b6896 6061
.org 0xb6898
	movs r1, #0	@ 000b6898 0021
.org 0xb689a
	movs r0, #1	@ 000b689a 0120
.org 0xb689c
	strb r0, [r4, #13]	@ 000b689c 6073
.org 0xb689e
	strb r1, [r4, #14]	@ 000b689e a173
.org 0xb68a0
	strb r1, [r4, #15]	@ 000b68a0 e173
.org 0xb68a2
	adds r0, r4, #0	@ 000b68a2 201c
.org 0xb68a4
	bl 0xb690c	@ 000b68a4 00f032f8
.org 0xb68a8
	b.n 0xb68fa	@ 000b68a8 27e0
.org 0xb68aa
	.byte 0x00	@ 000b68aa data
.org 0xb68ab
	.byte 0x00	@ 000b68ab data
.org 0xb68ac
	.byte 0x0c,0x93,0x12,0x08	@ 000b68ac data
.org 0xb68b0
	.byte 0x40,0xdb,0x85,0x08	@ 000b68b0 data
.org 0xb68b4
	ldr r0, [pc, #76]	@ 000b68b4 1348
.org 0xb68b6
	adds r1, r4, #0	@ 000b68b6 211c
.org 0xb68b8
	adds r1, #84	@ 000b68b8 5431
.org 0xb68ba
	bl 0x1fb14	@ 000b68ba 69f72bf9
.org 0xb68be
	movs r1, #128	@ 000b68be 8021
.org 0xb68c0
	lsls r1, r1, #6	@ 000b68c0 8901
.org 0xb68c2
	cmp r0, r1	@ 000b68c2 8842
.org 0xb68c4
	bls.n 0xb68fa	@ 000b68c4 19d9
.org 0xb68c6
	ldrb r1, [r4, #10]	@ 000b68c6 a17a
.org 0xb68c8
	movs r0, #254	@ 000b68c8 fe20
.org 0xb68ca
	ands r0, r1	@ 000b68ca 0840
.org 0xb68cc
	movs r1, #253	@ 000b68cc fd21
.org 0xb68ce
	ands r0, r1	@ 000b68ce 0840
.org 0xb68d0
	strb r0, [r4, #10]	@ 000b68d0 a072
.org 0xb68d2
	adds r0, r4, #0	@ 000b68d2 201c
.org 0xb68d4
	adds r0, #140	@ 000b68d4 8c30
.org 0xb68d6
	str r5, [r0, #0]	@ 000b68d6 0560
.org 0xb68d8
	adds r0, #4	@ 000b68d8 0430
.org 0xb68da
	str r5, [r0, #0]	@ 000b68da 0560
.org 0xb68dc
	adds r0, #4	@ 000b68dc 0430
