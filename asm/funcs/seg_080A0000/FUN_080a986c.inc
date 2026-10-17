@ FUN_080a986c  entry 0x080a986c  size 174
.thumb
.org 0xa986c
FUN_080a986c:
	push {r4, r5, r6, lr}	@ 000a986c 70b5
.org 0xa986e
	adds r4, r0, #0	@ 000a986e 041c
.org 0xa9870
	adds r0, #140	@ 000a9870 8c30
.org 0xa9872
	ldr r0, [r0, #0]	@ 000a9872 0068
.org 0xa9874
	movs r1, #128	@ 000a9874 8021
.org 0xa9876
	lsls r1, r1, #2	@ 000a9876 8900
.org 0xa9878
	ands r0, r1	@ 000a9878 0840
.org 0xa987a
	cmp r0, #0	@ 000a987a 0028
.org 0xa987c
	beq.n 0xa989c	@ 000a987c 0ed0
.org 0xa987e
	ldr r1, [pc, #24]	@ 000a987e 0649
.org 0xa9880
	ldrb r0, [r4, #9]	@ 000a9880 607a
.org 0xa9882
	lsls r0, r0, #2	@ 000a9882 8000
.org 0xa9884
	adds r0, r0, r1	@ 000a9884 4018
.org 0xa9886
	movs r1, #2	@ 000a9886 0221
.org 0xa9888
	str r1, [r4, #12]	@ 000a9888 e160
.org 0xa988a
	ldr r0, [r0, #0]	@ 000a988a 0068
.org 0xa988c
	ldr r0, [r0, #8]	@ 000a988c 8068
.org 0xa988e
	str r0, [r4, #20]	@ 000a988e 6061
.org 0xa9890
	adds r0, r4, #0	@ 000a9890 201c
.org 0xa9892
	bl 0xa9928	@ 000a9892 00f049f8
.org 0xa9896
	b.n 0xa991c	@ 000a9896 41e0
.org 0xa9898
	.byte 0x40,0xdb,0x85,0x08	@ 000a9898 data
.org 0xa989c
	adds r0, r4, #0	@ 000a989c 201c
.org 0xa989e
	adds r0, #183	@ 000a989e b730
.org 0xa98a0
	ldrb r0, [r0, #0]	@ 000a98a0 0078
.org 0xa98a2
	cmp r0, #0	@ 000a98a2 0028
.org 0xa98a4
	bne.n 0xa9906	@ 000a98a4 2fd1
.org 0xa98a6
	adds r0, r4, #0	@ 000a98a6 201c
.org 0xa98a8
	bl 0xaa064	@ 000a98a8 00f0dcfb
.org 0xa98ac
	adds r0, r4, #0	@ 000a98ac 201c
.org 0xa98ae
	adds r0, #192	@ 000a98ae c030
.org 0xa98b0
	ldr r0, [r0, #0]	@ 000a98b0 0068
.org 0xa98b2
	cmp r0, #0	@ 000a98b2 0028
.org 0xa98b4
	bne.n 0xa98d8	@ 000a98b4 10d1
.org 0xa98b6
	adds r0, r4, #0	@ 000a98b6 201c
.org 0xa98b8
	adds r0, #182	@ 000a98b8 b630
.org 0xa98ba
	ldrb r1, [r0, #0]	@ 000a98ba 0178
.org 0xa98bc
	adds r5, r0, #0	@ 000a98bc 051c
.org 0xa98be
	cmp r1, #1	@ 000a98be 0129
.org 0xa98c0
	bne.n 0xa98e8	@ 000a98c0 12d1
.org 0xa98c2
	ldr r0, [pc, #16]	@ 000a98c2 0448
.org 0xa98c4
	ldrb r1, [r4, #13]	@ 000a98c4 617b
.org 0xa98c6
	lsls r1, r1, #2	@ 000a98c6 8900
.org 0xa98c8
	adds r1, r1, r0	@ 000a98c8 0918
.org 0xa98ca
	ldr r1, [r1, #0]	@ 000a98ca 0968
.org 0xa98cc
	adds r0, r4, #0	@ 000a98cc 201c
.org 0xa98ce
	bl 0x128f80	@ 000a98ce 7ff057fb
.org 0xa98d2
	b.n 0xa98e8	@ 000a98d2 09e0
.org 0xa98d4
	.byte 0x58,0x29,0x86,0x08	@ 000a98d4 data
.org 0xa98d8
	adds r0, r4, #0	@ 000a98d8 201c
.org 0xa98da
	bl 0xaa0ec	@ 000a98da 00f007fc
.org 0xa98de
	adds r0, r4, #0	@ 000a98de 201c
.org 0xa98e0
	bl 0xaa03c	@ 000a98e0 00f0acfb
.org 0xa98e4
	adds r5, r4, #0	@ 000a98e4 251c
.org 0xa98e6
	adds r5, #182	@ 000a98e6 b635
.org 0xa98e8
	ldrb r6, [r5, #0]	@ 000a98e8 2e78
.org 0xa98ea
	cmp r6, #0	@ 000a98ea 002e
.org 0xa98ec
	bne.n 0xa9916	@ 000a98ec 13d1
.org 0xa98ee
	adds r0, r4, #0	@ 000a98ee 201c
.org 0xa98f0
	bl 0xa9c10	@ 000a98f0 00f08ef9
.org 0xa98f4
	lsls r0, r0, #24	@ 000a98f4 0006
.org 0xa98f6
	lsrs r0, r0, #24	@ 000a98f6 000e
.org 0xa98f8
	cmp r0, #1	@ 000a98f8 0128
.org 0xa98fa
	bne.n 0xa9916	@ 000a98fa 0cd1
.org 0xa98fc
	strb r0, [r5, #0]	@ 000a98fc 2870
.org 0xa98fe
	movs r0, #4	@ 000a98fe 0420
.org 0xa9900
	strb r0, [r4, #13]	@ 000a9900 6073
.org 0xa9902
	strb r6, [r4, #14]	@ 000a9902 a673
.org 0xa9904
	b.n 0xa9916	@ 000a9904 07e0
.org 0xa9906
	ldr r0, [pc, #28]	@ 000a9906 0748
.org 0xa9908
	ldrb r1, [r4, #13]	@ 000a9908 617b
.org 0xa990a
	lsls r1, r1, #2	@ 000a990a 8900
.org 0xa990c
	adds r1, r1, r0	@ 000a990c 0918
.org 0xa990e
	ldr r1, [r1, #0]	@ 000a990e 0968
.org 0xa9910
	adds r0, r4, #0	@ 000a9910 201c
.org 0xa9912
	bl 0x128f80	@ 000a9912 7ff035fb
.org 0xa9916
	adds r0, r4, #0	@ 000a9916 201c
.org 0xa9918
	bl 0x1cff0	@ 000a9918 73f76afb
