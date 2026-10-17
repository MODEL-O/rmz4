@ FUN_08083a10  entry 0x08083a10  size 94
.thumb
.org 0x83a10
FUN_08083a10:
	push {r4, r5, r6, lr}	@ 00083a10 70b5
.org 0x83a12
	adds r4, r0, #0	@ 00083a12 041c
.org 0x83a14
	movs r1, #224	@ 00083a14 e021
.org 0x83a16
	lsls r1, r1, #5	@ 00083a16 4901
.org 0x83a18
	bl 0x1cf00	@ 00083a18 99f772fa
.org 0x83a1c
	adds r0, r4, #0	@ 00083a1c 201c
.org 0x83a1e
	bl 0x1cff0	@ 00083a1e 99f7e7fa
.org 0x83a22
	ldrb r1, [r4, #10]	@ 00083a22 a17a
.org 0x83a24
	movs r0, #4	@ 00083a24 0420
.org 0x83a26
	movs r6, #0	@ 00083a26 0026
.org 0x83a28
	orrs r0, r1	@ 00083a28 0843
.org 0x83a2a
	strb r0, [r4, #10]	@ 00083a2a a072
.org 0x83a2c
	adds r5, r4, #0	@ 00083a2c 251c
.org 0x83a2e
	adds r5, #116	@ 00083a2e 7435
.org 0x83a30
	ldr r1, [pc, #60]	@ 00083a30 0f49
.org 0x83a32
	adds r2, r4, #0	@ 00083a32 221c
.org 0x83a34
	adds r2, #84	@ 00083a34 5432
.org 0x83a36
	adds r0, r5, #0	@ 00083a36 281c
.org 0x83a38
	movs r3, #16	@ 00083a38 1023
.org 0x83a3a
	bl 0x5760	@ 00083a3a 81f791fe
.org 0x83a3e
	str r4, [r5, #44]	@ 00083a3e ec62
.org 0x83a40
	ldr r0, [pc, #48]	@ 00083a40 0c48
.org 0x83a42
	str r0, [r5, #36]	@ 00083a42 6862
.org 0x83a44
	adds r0, r4, #0	@ 00083a44 201c
.org 0x83a46
	movs r1, #1	@ 00083a46 0121
.org 0x83a48
	movs r2, #0	@ 00083a48 0022
.org 0x83a4a
	bl 0x83894	@ 00083a4a fff723ff
.org 0x83a4e
	str r0, [r4, #44]	@ 00083a4e e062
.org 0x83a50
	adds r1, r4, #0	@ 00083a50 211c
.org 0x83a52
	adds r1, #180	@ 00083a52 b431
.org 0x83a54
	strb r6, [r1, #9]	@ 00083a54 4e72
.org 0x83a56
	ldr r0, [r4, #88]	@ 00083a56 a06d
.org 0x83a58
	str r0, [r1, #4]	@ 00083a58 4860
.org 0x83a5a
	strb r6, [r1, #10]	@ 00083a5a 8e72
.org 0x83a5c
	strb r6, [r1, #11]	@ 00083a5c ce72
.org 0x83a5e
	str r6, [r4, #96]	@ 00083a5e 2666
.org 0x83a60
	strb r6, [r4, #19]	@ 00083a60 e674
.org 0x83a62
	str r6, [r1, #0]	@ 00083a62 0e60
.org 0x83a64
	movs r0, #2	@ 00083a64 0220
.org 0x83a66
	strb r0, [r4, #13]	@ 00083a66 6073
.org 0x83a68
	pop {r4, r5, r6}	@ 00083a68 70bc
.org 0x83a6a
	pop {r0}	@ 00083a6a 01bc
.org 0x83a6c
	bx r0	@ 00083a6c 0047
