@ FUN_080a700c  entry 0x080a700c  size 116
.thumb
.org 0xa700c
FUN_080a700c:
	push {r4, r5, lr}	@ 000a700c 30b5
.org 0xa700e
	adds r4, r0, #0	@ 000a700e 041c
.org 0xa7010
	ldrb r5, [r4, #14]	@ 000a7010 a57b
.org 0xa7012
	cmp r5, #0	@ 000a7012 002d
.org 0xa7014
	bne.n 0xa7026	@ 000a7014 07d1
.org 0xa7016
	movs r1, #139	@ 000a7016 8b21
.org 0xa7018
	lsls r1, r1, #8	@ 000a7018 0902
.org 0xa701a
	bl 0x1cf00	@ 000a701a 75f771ff
.org 0xa701e
	strb r5, [r4, #18]	@ 000a701e a574
.org 0xa7020
	ldrb r0, [r4, #14]	@ 000a7020 a07b
.org 0xa7022
	adds r0, #1	@ 000a7022 0130
.org 0xa7024
	strb r0, [r4, #14]	@ 000a7024 a073
.org 0xa7026
	adds r0, r4, #0	@ 000a7026 201c
.org 0xa7028
	bl 0x1cff0	@ 000a7028 75f7e2ff
.org 0xa702c
	ldrb r0, [r4, #18]	@ 000a702c a07c
.org 0xa702e
	cmp r0, #8	@ 000a702e 0828
.org 0xa7030
	bls.n 0xa707a	@ 000a7030 23d9
.org 0xa7032
	ldrb r3, [r4, #17]	@ 000a7032 637c
.org 0xa7034
	cmp r3, #0	@ 000a7034 002b
.org 0xa7036
	bne.n 0xa7070	@ 000a7036 1bd1
.org 0xa7038
	ldr r0, [pc, #48]	@ 000a7038 0c48
.org 0xa703a
	ldr r2, [r0, #0]	@ 000a703a 0268
.org 0xa703c
	ldr r0, [r2, #84]	@ 000a703c 506d
.org 0xa703e
	ldr r1, [r4, #84]	@ 000a703e 616d
.org 0xa7040
	subs r0, r0, r1	@ 000a7040 401a
.org 0xa7042
	movs r1, #208	@ 000a7042 d021
.org 0xa7044
	lsls r1, r1, #7	@ 000a7044 c901
.org 0xa7046
	adds r0, r0, r1	@ 000a7046 4018
.org 0xa7048
	movs r1, #208	@ 000a7048 d021
.org 0xa704a
	lsls r1, r1, #8	@ 000a704a 0902
.org 0xa704c
	cmp r0, r1	@ 000a704c 8842
.org 0xa704e
	bhi.n 0xa707e	@ 000a704e 16d8
.org 0xa7050
	ldr r0, [r2, #88]	@ 000a7050 906d
.org 0xa7052
	ldr r1, [r4, #88]	@ 000a7052 a16d
.org 0xa7054
	subs r0, r0, r1	@ 000a7054 401a
.org 0xa7056
	movs r1, #160	@ 000a7056 a021
.org 0xa7058
	lsls r1, r1, #7	@ 000a7058 c901
.org 0xa705a
	adds r0, r0, r1	@ 000a705a 4018
.org 0xa705c
	movs r1, #160	@ 000a705c a021
.org 0xa705e
	lsls r1, r1, #8	@ 000a705e 0902
.org 0xa7060
	cmp r0, r1	@ 000a7060 8842
.org 0xa7062
	bhi.n 0xa707e	@ 000a7062 0cd8
.org 0xa7064
	movs r0, #1	@ 000a7064 0120
.org 0xa7066
	strb r0, [r4, #13]	@ 000a7066 6073
.org 0xa7068
	strb r3, [r4, #14]	@ 000a7068 a373
.org 0xa706a
	b.n 0xa707e	@ 000a706a 08e0
.org 0xa706c
	.byte 0xf0,0xdb,0x02,0x02	@ 000a706c data
.org 0xa7070
	movs r1, #0	@ 000a7070 0021
.org 0xa7072
	movs r0, #1	@ 000a7072 0120
.org 0xa7074
	strb r0, [r4, #13]	@ 000a7074 6073
.org 0xa7076
	strb r1, [r4, #14]	@ 000a7076 a173
.org 0xa7078
	b.n 0xa707e	@ 000a7078 01e0
.org 0xa707a
	adds r0, #1	@ 000a707a 0130
.org 0xa707c
	strb r0, [r4, #18]	@ 000a707c a074
.org 0xa707e
	pop {r4, r5}	@ 000a707e 30bc
