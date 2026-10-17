@ FUN_0807b97c  entry 0x0807b97c  size 148
.thumb
.org 0x7b97c
FUN_0807b97c:
	push {r4, r5, r6, lr}	@ 0007b97c 70b5
.org 0x7b97e
	adds r4, r0, #0	@ 0007b97e 041c
.org 0x7b980
	ldrb r0, [r4, #10]	@ 0007b980 a07a
.org 0x7b982
	lsrs r5, r0, #4	@ 0007b982 0509
.org 0x7b984
	movs r0, #1	@ 0007b984 0120
.org 0x7b986
	ands r5, r0	@ 0007b986 0540
.org 0x7b988
	ldrb r6, [r4, #15]	@ 0007b988 e67b
.org 0x7b98a
	cmp r6, #0	@ 0007b98a 002e
.org 0x7b98c
	bne.n 0x7b9ae	@ 0007b98c 0fd1
.org 0x7b98e
	adds r0, r4, #0	@ 0007b98e 201c
.org 0x7b990
	movs r1, #5	@ 0007b990 0521
.org 0x7b992
	bl 0x7e8c8	@ 0007b992 02f099ff
.org 0x7b996
	adds r0, r5, #1	@ 0007b996 681c
.org 0x7b998
	movs r1, #1	@ 0007b998 0121
.org 0x7b99a
	ands r0, r1	@ 0007b99a 0840
.org 0x7b99c
	lsls r0, r0, #1	@ 0007b99c 4000
.org 0x7b99e
	subs r1, r0, #1	@ 0007b99e 411e
.org 0x7b9a0
	str r6, [r4, #92]	@ 0007b9a0 e665
.org 0x7b9a2
	lsls r0, r1, #5	@ 0007b9a2 4801
.org 0x7b9a4
	str r0, [r4, #100]	@ 0007b9a4 6066
.org 0x7b9a6
	str r1, [r4, #104]	@ 0007b9a6 a166
.org 0x7b9a8
	ldrb r0, [r4, #15]	@ 0007b9a8 e07b
.org 0x7b9aa
	adds r0, #1	@ 0007b9aa 0130
.org 0x7b9ac
	strb r0, [r4, #15]	@ 0007b9ac e073
.org 0x7b9ae
	adds r5, r4, #0	@ 0007b9ae 251c
.org 0x7b9b0
	adds r5, #188	@ 0007b9b0 bc35
.org 0x7b9b2
	ldrb r0, [r5, #0]	@ 0007b9b2 2878
.org 0x7b9b4
	cmp r0, #0	@ 0007b9b4 0028
.org 0x7b9b6
	beq.n 0x7b9be	@ 0007b9b6 02d0
.org 0x7b9b8
	adds r0, r4, #0	@ 0007b9b8 201c
.org 0x7b9ba
	bl 0x1cff0	@ 0007b9ba a1f719fb
.org 0x7b9be
	adds r0, r4, #0	@ 0007b9be 201c
.org 0x7b9c0
	adds r0, #116	@ 0007b9c0 7430
.org 0x7b9c2
	ldr r3, [pc, #76]	@ 0007b9c2 134b
.org 0x7b9c4
	ldr r2, [pc, #76]	@ 0007b9c4 134a
.org 0x7b9c6
	ldrb r1, [r5, #0]	@ 0007b9c6 2978
.org 0x7b9c8
	lsls r1, r1, #1	@ 0007b9c8 4900
.org 0x7b9ca
	adds r1, r1, r2	@ 0007b9ca 8918
.org 0x7b9cc
	ldrh r2, [r1, #0]	@ 0007b9cc 0a88
.org 0x7b9ce
	lsls r2, r2, #2	@ 0007b9ce 9200
.org 0x7b9d0
	adds r2, r2, r3	@ 0007b9d0 d218
.org 0x7b9d2
	adds r1, r4, #0	@ 0007b9d2 211c
.org 0x7b9d4
	adds r1, #113	@ 0007b9d4 7131
.org 0x7b9d6
	ldrb r1, [r1, #0]	@ 0007b9d6 0978
.org 0x7b9d8
	lsls r1, r1, #24	@ 0007b9d8 0906
.org 0x7b9da
	asrs r1, r1, #24	@ 0007b9da 0916
.org 0x7b9dc
	ldr r2, [r2, #0]	@ 0007b9dc 1268
.org 0x7b9de
	lsls r1, r1, #2	@ 0007b9de 8900
.org 0x7b9e0
	adds r1, r1, r2	@ 0007b9e0 8918
.org 0x7b9e2
	ldr r1, [r1, #0]	@ 0007b9e2 0968
.org 0x7b9e4
	bl 0x5784	@ 0007b9e4 89f7cefe
.org 0x7b9e8
	ldr r0, [r4, #84]	@ 0007b9e8 606d
.org 0x7b9ea
	ldr r1, [r4, #92]	@ 0007b9ea e16d
.org 0x7b9ec
	adds r0, r0, r1	@ 0007b9ec 4018
.org 0x7b9ee
	str r0, [r4, #84]	@ 0007b9ee 6065
.org 0x7b9f0
	ldr r0, [r4, #100]	@ 0007b9f0 606e
.org 0x7b9f2
	adds r1, r1, r0	@ 0007b9f2 0918
.org 0x7b9f4
	str r1, [r4, #92]	@ 0007b9f4 e165
.org 0x7b9f6
	ldr r0, [r4, #104]	@ 0007b9f6 a06e
.org 0x7b9f8
	muls r1, r0	@ 0007b9f8 4143
.org 0x7b9fa
	ldr r0, [pc, #28]	@ 0007b9fa 0748
.org 0x7b9fc
	cmp r1, r0	@ 0007b9fc 8142
.org 0x7b9fe
	ble.n 0x7ba0a	@ 0007b9fe 04dd
.org 0x7ba00
	ldrb r0, [r4, #14]	@ 0007ba00 a07b
.org 0x7ba02
	adds r0, #1	@ 0007ba02 0130
.org 0x7ba04
	movs r1, #0	@ 0007ba04 0021
.org 0x7ba06
	strb r0, [r4, #14]	@ 0007ba06 a073
.org 0x7ba08
	strb r1, [r4, #15]	@ 0007ba08 e173
.org 0x7ba0a
	pop {r4, r5, r6}	@ 0007ba0a 70bc
.org 0x7ba0c
	pop {r0}	@ 0007ba0c 01bc
.org 0x7ba0e
	bx r0	@ 0007ba0e 0047
