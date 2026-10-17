@ FUN_080d692c  entry 0x080d692c  size 160
.thumb
.org 0xd692c
FUN_080d692c:
	push {r4, r5, r6, lr}	@ 000d692c 70b5
.org 0xd692e
	adds r4, r0, #0	@ 000d692e 041c
.org 0xd6930
	ldr r5, [r4, #40]	@ 000d6930 a56a
.org 0xd6932
	bl 0x1cc9c	@ 000d6932 46f7b3f9
.org 0xd6936
	ldrb r1, [r4, #10]	@ 000d6936 a17a
.org 0xd6938
	movs r0, #1	@ 000d6938 0120
.org 0xd693a
	movs r6, #0	@ 000d693a 0026
.org 0xd693c
	orrs r0, r1	@ 000d693c 0843
.org 0xd693e
	movs r1, #2	@ 000d693e 0221
.org 0xd6940
	orrs r0, r1	@ 000d6940 0843
.org 0xd6942
	strb r0, [r4, #10]	@ 000d6942 a072
.org 0xd6944
	ldr r1, [pc, #32]	@ 000d6944 0849
.org 0xd6946
	adds r0, r4, #0	@ 000d6946 201c
.org 0xd6948
	bl 0x1cf00	@ 000d6948 46f7dafa
.org 0xd694c
	adds r0, r4, #0	@ 000d694c 201c
.org 0xd694e
	bl 0x1cff0	@ 000d694e 46f74ffb
.org 0xd6952
	ldrb r0, [r5, #10]	@ 000d6952 a87a
.org 0xd6954
	lsrs r2, r0, #4	@ 000d6954 0209
.org 0xd6956
	movs r0, #1	@ 000d6956 0120
.org 0xd6958
	ands r2, r0	@ 000d6958 0240
.org 0xd695a
	cmp r2, #0	@ 000d695a 002a
.org 0xd695c
	beq.n 0xd696c	@ 000d695c 06d0
.org 0xd695e
	ldrb r0, [r4, #10]	@ 000d695e a07a
.org 0xd6960
	movs r1, #16	@ 000d6960 1021
.org 0xd6962
	orrs r0, r1	@ 000d6962 0843
.org 0xd6964
	b.n 0xd6972	@ 000d6964 05e0
.org 0xd6966
	.byte 0x00	@ 000d6966 data
.org 0xd6967
	.byte 0x00	@ 000d6967 data
.org 0xd6968
	.byte 0x06,0x1a,0x00,0x00	@ 000d6968 data
.org 0xd696c
	ldrb r1, [r4, #10]	@ 000d696c a17a
.org 0xd696e
	movs r0, #239	@ 000d696e ef20
.org 0xd6970
	ands r0, r1	@ 000d6970 0840
.org 0xd6972
	strb r0, [r4, #10]	@ 000d6972 a072
.org 0xd6974
	movs r6, #1	@ 000d6974 0126
.org 0xd6976
	adds r1, r6, #0	@ 000d6976 311c
.org 0xd6978
	ands r1, r2	@ 000d6978 1140
.org 0xd697a
	adds r0, r4, #0	@ 000d697a 201c
.org 0xd697c
	adds r0, #76	@ 000d697c 4c30
.org 0xd697e
	strb r1, [r0, #0]	@ 000d697e 0170
.org 0xd6980
	adds r3, r4, #0	@ 000d6980 231c
.org 0xd6982
	adds r3, #74	@ 000d6982 4a33
.org 0xd6984
	lsls r1, r1, #4	@ 000d6984 0901
.org 0xd6986
	ldrb r2, [r3, #0]	@ 000d6986 1a78
.org 0xd6988
	movs r0, #17	@ 000d6988 1120
.org 0xd698a
	negs r0, r0	@ 000d698a 4042
.org 0xd698c
	ands r0, r2	@ 000d698c 1040
.org 0xd698e
	orrs r0, r1	@ 000d698e 0843
.org 0xd6990
	strb r0, [r3, #0]	@ 000d6990 1870
.org 0xd6992
	ldr r0, [r5, #84]	@ 000d6992 686d
.org 0xd6994
	str r0, [r4, #84]	@ 000d6994 6065
.org 0xd6996
	ldr r0, [r5, #88]	@ 000d6996 a86d
.org 0xd6998
	ldr r1, [pc, #56]	@ 000d6998 0e49
.org 0xd699a
	adds r0, r0, r1	@ 000d699a 4018
.org 0xd699c
	str r0, [r4, #88]	@ 000d699c a065
.org 0xd699e
	ldr r1, [r5, #92]	@ 000d699e e96d
.org 0xd69a0
	movs r0, #100	@ 000d69a0 6420
.org 0xd69a2
	muls r0, r1	@ 000d69a2 4843
.org 0xd69a4
	cmp r0, #0	@ 000d69a4 0028
.org 0xd69a6
	bge.n 0xd69aa	@ 000d69a6 00da
.org 0xd69a8
	adds r0, #255	@ 000d69a8 ff30
.org 0xd69aa
	asrs r0, r0, #8	@ 000d69aa 0012
.org 0xd69ac
	str r0, [r4, #92]	@ 000d69ac e065
.org 0xd69ae
	ldr r0, [r5, #96]	@ 000d69ae 286e
.org 0xd69b0
	str r0, [r4, #96]	@ 000d69b0 2066
.org 0xd69b2
	movs r0, #22	@ 000d69b2 1620
.org 0xd69b4
	strb r0, [r4, #18]	@ 000d69b4 a074
.org 0xd69b6
	ldr r1, [pc, #32]	@ 000d69b6 0849
.org 0xd69b8
	ldrb r0, [r4, #9]	@ 000d69b8 607a
.org 0xd69ba
	lsls r0, r0, #2	@ 000d69ba 8000
.org 0xd69bc
	adds r0, r0, r1	@ 000d69bc 4018
.org 0xd69be
	str r6, [r4, #12]	@ 000d69be e660
.org 0xd69c0
	ldr r0, [r0, #0]	@ 000d69c0 0068
.org 0xd69c2
	ldr r0, [r0, #4]	@ 000d69c2 4068
.org 0xd69c4
	str r0, [r4, #20]	@ 000d69c4 6061
.org 0xd69c6
	adds r0, r4, #0	@ 000d69c6 201c
.org 0xd69c8
	bl 0xd68fc	@ 000d69c8 fff798ff
