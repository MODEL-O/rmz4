@ FUN_080be8ac  entry 0x080be8ac  size 96
.thumb
.org 0xbe8ac
FUN_080be8ac:
	push {r4, r5, r6, lr}	@ 000be8ac 70b5
.org 0xbe8ae
	adds r4, r0, #0	@ 000be8ae 041c
.org 0xbe8b0
	ldr r1, [pc, #88]	@ 000be8b0 1649
.org 0xbe8b2
	ldrb r0, [r4, #9]	@ 000be8b2 607a
.org 0xbe8b4
	lsls r0, r0, #2	@ 000be8b4 8000
.org 0xbe8b6
	adds r0, r0, r1	@ 000be8b6 4018
.org 0xbe8b8
	movs r1, #1	@ 000be8b8 0121
.org 0xbe8ba
	str r1, [r4, #12]	@ 000be8ba e160
.org 0xbe8bc
	ldr r0, [r0, #0]	@ 000be8bc 0068
.org 0xbe8be
	ldr r0, [r0, #4]	@ 000be8be 4068
.org 0xbe8c0
	str r0, [r4, #20]	@ 000be8c0 6061
.org 0xbe8c2
	movs r6, #0	@ 000be8c2 0026
.org 0xbe8c4
	strb r6, [r4, #13]	@ 000be8c4 6673
.org 0xbe8c6
	strb r6, [r4, #14]	@ 000be8c6 a673
.org 0xbe8c8
	strb r6, [r4, #15]	@ 000be8c8 e673
.org 0xbe8ca
	ldrb r1, [r4, #10]	@ 000be8ca a17a
.org 0xbe8cc
	movs r0, #254	@ 000be8cc fe20
.org 0xbe8ce
	ands r0, r1	@ 000be8ce 0840
.org 0xbe8d0
	movs r1, #2	@ 000be8d0 0221
.org 0xbe8d2
	orrs r0, r1	@ 000be8d2 0843
.org 0xbe8d4
	strb r0, [r4, #10]	@ 000be8d4 a072
.org 0xbe8d6
	adds r0, r4, #0	@ 000be8d6 201c
.org 0xbe8d8
	adds r0, #184	@ 000be8d8 b830
.org 0xbe8da
	strb r6, [r0, #0]	@ 000be8da 0670
.org 0xbe8dc
	adds r0, r4, #0	@ 000be8dc 201c
.org 0xbe8de
	bl 0x1cc9c	@ 000be8de 5ef7ddf9
.org 0xbe8e2
	ldrb r1, [r4, #10]	@ 000be8e2 a17a
.org 0xbe8e4
	movs r0, #4	@ 000be8e4 0420
.org 0xbe8e6
	orrs r0, r1	@ 000be8e6 0843
.org 0xbe8e8
	strb r0, [r4, #10]	@ 000be8e8 a072
.org 0xbe8ea
	adds r5, r4, #0	@ 000be8ea 251c
.org 0xbe8ec
	adds r5, #116	@ 000be8ec 7435
.org 0xbe8ee
	ldr r1, [pc, #32]	@ 000be8ee 0849
.org 0xbe8f0
	adds r2, r4, #0	@ 000be8f0 221c
.org 0xbe8f2
	adds r2, #84	@ 000be8f2 5432
.org 0xbe8f4
	adds r0, r5, #0	@ 000be8f4 281c
.org 0xbe8f6
	movs r3, #64	@ 000be8f6 4023
.org 0xbe8f8
	bl 0x5760	@ 000be8f8 46f732ff
.org 0xbe8fc
	str r4, [r5, #44]	@ 000be8fc ec62
.org 0xbe8fe
	str r6, [r5, #36]	@ 000be8fe 6e62
.org 0xbe900
	adds r0, r4, #0	@ 000be900 201c
.org 0xbe902
	bl 0xbe914	@ 000be902 00f007f8
.org 0xbe906
	pop {r4, r5, r6}	@ 000be906 70bc
.org 0xbe908
	pop {r0}	@ 000be908 01bc
.org 0xbe90a
	bx r0	@ 000be90a 0047
