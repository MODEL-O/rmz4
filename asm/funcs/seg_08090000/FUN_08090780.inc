@ FUN_08090780  entry 0x08090780  size 222
.thumb
.org 0x90780
FUN_08090780:
	push {r4, r5, lr}	@ 00090780 30b5
.org 0x90782
	adds r4, r0, #0	@ 00090782 041c
.org 0x90784
	adds r0, #140	@ 00090784 8c30
.org 0x90786
	ldr r0, [r0, #0]	@ 00090786 0068
.org 0x90788
	movs r1, #128	@ 00090788 8021
.org 0x9078a
	lsls r1, r1, #2	@ 0009078a 8900
.org 0x9078c
	ands r0, r1	@ 0009078c 0840
.org 0x9078e
	cmp r0, #0	@ 0009078e 0028
.org 0x90790
	bne.n 0x9079c	@ 00090790 04d1
.org 0x90792
	ldrb r0, [r4, #13]	@ 00090792 607b
.org 0x90794
	adds r1, r0, #0	@ 00090794 011c
.org 0x90796
	adds r5, r0, #0	@ 00090796 051c
.org 0x90798
	cmp r1, #2	@ 00090798 0229
.org 0x9079a
	bls.n 0x907bc	@ 0009079a 0fd9
.org 0x9079c
	ldr r1, [pc, #24]	@ 0009079c 0649
.org 0x9079e
	ldrb r0, [r4, #9]	@ 0009079e 607a
.org 0x907a0
	lsls r0, r0, #2	@ 000907a0 8000
.org 0x907a2
	adds r0, r0, r1	@ 000907a2 4018
.org 0x907a4
	movs r1, #2	@ 000907a4 0221
.org 0x907a6
	str r1, [r4, #12]	@ 000907a6 e160
.org 0x907a8
	ldr r0, [r0, #0]	@ 000907a8 0068
.org 0x907aa
	ldr r0, [r0, #8]	@ 000907aa 8068
.org 0x907ac
	str r0, [r4, #20]	@ 000907ac 6061
.org 0x907ae
	adds r0, r4, #0	@ 000907ae 201c
.org 0x907b0
	bl 0x9086c	@ 000907b0 00f05cf8
.org 0x907b4
	b.n 0x90864	@ 000907b4 56e0
.org 0x907b6
	.byte 0x00	@ 000907b6 data
.org 0x907b7
	.byte 0x00	@ 000907b7 data
.org 0x907b8
	.byte 0x40,0xdb,0x85,0x08	@ 000907b8 data
.org 0x907bc
	cmp r1, #0	@ 000907bc 0029
.org 0x907be
	bne.n 0x90800	@ 000907be 1fd1
.org 0x907c0
	ldr r0, [pc, #56]	@ 000907c0 0e48
.org 0x907c2
	ldr r0, [r0, #0]	@ 000907c2 0068
.org 0x907c4
	ldr r3, [r4, #88]	@ 000907c4 a36d
.org 0x907c6
	ldr r2, [r0, #88]	@ 000907c6 826d
.org 0x907c8
	cmp r3, r2	@ 000907c8 9342
.org 0x907ca
	bge.n 0x90864	@ 000907ca 4bda
.org 0x907cc
	ldr r0, [r0, #84]	@ 000907cc 406d
.org 0x907ce
	ldr r1, [r4, #84]	@ 000907ce 616d
.org 0x907d0
	subs r0, r0, r1	@ 000907d0 401a
.org 0x907d2
	movs r1, #160	@ 000907d2 a021
.org 0x907d4
	lsls r1, r1, #7	@ 000907d4 c901
.org 0x907d6
	adds r0, r0, r1	@ 000907d6 4018
.org 0x907d8
	movs r1, #160	@ 000907d8 a021
.org 0x907da
	lsls r1, r1, #8	@ 000907da 0902
.org 0x907dc
	cmp r0, r1	@ 000907dc 8842
.org 0x907de
	bhi.n 0x90864	@ 000907de 41d8
.org 0x907e0
	subs r0, r2, r3	@ 000907e0 d01a
.org 0x907e2
	movs r2, #240	@ 000907e2 f022
.org 0x907e4
	lsls r2, r2, #7	@ 000907e4 d201
.org 0x907e6
	adds r0, r0, r2	@ 000907e6 8018
.org 0x907e8
	movs r1, #240	@ 000907e8 f021
.org 0x907ea
	lsls r1, r1, #8	@ 000907ea 0902
.org 0x907ec
	cmp r0, r1	@ 000907ec 8842
.org 0x907ee
	bhi.n 0x90864	@ 000907ee 39d8
.org 0x907f0
	adds r0, r5, #1	@ 000907f0 681c
.org 0x907f2
	strb r0, [r4, #13]	@ 000907f2 6073
.org 0x907f4
	movs r0, #64	@ 000907f4 4020
.org 0x907f6
	strb r0, [r4, #18]	@ 000907f6 a074
.org 0x907f8
	b.n 0x90864	@ 000907f8 34e0
.org 0x907fa
	.byte 0x00	@ 000907fa data
.org 0x907fb
	.byte 0x00	@ 000907fb data
.org 0x907fc
	.byte 0xf0,0xdb,0x02,0x02	@ 000907fc data
.org 0x90800
	cmp r1, #1	@ 00090800 0129
.org 0x90802
	bne.n 0x90840	@ 00090802 1dd1
.org 0x90804
	ldrb r0, [r4, #18]	@ 00090804 a07c
.org 0x90806
	lsrs r1, r0, #1	@ 00090806 4108
.org 0x90808
	movs r2, #1	@ 00090808 0122
.org 0x9080a
	ands r1, r2	@ 0009080a 1140
.org 0x9080c
	adds r2, r0, #0	@ 0009080c 021c
.org 0x9080e
	cmp r1, #0	@ 0009080e 0029
.org 0x90810
	bne.n 0x90820	@ 00090810 06d1
.org 0x90812
	adds r1, r4, #0	@ 00090812 211c
.org 0x90814
	adds r1, #180	@ 00090814 b431
.org 0x90816
	ldr r0, [r1, #0]	@ 00090816 0868
.org 0x90818
	movs r3, #128	@ 00090818 8023
.org 0x9081a
	lsls r3, r3, #1	@ 0009081a 5b00
.org 0x9081c
	adds r0, r0, r3	@ 0009081c c018
.org 0x9081e
	b.n 0x90826	@ 0009081e 02e0
.org 0x90820
	adds r1, r4, #0	@ 00090820 211c
.org 0x90822
	adds r1, #180	@ 00090822 b431
.org 0x90824
	ldr r0, [r1, #0]	@ 00090824 0868
.org 0x90826
	str r0, [r4, #84]	@ 00090826 6065
.org 0x90828
	subs r0, r2, #1	@ 00090828 501e
.org 0x9082a
	strb r0, [r4, #18]	@ 0009082a a074
.org 0x9082c
	lsls r0, r0, #24	@ 0009082c 0006
.org 0x9082e
	lsrs r0, r0, #24	@ 0009082e 000e
.org 0x90830
	cmp r0, #255	@ 00090830 ff28
.org 0x90832
	bne.n 0x90864	@ 00090832 17d1
.org 0x90834
	ldr r0, [r1, #0]	@ 00090834 0868
.org 0x90836
	str r0, [r4, #84]	@ 00090836 6065
.org 0x90838
	movs r0, #0	@ 00090838 0020
.org 0x9083a
	str r0, [r4, #96]	@ 0009083a 2066
.org 0x9083c
	adds r0, r5, #1	@ 0009083c 681c
.org 0x9083e
	b.n 0x90862	@ 0009083e 10e0
.org 0x90840
	ldr r1, [r4, #88]	@ 00090840 a16d
.org 0x90842
	ldr r0, [r4, #96]	@ 00090842 206e
.org 0x90844
	adds r1, r1, r0	@ 00090844 0918
.org 0x90846
	str r1, [r4, #88]	@ 00090846 a165
.org 0x90848
	adds r0, #64	@ 00090848 4030
.org 0x9084a
	str r0, [r4, #96]	@ 0009084a 2066
.org 0x9084c
	ldr r0, [r4, #84]	@ 0009084c 606d
.org 0x9084e
	movs r2, #128	@ 0009084e 8022
.org 0x90850
	lsls r2, r2, #5	@ 00090850 5201
.org 0x90852
	adds r1, r1, r2	@ 00090852 8918
.org 0x90854
	bl 0x7c7c	@ 00090854 77f712fa
.org 0x90858
	lsls r0, r0, #16	@ 00090858 0004
.org 0x9085a
	cmp r0, #0	@ 0009085a 0028
.org 0x9085c
	beq.n 0x90864	@ 0009085c 02d0
