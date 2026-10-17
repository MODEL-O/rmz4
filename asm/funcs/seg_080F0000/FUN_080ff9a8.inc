@ FUN_080ff9a8  entry 0x080ff9a8  size 154
.thumb
.org 0xff9a8
FUN_080ff9a8:
	push {r4, r5, r6, lr}	@ 000ff9a8 70b5
.org 0xff9aa
	mov r6, r8	@ 000ff9aa 4646
.org 0xff9ac
	push {r6}	@ 000ff9ac 40b4
.org 0xff9ae
	adds r4, r0, #0	@ 000ff9ae 041c
.org 0xff9b0
	bl 0x1cc9c	@ 000ff9b0 1df774f9
.org 0xff9b4
	ldrb r1, [r4, #10]	@ 000ff9b4 a17a
.org 0xff9b6
	movs r0, #1	@ 000ff9b6 0120
.org 0xff9b8
	orrs r0, r1	@ 000ff9b8 0843
.org 0xff9ba
	movs r1, #2	@ 000ff9ba 0221
.org 0xff9bc
	orrs r0, r1	@ 000ff9bc 0843
.org 0xff9be
	strb r0, [r4, #10]	@ 000ff9be a072
.org 0xff9c0
	ldr r1, [pc, #128]	@ 000ff9c0 2049
.org 0xff9c2
	adds r0, r4, #0	@ 000ff9c2 201c
.org 0xff9c4
	bl 0x1cf00	@ 000ff9c4 1df79cfa
.org 0xff9c8
	adds r0, r4, #0	@ 000ff9c8 201c
.org 0xff9ca
	bl 0x1cff0	@ 000ff9ca 1df711fb
.org 0xff9ce
	movs r6, #0	@ 000ff9ce 0026
.org 0xff9d0
	ldrb r1, [r4, #10]	@ 000ff9d0 a17a
.org 0xff9d2
	movs r0, #239	@ 000ff9d2 ef20
.org 0xff9d4
	ands r0, r1	@ 000ff9d4 0840
.org 0xff9d6
	strb r0, [r4, #10]	@ 000ff9d6 a072
.org 0xff9d8
	movs r0, #1	@ 000ff9d8 0120
.org 0xff9da
	mov r8, r0	@ 000ff9da 8046
.org 0xff9dc
	adds r0, r4, #0	@ 000ff9dc 201c
.org 0xff9de
	adds r0, #76	@ 000ff9de 4c30
.org 0xff9e0
	strb r6, [r0, #0]	@ 000ff9e0 0670
.org 0xff9e2
	adds r2, r4, #0	@ 000ff9e2 221c
.org 0xff9e4
	adds r2, #74	@ 000ff9e4 4a32
.org 0xff9e6
	ldrb r1, [r2, #0]	@ 000ff9e6 1178
.org 0xff9e8
	movs r0, #17	@ 000ff9e8 1120
.org 0xff9ea
	negs r0, r0	@ 000ff9ea 4042
.org 0xff9ec
	ands r0, r1	@ 000ff9ec 0840
.org 0xff9ee
	strb r0, [r2, #0]	@ 000ff9ee 1070
.org 0xff9f0
	ldrb r1, [r4, #10]	@ 000ff9f0 a17a
.org 0xff9f2
	movs r0, #4	@ 000ff9f2 0420
.org 0xff9f4
	orrs r0, r1	@ 000ff9f4 0843
.org 0xff9f6
	strb r0, [r4, #10]	@ 000ff9f6 a072
.org 0xff9f8
	adds r5, r4, #0	@ 000ff9f8 251c
.org 0xff9fa
	adds r5, #116	@ 000ff9fa 7435
.org 0xff9fc
	ldr r1, [pc, #72]	@ 000ff9fc 1249
.org 0xff9fe
	adds r2, #10	@ 000ff9fe 0a32
.org 0xffa00
	adds r0, r5, #0	@ 000ffa00 281c
.org 0xffa02
	movs r3, #8	@ 000ffa02 0823
.org 0xffa04
	bl 0x5760	@ 000ffa04 05f7acfe
.org 0xffa08
	str r4, [r5, #44]	@ 000ffa08 ec62
.org 0xffa0a
	str r6, [r5, #36]	@ 000ffa0a 6e62
.org 0xffa0c
	ldr r0, [r4, #84]	@ 000ffa0c 606d
.org 0xffa0e
	ldr r1, [r4, #88]	@ 000ffa0e a16d
.org 0xffa10
	bl 0x8534	@ 000ffa10 08f790fd
.org 0xffa14
	str r0, [r4, #88]	@ 000ffa14 a065
.org 0xffa16
	adds r0, r4, #0	@ 000ffa16 201c
.org 0xffa18
	adds r0, #192	@ 000ffa18 c030
.org 0xffa1a
	str r6, [r0, #0]	@ 000ffa1a 0660
.org 0xffa1c
	movs r0, #120	@ 000ffa1c 7820
.org 0xffa1e
	strb r0, [r4, #18]	@ 000ffa1e a074
.org 0xffa20
	ldr r1, [pc, #40]	@ 000ffa20 0a49
.org 0xffa22
	ldrb r0, [r4, #9]	@ 000ffa22 607a
.org 0xffa24
	lsls r0, r0, #2	@ 000ffa24 8000
.org 0xffa26
	adds r0, r0, r1	@ 000ffa26 4018
.org 0xffa28
	mov r1, r8	@ 000ffa28 4146
.org 0xffa2a
	str r1, [r4, #12]	@ 000ffa2a e160
.org 0xffa2c
	ldr r0, [r0, #0]	@ 000ffa2c 0068
.org 0xffa2e
	ldr r0, [r0, #4]	@ 000ffa2e 4068
.org 0xffa30
	str r0, [r4, #20]	@ 000ffa30 6061
.org 0xffa32
	adds r0, r4, #0	@ 000ffa32 201c
.org 0xffa34
	bl 0xffa50	@ 000ffa34 00f00cf8
.org 0xffa38
	pop {r3}	@ 000ffa38 08bc
.org 0xffa3a
	mov r8, r3	@ 000ffa3a 9846
.org 0xffa3c
	pop {r4, r5, r6}	@ 000ffa3c 70bc
.org 0xffa3e
	pop {r0}	@ 000ffa3e 01bc
.org 0xffa40
	bx r0	@ 000ffa40 0047
