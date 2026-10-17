@ FUN_080fff24  entry 0x080fff24  size 154
.thumb
.org 0xfff24
FUN_080fff24:
	push {r4, r5, r6, r7, lr}	@ 000fff24 f0b5
.org 0xfff26
	adds r7, r0, #0	@ 000fff26 071c
.org 0xfff28
	bl 0x1cc9c	@ 000fff28 1cf7b8fe
.org 0xfff2c
	ldrb r1, [r7, #10]	@ 000fff2c b97a
.org 0xfff2e
	movs r0, #1	@ 000fff2e 0120
.org 0xfff30
	orrs r0, r1	@ 000fff30 0843
.org 0xfff32
	movs r1, #2	@ 000fff32 0221
.org 0xfff34
	orrs r0, r1	@ 000fff34 0843
.org 0xfff36
	strb r0, [r7, #10]	@ 000fff36 b872
.org 0xfff38
	ldr r1, [pc, #132]	@ 000fff38 2149
.org 0xfff3a
	adds r0, r7, #0	@ 000fff3a 381c
.org 0xfff3c
	bl 0x1cf00	@ 000fff3c 1cf7e0ff
.org 0xfff40
	adds r0, r7, #0	@ 000fff40 381c
.org 0xfff42
	bl 0x1cff0	@ 000fff42 1df755f8
.org 0xfff46
	movs r5, #0	@ 000fff46 0025
.org 0xfff48
	ldrb r1, [r7, #10]	@ 000fff48 b97a
.org 0xfff4a
	movs r0, #239	@ 000fff4a ef20
.org 0xfff4c
	ands r0, r1	@ 000fff4c 0840
.org 0xfff4e
	strb r0, [r7, #10]	@ 000fff4e b872
.org 0xfff50
	movs r6, #1	@ 000fff50 0126
.org 0xfff52
	adds r0, r7, #0	@ 000fff52 381c
.org 0xfff54
	adds r0, #76	@ 000fff54 4c30
.org 0xfff56
	strb r5, [r0, #0]	@ 000fff56 0570
.org 0xfff58
	adds r2, r7, #0	@ 000fff58 3a1c
.org 0xfff5a
	adds r2, #74	@ 000fff5a 4a32
.org 0xfff5c
	ldrb r1, [r2, #0]	@ 000fff5c 1178
.org 0xfff5e
	movs r0, #17	@ 000fff5e 1120
.org 0xfff60
	negs r0, r0	@ 000fff60 4042
.org 0xfff62
	ands r0, r1	@ 000fff62 0840
.org 0xfff64
	strb r0, [r2, #0]	@ 000fff64 1070
.org 0xfff66
	ldrb r1, [r7, #10]	@ 000fff66 b97a
.org 0xfff68
	movs r0, #4	@ 000fff68 0420
.org 0xfff6a
	orrs r0, r1	@ 000fff6a 0843
.org 0xfff6c
	strb r0, [r7, #10]	@ 000fff6c b872
.org 0xfff6e
	adds r4, r7, #0	@ 000fff6e 3c1c
.org 0xfff70
	adds r4, #116	@ 000fff70 7434
.org 0xfff72
	ldr r1, [pc, #80]	@ 000fff72 1449
.org 0xfff74
	adds r2, #10	@ 000fff74 0a32
.org 0xfff76
	adds r0, r4, #0	@ 000fff76 201c
.org 0xfff78
	movs r3, #1	@ 000fff78 0123
.org 0xfff7a
	bl 0x5760	@ 000fff7a 05f7f1fb
.org 0xfff7e
	str r7, [r4, #44]	@ 000fff7e e762
.org 0xfff80
	ldr r0, [pc, #68]	@ 000fff80 1148
.org 0xfff82
	str r0, [r4, #36]	@ 000fff82 6062
.org 0xfff84
	ldr r0, [r7, #84]	@ 000fff84 786d
.org 0xfff86
	ldr r1, [r7, #88]	@ 000fff86 b96d
.org 0xfff88
	bl 0x8748	@ 000fff88 08f7defb
.org 0xfff8c
	str r0, [r7, #88]	@ 000fff8c b865
.org 0xfff8e
	adds r1, r7, #0	@ 000fff8e 391c
.org 0xfff90
	adds r1, #180	@ 000fff90 b431
.org 0xfff92
	ldr r0, [r7, #84]	@ 000fff92 786d
.org 0xfff94
	str r0, [r1, #0]	@ 000fff94 0860
.org 0xfff96
	adds r1, #4	@ 000fff96 0431
.org 0xfff98
	ldr r0, [r7, #88]	@ 000fff98 b86d
.org 0xfff9a
	str r0, [r1, #0]	@ 000fff9a 0860
.org 0xfff9c
	adds r0, r7, #0	@ 000fff9c 381c
.org 0xfff9e
	adds r0, #189	@ 000fff9e bd30
.org 0xfffa0
	strb r5, [r0, #0]	@ 000fffa0 0570
.org 0xfffa2
	ldr r1, [pc, #40]	@ 000fffa2 0a49
.org 0xfffa4
	ldrb r0, [r7, #9]	@ 000fffa4 787a
.org 0xfffa6
	lsls r0, r0, #2	@ 000fffa6 8000
.org 0xfffa8
	adds r0, r0, r1	@ 000fffa8 4018
.org 0xfffaa
	str r6, [r7, #12]	@ 000fffaa fe60
.org 0xfffac
	ldr r0, [r0, #0]	@ 000fffac 0068
.org 0xfffae
	ldr r0, [r0, #4]	@ 000fffae 4068
.org 0xfffb0
	str r0, [r7, #20]	@ 000fffb0 7861
.org 0xfffb2
	adds r0, r7, #0	@ 000fffb2 381c
.org 0xfffb4
	bl 0xfffd0	@ 000fffb4 00f00cf8
.org 0xfffb8
	pop {r4, r5, r6, r7}	@ 000fffb8 f0bc
.org 0xfffba
	pop {r0}	@ 000fffba 01bc
.org 0xfffbc
	bx r0	@ 000fffbc 0047
