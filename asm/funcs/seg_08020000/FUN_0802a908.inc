@ FUN_0802a908  entry 0x0802a908  size 158
.thumb
.org 0x2a908
FUN_0802a908:
	push {r4, r5, r6, r7, lr}	@ 0002a908 f0b5
.org 0x2a90a
	mov r7, sl	@ 0002a90a 5746
.org 0x2a90c
	mov r6, r9	@ 0002a90c 4e46
.org 0x2a90e
	mov r5, r8	@ 0002a90e 4546
.org 0x2a910
	push {r5, r6, r7}	@ 0002a910 e0b4
.org 0x2a912
	sub sp, #8	@ 0002a912 82b0
.org 0x2a914
	adds r7, r0, #0	@ 0002a914 071c
.org 0x2a916
	ldr r0, [sp, #40]	@ 0002a916 0a98
.org 0x2a918
	lsls r1, r1, #16	@ 0002a918 0904
.org 0x2a91a
	lsrs r1, r1, #16	@ 0002a91a 090c
.org 0x2a91c
	lsls r2, r2, #24	@ 0002a91c 1206
.org 0x2a91e
	lsrs r5, r2, #24	@ 0002a91e 150e
.org 0x2a920
	lsls r3, r3, #24	@ 0002a920 1b06
.org 0x2a922
	lsrs r3, r3, #24	@ 0002a922 1b0e
.org 0x2a924
	mov r9, r3	@ 0002a924 9946
.org 0x2a926
	mov r2, r9	@ 0002a926 4a46
.org 0x2a928
	str r2, [sp, #0]	@ 0002a928 0092
.org 0x2a92a
	lsls r0, r0, #24	@ 0002a92a 0006
.org 0x2a92c
	lsrs r0, r0, #24	@ 0002a92c 000e
.org 0x2a92e
	mov r8, r0	@ 0002a92e 8046
.org 0x2a930
	str r0, [sp, #4]	@ 0002a930 0190
.org 0x2a932
	asrs r0, r7, #4	@ 0002a932 3811
.org 0x2a934
	movs r2, #1	@ 0002a934 0122
.org 0x2a936
	mov sl, r2	@ 0002a936 9246
.org 0x2a938
	cmp r0, #0	@ 0002a938 0028
.org 0x2a93a
	beq.n 0x2a93e	@ 0002a93a 00d0
.org 0x2a93c
	mov sl, r0	@ 0002a93c 8246
.org 0x2a93e
	cmp r5, #0	@ 0002a93e 002d
.org 0x2a940
	bne.n 0x2a94a	@ 0002a940 03d1
.org 0x2a942
	adds r0, r7, #0	@ 0002a942 381c
.org 0x2a944
	mov r1, r9	@ 0002a944 4946
.org 0x2a946
	mov r2, r8	@ 0002a946 4246
.org 0x2a948
	b.n 0x2a990	@ 0002a948 22e0
.org 0x2a94a
	lsls r4, r1, #16	@ 0002a94a 0c04
.org 0x2a94c
	asrs r4, r4, #16	@ 0002a94c 2414
.org 0x2a94e
	adds r0, r4, #0	@ 0002a94e 201c
.org 0x2a950
	adds r1, r5, #0	@ 0002a950 291c
.org 0x2a952
	bl 0x128fb8	@ 0002a952 fef031fb
.org 0x2a956
	adds r6, r0, #0	@ 0002a956 061c
.org 0x2a958
	adds r0, r6, #0	@ 0002a958 301c
.org 0x2a95a
	muls r0, r5	@ 0002a95a 6843
.org 0x2a95c
	cmp r0, r4	@ 0002a95c a042
.org 0x2a95e
	bne.n 0x2a966	@ 0002a95e 02d1
.org 0x2a960
	movs r0, #52	@ 0002a960 3420
.org 0x2a962
	bl 0x2b10	@ 0002a962 d8f7d5f8
.org 0x2a966
	mov r0, sl	@ 0002a966 5046
.org 0x2a968
	muls r0, r6	@ 0002a968 7043
.org 0x2a96a
	adds r2, r0, #0	@ 0002a96a 021c
.org 0x2a96c
	cmp r0, #0	@ 0002a96c 0028
.org 0x2a96e
	bge.n 0x2a972	@ 0002a96e 00da
.org 0x2a970
	negs r2, r0	@ 0002a970 4242
.org 0x2a972
	adds r1, r7, #0	@ 0002a972 391c
.org 0x2a974
	cmp r7, #0	@ 0002a974 002f
.org 0x2a976
	bge.n 0x2a97a	@ 0002a976 00da
.org 0x2a978
	negs r1, r7	@ 0002a978 7942
.org 0x2a97a
	cmp r2, r1	@ 0002a97a 8a42
.org 0x2a97c
	bgt.n 0x2a98a	@ 0002a97c 05dc
.org 0x2a97e
	mov r1, r9	@ 0002a97e 4946
.org 0x2a980
	mov r2, r8	@ 0002a980 4246
.org 0x2a982
	bl 0x2a680	@ 0002a982 fff77dfe
.org 0x2a986
	movs r0, #1	@ 0002a986 0120
.org 0x2a988
	b.n 0x2a996	@ 0002a988 05e0
.org 0x2a98a
	adds r0, r7, #0	@ 0002a98a 381c
.org 0x2a98c
	ldr r1, [sp, #0]	@ 0002a98c 0099
.org 0x2a98e
	ldr r2, [sp, #4]	@ 0002a98e 019a
.org 0x2a990
	bl 0x2a680	@ 0002a990 fff776fe
.org 0x2a994
	movs r0, #0	@ 0002a994 0020
.org 0x2a996
	add sp, #8	@ 0002a996 02b0
.org 0x2a998
	pop {r3, r4, r5}	@ 0002a998 38bc
.org 0x2a99a
	mov r8, r3	@ 0002a99a 9846
.org 0x2a99c
	mov r9, r4	@ 0002a99c a146
.org 0x2a99e
	mov sl, r5	@ 0002a99e aa46
.org 0x2a9a0
	pop {r4, r5, r6, r7}	@ 0002a9a0 f0bc
.org 0x2a9a2
	pop {r1}	@ 0002a9a2 02bc
.org 0x2a9a4
	bx r1	@ 0002a9a4 0847
