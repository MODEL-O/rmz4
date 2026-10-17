@ FUN_080bf97c  entry 0x080bf97c  size 254
.thumb
.org 0xbf97c
FUN_080bf97c:
	push {r4, r5, r6, r7, lr}	@ 000bf97c f0b5
.org 0xbf97e
	sub sp, #4	@ 000bf97e 81b0
.org 0xbf980
	adds r4, r0, #0	@ 000bf980 041c
.org 0xbf982
	ldr r1, [pc, #96]	@ 000bf982 1849
.org 0xbf984
	mov r0, sp	@ 000bf984 6846
.org 0xbf986
	movs r2, #2	@ 000bf986 0222
.org 0xbf988
	bl 0x129258	@ 000bf988 69f066fc
.org 0xbf98c
	ldrb r5, [r4, #17]	@ 000bf98c 657c
.org 0xbf98e
	adds r7, r5, #0	@ 000bf98e 2f1c
.org 0xbf990
	ldrb r6, [r4, #15]	@ 000bf990 e67b
.org 0xbf992
	cmp r6, #0	@ 000bf992 002e
.org 0xbf994
	bne.n 0xbfa2a	@ 000bf994 49d1
.org 0xbf996
	cmp r5, #1	@ 000bf996 012d
.org 0xbf998
	bhi.n 0xbf9b2	@ 000bf998 0bd8
.org 0xbf99a
	adds r0, r4, #0	@ 000bf99a 201c
.org 0xbf99c
	adds r0, #116	@ 000bf99c 7430
.org 0xbf99e
	mov r2, sp	@ 000bf99e 6a46
.org 0xbf9a0
	adds r1, r2, r5	@ 000bf9a0 5119
.org 0xbf9a2
	ldrb r2, [r1, #0]	@ 000bf9a2 0a78
.org 0xbf9a4
	lsls r1, r2, #1	@ 000bf9a4 5100
.org 0xbf9a6
	adds r1, r1, r2	@ 000bf9a6 8918
.org 0xbf9a8
	lsls r1, r1, #3	@ 000bf9a8 c900
.org 0xbf9aa
	ldr r2, [pc, #60]	@ 000bf9aa 0f4a
.org 0xbf9ac
	adds r1, r1, r2	@ 000bf9ac 8918
.org 0xbf9ae
	bl 0x5784	@ 000bf9ae 45f7e9fe
.org 0xbf9b2
	cmp r5, #0	@ 000bf9b2 002d
.org 0xbf9b4
	bne.n 0xbf9ec	@ 000bf9b4 1ad1
.org 0xbf9b6
	adds r0, r4, #0	@ 000bf9b6 201c
.org 0xbf9b8
	bl 0x1cc9c	@ 000bf9b8 5df770f9
.org 0xbf9bc
	ldrb r1, [r4, #10]	@ 000bf9bc a17a
.org 0xbf9be
	movs r0, #239	@ 000bf9be ef20
.org 0xbf9c0
	ands r0, r1	@ 000bf9c0 0840
.org 0xbf9c2
	strb r0, [r4, #10]	@ 000bf9c2 a072
.org 0xbf9c4
	adds r0, r4, #0	@ 000bf9c4 201c
.org 0xbf9c6
	adds r0, #76	@ 000bf9c6 4c30
.org 0xbf9c8
	strb r5, [r0, #0]	@ 000bf9c8 0570
.org 0xbf9ca
	adds r2, r4, #0	@ 000bf9ca 221c
.org 0xbf9cc
	adds r2, #74	@ 000bf9cc 4a32
.org 0xbf9ce
	ldrb r1, [r2, #0]	@ 000bf9ce 1178
.org 0xbf9d0
	movs r0, #17	@ 000bf9d0 1120
.org 0xbf9d2
	negs r0, r0	@ 000bf9d2 4042
.org 0xbf9d4
	ands r0, r1	@ 000bf9d4 0840
.org 0xbf9d6
	strb r0, [r2, #0]	@ 000bf9d6 1070
.org 0xbf9d8
	movs r1, #172	@ 000bf9d8 ac21
.org 0xbf9da
	lsls r1, r1, #6	@ 000bf9da 8901
.org 0xbf9dc
	adds r0, r4, #0	@ 000bf9dc 201c
.org 0xbf9de
	bl 0x1cf00	@ 000bf9de 5df78ffa
.org 0xbf9e2
	b.n 0xbfa24	@ 000bf9e2 1fe0
.org 0xbf9e4
	.byte 0xc0,0xa0,0x12,0x08	@ 000bf9e4 data
.org 0xbf9e8
	.byte 0x64,0x4f,0x86,0x08	@ 000bf9e8 data
.org 0xbf9ec
	cmp r7, #2	@ 000bf9ec 022f
.org 0xbf9ee
	bne.n 0xbfa24	@ 000bf9ee 19d1
.org 0xbf9f0
	adds r0, r4, #0	@ 000bf9f0 201c
.org 0xbf9f2
	bl 0x1cc9c	@ 000bf9f2 5df753f9
.org 0xbf9f6
	ldrb r1, [r4, #10]	@ 000bf9f6 a17a
.org 0xbf9f8
	movs r0, #239	@ 000bf9f8 ef20
.org 0xbf9fa
	ands r0, r1	@ 000bf9fa 0840
.org 0xbf9fc
	strb r0, [r4, #10]	@ 000bf9fc a072
.org 0xbf9fe
	adds r0, r4, #0	@ 000bf9fe 201c
.org 0xbfa00
	adds r0, #76	@ 000bfa00 4c30
.org 0xbfa02
	strb r6, [r0, #0]	@ 000bfa02 0670
.org 0xbfa04
	adds r2, r4, #0	@ 000bfa04 221c
.org 0xbfa06
	adds r2, #74	@ 000bfa06 4a32
.org 0xbfa08
	ldrb r1, [r2, #0]	@ 000bfa08 1178
.org 0xbfa0a
	movs r0, #17	@ 000bfa0a 1120
.org 0xbfa0c
	negs r0, r0	@ 000bfa0c 4042
.org 0xbfa0e
	ands r0, r1	@ 000bfa0e 0840
.org 0xbfa10
	strb r0, [r2, #0]	@ 000bfa10 1070
.org 0xbfa12
	movs r1, #172	@ 000bfa12 ac21
.org 0xbfa14
	lsls r1, r1, #6	@ 000bfa14 8901
.org 0xbfa16
	adds r0, r4, #0	@ 000bfa16 201c
.org 0xbfa18
	bl 0x1cf00	@ 000bfa18 5df772fa
.org 0xbfa1c
	ldr r0, [r4, #88]	@ 000bfa1c a06d
.org 0xbfa1e
	ldr r1, [pc, #100]	@ 000bfa1e 1949
.org 0xbfa20
	adds r0, r0, r1	@ 000bfa20 4018
.org 0xbfa22
	str r0, [r4, #88]	@ 000bfa22 a065
.org 0xbfa24
	ldrb r0, [r4, #15]	@ 000bfa24 e07b
.org 0xbfa26
	adds r0, #1	@ 000bfa26 0130
.org 0xbfa28
	strb r0, [r4, #15]	@ 000bfa28 e073
.org 0xbfa2a
	adds r0, r4, #0	@ 000bfa2a 201c
.org 0xbfa2c
	bl 0x1cff0	@ 000bfa2c 5df7e0fa
.org 0xbfa30
	ldr r1, [r4, #84]	@ 000bfa30 616d
.org 0xbfa32
	ldr r0, [r4, #92]	@ 000bfa32 e06d
.org 0xbfa34
	adds r1, r1, r0	@ 000bfa34 0918
.org 0xbfa36
	str r1, [r4, #84]	@ 000bfa36 6165
.org 0xbfa38
	ldr r0, [pc, #76]	@ 000bfa38 1348
.org 0xbfa3a
	ldr r0, [r0, #56]	@ 000bfa3a 806b
.org 0xbfa3c
	ldr r2, [pc, #76]	@ 000bfa3c 134a
.org 0xbfa3e
	adds r0, r0, r2	@ 000bfa3e 8018
.org 0xbfa40
	cmp r1, r0	@ 000bfa40 8142
.org 0xbfa42
	bge.n 0xbfa7a	@ 000bfa42 1ada
.org 0xbfa44
	ldrb r1, [r4, #10]	@ 000bfa44 a17a
.org 0xbfa46
	movs r0, #254	@ 000bfa46 fe20
.org 0xbfa48
	ands r0, r1	@ 000bfa48 0840
.org 0xbfa4a
	movs r2, #0	@ 000bfa4a 0022
.org 0xbfa4c
	movs r1, #253	@ 000bfa4c fd21
.org 0xbfa4e
	ands r0, r1	@ 000bfa4e 0840
.org 0xbfa50
	strb r0, [r4, #10]	@ 000bfa50 a072
.org 0xbfa52
	adds r0, r4, #0	@ 000bfa52 201c
.org 0xbfa54
	adds r0, #140	@ 000bfa54 8c30
.org 0xbfa56
	str r2, [r0, #0]	@ 000bfa56 0260
.org 0xbfa58
	adds r0, #4	@ 000bfa58 0430
.org 0xbfa5a
	str r2, [r0, #0]	@ 000bfa5a 0260
.org 0xbfa5c
	adds r0, #4	@ 000bfa5c 0430
.org 0xbfa5e
	strb r2, [r0, #0]	@ 000bfa5e 0270
.org 0xbfa60
	ldrb r1, [r4, #10]	@ 000bfa60 a17a
.org 0xbfa62
	movs r0, #251	@ 000bfa62 fb20
.org 0xbfa64
	ands r0, r1	@ 000bfa64 0840
.org 0xbfa66
	strb r0, [r4, #10]	@ 000bfa66 a072
.org 0xbfa68
	ldr r1, [pc, #36]	@ 000bfa68 0949
.org 0xbfa6a
	ldrb r0, [r4, #9]	@ 000bfa6a 607a
.org 0xbfa6c
	lsls r0, r0, #2	@ 000bfa6c 8000
.org 0xbfa6e
	adds r0, r0, r1	@ 000bfa6e 4018
.org 0xbfa70
	movs r1, #3	@ 000bfa70 0321
.org 0xbfa72
	str r1, [r4, #12]	@ 000bfa72 e160
.org 0xbfa74
	ldr r0, [r0, #0]	@ 000bfa74 0068
.org 0xbfa76
	ldr r0, [r0, #12]	@ 000bfa76 c068
.org 0xbfa78
	str r0, [r4, #20]	@ 000bfa78 6061
