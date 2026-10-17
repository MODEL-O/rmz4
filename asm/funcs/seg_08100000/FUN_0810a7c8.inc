@ FUN_0810a7c8  entry 0x0810a7c8  size 176
.thumb
.org 0x10a7c8
FUN_0810a7c8:
	push {r4, r5, lr}	@ 0010a7c8 30b5
.org 0x10a7ca
	adds r4, r0, #0	@ 0010a7ca 041c
.org 0x10a7cc
	ldr r5, [r4, #40]	@ 0010a7cc a56a
.org 0x10a7ce
	ldr r1, [pc, #40]	@ 0010a7ce 0a49
.org 0x10a7d0
	adds r0, r5, r1	@ 0010a7d0 6818
.org 0x10a7d2
	ldr r0, [r0, #0]	@ 0010a7d2 0068
.org 0x10a7d4
	mov ip, r0	@ 0010a7d4 8446
.org 0x10a7d6
	ldrb r2, [r4, #17]	@ 0010a7d6 627c
.org 0x10a7d8
	cmp r2, #2	@ 0010a7d8 022a
.org 0x10a7da
	bhi.n 0x10a816	@ 0010a7da 1cd8
.org 0x10a7dc
	adds r0, #180	@ 0010a7dc b430
.org 0x10a7de
	ldrb r1, [r0, #12]	@ 0010a7de 017b
.org 0x10a7e0
	adds r3, r0, #0	@ 0010a7e0 031c
.org 0x10a7e2
	cmp r1, r2	@ 0010a7e2 9142
.org 0x10a7e4
	bne.n 0x10a7fc	@ 0010a7e4 0ad1
.org 0x10a7e6
	adds r2, r4, #0	@ 0010a7e6 221c
.org 0x10a7e8
	adds r2, #73	@ 0010a7e8 4932
.org 0x10a7ea
	ldrb r0, [r2, #0]	@ 0010a7ea 1078
.org 0x10a7ec
	movs r1, #13	@ 0010a7ec 0d21
.org 0x10a7ee
	negs r1, r1	@ 0010a7ee 4942
.org 0x10a7f0
	ands r1, r0	@ 0010a7f0 0140
.org 0x10a7f2
	movs r0, #4	@ 0010a7f2 0420
.org 0x10a7f4
	b.n 0x10a80a	@ 0010a7f4 09e0
.org 0x10a7f6
	.byte 0x00	@ 0010a7f6 data
.org 0x10a7f7
	.byte 0x00	@ 0010a7f7 data
.org 0x10a7f8
	.byte 0xa8,0x63,0x00,0x00	@ 0010a7f8 data
.org 0x10a7fc
	adds r2, r4, #0	@ 0010a7fc 221c
.org 0x10a7fe
	adds r2, #73	@ 0010a7fe 4932
.org 0x10a800
	ldrb r0, [r2, #0]	@ 0010a800 1078
.org 0x10a802
	movs r1, #13	@ 0010a802 0d21
.org 0x10a804
	negs r1, r1	@ 0010a804 4942
.org 0x10a806
	ands r1, r0	@ 0010a806 0140
.org 0x10a808
	movs r0, #8	@ 0010a808 0820
.org 0x10a80a
	orrs r1, r0	@ 0010a80a 0143
.org 0x10a80c
	strb r1, [r2, #0]	@ 0010a80c 1170
.org 0x10a80e
	movs r0, #224	@ 0010a80e e020
.org 0x10a810
	lsls r0, r0, #6	@ 0010a810 8001
.org 0x10a812
	str r0, [r4, #84]	@ 0010a812 6065
.org 0x10a814
	b.n 0x10a852	@ 0010a814 1de0
.org 0x10a816
	mov r0, ip	@ 0010a816 6046
.org 0x10a818
	adds r0, #180	@ 0010a818 b430
.org 0x10a81a
	ldrb r2, [r0, #13]	@ 0010a81a 427b
.org 0x10a81c
	ldrb r1, [r4, #17]	@ 0010a81c 617c
.org 0x10a81e
	subs r1, #3	@ 0010a81e 0339
.org 0x10a820
	adds r3, r0, #0	@ 0010a820 031c
.org 0x10a822
	cmp r2, r1	@ 0010a822 8a42
.org 0x10a824
	bne.n 0x10a836	@ 0010a824 07d1
.org 0x10a826
	adds r2, r4, #0	@ 0010a826 221c
.org 0x10a828
	adds r2, #73	@ 0010a828 4932
.org 0x10a82a
	ldrb r0, [r2, #0]	@ 0010a82a 1078
.org 0x10a82c
	movs r1, #13	@ 0010a82c 0d21
.org 0x10a82e
	negs r1, r1	@ 0010a82e 4942
.org 0x10a830
	ands r1, r0	@ 0010a830 0140
.org 0x10a832
	movs r0, #4	@ 0010a832 0420
.org 0x10a834
	b.n 0x10a844	@ 0010a834 06e0
.org 0x10a836
	adds r2, r4, #0	@ 0010a836 221c
.org 0x10a838
	adds r2, #73	@ 0010a838 4932
.org 0x10a83a
	ldrb r0, [r2, #0]	@ 0010a83a 1078
.org 0x10a83c
	movs r1, #13	@ 0010a83c 0d21
.org 0x10a83e
	negs r1, r1	@ 0010a83e 4942
.org 0x10a840
	ands r1, r0	@ 0010a840 0140
.org 0x10a842
	movs r0, #8	@ 0010a842 0820
.org 0x10a844
	orrs r1, r0	@ 0010a844 0143
.org 0x10a846
	strb r1, [r2, #0]	@ 0010a846 1170
.org 0x10a848
	movs r0, #224	@ 0010a848 e020
.org 0x10a84a
	lsls r0, r0, #6	@ 0010a84a 8001
.org 0x10a84c
	str r0, [r4, #84]	@ 0010a84c 6065
.org 0x10a84e
	movs r0, #192	@ 0010a84e c020
.org 0x10a850
	lsls r0, r0, #7	@ 0010a850 c001
.org 0x10a852
	str r0, [r4, #88]	@ 0010a852 a065
.org 0x10a854
	ldrb r0, [r4, #17]	@ 0010a854 607c
.org 0x10a856
	cmp r0, #5	@ 0010a856 0528
.org 0x10a858
	bls.n 0x10a85c	@ 0010a858 00d9
.org 0x10a85a
	b.n 0x10aa08	@ 0010a85a d5e0
.org 0x10a85c
	lsls r0, r0, #2	@ 0010a85c 8000
.org 0x10a85e
	ldr r1, [pc, #8]	@ 0010a85e 0249
.org 0x10a860
	adds r0, r0, r1	@ 0010a860 4018
.org 0x10a862
	ldr r0, [r0, #0]	@ 0010a862 0068
.org 0x10a864
	mov pc, r0	@ 0010a864 8746
.org 0x10a866
	.byte 0x00	@ 0010a866 data
.org 0x10a867
	.byte 0x00	@ 0010a867 data
.org 0x10a868
	.byte 0x6c,0xa8,0x10,0x08	@ 0010a868 data
.org 0x10a86c
	.byte 0x84,0xa8,0x10,0x08	@ 0010a86c data
.org 0x10a870
	.byte 0x8a,0xa8,0x10,0x08	@ 0010a870 data
.org 0x10a874
	.byte 0xa8,0xa8,0x10,0x08	@ 0010a874 data
