@ FUN_080bb9b0  entry 0x080bb9b0  size 214
.thumb
.org 0xbb9b0
FUN_080bb9b0:
	push {r4, r5, r6, lr}	@ 000bb9b0 70b5
.org 0xbb9b2
	adds r5, r0, #0	@ 000bb9b2 051c
.org 0xbb9b4
	ldr r6, [r5, #40]	@ 000bb9b4 ae6a
.org 0xbb9b6
	ldrb r0, [r5, #15]	@ 000bb9b6 e87b
.org 0xbb9b8
	cmp r0, #0	@ 000bb9b8 0028
.org 0xbb9ba
	bne.n 0xbba64	@ 000bb9ba 53d1
.org 0xbb9bc
	adds r0, r5, #0	@ 000bb9bc 281c
.org 0xbb9be
	adds r0, #116	@ 000bb9be 7430
.org 0xbb9c0
	ldr r1, [pc, #88]	@ 000bb9c0 1649
.org 0xbb9c2
	bl 0x5784	@ 000bb9c2 49f7dffe
.org 0xbb9c6
	ldr r1, [pc, #88]	@ 000bb9c6 1649
.org 0xbb9c8
	movs r4, #0	@ 000bb9c8 0024
.org 0xbb9ca
	ldr r0, [pc, #88]	@ 000bb9ca 1648
.org 0xbb9cc
	strh r0, [r1, #0]	@ 000bb9cc 0880
.org 0xbb9ce
	adds r2, r5, #0	@ 000bb9ce 2a1c
.org 0xbb9d0
	adds r2, #69	@ 000bb9d0 4532
.org 0xbb9d2
	ldrb r1, [r2, #0]	@ 000bb9d2 1178
.org 0xbb9d4
	movs r0, #13	@ 000bb9d4 0d20
.org 0xbb9d6
	negs r0, r0	@ 000bb9d6 4042
.org 0xbb9d8
	ands r0, r1	@ 000bb9d8 0840
.org 0xbb9da
	movs r1, #4	@ 000bb9da 0421
.org 0xbb9dc
	orrs r0, r1	@ 000bb9dc 0843
.org 0xbb9de
	strb r0, [r2, #0]	@ 000bb9de 1070
.org 0xbb9e0
	adds r0, r5, #0	@ 000bb9e0 281c
.org 0xbb9e2
	bl 0x1ceec	@ 000bb9e2 61f783fa
.org 0xbb9e6
	adds r0, r5, #0	@ 000bb9e6 281c
.org 0xbb9e8
	adds r0, #34	@ 000bb9e8 2230
.org 0xbb9ea
	strb r4, [r0, #0]	@ 000bb9ea 0470
.org 0xbb9ec
	movs r1, #186	@ 000bb9ec ba21
.org 0xbb9ee
	lsls r1, r1, #8	@ 000bb9ee 0902
.org 0xbb9f0
	adds r0, r5, #0	@ 000bb9f0 281c
.org 0xbb9f2
	bl 0x1cf00	@ 000bb9f2 61f785fa
.org 0xbb9f6
	adds r1, r5, #0	@ 000bb9f6 291c
.org 0xbb9f8
	adds r1, #37	@ 000bb9f8 2531
.org 0xbb9fa
	movs r0, #24	@ 000bb9fa 1820
.org 0xbb9fc
	strb r0, [r1, #0]	@ 000bb9fc 0870
.org 0xbb9fe
	movs r2, #0	@ 000bb9fe 0022
.org 0xbba00
	ldr r0, [pc, #36]	@ 000bba00 0948
.org 0xbba02
	ldr r0, [r0, #0]	@ 000bba02 0068
.org 0xbba04
	ldr r1, [r5, #84]	@ 000bba04 696d
.org 0xbba06
	ldr r0, [r0, #84]	@ 000bba06 406d
.org 0xbba08
	cmp r1, r0	@ 000bba08 8142
.org 0xbba0a
	bge.n 0xbba0e	@ 000bba0a 00da
.org 0xbba0c
	movs r2, #1	@ 000bba0c 0122
.org 0xbba0e
	cmp r2, #0	@ 000bba0e 002a
.org 0xbba10
	beq.n 0xbba2c	@ 000bba10 0cd0
.org 0xbba12
	ldrb r0, [r5, #10]	@ 000bba12 a87a
.org 0xbba14
	movs r1, #16	@ 000bba14 1021
.org 0xbba16
	orrs r0, r1	@ 000bba16 0843
.org 0xbba18
	b.n 0xbba32	@ 000bba18 0be0
.org 0xbba1a
	.byte 0x00	@ 000bba1a data
.org 0xbba1b
	.byte 0x00	@ 000bba1b data
.org 0xbba1c
	.byte 0x2c,0x46,0x86,0x08	@ 000bba1c data
.org 0xbba20
	.byte 0x40,0x0a,0x00,0x02	@ 000bba20 data
.org 0xbba24
	.byte 0x10,0x3f,0x00,0x00	@ 000bba24 data
.org 0xbba28
	.byte 0xf0,0xdb,0x02,0x02	@ 000bba28 data
.org 0xbba2c
	ldrb r1, [r5, #10]	@ 000bba2c a97a
.org 0xbba2e
	movs r0, #239	@ 000bba2e ef20
.org 0xbba30
	ands r0, r1	@ 000bba30 0840
.org 0xbba32
	strb r0, [r5, #10]	@ 000bba32 a872
.org 0xbba34
	adds r1, r2, #0	@ 000bba34 111c
.org 0xbba36
	adds r0, r5, #0	@ 000bba36 281c
.org 0xbba38
	adds r0, #76	@ 000bba38 4c30
.org 0xbba3a
	strb r1, [r0, #0]	@ 000bba3a 0170
.org 0xbba3c
	adds r3, r5, #0	@ 000bba3c 2b1c
.org 0xbba3e
	adds r3, #74	@ 000bba3e 4a33
.org 0xbba40
	lsls r1, r1, #4	@ 000bba40 0901
.org 0xbba42
	ldrb r2, [r3, #0]	@ 000bba42 1a78
.org 0xbba44
	movs r0, #17	@ 000bba44 1120
.org 0xbba46
	negs r0, r0	@ 000bba46 4042
.org 0xbba48
	ands r0, r2	@ 000bba48 1040
.org 0xbba4a
	orrs r0, r1	@ 000bba4a 0843
.org 0xbba4c
	strb r0, [r3, #0]	@ 000bba4c 1870
.org 0xbba4e
	adds r0, r6, #0	@ 000bba4e 301c
.org 0xbba50
	adds r0, #184	@ 000bba50 b830
.org 0xbba52
	ldr r0, [r0, #0]	@ 000bba52 0068
.org 0xbba54
	ldr r1, [pc, #64]	@ 000bba54 1049
.org 0xbba56
	adds r0, r0, r1	@ 000bba56 4018
.org 0xbba58
	str r0, [r5, #88]	@ 000bba58 a865
.org 0xbba5a
	movs r0, #16	@ 000bba5a 1020
.org 0xbba5c
	strb r0, [r5, #18]	@ 000bba5c a874
.org 0xbba5e
	ldrb r0, [r5, #15]	@ 000bba5e e87b
.org 0xbba60
	adds r0, #1	@ 000bba60 0130
.org 0xbba62
	strb r0, [r5, #15]	@ 000bba62 e873
.org 0xbba64
	adds r0, r5, #0	@ 000bba64 281c
.org 0xbba66
	bl 0x1cff0	@ 000bba66 61f7c3fa
.org 0xbba6a
	ldrb r3, [r5, #18]	@ 000bba6a ab7c
.org 0xbba6c
	subs r3, #1	@ 000bba6c 013b
.org 0xbba6e
	strb r3, [r5, #18]	@ 000bba6e ab74
.org 0xbba70
	ldrb r2, [r5, #18]	@ 000bba70 aa7c
.org 0xbba72
	ldr r4, [pc, #40]	@ 000bba72 0a4c
.org 0xbba74
	movs r0, #16	@ 000bba74 1020
.org 0xbba76
	subs r0, r0, r2	@ 000bba76 801a
.org 0xbba78
	movs r1, #31	@ 000bba78 1f21
.org 0xbba7a
	ands r0, r1	@ 000bba7a 0840
.org 0xbba7c
	lsls r2, r2, #8	@ 000bba7c 1202
.org 0xbba7e
	orrs r0, r2	@ 000bba7e 1043
.org 0xbba80
	movs r1, #0	@ 000bba80 0021
.org 0xbba82
	strh r0, [r4, #2]	@ 000bba82 6080
.org 0xbba84
	lsls r3, r3, #24	@ 000bba84 1b06
