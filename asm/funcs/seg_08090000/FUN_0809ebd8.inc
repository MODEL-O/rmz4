@ FUN_0809ebd8  entry 0x0809ebd8  size 154
.thumb
.org 0x9ebd8
FUN_0809ebd8:
	push {r4, r5, r6, lr}	@ 0009ebd8 70b5
.org 0x9ebda
	adds r5, r0, #0	@ 0009ebda 051c
.org 0x9ebdc
	ldrb r4, [r5, #17]	@ 0009ebdc 6c7c
.org 0x9ebde
	ldr r1, [pc, #60]	@ 0009ebde 0f49
.org 0x9ebe0
	ldrb r0, [r5, #9]	@ 0009ebe0 687a
.org 0x9ebe2
	lsls r0, r0, #2	@ 0009ebe2 8000
.org 0x9ebe4
	adds r0, r0, r1	@ 0009ebe4 4018
.org 0x9ebe6
	movs r1, #1	@ 0009ebe6 0121
.org 0x9ebe8
	str r1, [r5, #12]	@ 0009ebe8 e960
.org 0x9ebea
	ldr r0, [r0, #0]	@ 0009ebea 0068
.org 0x9ebec
	ldr r0, [r0, #4]	@ 0009ebec 4068
.org 0x9ebee
	str r0, [r5, #20]	@ 0009ebee 6861
.org 0x9ebf0
	ldrb r1, [r5, #10]	@ 0009ebf0 a97a
.org 0x9ebf2
	movs r0, #1	@ 0009ebf2 0120
.org 0x9ebf4
	movs r6, #0	@ 0009ebf4 0026
.org 0x9ebf6
	movs r2, #0	@ 0009ebf6 0022
.org 0x9ebf8
	orrs r0, r1	@ 0009ebf8 0843
.org 0x9ebfa
	movs r1, #2	@ 0009ebfa 0221
.org 0x9ebfc
	orrs r0, r1	@ 0009ebfc 0843
.org 0x9ebfe
	strb r0, [r5, #10]	@ 0009ebfe a872
.org 0x9ec00
	str r2, [r5, #96]	@ 0009ec00 2a66
.org 0x9ec02
	adds r0, r5, #0	@ 0009ec02 281c
.org 0x9ec04
	adds r0, #180	@ 0009ec04 b430
.org 0x9ec06
	strb r2, [r0, #0]	@ 0009ec06 0270
.org 0x9ec08
	adds r0, r5, #0	@ 0009ec08 281c
.org 0x9ec0a
	bl 0x1cc9c	@ 0009ec0a 7ef747f8
.org 0x9ec0e
	cmp r4, #0	@ 0009ec0e 002c
.org 0x9ec10
	beq.n 0x9ec20	@ 0009ec10 06d0
.org 0x9ec12
	ldrb r0, [r5, #10]	@ 0009ec12 a87a
.org 0x9ec14
	movs r1, #16	@ 0009ec14 1021
.org 0x9ec16
	orrs r0, r1	@ 0009ec16 0843
.org 0x9ec18
	b.n 0x9ec26	@ 0009ec18 05e0
.org 0x9ec1a
	.byte 0x00	@ 0009ec1a data
.org 0x9ec1b
	.byte 0x00	@ 0009ec1b data
.org 0x9ec1c
	.byte 0x40,0xdb,0x85,0x08	@ 0009ec1c data
.org 0x9ec20
	ldrb r1, [r5, #10]	@ 0009ec20 a97a
.org 0x9ec22
	movs r0, #239	@ 0009ec22 ef20
.org 0x9ec24
	ands r0, r1	@ 0009ec24 0840
.org 0x9ec26
	strb r0, [r5, #10]	@ 0009ec26 a872
.org 0x9ec28
	movs r1, #1	@ 0009ec28 0121
.org 0x9ec2a
	ands r1, r4	@ 0009ec2a 2140
.org 0x9ec2c
	adds r0, r5, #0	@ 0009ec2c 281c
.org 0x9ec2e
	adds r0, #76	@ 0009ec2e 4c30
.org 0x9ec30
	strb r1, [r0, #0]	@ 0009ec30 0170
.org 0x9ec32
	adds r3, r5, #0	@ 0009ec32 2b1c
.org 0x9ec34
	adds r3, #74	@ 0009ec34 4a33
.org 0x9ec36
	lsls r1, r1, #4	@ 0009ec36 0901
.org 0x9ec38
	ldrb r2, [r3, #0]	@ 0009ec38 1a78
.org 0x9ec3a
	movs r0, #17	@ 0009ec3a 1120
.org 0x9ec3c
	negs r0, r0	@ 0009ec3c 4042
.org 0x9ec3e
	ands r0, r2	@ 0009ec3e 1040
.org 0x9ec40
	orrs r0, r1	@ 0009ec40 0843
.org 0x9ec42
	strb r0, [r3, #0]	@ 0009ec42 1870
.org 0x9ec44
	adds r1, r5, #0	@ 0009ec44 291c
.org 0x9ec46
	adds r1, #37	@ 0009ec46 2531
.org 0x9ec48
	movs r0, #7	@ 0009ec48 0720
.org 0x9ec4a
	strb r0, [r1, #0]	@ 0009ec4a 0870
.org 0x9ec4c
	ldrb r1, [r5, #10]	@ 0009ec4c a97a
.org 0x9ec4e
	movs r0, #4	@ 0009ec4e 0420
.org 0x9ec50
	orrs r0, r1	@ 0009ec50 0843
.org 0x9ec52
	strb r0, [r5, #10]	@ 0009ec52 a872
.org 0x9ec54
	adds r4, r5, #0	@ 0009ec54 2c1c
.org 0x9ec56
	adds r4, #116	@ 0009ec56 7434
.org 0x9ec58
	ldr r1, [pc, #28]	@ 0009ec58 0749
.org 0x9ec5a
	adds r2, r5, #0	@ 0009ec5a 2a1c
.org 0x9ec5c
	adds r2, #84	@ 0009ec5c 5432
.org 0x9ec5e
	adds r0, r4, #0	@ 0009ec5e 201c
.org 0x9ec60
	movs r3, #3	@ 0009ec60 0323
.org 0x9ec62
	bl 0x5760	@ 0009ec62 66f77dfd
.org 0x9ec66
	str r5, [r4, #44]	@ 0009ec66 e562
.org 0x9ec68
	ldr r0, [pc, #16]	@ 0009ec68 0448
.org 0x9ec6a
	str r0, [r4, #36]	@ 0009ec6a 6062
.org 0x9ec6c
	adds r0, r5, #0	@ 0009ec6c 281c
.org 0x9ec6e
	bl 0x9ec80	@ 0009ec6e 00f007f8
