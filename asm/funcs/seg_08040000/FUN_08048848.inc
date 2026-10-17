@ FUN_08048848  entry 0x08048848  size 80
.thumb
.org 0x48848
FUN_08048848:
	push {r4, r5, r6, lr}	@ 00048848 70b5
.org 0x4884a
	adds r5, r0, #0	@ 0004884a 051c
.org 0x4884c
	ldr r6, [r5, #40]	@ 0004884c ae6a
.org 0x4884e
	movs r4, #0	@ 0004884e 0024
.org 0x48850
	adds r0, r6, #0	@ 00048850 301c
.org 0x48852
	adds r1, r5, #0	@ 00048852 291c
.org 0x48854
	adds r2, r4, #0	@ 00048854 221c
.org 0x48856
	bl 0x48314	@ 00048856 fff75dfd
.org 0x4885a
	adds r0, r4, #1	@ 0004885a 601c
.org 0x4885c
	lsls r0, r0, #24	@ 0004885c 0006
.org 0x4885e
	lsrs r4, r0, #24	@ 0004885e 040e
.org 0x48860
	cmp r4, #7	@ 00048860 072c
.org 0x48862
	bls.n 0x48850	@ 00048862 f5d9
.org 0x48864
	adds r0, r5, #0	@ 00048864 281c
.org 0x48866
	adds r0, #140	@ 00048866 8c30
.org 0x48868
	movs r1, #0	@ 00048868 0021
.org 0x4886a
	str r1, [r0, #0]	@ 0004886a 0160
.org 0x4886c
	adds r0, #4	@ 0004886c 0430
.org 0x4886e
	str r1, [r0, #0]	@ 0004886e 0160
.org 0x48870
	adds r0, #4	@ 00048870 0430
.org 0x48872
	strb r1, [r0, #0]	@ 00048872 0170
.org 0x48874
	ldrb r1, [r5, #10]	@ 00048874 a97a
.org 0x48876
	movs r0, #251	@ 00048876 fb20
.org 0x48878
	ands r0, r1	@ 00048878 0840
.org 0x4887a
	movs r1, #254	@ 0004887a fe21
.org 0x4887c
	ands r0, r1	@ 0004887c 0840
.org 0x4887e
	strb r0, [r5, #10]	@ 0004887e a872
.org 0x48880
	ldr r1, [pc, #20]	@ 00048880 0549
.org 0x48882
	ldrb r0, [r5, #9]	@ 00048882 687a
.org 0x48884
	lsls r0, r0, #2	@ 00048884 8000
.org 0x48886
	adds r0, r0, r1	@ 00048886 4018
.org 0x48888
	movs r1, #4	@ 00048888 0421
.org 0x4888a
	str r1, [r5, #12]	@ 0004888a e960
.org 0x4888c
	ldr r0, [r0, #0]	@ 0004888c 0068
.org 0x4888e
	ldr r0, [r0, #16]	@ 0004888e 0069
.org 0x48890
	str r0, [r5, #20]	@ 00048890 6861
.org 0x48892
	pop {r4, r5, r6}	@ 00048892 70bc
.org 0x48894
	pop {r0}	@ 00048894 01bc
.org 0x48896
	bx r0	@ 00048896 0047
