@ FUN_080900cc  entry 0x080900cc  size 108
.thumb
.org 0x900cc
FUN_080900cc:
	push {lr}	@ 000900cc 00b5
.org 0x900ce
	adds r3, r0, #0	@ 000900ce 031c
.org 0x900d0
	ldr r0, [r3, #40]	@ 000900d0 986a
.org 0x900d2
	ldrb r0, [r0, #12]	@ 000900d2 007b
.org 0x900d4
	cmp r0, #1	@ 000900d4 0128
.org 0x900d6
	bls.n 0x90114	@ 000900d6 1dd9
.org 0x900d8
	ldrb r1, [r3, #10]	@ 000900d8 997a
.org 0x900da
	movs r0, #254	@ 000900da fe20
.org 0x900dc
	ands r0, r1	@ 000900dc 0840
.org 0x900de
	movs r2, #0	@ 000900de 0022
.org 0x900e0
	movs r1, #253	@ 000900e0 fd21
.org 0x900e2
	ands r0, r1	@ 000900e2 0840
.org 0x900e4
	strb r0, [r3, #10]	@ 000900e4 9872
.org 0x900e6
	adds r0, r3, #0	@ 000900e6 181c
.org 0x900e8
	adds r0, #140	@ 000900e8 8c30
.org 0x900ea
	str r2, [r0, #0]	@ 000900ea 0260
.org 0x900ec
	adds r0, #4	@ 000900ec 0430
.org 0x900ee
	str r2, [r0, #0]	@ 000900ee 0260
.org 0x900f0
	adds r0, #4	@ 000900f0 0430
.org 0x900f2
	strb r2, [r0, #0]	@ 000900f2 0270
.org 0x900f4
	ldrb r1, [r3, #10]	@ 000900f4 997a
.org 0x900f6
	movs r0, #251	@ 000900f6 fb20
.org 0x900f8
	ands r0, r1	@ 000900f8 0840
.org 0x900fa
	strb r0, [r3, #10]	@ 000900fa 9872
.org 0x900fc
	ldr r1, [pc, #16]	@ 000900fc 0449
.org 0x900fe
	ldrb r0, [r3, #9]	@ 000900fe 587a
.org 0x90100
	lsls r0, r0, #2	@ 00090100 8000
.org 0x90102
	adds r0, r0, r1	@ 00090102 4018
.org 0x90104
	movs r1, #3	@ 00090104 0321
.org 0x90106
	str r1, [r3, #12]	@ 00090106 d960
.org 0x90108
	ldr r0, [r0, #0]	@ 00090108 0068
.org 0x9010a
	ldr r0, [r0, #12]	@ 0009010a c068
.org 0x9010c
	str r0, [r3, #20]	@ 0009010c 5861
.org 0x9010e
	b.n 0x90138	@ 0009010e 13e0
.org 0x90110
	.byte 0x40,0xdb,0x85,0x08	@ 00090110 data
.org 0x90114
	adds r0, r3, #0	@ 00090114 181c
.org 0x90116
	adds r0, #180	@ 00090116 b430
.org 0x90118
	ldrb r1, [r0, #0]	@ 00090118 0178
.org 0x9011a
	ldrb r0, [r3, #13]	@ 0009011a 587b
.org 0x9011c
	cmp r0, r1	@ 0009011c 8842
.org 0x9011e
	beq.n 0x90128	@ 0009011e 03d0
.org 0x90120
	movs r0, #0	@ 00090120 0020
.org 0x90122
	strb r1, [r3, #13]	@ 00090122 5973
.org 0x90124
	strb r0, [r3, #14]	@ 00090124 9873
.org 0x90126
	strb r0, [r3, #15]	@ 00090126 d873
.org 0x90128
	ldr r0, [pc, #16]	@ 00090128 0448
.org 0x9012a
	ldrb r1, [r3, #13]	@ 0009012a 597b
.org 0x9012c
	lsls r1, r1, #2	@ 0009012c 8900
.org 0x9012e
	adds r1, r1, r0	@ 0009012e 0918
.org 0x90130
	ldr r1, [r1, #0]	@ 00090130 0968
.org 0x90132
	adds r0, r3, #0	@ 00090132 181c
.org 0x90134
	bl 0x128f80	@ 00090134 98f024ff
