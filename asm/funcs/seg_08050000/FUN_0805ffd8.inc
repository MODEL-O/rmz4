@ FUN_0805ffd8  entry 0x0805ffd8  size 242
.thumb
.org 0x5ffd8
FUN_0805ffd8:
	push {r4, lr}	@ 0005ffd8 10b5
.org 0x5ffda
	adds r4, r0, #0	@ 0005ffda 041c
.org 0x5ffdc
	ldrb r0, [r4, #14]	@ 0005ffdc a07b
.org 0x5ffde
	cmp r0, #0	@ 0005ffde 0028
.org 0x5ffe0
	bne.n 0x6008c	@ 0005ffe0 54d1
.org 0x5ffe2
	adds r1, r4, #0	@ 0005ffe2 211c
.org 0x5ffe4
	adds r1, #180	@ 0005ffe4 b431
.org 0x5ffe6
	movs r0, #6	@ 0005ffe6 0620
.org 0x5ffe8
	strb r0, [r1, #28]	@ 0005ffe8 0877
.org 0x5ffea
	ldr r1, [pc, #84]	@ 0005ffea 1549
.org 0x5ffec
	adds r0, r4, #0	@ 0005ffec 201c
.org 0x5ffee
	bl 0x1cf00	@ 0005ffee bcf787ff
.org 0x5fff2
	adds r0, r4, #0	@ 0005fff2 201c
.org 0x5fff4
	bl 0xde5d0	@ 0005fff4 7ef0ecfa
.org 0x5fff8
	str r0, [r4, #44]	@ 0005fff8 e062
.org 0x5fffa
	movs r3, #0	@ 0005fffa 0023
.org 0x5fffc
	ldr r0, [pc, #68]	@ 0005fffc 1148
.org 0x5fffe
	ldr r2, [r0, #0]	@ 0005fffe 0268
.org 0x60000
	ldr r1, [r4, #84]	@ 00060000 616d
.org 0x60002
	ldr r0, [r2, #84]	@ 00060002 506d
.org 0x60004
	cmp r1, r0	@ 00060004 8142
.org 0x60006
	bge.n 0x6000a	@ 00060006 00da
.org 0x60008
	movs r3, #1	@ 00060008 0123
.org 0x6000a
	adds r0, r4, #0	@ 0006000a 201c
.org 0x6000c
	adds r0, #76	@ 0006000c 4c30
.org 0x6000e
	strb r3, [r0, #0]	@ 0006000e 0370
.org 0x60010
	movs r3, #0	@ 00060010 0023
.org 0x60012
	ldr r1, [r4, #84]	@ 00060012 616d
.org 0x60014
	ldr r0, [r2, #84]	@ 00060014 506d
.org 0x60016
	cmp r1, r0	@ 00060016 8142
.org 0x60018
	bge.n 0x6001c	@ 00060018 00da
.org 0x6001a
	movs r3, #1	@ 0006001a 0123
.org 0x6001c
	movs r0, #74	@ 0006001c 4a20
.org 0x6001e
	adds r0, r0, r4	@ 0006001e 0019
.org 0x60020
	mov ip, r0	@ 00060020 8446
.org 0x60022
	lsls r2, r3, #4	@ 00060022 1a01
.org 0x60024
	ldrb r1, [r0, #0]	@ 00060024 0178
.org 0x60026
	movs r0, #17	@ 00060026 1120
.org 0x60028
	negs r0, r0	@ 00060028 4042
.org 0x6002a
	ands r0, r1	@ 0006002a 0840
.org 0x6002c
	orrs r0, r2	@ 0006002c 1043
.org 0x6002e
	mov r1, ip	@ 0006002e 6146
.org 0x60030
	strb r0, [r1, #0]	@ 00060030 0870
.org 0x60032
	cmp r3, #0	@ 00060032 002b
.org 0x60034
	beq.n 0x60048	@ 00060034 08d0
.org 0x60036
	ldrb r0, [r4, #10]	@ 00060036 a07a
.org 0x60038
	movs r1, #16	@ 00060038 1021
.org 0x6003a
	orrs r0, r1	@ 0006003a 0843
.org 0x6003c
	b.n 0x6004e	@ 0006003c 07e0
.org 0x6003e
	.byte 0x00	@ 0006003e data
.org 0x6003f
	.byte 0x00	@ 0006003f data
.org 0x60040
	.byte 0x06,0xa5,0x00,0x00	@ 00060040 data
.org 0x60044
	.byte 0xf0,0xdb,0x02,0x02	@ 00060044 data
.org 0x60048
	ldrb r1, [r4, #10]	@ 00060048 a17a
.org 0x6004a
	movs r0, #239	@ 0006004a ef20
.org 0x6004c
	ands r0, r1	@ 0006004c 0840
.org 0x6004e
	strb r0, [r4, #10]	@ 0006004e a072
.org 0x60050
	adds r0, r4, #0	@ 00060050 201c
.org 0x60052
	adds r0, #116	@ 00060052 7430
.org 0x60054
	ldr r1, [pc, #16]	@ 00060054 0449
.org 0x60056
	bl 0x5784	@ 00060056 a5f795fb
.org 0x6005a
	ldrb r1, [r4, #10]	@ 0006005a a17a
.org 0x6005c
	movs r0, #16	@ 0006005c 1020
.org 0x6005e
	ands r0, r1	@ 0006005e 0840
.org 0x60060
	cmp r0, #0	@ 00060060 0028
.org 0x60062
	beq.n 0x60070	@ 00060062 05d0
.org 0x60064
	ldr r0, [pc, #4]	@ 00060064 0148
.org 0x60066
	b.n 0x60074	@ 00060066 05e0
.org 0x60068
	.byte 0x9c,0xaa,0x85,0x08	@ 00060068 data
.org 0x6006c
	.byte 0x00,0xfc,0xff,0xff	@ 0006006c data
.org 0x60070
	movs r0, #128	@ 00060070 8020
.org 0x60072
	lsls r0, r0, #3	@ 00060072 c000
.org 0x60074
	str r0, [r4, #92]	@ 00060074 e065
.org 0x60076
	ldr r0, [pc, #64]	@ 00060076 1048
.org 0x60078
	str r0, [r4, #96]	@ 00060078 2066
.org 0x6007a
	movs r0, #12	@ 0006007a 0c20
.org 0x6007c
	strb r0, [r4, #18]	@ 0006007c a074
.org 0x6007e
	movs r0, #139	@ 0006007e 8b20
.org 0x60080
	lsls r0, r0, #1	@ 00060080 4000
.org 0x60082
	bl 0x2b10	@ 00060082 a2f745fd
.org 0x60086
	ldrb r0, [r4, #14]	@ 00060086 a07b
.org 0x60088
	adds r0, #1	@ 00060088 0130
.org 0x6008a
	strb r0, [r4, #14]	@ 0006008a a073
.org 0x6008c
	adds r0, r4, #0	@ 0006008c 201c
.org 0x6008e
	bl 0x1cff0	@ 0006008e bcf7afff
.org 0x60092
	ldr r0, [r4, #84]	@ 00060092 606d
.org 0x60094
	ldr r1, [r4, #92]	@ 00060094 e16d
.org 0x60096
	adds r0, r0, r1	@ 00060096 4018
.org 0x60098
	str r0, [r4, #84]	@ 00060098 6065
.org 0x6009a
	ldr r0, [r4, #88]	@ 0006009a a06d
.org 0x6009c
	ldr r1, [r4, #96]	@ 0006009c 216e
.org 0x6009e
	adds r0, r0, r1	@ 0006009e 4018
.org 0x600a0
	str r0, [r4, #88]	@ 000600a0 a065
.org 0x600a2
	adds r1, #64	@ 000600a2 4031
.org 0x600a4
	str r1, [r4, #96]	@ 000600a4 2166
.org 0x600a6
	ldrb r1, [r4, #18]	@ 000600a6 a17c
.org 0x600a8
	movs r0, #1	@ 000600a8 0120
.org 0x600aa
	ands r0, r1	@ 000600aa 0840
.org 0x600ac
	cmp r0, #0	@ 000600ac 0028
.org 0x600ae
	beq.n 0x600bc	@ 000600ae 05d0
.org 0x600b0
	ldrb r1, [r4, #10]	@ 000600b0 a17a
.org 0x600b2
	movs r0, #254	@ 000600b2 fe20
.org 0x600b4
	ands r0, r1	@ 000600b4 0840
.org 0x600b6
	b.n 0x600c2	@ 000600b6 04e0
.org 0x600b8
	.byte 0x80,0xfe,0xff,0xff	@ 000600b8 data
.org 0x600bc
	ldrb r0, [r4, #10]	@ 000600bc a07a
.org 0x600be
	movs r1, #1	@ 000600be 0121
.org 0x600c0
	orrs r0, r1	@ 000600c0 0843
.org 0x600c2
	strb r0, [r4, #10]	@ 000600c2 a072
.org 0x600c4
	ldrb r0, [r4, #18]	@ 000600c4 a07c
.org 0x600c6
	subs r0, #1	@ 000600c6 0138
.org 0x600c8
	strb r0, [r4, #18]	@ 000600c8 a074
