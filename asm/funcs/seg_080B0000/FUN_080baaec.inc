@ FUN_080baaec  entry 0x080baaec  size 230
.thumb
.org 0xbaaec
FUN_080baaec:
	push {r4, r5, lr}	@ 000baaec 30b5
.org 0xbaaee
	adds r5, r0, #0	@ 000baaee 051c
.org 0xbaaf0
	ldr r1, [r5, #40]	@ 000baaf0 a96a
.org 0xbaaf2
	ldrb r0, [r5, #15]	@ 000baaf2 e87b
.org 0xbaaf4
	cmp r0, #0	@ 000baaf4 0028
.org 0xbaaf6
	bne.n 0xbab34	@ 000baaf6 1dd1
.org 0xbaaf8
	adds r1, #191	@ 000baaf8 bf31
.org 0xbaafa
	ldrb r0, [r1, #0]	@ 000baafa 0878
.org 0xbaafc
	movs r4, #4	@ 000baafc 0424
.org 0xbaafe
	orrs r0, r4	@ 000baafe 2043
.org 0xbab00
	strb r0, [r1, #0]	@ 000bab00 0870
.org 0xbab02
	adds r0, r5, #0	@ 000bab02 281c
.org 0xbab04
	adds r0, #116	@ 000bab04 7430
.org 0xbab06
	ldr r1, [pc, #204]	@ 000bab06 3349
.org 0xbab08
	bl 0x5784	@ 000bab08 4af73cfe
.org 0xbab0c
	ldr r1, [pc, #200]	@ 000bab0c 3249
.org 0xbab0e
	ldr r0, [pc, #204]	@ 000bab0e 3348
.org 0xbab10
	strh r0, [r1, #0]	@ 000bab10 0880
.org 0xbab12
	adds r2, r5, #0	@ 000bab12 2a1c
.org 0xbab14
	adds r2, #69	@ 000bab14 4532
.org 0xbab16
	ldrb r1, [r2, #0]	@ 000bab16 1178
.org 0xbab18
	movs r0, #13	@ 000bab18 0d20
.org 0xbab1a
	negs r0, r0	@ 000bab1a 4042
.org 0xbab1c
	ands r0, r1	@ 000bab1c 0840
.org 0xbab1e
	orrs r0, r4	@ 000bab1e 2043
.org 0xbab20
	strb r0, [r2, #0]	@ 000bab20 1070
.org 0xbab22
	ldr r1, [pc, #188]	@ 000bab22 2f49
.org 0xbab24
	adds r0, r5, #0	@ 000bab24 281c
.org 0xbab26
	bl 0x1cf00	@ 000bab26 62f7ebf9
.org 0xbab2a
	movs r0, #32	@ 000bab2a 2020
.org 0xbab2c
	strb r0, [r5, #18]	@ 000bab2c a874
.org 0xbab2e
	ldrb r0, [r5, #15]	@ 000bab2e e87b
.org 0xbab30
	adds r0, #1	@ 000bab30 0130
.org 0xbab32
	strb r0, [r5, #15]	@ 000bab32 e873
.org 0xbab34
	adds r0, r5, #0	@ 000bab34 281c
.org 0xbab36
	bl 0x1cff0	@ 000bab36 62f75bfa
.org 0xbab3a
	ldrb r0, [r5, #18]	@ 000bab3a a87c
.org 0xbab3c
	subs r4, r0, #1	@ 000bab3c 441e
.org 0xbab3e
	strb r4, [r5, #18]	@ 000bab3e ac74
.org 0xbab40
	ldrb r0, [r5, #18]	@ 000bab40 a87c
.org 0xbab42
	ldr r2, [pc, #160]	@ 000bab42 284a
.org 0xbab44
	lsls r0, r0, #25	@ 000bab44 4006
.org 0xbab46
	lsrs r0, r0, #23	@ 000bab46 c00d
.org 0xbab48
	adds r0, r0, r2	@ 000bab48 8018
.org 0xbab4a
	movs r1, #0	@ 000bab4a 0021
.org 0xbab4c
	ldrsh r0, [r0, r1]	@ 000bab4c 405e
.org 0xbab4e
	adds r1, r0, #0	@ 000bab4e 011c
.org 0xbab50
	cmp r0, #0	@ 000bab50 0028
.org 0xbab52
	bge.n 0xbab56	@ 000bab52 00da
.org 0xbab54
	adds r1, r0, #3	@ 000bab54 c11c
.org 0xbab56
	asrs r0, r1, #2	@ 000bab56 8810
.org 0xbab58
	lsls r0, r0, #24	@ 000bab58 0006
.org 0xbab5a
	lsrs r0, r0, #23	@ 000bab5a c00d
.org 0xbab5c
	adds r0, r0, r2	@ 000bab5c 8018
.org 0xbab5e
	movs r1, #0	@ 000bab5e 0021
.org 0xbab60
	ldrsh r0, [r0, r1]	@ 000bab60 405e
.org 0xbab62
	cmp r0, #0	@ 000bab62 0028
.org 0xbab64
	bge.n 0xbab68	@ 000bab64 00da
.org 0xbab66
	adds r0, #15	@ 000bab66 0f30
.org 0xbab68
	asrs r2, r0, #4	@ 000bab68 0211
.org 0xbab6a
	ldr r3, [pc, #108]	@ 000bab6a 1b4b
.org 0xbab6c
	movs r0, #31	@ 000bab6c 1f20
.org 0xbab6e
	adds r1, r2, #0	@ 000bab6e 111c
.org 0xbab70
	ands r1, r0	@ 000bab70 0140
.org 0xbab72
	movs r0, #16	@ 000bab72 1020
.org 0xbab74
	subs r0, r0, r2	@ 000bab74 801a
.org 0xbab76
	lsls r0, r0, #8	@ 000bab76 0002
.org 0xbab78
	orrs r1, r0	@ 000bab78 0143
.org 0xbab7a
	strh r1, [r3, #2]	@ 000bab7a 5980
.org 0xbab7c
	lsls r0, r4, #24	@ 000bab7c 2006
.org 0xbab7e
	lsrs r2, r0, #24	@ 000bab7e 020e
.org 0xbab80
	cmp r2, #0	@ 000bab80 002a
.org 0xbab82
	bne.n 0xbabcc	@ 000bab82 23d1
.org 0xbab84
	strh r2, [r3, #0]	@ 000bab84 1a80
.org 0xbab86
	adds r3, r5, #0	@ 000bab86 2b1c
.org 0xbab88
	adds r3, #69	@ 000bab88 4533
.org 0xbab8a
	ldrb r1, [r3, #0]	@ 000bab8a 1978
.org 0xbab8c
	movs r0, #13	@ 000bab8c 0d20
.org 0xbab8e
	negs r0, r0	@ 000bab8e 4042
.org 0xbab90
	ands r0, r1	@ 000bab90 0840
.org 0xbab92
	strb r0, [r3, #0]	@ 000bab92 1870
.org 0xbab94
	ldrb r1, [r5, #10]	@ 000bab94 a97a
.org 0xbab96
	movs r0, #254	@ 000bab96 fe20
.org 0xbab98
	ands r0, r1	@ 000bab98 0840
.org 0xbab9a
	movs r1, #253	@ 000bab9a fd21
.org 0xbab9c
	ands r0, r1	@ 000bab9c 0840
.org 0xbab9e
	strb r0, [r5, #10]	@ 000bab9e a872
.org 0xbaba0
	adds r0, r5, #0	@ 000baba0 281c
.org 0xbaba2
	adds r0, #140	@ 000baba2 8c30
.org 0xbaba4
	str r2, [r0, #0]	@ 000baba4 0260
.org 0xbaba6
	adds r0, #4	@ 000baba6 0430
.org 0xbaba8
	str r2, [r0, #0]	@ 000baba8 0260
.org 0xbabaa
	adds r1, r5, #0	@ 000babaa 291c
.org 0xbabac
	adds r1, #148	@ 000babac 9431
.org 0xbabae
	movs r0, #0	@ 000babae 0020
.org 0xbabb0
	strb r0, [r1, #0]	@ 000babb0 0870
.org 0xbabb2
	ldrb r1, [r5, #10]	@ 000babb2 a97a
.org 0xbabb4
	movs r0, #251	@ 000babb4 fb20
.org 0xbabb6
	ands r0, r1	@ 000babb6 0840
.org 0xbabb8
	strb r0, [r5, #10]	@ 000babb8 a872
.org 0xbabba
	ldr r1, [pc, #44]	@ 000babba 0b49
.org 0xbabbc
	ldrb r0, [r5, #9]	@ 000babbc 687a
.org 0xbabbe
	lsls r0, r0, #2	@ 000babbe 8000
.org 0xbabc0
	adds r0, r0, r1	@ 000babc0 4018
.org 0xbabc2
	movs r1, #3	@ 000babc2 0321
.org 0xbabc4
	str r1, [r5, #12]	@ 000babc4 e960
.org 0xbabc6
	ldr r0, [r0, #0]	@ 000babc6 0068
.org 0xbabc8
	ldr r0, [r0, #12]	@ 000babc8 c068
.org 0xbabca
	str r0, [r5, #20]	@ 000babca 6861
.org 0xbabcc
	pop {r4, r5}	@ 000babcc 30bc
.org 0xbabce
	pop {r0}	@ 000babce 01bc
.org 0xbabd0
	bx r0	@ 000babd0 0047
