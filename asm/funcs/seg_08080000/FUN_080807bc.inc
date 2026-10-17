@ FUN_080807bc  entry 0x080807bc  size 196
.thumb
.org 0x807bc
FUN_080807bc:
	push {r4, r5, r6, lr}	@ 000807bc 70b5
.org 0x807be
	adds r6, r0, #0	@ 000807be 061c
.org 0x807c0
	movs r5, #0	@ 000807c0 0025
.org 0x807c2
	ldr r1, [pc, #188]	@ 000807c2 2f49
.org 0x807c4
	ldrb r0, [r6, #9]	@ 000807c4 707a
.org 0x807c6
	lsls r0, r0, #2	@ 000807c6 8000
.org 0x807c8
	adds r0, r0, r1	@ 000807c8 4018
.org 0x807ca
	movs r1, #1	@ 000807ca 0121
.org 0x807cc
	str r1, [r6, #12]	@ 000807cc f160
.org 0x807ce
	ldr r0, [r0, #0]	@ 000807ce 0068
.org 0x807d0
	ldr r0, [r0, #4]	@ 000807d0 4068
.org 0x807d2
	str r0, [r6, #20]	@ 000807d2 7061
.org 0x807d4
	strb r5, [r6, #13]	@ 000807d4 7573
.org 0x807d6
	strb r5, [r6, #14]	@ 000807d6 b573
.org 0x807d8
	strb r5, [r6, #15]	@ 000807d8 f573
.org 0x807da
	ldrb r0, [r6, #10]	@ 000807da b07a
.org 0x807dc
	orrs r0, r1	@ 000807dc 0843
.org 0x807de
	movs r1, #2	@ 000807de 0221
.org 0x807e0
	orrs r0, r1	@ 000807e0 0843
.org 0x807e2
	strb r0, [r6, #10]	@ 000807e2 b072
.org 0x807e4
	ldr r0, [r6, #84]	@ 000807e4 706d
.org 0x807e6
	ldr r1, [r6, #88]	@ 000807e6 b16d
.org 0x807e8
	bl 0x8534	@ 000807e8 87f7a4fe
.org 0x807ec
	str r0, [r6, #88]	@ 000807ec b065
.org 0x807ee
	adds r0, r6, #0	@ 000807ee 301c
.org 0x807f0
	adds r0, #180	@ 000807f0 b430
.org 0x807f2
	strb r5, [r0, #0]	@ 000807f2 0570
.org 0x807f4
	adds r1, r6, #0	@ 000807f4 311c
.org 0x807f6
	adds r1, #192	@ 000807f6 c031
.org 0x807f8
	ldr r0, [pc, #136]	@ 000807f8 2248
.org 0x807fa
	ldr r0, [r0, #0]	@ 000807fa 0068
.org 0x807fc
	ldr r0, [r0, #84]	@ 000807fc 406d
.org 0x807fe
	str r0, [r1, #0]	@ 000807fe 0860
.org 0x80800
	adds r0, r6, #0	@ 00080800 301c
.org 0x80802
	adds r0, #183	@ 00080802 b730
.org 0x80804
	strb r5, [r0, #0]	@ 00080804 0570
.org 0x80806
	str r5, [r6, #44]	@ 00080806 f562
.org 0x80808
	adds r0, r6, #0	@ 00080808 301c
.org 0x8080a
	bl 0x1cc9c	@ 0008080a 9cf747fa
.org 0x8080e
	ldrb r1, [r6, #10]	@ 0008080e b17a
.org 0x80810
	movs r0, #239	@ 00080810 ef20
.org 0x80812
	ands r0, r1	@ 00080812 0840
.org 0x80814
	strb r0, [r6, #10]	@ 00080814 b072
.org 0x80816
	adds r0, r6, #0	@ 00080816 301c
.org 0x80818
	adds r0, #76	@ 00080818 4c30
.org 0x8081a
	strb r5, [r0, #0]	@ 0008081a 0570
.org 0x8081c
	adds r2, r6, #0	@ 0008081c 321c
.org 0x8081e
	adds r2, #74	@ 0008081e 4a32
.org 0x80820
	ldrb r1, [r2, #0]	@ 00080820 1178
.org 0x80822
	movs r0, #17	@ 00080822 1120
.org 0x80824
	negs r0, r0	@ 00080824 4042
.org 0x80826
	ands r0, r1	@ 00080826 0840
.org 0x80828
	strb r0, [r2, #0]	@ 00080828 1070
.org 0x8082a
	movs r1, #192	@ 0008082a c021
.org 0x8082c
	lsls r1, r1, #5	@ 0008082c 4901
.org 0x8082e
	adds r0, r6, #0	@ 0008082e 301c
.org 0x80830
	bl 0x1cf00	@ 00080830 9cf766fb
.org 0x80834
	adds r0, r6, #0	@ 00080834 301c
.org 0x80836
	bl 0x1cff0	@ 00080836 9cf7dbfb
.org 0x8083a
	ldrb r1, [r6, #10]	@ 0008083a b17a
.org 0x8083c
	movs r0, #4	@ 0008083c 0420
.org 0x8083e
	orrs r0, r1	@ 0008083e 0843
.org 0x80840
	strb r0, [r6, #10]	@ 00080840 b072
.org 0x80842
	adds r4, r6, #0	@ 00080842 341c
.org 0x80844
	adds r4, #116	@ 00080844 7434
.org 0x80846
	ldr r1, [pc, #64]	@ 00080846 1049
.org 0x80848
	adds r2, r6, #0	@ 00080848 321c
.org 0x8084a
	adds r2, #84	@ 0008084a 5432
.org 0x8084c
	adds r0, r4, #0	@ 0008084c 201c
.org 0x8084e
	movs r3, #4	@ 0008084e 0423
.org 0x80850
	bl 0x5760	@ 00080850 84f786ff
.org 0x80854
	str r6, [r4, #44]	@ 00080854 e662
.org 0x80856
	ldr r0, [pc, #52]	@ 00080856 0d48
.org 0x80858
	str r0, [r4, #36]	@ 00080858 6062
.org 0x8085a
	adds r1, r6, #0	@ 0008085a 311c
.org 0x8085c
	adds r1, #184	@ 0008085c b831
.org 0x8085e
	adds r0, r6, #0	@ 0008085e 301c
.org 0x80860
	adds r0, #188	@ 00080860 bc30
.org 0x80862
	str r5, [r0, #0]	@ 00080862 0560
.org 0x80864
	str r5, [r1, #0]	@ 00080864 0d60
.org 0x80866
	subs r0, #6	@ 00080866 0638
.org 0x80868
	strb r5, [r0, #0]	@ 00080868 0570
.org 0x8086a
	subs r0, #1	@ 0008086a 0138
.org 0x8086c
	strb r5, [r0, #0]	@ 0008086c 0570
.org 0x8086e
	subs r1, #147	@ 0008086e 9339
.org 0x80870
	movs r0, #24	@ 00080870 1820
.org 0x80872
	strb r0, [r1, #0]	@ 00080872 0870
.org 0x80874
	adds r0, r6, #0	@ 00080874 301c
.org 0x80876
	bl 0x80890	@ 00080876 00f00bf8
.org 0x8087a
	pop {r4, r5, r6}	@ 0008087a 70bc
.org 0x8087c
	pop {r0}	@ 0008087c 01bc
.org 0x8087e
	bx r0	@ 0008087e 0047
