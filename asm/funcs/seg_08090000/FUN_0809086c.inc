@ FUN_0809086c  entry 0x0809086c  size 170
.thumb
.org 0x9086c
FUN_0809086c:
	push {r4, r5, r6, lr}	@ 0009086c 70b5
.org 0x9086e
	sub sp, #8	@ 0009086e 82b0
.org 0x90870
	adds r6, r0, #0	@ 00090870 061c
.org 0x90872
	adds r0, #140	@ 00090872 8c30
.org 0x90874
	movs r1, #0	@ 00090874 0021
.org 0x90876
	str r1, [r0, #0]	@ 00090876 0160
.org 0x90878
	adds r0, #4	@ 00090878 0430
.org 0x9087a
	str r1, [r0, #0]	@ 0009087a 0160
.org 0x9087c
	adds r0, #4	@ 0009087c 0430
.org 0x9087e
	strb r1, [r0, #0]	@ 0009087e 0170
.org 0x90880
	ldrb r1, [r6, #10]	@ 00090880 b17a
.org 0x90882
	movs r0, #251	@ 00090882 fb20
.org 0x90884
	ands r0, r1	@ 00090884 0840
.org 0x90886
	movs r1, #254	@ 00090886 fe21
.org 0x90888
	ands r0, r1	@ 00090888 0840
.org 0x9088a
	strb r0, [r6, #10]	@ 0009088a b072
.org 0x9088c
	movs r0, #63	@ 0009088c 3f20
.org 0x9088e
	bl 0x2b10	@ 0009088e 72f73ff9
.org 0x90892
	ldr r0, [r6, #84]	@ 00090892 706d
.org 0x90894
	str r0, [sp, #0]	@ 00090894 0090
.org 0x90896
	ldr r0, [r6, #88]	@ 00090896 b06d
.org 0x90898
	movs r1, #128	@ 00090898 8021
.org 0x9089a
	lsls r1, r1, #5	@ 0009089a 4901
.org 0x9089c
	adds r0, r0, r1	@ 0009089c 4018
.org 0x9089e
	str r0, [sp, #4]	@ 0009089e 0190
.org 0x908a0
	ldr r5, [pc, #116]	@ 000908a0 1d4d
.org 0x908a2
	ldrb r0, [r6, #10]	@ 000908a2 b07a
.org 0x908a4
	movs r4, #16	@ 000908a4 1024
.org 0x908a6
	adds r3, r4, #0	@ 000908a6 231c
.org 0x908a8
	ands r3, r0	@ 000908a8 0340
.org 0x908aa
	lsls r3, r3, #24	@ 000908aa 1b06
.org 0x908ac
	lsrs r3, r3, #24	@ 000908ac 1b0e
.org 0x908ae
	mov r0, sp	@ 000908ae 6846
.org 0x908b0
	adds r1, r5, #0	@ 000908b0 291c
.org 0x908b2
	movs r2, #0	@ 000908b2 0022
.org 0x908b4
	bl 0xd4c8c	@ 000908b4 44f0eaf9
.org 0x908b8
	adds r1, r5, #0	@ 000908b8 291c
.org 0x908ba
	adds r1, #28	@ 000908ba 1c31
.org 0x908bc
	ldrb r0, [r6, #10]	@ 000908bc b07a
.org 0x908be
	adds r3, r4, #0	@ 000908be 231c
.org 0x908c0
	ands r3, r0	@ 000908c0 0340
.org 0x908c2
	lsls r3, r3, #24	@ 000908c2 1b06
.org 0x908c4
	lsrs r3, r3, #24	@ 000908c4 1b0e
.org 0x908c6
	mov r0, sp	@ 000908c6 6846
.org 0x908c8
	movs r2, #0	@ 000908c8 0022
.org 0x908ca
	bl 0xd4c8c	@ 000908ca 44f0dff9
.org 0x908ce
	adds r5, #56	@ 000908ce 3835
.org 0x908d0
	ldrb r0, [r6, #10]	@ 000908d0 b07a
.org 0x908d2
	ands r4, r0	@ 000908d2 0440
.org 0x908d4
	lsls r4, r4, #24	@ 000908d4 2406
.org 0x908d6
	lsrs r4, r4, #24	@ 000908d6 240e
.org 0x908d8
	mov r0, sp	@ 000908d8 6846
.org 0x908da
	adds r1, r5, #0	@ 000908da 291c
.org 0x908dc
	movs r2, #0	@ 000908dc 0022
.org 0x908de
	adds r3, r4, #0	@ 000908de 231c
.org 0x908e0
	bl 0xd4c8c	@ 000908e0 44f0d4f9
.org 0x908e4
	ldr r2, [pc, #52]	@ 000908e4 0d4a
.org 0x908e6
	ldrh r1, [r2, #12]	@ 000908e6 9189
.org 0x908e8
	ldr r0, [pc, #52]	@ 000908e8 0d48
.org 0x908ea
	cmp r1, r0	@ 000908ea 8142
.org 0x908ec
	bhi.n 0x908f2	@ 000908ec 01d8
.org 0x908ee
	adds r0, r1, #1	@ 000908ee 481c
.org 0x908f0
	strh r0, [r2, #12]	@ 000908f0 9081
.org 0x908f2
	adds r1, r6, #0	@ 000908f2 311c
.org 0x908f4
	adds r1, #84	@ 000908f4 5431
.org 0x908f6
	adds r0, r6, #0	@ 000908f6 301c
.org 0x908f8
	bl 0x2abe0	@ 000908f8 9af772f9
.org 0x908fc
	ldr r1, [pc, #36]	@ 000908fc 0949
.org 0x908fe
	ldrb r0, [r6, #9]	@ 000908fe 707a
.org 0x90900
	lsls r0, r0, #2	@ 00090900 8000
.org 0x90902
	adds r0, r0, r1	@ 00090902 4018
.org 0x90904
	movs r1, #4	@ 00090904 0421
.org 0x90906
	str r1, [r6, #12]	@ 00090906 f160
.org 0x90908
	ldr r0, [r0, #0]	@ 00090908 0068
.org 0x9090a
	ldr r0, [r0, #16]	@ 0009090a 0069
.org 0x9090c
	str r0, [r6, #20]	@ 0009090c 7061
.org 0x9090e
	add sp, #8	@ 0009090e 02b0
.org 0x90910
	pop {r4, r5, r6}	@ 00090910 70bc
.org 0x90912
	pop {r0}	@ 00090912 01bc
.org 0x90914
	bx r0	@ 00090914 0047
