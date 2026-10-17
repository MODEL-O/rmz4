@ FUN_08070898  entry 0x08070898  size 220
.thumb
.org 0x70898
FUN_08070898:
	push {r4, r5, r6, r7, lr}	@ 00070898 f0b5
.org 0x7089a
	mov r7, r8	@ 0007089a 4746
.org 0x7089c
	push {r7}	@ 0007089c 80b4
.org 0x7089e
	sub sp, #8	@ 0007089e 82b0
.org 0x708a0
	adds r6, r0, #0	@ 000708a0 061c
.org 0x708a2
	ldrb r0, [r6, #19]	@ 000708a2 f07c
.org 0x708a4
	mov r8, r0	@ 000708a4 8046
.org 0x708a6
	ldrb r0, [r6, #15]	@ 000708a6 f07b
.org 0x708a8
	cmp r0, #0	@ 000708a8 0028
.org 0x708aa
	bne.n 0x708c2	@ 000708aa 0ad1
.org 0x708ac
	adds r0, r6, #0	@ 000708ac 301c
.org 0x708ae
	movs r1, #3	@ 000708ae 0321
.org 0x708b0
	bl 0x736c4	@ 000708b0 02f008ff
.org 0x708b4
	movs r0, #24	@ 000708b4 1820
.org 0x708b6
	strb r0, [r6, #18]	@ 000708b6 b074
.org 0x708b8
	movs r0, #255	@ 000708b8 ff20
.org 0x708ba
	mov r8, r0	@ 000708ba 8046
.org 0x708bc
	ldrb r0, [r6, #15]	@ 000708bc f07b
.org 0x708be
	adds r0, #1	@ 000708be 0130
.org 0x708c0
	strb r0, [r6, #15]	@ 000708c0 f073
.org 0x708c2
	adds r0, r6, #0	@ 000708c2 301c
.org 0x708c4
	bl 0x1cff0	@ 000708c4 acf794fb
.org 0x708c8
	adds r0, r6, #0	@ 000708c8 301c
.org 0x708ca
	adds r0, #116	@ 000708ca 7430
.org 0x708cc
	ldr r4, [pc, #164]	@ 000708cc 294c
.org 0x708ce
	ldr r3, [pc, #168]	@ 000708ce 2a4b
.org 0x708d0
	adds r1, r6, #0	@ 000708d0 311c
.org 0x708d2
	adds r1, #184	@ 000708d2 b831
.org 0x708d4
	ldrb r2, [r1, #0]	@ 000708d4 0a78
.org 0x708d6
	lsls r1, r2, #1	@ 000708d6 5100
.org 0x708d8
	adds r1, r1, r3	@ 000708d8 c918
.org 0x708da
	ldrh r1, [r1, #0]	@ 000708da 0988
.org 0x708dc
	lsls r1, r1, #2	@ 000708dc 8900
.org 0x708de
	adds r1, r1, r4	@ 000708de 0919
.org 0x708e0
	adds r7, r6, #0	@ 000708e0 371c
.org 0x708e2
	adds r7, #113	@ 000708e2 7137
.org 0x708e4
	movs r5, #0	@ 000708e4 0025
.org 0x708e6
	ldrsb r5, [r7, r5]	@ 000708e6 7d57
.org 0x708e8
	ldr r1, [r1, #0]	@ 000708e8 0968
.org 0x708ea
	lsls r3, r5, #2	@ 000708ea ab00
.org 0x708ec
	adds r3, r3, r1	@ 000708ec 5b18
.org 0x708ee
	ldr r4, [pc, #140]	@ 000708ee 234c
.org 0x708f0
	adds r1, r6, #0	@ 000708f0 311c
.org 0x708f2
	adds r1, #185	@ 000708f2 b931
.org 0x708f4
	ldrb r1, [r1, #0]	@ 000708f4 0978
.org 0x708f6
	lsls r1, r1, #2	@ 000708f6 8900
.org 0x708f8
	adds r1, r1, r4	@ 000708f8 0919
.org 0x708fa
	ldr r1, [r1, #0]	@ 000708fa 0968
.org 0x708fc
	lsls r2, r2, #2	@ 000708fc 9200
.org 0x708fe
	adds r2, r2, r1	@ 000708fe 5218
.org 0x70900
	ldr r1, [r2, #0]	@ 00070900 1168
.org 0x70902
	adds r1, r1, r5	@ 00070902 4919
.org 0x70904
	ldrb r1, [r1, #0]	@ 00070904 0978
.org 0x70906
	lsls r2, r1, #1	@ 00070906 4a00
.org 0x70908
	adds r2, r2, r1	@ 00070908 5218
.org 0x7090a
	lsls r2, r2, #3	@ 0007090a d200
.org 0x7090c
	ldr r1, [r3, #0]	@ 0007090c 1968
.org 0x7090e
	adds r1, r1, r2	@ 0007090e 8918
.org 0x70910
	bl 0x5784	@ 00070910 94f738ff
.org 0x70914
	ldrb r0, [r7, #0]	@ 00070914 3878
.org 0x70916
	strb r0, [r6, #19]	@ 00070916 f074
.org 0x70918
	ldrb r4, [r7, #0]	@ 00070918 3c78
.org 0x7091a
	adds r0, r6, #0	@ 0007091a 301c
.org 0x7091c
	bl 0x73a68	@ 0007091c 03f0a4f8
.org 0x70920
	cmp r4, r8	@ 00070920 4445
.org 0x70922
	beq.n 0x70952	@ 00070922 16d0
.org 0x70924
	cmp r4, #6	@ 00070924 062c
.org 0x70926
	beq.n 0x7092c	@ 00070926 01d0
.org 0x70928
	cmp r4, #10	@ 00070928 0a2c
.org 0x7092a
	bne.n 0x70952	@ 0007092a 12d1
.org 0x7092c
	movs r0, #155	@ 0007092c 9b20
.org 0x7092e
	lsls r0, r0, #1	@ 0007092e 4000
.org 0x70930
	bl 0x2b10	@ 00070930 92f7eef8
.org 0x70934
	ldrb r3, [r6, #10]	@ 00070934 b37a
.org 0x70936
	lsrs r3, r3, #4	@ 00070936 1b09
.org 0x70938
	movs r0, #1	@ 00070938 0120
.org 0x7093a
	ands r3, r0	@ 0007093a 0340
.org 0x7093c
	ldr r0, [r6, #84]	@ 0007093c 706d
.org 0x7093e
	str r0, [sp, #0]	@ 0007093e 0090
.org 0x70940
	ldr r0, [r6, #88]	@ 00070940 b06d
.org 0x70942
	str r0, [sp, #4]	@ 00070942 0190
.org 0x70944
	ldr r1, [pc, #56]	@ 00070944 0e49
.org 0x70946
	lsls r0, r3, #4	@ 00070946 1801
.org 0x70948
	orrs r3, r0	@ 00070948 0343
.org 0x7094a
	mov r0, sp	@ 0007094a 6846
.org 0x7094c
	movs r2, #0	@ 0007094c 0022
.org 0x7094e
	bl 0xd4c8c	@ 0007094e 64f09df9
.org 0x70952
	ldrb r0, [r6, #18]	@ 00070952 b07c
.org 0x70954
	subs r0, #1	@ 00070954 0138
.org 0x70956
	strb r0, [r6, #18]	@ 00070956 b074
.org 0x70958
	lsls r0, r0, #24	@ 00070958 0006
.org 0x7095a
	lsrs r1, r0, #24	@ 0007095a 010e
.org 0x7095c
	cmp r1, #0	@ 0007095c 0029
.org 0x7095e
	bne.n 0x70968	@ 0007095e 03d1
.org 0x70960
	ldrb r0, [r6, #14]	@ 00070960 b07b
.org 0x70962
	adds r0, #1	@ 00070962 0130
.org 0x70964
	strb r0, [r6, #14]	@ 00070964 b073
.org 0x70966
	strb r1, [r6, #15]	@ 00070966 f173
.org 0x70968
	add sp, #8	@ 00070968 02b0
.org 0x7096a
	pop {r3}	@ 0007096a 08bc
.org 0x7096c
	mov r8, r3	@ 0007096c 9846
.org 0x7096e
	pop {r4, r5, r6, r7}	@ 0007096e f0bc
.org 0x70970
	pop {r0}	@ 00070970 01bc
.org 0x70972
	bx r0	@ 00070972 0047
