@ FUN_080ae92c  entry 0x080ae92c  size 296
.thumb
.org 0xae92c
FUN_080ae92c:
	push {r4, r5, r6, lr}	@ 000ae92c 70b5
.org 0xae92e
	adds r5, r0, #0	@ 000ae92e 051c
.org 0xae930
	ldr r6, [r5, #40]	@ 000ae930 ae6a
.org 0xae932
	ldrb r0, [r5, #16]	@ 000ae932 287c
.org 0xae934
	cmp r0, #0	@ 000ae934 0028
.org 0xae936
	bne.n 0xae9fa	@ 000ae936 60d1
.org 0xae938
	adds r0, r5, #0	@ 000ae938 281c
.org 0xae93a
	adds r0, #140	@ 000ae93a 8c30
.org 0xae93c
	ldr r0, [r0, #0]	@ 000ae93c 0068
.org 0xae93e
	movs r1, #128	@ 000ae93e 8021
.org 0xae940
	lsls r1, r1, #2	@ 000ae940 8900
.org 0xae942
	ands r0, r1	@ 000ae942 0840
.org 0xae944
	cmp r0, #0	@ 000ae944 0028
.org 0xae946
	beq.n 0xae972	@ 000ae946 14d0
.org 0xae948
	adds r4, r5, #0	@ 000ae948 2c1c
.org 0xae94a
	adds r4, #84	@ 000ae94a 5434
.org 0xae94c
	adds r0, r6, #0	@ 000ae94c 301c
.org 0xae94e
	adds r1, r4, #0	@ 000ae94e 211c
.org 0xae950
	movs r2, #1	@ 000ae950 0122
.org 0xae952
	movs r3, #112	@ 000ae952 7023
.org 0xae954
	bl 0xae714	@ 000ae954 fff7defe
.org 0xae958
	adds r0, r6, #0	@ 000ae958 301c
.org 0xae95a
	adds r1, r4, #0	@ 000ae95a 211c
.org 0xae95c
	movs r2, #1	@ 000ae95c 0122
.org 0xae95e
	movs r3, #128	@ 000ae95e 8023
.org 0xae960
	bl 0xae714	@ 000ae960 fff7d8fe
.org 0xae964
	adds r0, r6, #0	@ 000ae964 301c
.org 0xae966
	adds r1, r4, #0	@ 000ae966 211c
.org 0xae968
	movs r2, #1	@ 000ae968 0122
.org 0xae96a
	movs r3, #144	@ 000ae96a 9023
.org 0xae96c
	bl 0xae714	@ 000ae96c fff7d2fe
.org 0xae970
	b.n 0xaea34	@ 000ae970 60e0
.org 0xae972
	ldrb r0, [r5, #17]	@ 000ae972 687c
.org 0xae974
	cmp r0, #0	@ 000ae974 0028
.org 0xae976
	bne.n 0xae9a2	@ 000ae976 14d1
.org 0xae978
	adds r4, r5, #0	@ 000ae978 2c1c
.org 0xae97a
	adds r4, #84	@ 000ae97a 5434
.org 0xae97c
	adds r0, r6, #0	@ 000ae97c 301c
.org 0xae97e
	adds r1, r4, #0	@ 000ae97e 211c
.org 0xae980
	movs r2, #1	@ 000ae980 0122
.org 0xae982
	movs r3, #48	@ 000ae982 3023
.org 0xae984
	bl 0xae714	@ 000ae984 fff7c6fe
.org 0xae988
	adds r0, r6, #0	@ 000ae988 301c
.org 0xae98a
	adds r1, r4, #0	@ 000ae98a 211c
.org 0xae98c
	movs r2, #1	@ 000ae98c 0122
.org 0xae98e
	movs r3, #64	@ 000ae98e 4023
.org 0xae990
	bl 0xae714	@ 000ae990 fff7c0fe
.org 0xae994
	adds r0, r6, #0	@ 000ae994 301c
.org 0xae996
	adds r1, r4, #0	@ 000ae996 211c
.org 0xae998
	movs r2, #1	@ 000ae998 0122
.org 0xae99a
	movs r3, #80	@ 000ae99a 5023
.org 0xae99c
	bl 0xae714	@ 000ae99c fff7bafe
.org 0xae9a0
	b.n 0xaea34	@ 000ae9a0 48e0
.org 0xae9a2
	cmp r0, #1	@ 000ae9a2 0128
.org 0xae9a4
	bne.n 0xae9d0	@ 000ae9a4 14d1
.org 0xae9a6
	adds r4, r5, #0	@ 000ae9a6 2c1c
.org 0xae9a8
	adds r4, #84	@ 000ae9a8 5434
.org 0xae9aa
	adds r0, r6, #0	@ 000ae9aa 301c
.org 0xae9ac
	adds r1, r4, #0	@ 000ae9ac 211c
.org 0xae9ae
	movs r2, #1	@ 000ae9ae 0122
.org 0xae9b0
	movs r3, #240	@ 000ae9b0 f023
.org 0xae9b2
	bl 0xae714	@ 000ae9b2 fff7affe
.org 0xae9b6
	adds r0, r6, #0	@ 000ae9b6 301c
.org 0xae9b8
	adds r1, r4, #0	@ 000ae9b8 211c
.org 0xae9ba
	movs r2, #1	@ 000ae9ba 0122
.org 0xae9bc
	movs r3, #0	@ 000ae9bc 0023
.org 0xae9be
	bl 0xae714	@ 000ae9be fff7a9fe
.org 0xae9c2
	adds r0, r6, #0	@ 000ae9c2 301c
.org 0xae9c4
	adds r1, r4, #0	@ 000ae9c4 211c
.org 0xae9c6
	movs r2, #1	@ 000ae9c6 0122
.org 0xae9c8
	movs r3, #16	@ 000ae9c8 1023
.org 0xae9ca
	bl 0xae714	@ 000ae9ca fff7a3fe
.org 0xae9ce
	b.n 0xaea34	@ 000ae9ce 31e0
.org 0xae9d0
	adds r4, r5, #0	@ 000ae9d0 2c1c
.org 0xae9d2
	adds r4, #84	@ 000ae9d2 5434
.org 0xae9d4
	adds r0, r6, #0	@ 000ae9d4 301c
.org 0xae9d6
	adds r1, r4, #0	@ 000ae9d6 211c
.org 0xae9d8
	movs r2, #1	@ 000ae9d8 0122
.org 0xae9da
	movs r3, #176	@ 000ae9da b023
.org 0xae9dc
	bl 0xae714	@ 000ae9dc fff79afe
.org 0xae9e0
	adds r0, r6, #0	@ 000ae9e0 301c
.org 0xae9e2
	adds r1, r4, #0	@ 000ae9e2 211c
.org 0xae9e4
	movs r2, #1	@ 000ae9e4 0122
.org 0xae9e6
	movs r3, #192	@ 000ae9e6 c023
.org 0xae9e8
	bl 0xae714	@ 000ae9e8 fff794fe
.org 0xae9ec
	adds r0, r6, #0	@ 000ae9ec 301c
.org 0xae9ee
	adds r1, r4, #0	@ 000ae9ee 211c
.org 0xae9f0
	movs r2, #1	@ 000ae9f0 0122
.org 0xae9f2
	movs r3, #208	@ 000ae9f2 d023
.org 0xae9f4
	bl 0xae714	@ 000ae9f4 fff78efe
.org 0xae9f8
	b.n 0xaea34	@ 000ae9f8 1ce0
.org 0xae9fa
	ldrb r4, [r5, #13]	@ 000ae9fa 6c7b
.org 0xae9fc
	cmp r4, #0	@ 000ae9fc 002c
.org 0xae9fe
	bne.n 0xaea24	@ 000ae9fe 11d1
.org 0xaea00
	ldr r1, [pc, #80]	@ 000aea00 1449
.org 0xaea02
	adds r0, r5, #0	@ 000aea02 281c
.org 0xaea04
	bl 0x1cf00	@ 000aea04 6ef77cfa
.org 0xaea08
	adds r0, r5, #0	@ 000aea08 281c
.org 0xaea0a
	adds r0, #140	@ 000aea0a 8c30
.org 0xaea0c
	str r4, [r0, #0]	@ 000aea0c 0460
.org 0xaea0e
	adds r0, #4	@ 000aea0e 0430
.org 0xaea10
	str r4, [r0, #0]	@ 000aea10 0460
.org 0xaea12
	adds r0, #4	@ 000aea12 0430
.org 0xaea14
	strb r4, [r0, #0]	@ 000aea14 0470
.org 0xaea16
	ldrb r1, [r5, #10]	@ 000aea16 a97a
.org 0xaea18
	movs r0, #251	@ 000aea18 fb20
.org 0xaea1a
	ands r0, r1	@ 000aea1a 0840
.org 0xaea1c
	strb r0, [r5, #10]	@ 000aea1c a872
.org 0xaea1e
	ldrb r0, [r5, #13]	@ 000aea1e 687b
.org 0xaea20
	adds r0, #1	@ 000aea20 0130
.org 0xaea22
	strb r0, [r5, #13]	@ 000aea22 6873
.org 0xaea24
	adds r0, r5, #0	@ 000aea24 281c
.org 0xaea26
	bl 0x1cff0	@ 000aea26 6ef7e3fa
.org 0xaea2a
	adds r0, r5, #0	@ 000aea2a 281c
.org 0xaea2c
	adds r0, #115	@ 000aea2c 7330
.org 0xaea2e
	ldrb r0, [r0, #0]	@ 000aea2e 0078
.org 0xaea30
	cmp r0, #3	@ 000aea30 0328
.org 0xaea32
	bne.n 0xaea4e	@ 000aea32 0cd1
.org 0xaea34
	ldrb r1, [r5, #10]	@ 000aea34 a97a
.org 0xaea36
	movs r0, #254	@ 000aea36 fe20
.org 0xaea38
	ands r0, r1	@ 000aea38 0840
.org 0xaea3a
	strb r0, [r5, #10]	@ 000aea3a a872
.org 0xaea3c
	ldr r1, [pc, #24]	@ 000aea3c 0649
.org 0xaea3e
	ldrb r0, [r5, #9]	@ 000aea3e 687a
.org 0xaea40
	lsls r0, r0, #2	@ 000aea40 8000
.org 0xaea42
	adds r0, r0, r1	@ 000aea42 4018
.org 0xaea44
	movs r1, #4	@ 000aea44 0421
.org 0xaea46
	str r1, [r5, #12]	@ 000aea46 e960
.org 0xaea48
	ldr r0, [r0, #0]	@ 000aea48 0068
.org 0xaea4a
	ldr r0, [r0, #16]	@ 000aea4a 0069
.org 0xaea4c
	str r0, [r5, #20]	@ 000aea4c 6861
.org 0xaea4e
	pop {r4, r5, r6}	@ 000aea4e 70bc
.org 0xaea50
	pop {r0}	@ 000aea50 01bc
.org 0xaea52
	bx r0	@ 000aea52 0047
