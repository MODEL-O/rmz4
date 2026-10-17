@ FUN_080bbbd8  entry 0x080bbbd8  size 222
.thumb
.org 0xbbbd8
FUN_080bbbd8:
	push {r4, r5, lr}	@ 000bbbd8 30b5
.org 0xbbbda
	adds r5, r0, #0	@ 000bbbda 051c
.org 0xbbbdc
	ldr r1, [r5, #40]	@ 000bbbdc a96a
.org 0xbbbde
	ldrb r0, [r5, #15]	@ 000bbbde e87b
.org 0xbbbe0
	cmp r0, #0	@ 000bbbe0 0028
.org 0xbbbe2
	bne.n 0xbbc18	@ 000bbbe2 19d1
.org 0xbbbe4
	adds r1, #191	@ 000bbbe4 bf31
.org 0xbbbe6
	ldrb r0, [r1, #0]	@ 000bbbe6 0878
.org 0xbbbe8
	movs r4, #4	@ 000bbbe8 0424
.org 0xbbbea
	orrs r0, r4	@ 000bbbea 2043
.org 0xbbbec
	strb r0, [r1, #0]	@ 000bbbec 0870
.org 0xbbbee
	adds r0, r5, #0	@ 000bbbee 281c
.org 0xbbbf0
	adds r0, #116	@ 000bbbf0 7430
.org 0xbbbf2
	ldr r1, [pc, #196]	@ 000bbbf2 3149
.org 0xbbbf4
	bl 0x5784	@ 000bbbf4 49f7c6fd
.org 0xbbbf8
	ldr r1, [pc, #192]	@ 000bbbf8 3049
.org 0xbbbfa
	ldr r0, [pc, #196]	@ 000bbbfa 3148
.org 0xbbbfc
	strh r0, [r1, #0]	@ 000bbbfc 0880
.org 0xbbbfe
	adds r2, r5, #0	@ 000bbbfe 2a1c
.org 0xbbc00
	adds r2, #69	@ 000bbc00 4532
.org 0xbbc02
	ldrb r1, [r2, #0]	@ 000bbc02 1178
.org 0xbbc04
	movs r0, #13	@ 000bbc04 0d20
.org 0xbbc06
	negs r0, r0	@ 000bbc06 4042
.org 0xbbc08
	ands r0, r1	@ 000bbc08 0840
.org 0xbbc0a
	orrs r0, r4	@ 000bbc0a 2043
.org 0xbbc0c
	strb r0, [r2, #0]	@ 000bbc0c 1070
.org 0xbbc0e
	movs r0, #32	@ 000bbc0e 2020
.org 0xbbc10
	strb r0, [r5, #18]	@ 000bbc10 a874
.org 0xbbc12
	ldrb r0, [r5, #15]	@ 000bbc12 e87b
.org 0xbbc14
	adds r0, #1	@ 000bbc14 0130
.org 0xbbc16
	strb r0, [r5, #15]	@ 000bbc16 e873
.org 0xbbc18
	adds r0, r5, #0	@ 000bbc18 281c
.org 0xbbc1a
	bl 0x1cff0	@ 000bbc1a 61f7e9f9
.org 0xbbc1e
	ldrb r0, [r5, #18]	@ 000bbc1e a87c
.org 0xbbc20
	subs r4, r0, #1	@ 000bbc20 441e
.org 0xbbc22
	strb r4, [r5, #18]	@ 000bbc22 ac74
.org 0xbbc24
	ldrb r0, [r5, #18]	@ 000bbc24 a87c
.org 0xbbc26
	ldr r2, [pc, #156]	@ 000bbc26 274a
.org 0xbbc28
	lsls r0, r0, #25	@ 000bbc28 4006
.org 0xbbc2a
	lsrs r0, r0, #23	@ 000bbc2a c00d
.org 0xbbc2c
	adds r0, r0, r2	@ 000bbc2c 8018
.org 0xbbc2e
	movs r1, #0	@ 000bbc2e 0021
.org 0xbbc30
	ldrsh r0, [r0, r1]	@ 000bbc30 405e
.org 0xbbc32
	adds r1, r0, #0	@ 000bbc32 011c
.org 0xbbc34
	cmp r0, #0	@ 000bbc34 0028
.org 0xbbc36
	bge.n 0xbbc3a	@ 000bbc36 00da
.org 0xbbc38
	adds r1, r0, #3	@ 000bbc38 c11c
.org 0xbbc3a
	asrs r0, r1, #2	@ 000bbc3a 8810
.org 0xbbc3c
	lsls r0, r0, #24	@ 000bbc3c 0006
.org 0xbbc3e
	lsrs r0, r0, #23	@ 000bbc3e c00d
.org 0xbbc40
	adds r0, r0, r2	@ 000bbc40 8018
.org 0xbbc42
	movs r1, #0	@ 000bbc42 0021
.org 0xbbc44
	ldrsh r0, [r0, r1]	@ 000bbc44 405e
.org 0xbbc46
	cmp r0, #0	@ 000bbc46 0028
.org 0xbbc48
	bge.n 0xbbc4c	@ 000bbc48 00da
.org 0xbbc4a
	adds r0, #15	@ 000bbc4a 0f30
.org 0xbbc4c
	asrs r2, r0, #4	@ 000bbc4c 0211
.org 0xbbc4e
	ldr r3, [pc, #108]	@ 000bbc4e 1b4b
.org 0xbbc50
	movs r0, #31	@ 000bbc50 1f20
.org 0xbbc52
	adds r1, r2, #0	@ 000bbc52 111c
.org 0xbbc54
	ands r1, r0	@ 000bbc54 0140
.org 0xbbc56
	movs r0, #16	@ 000bbc56 1020
.org 0xbbc58
	subs r0, r0, r2	@ 000bbc58 801a
.org 0xbbc5a
	lsls r0, r0, #8	@ 000bbc5a 0002
.org 0xbbc5c
	orrs r1, r0	@ 000bbc5c 0143
.org 0xbbc5e
	strh r1, [r3, #2]	@ 000bbc5e 5980
.org 0xbbc60
	lsls r0, r4, #24	@ 000bbc60 2006
.org 0xbbc62
	lsrs r2, r0, #24	@ 000bbc62 020e
.org 0xbbc64
	cmp r2, #0	@ 000bbc64 002a
.org 0xbbc66
	bne.n 0xbbcb0	@ 000bbc66 23d1
.org 0xbbc68
	strh r2, [r3, #0]	@ 000bbc68 1a80
.org 0xbbc6a
	adds r3, r5, #0	@ 000bbc6a 2b1c
.org 0xbbc6c
	adds r3, #69	@ 000bbc6c 4533
.org 0xbbc6e
	ldrb r1, [r3, #0]	@ 000bbc6e 1978
.org 0xbbc70
	movs r0, #13	@ 000bbc70 0d20
.org 0xbbc72
	negs r0, r0	@ 000bbc72 4042
.org 0xbbc74
	ands r0, r1	@ 000bbc74 0840
.org 0xbbc76
	strb r0, [r3, #0]	@ 000bbc76 1870
.org 0xbbc78
	ldrb r1, [r5, #10]	@ 000bbc78 a97a
.org 0xbbc7a
	movs r0, #254	@ 000bbc7a fe20
.org 0xbbc7c
	ands r0, r1	@ 000bbc7c 0840
.org 0xbbc7e
	movs r1, #253	@ 000bbc7e fd21
.org 0xbbc80
	ands r0, r1	@ 000bbc80 0840
.org 0xbbc82
	strb r0, [r5, #10]	@ 000bbc82 a872
.org 0xbbc84
	adds r0, r5, #0	@ 000bbc84 281c
.org 0xbbc86
	adds r0, #140	@ 000bbc86 8c30
.org 0xbbc88
	str r2, [r0, #0]	@ 000bbc88 0260
.org 0xbbc8a
	adds r0, #4	@ 000bbc8a 0430
.org 0xbbc8c
	str r2, [r0, #0]	@ 000bbc8c 0260
.org 0xbbc8e
	adds r1, r5, #0	@ 000bbc8e 291c
.org 0xbbc90
	adds r1, #148	@ 000bbc90 9431
.org 0xbbc92
	movs r0, #0	@ 000bbc92 0020
.org 0xbbc94
	strb r0, [r1, #0]	@ 000bbc94 0870
.org 0xbbc96
	ldrb r1, [r5, #10]	@ 000bbc96 a97a
.org 0xbbc98
	movs r0, #251	@ 000bbc98 fb20
.org 0xbbc9a
	ands r0, r1	@ 000bbc9a 0840
.org 0xbbc9c
	strb r0, [r5, #10]	@ 000bbc9c a872
.org 0xbbc9e
	ldr r1, [pc, #40]	@ 000bbc9e 0a49
.org 0xbbca0
	ldrb r0, [r5, #9]	@ 000bbca0 687a
.org 0xbbca2
	lsls r0, r0, #2	@ 000bbca2 8000
.org 0xbbca4
	adds r0, r0, r1	@ 000bbca4 4018
.org 0xbbca6
	movs r1, #3	@ 000bbca6 0321
.org 0xbbca8
	str r1, [r5, #12]	@ 000bbca8 e960
.org 0xbbcaa
	ldr r0, [r0, #0]	@ 000bbcaa 0068
.org 0xbbcac
	ldr r0, [r0, #12]	@ 000bbcac c068
.org 0xbbcae
	str r0, [r5, #20]	@ 000bbcae 6861
.org 0xbbcb0
	pop {r4, r5}	@ 000bbcb0 30bc
.org 0xbbcb2
	pop {r0}	@ 000bbcb2 01bc
.org 0xbbcb4
	bx r0	@ 000bbcb4 0047
