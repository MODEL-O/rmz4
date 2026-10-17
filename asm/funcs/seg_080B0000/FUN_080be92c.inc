@ FUN_080be92c  entry 0x080be92c  size 224
.thumb
.org 0xbe92c
FUN_080be92c:
	push {r4, r5, r6, r7, lr}	@ 000be92c f0b5
.org 0xbe92e
	sub sp, #8	@ 000be92e 82b0
.org 0xbe930
	adds r5, r0, #0	@ 000be930 051c
.org 0xbe932
	ldr r7, [r5, #40]	@ 000be932 af6a
.org 0xbe934
	ldrb r0, [r5, #10]	@ 000be934 a87a
.org 0xbe936
	lsrs r6, r0, #4	@ 000be936 0609
.org 0xbe938
	movs r0, #1	@ 000be938 0120
.org 0xbe93a
	ands r6, r0	@ 000be93a 0640
.org 0xbe93c
	ldrb r4, [r5, #15]	@ 000be93c ec7b
.org 0xbe93e
	cmp r4, #0	@ 000be93e 002c
.org 0xbe940
	bne.n 0xbe95e	@ 000be940 0dd1
.org 0xbe942
	adds r0, r5, #0	@ 000be942 281c
.org 0xbe944
	adds r0, #116	@ 000be944 7430
.org 0xbe946
	ldr r1, [pc, #104]	@ 000be946 1a49
.org 0xbe948
	bl 0x5784	@ 000be948 46f71cff
.org 0xbe94c
	movs r1, #145	@ 000be94c 9121
.org 0xbe94e
	lsls r1, r1, #8	@ 000be94e 0902
.org 0xbe950
	adds r0, r5, #0	@ 000be950 281c
.org 0xbe952
	bl 0x1cf00	@ 000be952 5ef7d5fa
.org 0xbe956
	strb r4, [r5, #18]	@ 000be956 ac74
.org 0xbe958
	ldrb r0, [r5, #15]	@ 000be958 e87b
.org 0xbe95a
	adds r0, #1	@ 000be95a 0130
.org 0xbe95c
	strb r0, [r5, #15]	@ 000be95c e873
.org 0xbe95e
	adds r0, r5, #0	@ 000be95e 281c
.org 0xbe960
	bl 0x1cff0	@ 000be960 5ef746fb
.org 0xbe964
	ldrb r2, [r5, #18]	@ 000be964 aa7c
.org 0xbe966
	adds r2, #1	@ 000be966 0132
.org 0xbe968
	strb r2, [r5, #18]	@ 000be968 aa74
.org 0xbe96a
	ldr r0, [r5, #84]	@ 000be96a 686d
.org 0xbe96c
	ldr r1, [r5, #92]	@ 000be96c e96d
.org 0xbe96e
	adds r0, r0, r1	@ 000be96e 4018
.org 0xbe970
	str r0, [r5, #84]	@ 000be970 6865
.org 0xbe972
	movs r0, #3	@ 000be972 0320
.org 0xbe974
	ands r2, r0	@ 000be974 0240
.org 0xbe976
	cmp r2, #0	@ 000be976 002a
.org 0xbe978
	bne.n 0xbe98c	@ 000be978 08d1
.org 0xbe97a
	ldr r0, [r5, #84]	@ 000be97a 686d
.org 0xbe97c
	ldr r1, [r5, #88]	@ 000be97c a96d
.org 0xbe97e
	str r0, [sp, #0]	@ 000be97e 0090
.org 0xbe980
	str r1, [sp, #4]	@ 000be980 0191
.org 0xbe982
	mov r0, sp	@ 000be982 6846
.org 0xbe984
	movs r1, #0	@ 000be984 0021
.org 0xbe986
	adds r2, r6, #0	@ 000be986 321c
.org 0xbe988
	bl 0xe27a8	@ 000be988 23f00eff
.org 0xbe98c
	adds r6, r5, #0	@ 000be98c 2e1c
.org 0xbe98e
	adds r6, #180	@ 000be98e b436
.org 0xbe990
	ldr r0, [r6, #0]	@ 000be990 3068
.org 0xbe992
	cmp r0, #0	@ 000be992 0028
.org 0xbe994
	beq.n 0xbe9b4	@ 000be994 0ed0
.org 0xbe996
	adds r0, #140	@ 000be996 8c30
.org 0xbe998
	ldr r0, [r0, #0]	@ 000be998 0068
.org 0xbe99a
	movs r1, #128	@ 000be99a 8021
.org 0xbe99c
	lsls r1, r1, #4	@ 000be99c 0901
.org 0xbe99e
	ands r0, r1	@ 000be99e 0840
.org 0xbe9a0
	adds r1, r5, #0	@ 000be9a0 291c
.org 0xbe9a2
	adds r1, #84	@ 000be9a2 5431
.org 0xbe9a4
	cmp r0, #0	@ 000be9a4 0028
.org 0xbe9a6
	beq.n 0xbe9c6	@ 000be9a6 0ed0
.org 0xbe9a8
	movs r0, #0	@ 000be9a8 0020
.org 0xbe9aa
	str r0, [r6, #0]	@ 000be9aa 3060
.org 0xbe9ac
	b.n 0xbe9c6	@ 000be9ac 0be0
.org 0xbe9ae
	.byte 0x00	@ 000be9ae data
.org 0xbe9af
	.byte 0x00	@ 000be9af data
.org 0xbe9b0
	.byte 0x3c,0x4e,0x86,0x08	@ 000be9b0 data
.org 0xbe9b4
	adds r4, r5, #0	@ 000be9b4 2c1c
.org 0xbe9b6
	adds r4, #84	@ 000be9b6 5434
.org 0xbe9b8
	adds r0, r7, #0	@ 000be9b8 381c
.org 0xbe9ba
	adds r1, r5, #0	@ 000be9ba 291c
.org 0xbe9bc
	adds r2, r4, #0	@ 000be9bc 221c
.org 0xbe9be
	bl 0xbe780	@ 000be9be fff7dffe
.org 0xbe9c2
	str r0, [r6, #0]	@ 000be9c2 3060
.org 0xbe9c4
	adds r1, r4, #0	@ 000be9c4 211c
.org 0xbe9c6
	ldr r0, [pc, #76]	@ 000be9c6 1348
.org 0xbe9c8
	bl 0x1fb14	@ 000be9c8 61f7a4f8
.org 0xbe9cc
	movs r1, #192	@ 000be9cc c021
.org 0xbe9ce
	lsls r1, r1, #6	@ 000be9ce 8901
.org 0xbe9d0
	cmp r0, r1	@ 000be9d0 8842
.org 0xbe9d2
	bls.n 0xbea0a	@ 000be9d2 1ad9
.org 0xbe9d4
	ldrb r1, [r5, #10]	@ 000be9d4 a97a
.org 0xbe9d6
	movs r0, #254	@ 000be9d6 fe20
.org 0xbe9d8
	ands r0, r1	@ 000be9d8 0840
.org 0xbe9da
	movs r2, #0	@ 000be9da 0022
.org 0xbe9dc
	movs r1, #253	@ 000be9dc fd21
.org 0xbe9de
	ands r0, r1	@ 000be9de 0840
.org 0xbe9e0
	strb r0, [r5, #10]	@ 000be9e0 a872
.org 0xbe9e2
	adds r0, r5, #0	@ 000be9e2 281c
.org 0xbe9e4
	adds r0, #140	@ 000be9e4 8c30
.org 0xbe9e6
	str r2, [r0, #0]	@ 000be9e6 0260
.org 0xbe9e8
	adds r0, #4	@ 000be9e8 0430
.org 0xbe9ea
	str r2, [r0, #0]	@ 000be9ea 0260
.org 0xbe9ec
	adds r0, #4	@ 000be9ec 0430
.org 0xbe9ee
	strb r2, [r0, #0]	@ 000be9ee 0270
.org 0xbe9f0
	ldrb r1, [r5, #10]	@ 000be9f0 a97a
.org 0xbe9f2
	movs r0, #251	@ 000be9f2 fb20
.org 0xbe9f4
	ands r0, r1	@ 000be9f4 0840
.org 0xbe9f6
	strb r0, [r5, #10]	@ 000be9f6 a872
.org 0xbe9f8
	ldr r1, [pc, #28]	@ 000be9f8 0749
.org 0xbe9fa
	ldrb r0, [r5, #9]	@ 000be9fa 687a
.org 0xbe9fc
	lsls r0, r0, #2	@ 000be9fc 8000
.org 0xbe9fe
	adds r0, r0, r1	@ 000be9fe 4018
.org 0xbea00
	movs r1, #3	@ 000bea00 0321
.org 0xbea02
	str r1, [r5, #12]	@ 000bea02 e960
.org 0xbea04
	ldr r0, [r0, #0]	@ 000bea04 0068
.org 0xbea06
	ldr r0, [r0, #12]	@ 000bea06 c068
.org 0xbea08
	str r0, [r5, #20]	@ 000bea08 6861
.org 0xbea0a
	add sp, #8	@ 000bea0a 02b0
