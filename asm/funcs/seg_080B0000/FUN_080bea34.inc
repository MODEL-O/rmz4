@ FUN_080bea34  entry 0x080bea34  size 212
.thumb
.org 0xbea34
FUN_080bea34:
	push {r4, r5, r6, r7, lr}	@ 000bea34 f0b5
.org 0xbea36
	mov r7, r8	@ 000bea36 4746
.org 0xbea38
	push {r7}	@ 000bea38 80b4
.org 0xbea3a
	adds r4, r0, #0	@ 000bea3a 041c
.org 0xbea3c
	adds r0, #180	@ 000bea3c b430
.org 0xbea3e
	ldr r0, [r0, #0]	@ 000bea3e 0068
.org 0xbea40
	mov r8, r0	@ 000bea40 8046
.org 0xbea42
	ldr r7, [r4, #40]	@ 000bea42 a76a
.org 0xbea44
	ldrb r0, [r7, #10]	@ 000bea44 b87a
.org 0xbea46
	lsrs r5, r0, #4	@ 000bea46 0509
.org 0xbea48
	movs r6, #1	@ 000bea48 0126
.org 0xbea4a
	ands r5, r6	@ 000bea4a 3540
.org 0xbea4c
	ldrb r0, [r4, #15]	@ 000bea4c e07b
.org 0xbea4e
	cmp r0, #0	@ 000bea4e 0028
.org 0xbea50
	bne.n 0xbea62	@ 000bea50 07d1
.org 0xbea52
	adds r0, r4, #0	@ 000bea52 201c
.org 0xbea54
	adds r0, #116	@ 000bea54 7430
.org 0xbea56
	ldr r1, [pc, #72]	@ 000bea56 1249
.org 0xbea58
	bl 0x5784	@ 000bea58 46f794fe
.org 0xbea5c
	ldrb r0, [r4, #15]	@ 000bea5c e07b
.org 0xbea5e
	adds r0, #1	@ 000bea5e 0130
.org 0xbea60
	strb r0, [r4, #15]	@ 000bea60 e073
.org 0xbea62
	ldrb r0, [r7, #12]	@ 000bea62 387b
.org 0xbea64
	cmp r0, #1	@ 000bea64 0128
.org 0xbea66
	bls.n 0xbeaa8	@ 000bea66 1fd9
.org 0xbea68
	ldrb r1, [r4, #10]	@ 000bea68 a17a
.org 0xbea6a
	movs r0, #254	@ 000bea6a fe20
.org 0xbea6c
	ands r0, r1	@ 000bea6c 0840
.org 0xbea6e
	movs r2, #0	@ 000bea6e 0022
.org 0xbea70
	movs r1, #253	@ 000bea70 fd21
.org 0xbea72
	ands r0, r1	@ 000bea72 0840
.org 0xbea74
	strb r0, [r4, #10]	@ 000bea74 a072
.org 0xbea76
	adds r0, r4, #0	@ 000bea76 201c
.org 0xbea78
	adds r0, #140	@ 000bea78 8c30
.org 0xbea7a
	str r2, [r0, #0]	@ 000bea7a 0260
.org 0xbea7c
	adds r0, #4	@ 000bea7c 0430
.org 0xbea7e
	str r2, [r0, #0]	@ 000bea7e 0260
.org 0xbea80
	adds r0, #4	@ 000bea80 0430
.org 0xbea82
	strb r2, [r0, #0]	@ 000bea82 0270
.org 0xbea84
	ldrb r1, [r4, #10]	@ 000bea84 a17a
.org 0xbea86
	movs r0, #251	@ 000bea86 fb20
.org 0xbea88
	ands r0, r1	@ 000bea88 0840
.org 0xbea8a
	strb r0, [r4, #10]	@ 000bea8a a072
.org 0xbea8c
	ldr r1, [pc, #20]	@ 000bea8c 0549
.org 0xbea8e
	ldrb r0, [r4, #9]	@ 000bea8e 607a
.org 0xbea90
	lsls r0, r0, #2	@ 000bea90 8000
.org 0xbea92
	adds r0, r0, r1	@ 000bea92 4018
.org 0xbea94
	movs r1, #3	@ 000bea94 0321
.org 0xbea96
	str r1, [r4, #12]	@ 000bea96 e160
.org 0xbea98
	ldr r0, [r0, #0]	@ 000bea98 0068
.org 0xbea9a
	ldr r0, [r0, #12]	@ 000bea9a c068
.org 0xbea9c
	str r0, [r4, #20]	@ 000bea9c 6061
.org 0xbea9e
	b.n 0xbeb06	@ 000bea9e 32e0
.org 0xbeaa0
	.byte 0x54,0x4e,0x86,0x08	@ 000beaa0 data
.org 0xbeaa4
	.byte 0xf4,0x49,0x86,0x08	@ 000beaa4 data
.org 0xbeaa8
	adds r0, r4, #0	@ 000beaa8 201c
.org 0xbeaaa
	adds r0, #140	@ 000beaaa 8c30
.org 0xbeaac
	ldr r0, [r0, #0]	@ 000beaac 0068
.org 0xbeaae
	movs r1, #128	@ 000beaae 8021
.org 0xbeab0
	lsls r1, r1, #4	@ 000beab0 0901
.org 0xbeab2
	ands r0, r1	@ 000beab2 0840
.org 0xbeab4
	cmp r0, #0	@ 000beab4 0028
.org 0xbeab6
	beq.n 0xbeace	@ 000beab6 0ad0
.org 0xbeab8
	mov r0, r8	@ 000beab8 4046
.org 0xbeaba
	adds r0, #201	@ 000beaba c930
.org 0xbeabc
	movs r1, #0	@ 000beabc 0021
.org 0xbeabe
	strb r6, [r0, #0]	@ 000beabe 0670
.org 0xbeac0
	adds r0, r4, #0	@ 000beac0 201c
.org 0xbeac2
	adds r0, #184	@ 000beac2 b830
.org 0xbeac4
	strb r6, [r0, #0]	@ 000beac4 0670
.org 0xbeac6
	strb r6, [r4, #13]	@ 000beac6 6673
.org 0xbeac8
	strb r1, [r4, #14]	@ 000beac8 a173
.org 0xbeaca
	strb r1, [r4, #15]	@ 000beaca e173
.org 0xbeacc
	b.n 0xbeb06	@ 000beacc 1be0
.org 0xbeace
	adds r2, r5, #0	@ 000beace 2a1c
.org 0xbead0
	cmp r2, #0	@ 000bead0 002a
.org 0xbead2
	beq.n 0xbeadc	@ 000bead2 03d0
.org 0xbead4
	ldrb r1, [r4, #10]	@ 000bead4 a17a
.org 0xbead6
	movs r0, #16	@ 000bead6 1020
.org 0xbead8
	orrs r0, r1	@ 000bead8 0843
.org 0xbeada
	b.n 0xbeae2	@ 000beada 02e0
.org 0xbeadc
	ldrb r1, [r4, #10]	@ 000beadc a17a
.org 0xbeade
	movs r0, #239	@ 000beade ef20
.org 0xbeae0
	ands r0, r1	@ 000beae0 0840
.org 0xbeae2
	strb r0, [r4, #10]	@ 000beae2 a072
.org 0xbeae4
	adds r1, r2, #0	@ 000beae4 111c
.org 0xbeae6
	adds r0, r4, #0	@ 000beae6 201c
.org 0xbeae8
	adds r0, #76	@ 000beae8 4c30
.org 0xbeaea
	strb r1, [r0, #0]	@ 000beaea 0170
.org 0xbeaec
	adds r3, r4, #0	@ 000beaec 231c
.org 0xbeaee
	adds r3, #74	@ 000beaee 4a33
.org 0xbeaf0
	lsls r1, r1, #4	@ 000beaf0 0901
.org 0xbeaf2
	ldrb r2, [r3, #0]	@ 000beaf2 1a78
.org 0xbeaf4
	movs r0, #17	@ 000beaf4 1120
.org 0xbeaf6
	negs r0, r0	@ 000beaf6 4042
.org 0xbeaf8
	ands r0, r2	@ 000beaf8 1040
.org 0xbeafa
	orrs r0, r1	@ 000beafa 0843
.org 0xbeafc
	strb r0, [r3, #0]	@ 000beafc 1870
.org 0xbeafe
	ldr r0, [r7, #84]	@ 000beafe 786d
.org 0xbeb00
	ldr r1, [r7, #88]	@ 000beb00 b96d
.org 0xbeb02
	str r0, [r4, #84]	@ 000beb02 6065
.org 0xbeb04
	str r1, [r4, #88]	@ 000beb04 a165
.org 0xbeb06
	pop {r3}	@ 000beb06 08bc
