@ FUN_0809fda8  entry 0x0809fda8  size 204
.thumb
.org 0x9fda8
FUN_0809fda8:
	push {r4, r5, r6, r7, lr}	@ 0009fda8 f0b5
.org 0x9fdaa
	adds r5, r0, #0	@ 0009fdaa 051c
.org 0x9fdac
	movs r7, #0	@ 0009fdac 0027
.org 0x9fdae
	ldr r0, [pc, #104]	@ 0009fdae 1a48
.org 0x9fdb0
	ldr r0, [r0, #0]	@ 0009fdb0 0068
.org 0x9fdb2
	ldr r3, [r5, #84]	@ 0009fdb2 6b6d
.org 0x9fdb4
	ldr r0, [r0, #84]	@ 0009fdb4 406d
.org 0x9fdb6
	cmp r3, r0	@ 0009fdb6 8342
.org 0x9fdb8
	bge.n 0x9fdbc	@ 0009fdb8 00da
.org 0x9fdba
	movs r7, #1	@ 0009fdba 0127
.org 0x9fdbc
	ldr r1, [pc, #92]	@ 0009fdbc 1749
.org 0x9fdbe
	ldrb r0, [r5, #9]	@ 0009fdbe 687a
.org 0x9fdc0
	lsls r0, r0, #2	@ 0009fdc0 8000
.org 0x9fdc2
	adds r0, r0, r1	@ 0009fdc2 4018
.org 0x9fdc4
	movs r1, #1	@ 0009fdc4 0121
.org 0x9fdc6
	str r1, [r5, #12]	@ 0009fdc6 e960
.org 0x9fdc8
	ldr r0, [r0, #0]	@ 0009fdc8 0068
.org 0x9fdca
	ldr r0, [r0, #4]	@ 0009fdca 4068
.org 0x9fdcc
	str r0, [r5, #20]	@ 0009fdcc 6861
.org 0x9fdce
	movs r4, #0	@ 0009fdce 0024
.org 0x9fdd0
	movs r2, #2	@ 0009fdd0 0222
.org 0x9fdd2
	movs r0, #2	@ 0009fdd2 0220
.org 0x9fdd4
	strb r0, [r5, #13]	@ 0009fdd4 6873
.org 0x9fdd6
	strb r4, [r5, #14]	@ 0009fdd6 ac73
.org 0x9fdd8
	strb r4, [r5, #15]	@ 0009fdd8 ec73
.org 0x9fdda
	ldrb r0, [r5, #10]	@ 0009fdda a87a
.org 0x9fddc
	movs r6, #0	@ 0009fddc 0026
.org 0x9fdde
	orrs r0, r1	@ 0009fdde 0843
.org 0x9fde0
	orrs r0, r2	@ 0009fde0 1043
.org 0x9fde2
	strb r0, [r5, #10]	@ 0009fde2 a872
.org 0x9fde4
	ldr r1, [r5, #88]	@ 0009fde4 a96d
.org 0x9fde6
	adds r0, r3, #0	@ 0009fde6 181c
.org 0x9fde8
	bl 0x8534	@ 0009fde8 68f7a4fb
.org 0x9fdec
	str r0, [r5, #88]	@ 0009fdec a865
.org 0x9fdee
	adds r1, r5, #0	@ 0009fdee 291c
.org 0x9fdf0
	adds r1, #180	@ 0009fdf0 b431
.org 0x9fdf2
	movs r0, #150	@ 0009fdf2 9620
.org 0x9fdf4
	lsls r0, r0, #2	@ 0009fdf4 8000
.org 0x9fdf6
	str r0, [r1, #0]	@ 0009fdf6 0860
.org 0x9fdf8
	str r4, [r5, #44]	@ 0009fdf8 ec62
.org 0x9fdfa
	adds r0, r5, #0	@ 0009fdfa 281c
.org 0x9fdfc
	adds r0, #184	@ 0009fdfc b830
.org 0x9fdfe
	strb r4, [r0, #0]	@ 0009fdfe 0470
.org 0x9fe00
	adds r0, #1	@ 0009fe00 0130
.org 0x9fe02
	strb r4, [r0, #0]	@ 0009fe02 0470
.org 0x9fe04
	adds r0, r5, #0	@ 0009fe04 281c
.org 0x9fe06
	bl 0x1cc9c	@ 0009fe06 7cf749ff
.org 0x9fe0a
	adds r2, r7, #0	@ 0009fe0a 3a1c
.org 0x9fe0c
	cmp r2, #0	@ 0009fe0c 002a
.org 0x9fe0e
	beq.n 0x9fe20	@ 0009fe0e 07d0
.org 0x9fe10
	ldrb r0, [r5, #10]	@ 0009fe10 a87a
.org 0x9fe12
	movs r1, #16	@ 0009fe12 1021
.org 0x9fe14
	orrs r0, r1	@ 0009fe14 0843
.org 0x9fe16
	b.n 0x9fe26	@ 0009fe16 06e0
.org 0x9fe18
	.byte 0xf0,0xdb,0x02,0x02	@ 0009fe18 data
.org 0x9fe1c
	.byte 0x40,0xdb,0x85,0x08	@ 0009fe1c data
.org 0x9fe20
	ldrb r1, [r5, #10]	@ 0009fe20 a97a
.org 0x9fe22
	movs r0, #239	@ 0009fe22 ef20
.org 0x9fe24
	ands r0, r1	@ 0009fe24 0840
.org 0x9fe26
	strb r0, [r5, #10]	@ 0009fe26 a872
.org 0x9fe28
	adds r1, r2, #0	@ 0009fe28 111c
.org 0x9fe2a
	adds r0, r5, #0	@ 0009fe2a 281c
.org 0x9fe2c
	adds r0, #76	@ 0009fe2c 4c30
.org 0x9fe2e
	strb r1, [r0, #0]	@ 0009fe2e 0170
.org 0x9fe30
	adds r3, r5, #0	@ 0009fe30 2b1c
.org 0x9fe32
	adds r3, #74	@ 0009fe32 4a33
.org 0x9fe34
	lsls r1, r1, #4	@ 0009fe34 0901
.org 0x9fe36
	ldrb r2, [r3, #0]	@ 0009fe36 1a78
.org 0x9fe38
	movs r0, #17	@ 0009fe38 1120
.org 0x9fe3a
	negs r0, r0	@ 0009fe3a 4042
.org 0x9fe3c
	ands r0, r2	@ 0009fe3c 1040
.org 0x9fe3e
	orrs r0, r1	@ 0009fe3e 0843
.org 0x9fe40
	strb r0, [r3, #0]	@ 0009fe40 1870
.org 0x9fe42
	ldr r1, [pc, #56]	@ 0009fe42 0e49
.org 0x9fe44
	adds r0, r5, #0	@ 0009fe44 281c
.org 0x9fe46
	bl 0x1cf00	@ 0009fe46 7df75bf8
.org 0x9fe4a
	adds r0, r5, #0	@ 0009fe4a 281c
.org 0x9fe4c
	bl 0x1cff0	@ 0009fe4c 7df7d0f8
.org 0x9fe50
	ldrb r1, [r5, #10]	@ 0009fe50 a97a
.org 0x9fe52
	movs r0, #4	@ 0009fe52 0420
.org 0x9fe54
	orrs r0, r1	@ 0009fe54 0843
.org 0x9fe56
	strb r0, [r5, #10]	@ 0009fe56 a872
.org 0x9fe58
	adds r4, r5, #0	@ 0009fe58 2c1c
.org 0x9fe5a
	adds r4, #116	@ 0009fe5a 7434
.org 0x9fe5c
	ldr r1, [pc, #32]	@ 0009fe5c 0849
.org 0x9fe5e
	adds r2, r5, #0	@ 0009fe5e 2a1c
.org 0x9fe60
	adds r2, #84	@ 0009fe60 5432
.org 0x9fe62
	adds r0, r4, #0	@ 0009fe62 201c
.org 0x9fe64
	movs r3, #6	@ 0009fe64 0623
.org 0x9fe66
	bl 0x5760	@ 0009fe66 65f77bfc
.org 0x9fe6a
	str r5, [r4, #44]	@ 0009fe6a e562
.org 0x9fe6c
	ldr r0, [pc, #20]	@ 0009fe6c 0548
.org 0x9fe6e
	str r0, [r4, #36]	@ 0009fe6e 6062
.org 0x9fe70
	adds r0, r5, #0	@ 0009fe70 281c
.org 0x9fe72
	bl 0x9ff50	@ 0009fe72 00f06df8
