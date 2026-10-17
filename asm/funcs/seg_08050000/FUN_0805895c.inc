@ FUN_0805895c  entry 0x0805895c  size 114
.thumb
.org 0x5895c
FUN_0805895c:
	push {r4, lr}	@ 0005895c 10b5
.org 0x5895e
	adds r4, r0, #0	@ 0005895e 041c
.org 0x58960
	ldrb r0, [r4, #15]	@ 00058960 e07b
.org 0x58962
	cmp r0, #0	@ 00058962 0028
.org 0x58964
	bne.n 0x58974	@ 00058964 06d1
.org 0x58966
	ldr r1, [pc, #104]	@ 00058966 1a49
.org 0x58968
	adds r0, r4, #0	@ 00058968 201c
.org 0x5896a
	bl 0x1cf00	@ 0005896a c4f7c9fa
.org 0x5896e
	ldrb r0, [r4, #15]	@ 0005896e e07b
.org 0x58970
	adds r0, #1	@ 00058970 0130
.org 0x58972
	strb r0, [r4, #15]	@ 00058972 e073
.org 0x58974
	adds r0, r4, #0	@ 00058974 201c
.org 0x58976
	bl 0x1cff0	@ 00058976 c4f73bfb
.org 0x5897a
	adds r0, r4, #0	@ 0005897a 201c
.org 0x5897c
	adds r0, #116	@ 0005897c 7430
.org 0x5897e
	ldr r3, [pc, #84]	@ 0005897e 154b
.org 0x58980
	ldrb r1, [r4, #30]	@ 00058980 a17f
.org 0x58982
	lsls r1, r1, #8	@ 00058982 0902
.org 0x58984
	adds r2, r4, #0	@ 00058984 221c
.org 0x58986
	adds r2, #112	@ 00058986 7032
.org 0x58988
	ldrb r2, [r2, #0]	@ 00058988 1278
.org 0x5898a
	orrs r1, r2	@ 0005898a 1143
.org 0x5898c
	ldr r2, [pc, #72]	@ 0005898c 124a
.org 0x5898e
	adds r1, r1, r2	@ 0005898e 8918
.org 0x58990
	lsls r1, r1, #2	@ 00058990 8900
.org 0x58992
	adds r1, r1, r3	@ 00058992 c918
.org 0x58994
	adds r2, r4, #0	@ 00058994 221c
.org 0x58996
	adds r2, #113	@ 00058996 7132
.org 0x58998
	ldrb r2, [r2, #0]	@ 00058998 1278
.org 0x5899a
	lsls r2, r2, #24	@ 0005899a 1206
.org 0x5899c
	asrs r2, r2, #24	@ 0005899c 1216
.org 0x5899e
	ldr r1, [r1, #0]	@ 0005899e 0968
.org 0x589a0
	lsls r2, r2, #2	@ 000589a0 9200
.org 0x589a2
	adds r2, r2, r1	@ 000589a2 5218
.org 0x589a4
	ldr r1, [r2, #0]	@ 000589a4 1168
.org 0x589a6
	ldrb r2, [r1, #0]	@ 000589a6 0a78
.org 0x589a8
	lsls r1, r2, #1	@ 000589a8 5100
.org 0x589aa
	adds r1, r1, r2	@ 000589aa 8918
.org 0x589ac
	lsls r1, r1, #3	@ 000589ac c900
.org 0x589ae
	ldr r2, [pc, #44]	@ 000589ae 0b4a
.org 0x589b0
	adds r1, r1, r2	@ 000589b0 8918
.org 0x589b2
	bl 0x5784	@ 000589b2 acf7e7fe
.org 0x589b6
	adds r0, r4, #0	@ 000589b6 201c
.org 0x589b8
	adds r0, #115	@ 000589b8 7330
.org 0x589ba
	ldrb r0, [r0, #0]	@ 000589ba 0078
.org 0x589bc
	cmp r0, #3	@ 000589bc 0328
.org 0x589be
	bne.n 0x589c8	@ 000589be 03d1
.org 0x589c0
	movs r1, #0	@ 000589c0 0021
.org 0x589c2
	movs r0, #4	@ 000589c2 0420
.org 0x589c4
	strb r0, [r4, #14]	@ 000589c4 a073
.org 0x589c6
	strb r1, [r4, #15]	@ 000589c6 e173
.org 0x589c8
	pop {r4}	@ 000589c8 10bc
.org 0x589ca
	pop {r0}	@ 000589ca 01bc
.org 0x589cc
	bx r0	@ 000589cc 0047
