@ FUN_080478d0  entry 0x080478d0  size 82
.thumb
.org 0x478d0
FUN_080478d0:
	push {r4, r5, r6, lr}	@ 000478d0 70b5
.org 0x478d2
	adds r4, r0, #0	@ 000478d2 041c
.org 0x478d4
	bl 0x1cd28	@ 000478d4 d5f728fa
.org 0x478d8
	adds r0, r4, #0	@ 000478d8 201c
.org 0x478da
	bl 0x1ceec	@ 000478da d5f707fb
.org 0x478de
	ldrb r1, [r4, #10]	@ 000478de a17a
.org 0x478e0
	movs r0, #1	@ 000478e0 0120
.org 0x478e2
	movs r6, #0	@ 000478e2 0026
.org 0x478e4
	orrs r0, r1	@ 000478e4 0843
.org 0x478e6
	movs r1, #2	@ 000478e6 0221
.org 0x478e8
	orrs r0, r1	@ 000478e8 0843
.org 0x478ea
	strb r0, [r4, #10]	@ 000478ea a072
.org 0x478ec
	ldr r1, [pc, #52]	@ 000478ec 0d49
.org 0x478ee
	adds r0, r4, #0	@ 000478ee 201c
.org 0x478f0
	bl 0x1cf00	@ 000478f0 d5f706fb
.org 0x478f4
	ldrb r1, [r4, #10]	@ 000478f4 a17a
.org 0x478f6
	movs r0, #4	@ 000478f6 0420
.org 0x478f8
	orrs r0, r1	@ 000478f8 0843
.org 0x478fa
	strb r0, [r4, #10]	@ 000478fa a072
.org 0x478fc
	adds r5, r4, #0	@ 000478fc 251c
.org 0x478fe
	adds r5, #116	@ 000478fe 7435
.org 0x47900
	ldr r1, [pc, #36]	@ 00047900 0949
.org 0x47902
	adds r2, r4, #0	@ 00047902 221c
.org 0x47904
	adds r2, #84	@ 00047904 5432
.org 0x47906
	adds r0, r5, #0	@ 00047906 281c
.org 0x47908
	movs r3, #8	@ 00047908 0823
.org 0x4790a
	bl 0x5760	@ 0004790a bdf729ff
.org 0x4790e
	str r4, [r5, #44]	@ 0004790e ec62
.org 0x47910
	ldr r0, [pc, #24]	@ 00047910 0648
.org 0x47912
	str r0, [r5, #36]	@ 00047912 6862
.org 0x47914
	movs r0, #69	@ 00047914 4520
.org 0x47916
	bl 0x2b10	@ 00047916 bbf7fbf8
.org 0x4791a
	strb r6, [r4, #18]	@ 0004791a a674
.org 0x4791c
	pop {r4, r5, r6}	@ 0004791c 70bc
.org 0x4791e
	pop {r0}	@ 0004791e 01bc
.org 0x47920
	bx r0	@ 00047920 0047
