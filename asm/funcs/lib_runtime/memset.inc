@ memset  entry 0x081292b8  size 82
.thumb
.org 0x1292b8
memset:
	push {r4, r5, lr}	@ 001292b8 30b5
.org 0x1292ba
	adds r5, r0, #0	@ 001292ba 051c
.org 0x1292bc
	adds r4, r1, #0	@ 001292bc 0c1c
.org 0x1292be
	adds r3, r5, #0	@ 001292be 2b1c
.org 0x1292c0
	cmp r2, #3	@ 001292c0 032a
.org 0x1292c2
	bls.n 0x1292fe	@ 001292c2 1cd9
.org 0x1292c4
	movs r0, #3	@ 001292c4 0320
.org 0x1292c6
	ands r0, r5	@ 001292c6 2840
.org 0x1292c8
	cmp r0, #0	@ 001292c8 0028
.org 0x1292ca
	bne.n 0x1292fe	@ 001292ca 18d1
.org 0x1292cc
	adds r1, r5, #0	@ 001292cc 291c
.org 0x1292ce
	movs r0, #255	@ 001292ce ff20
.org 0x1292d0
	ands r4, r0	@ 001292d0 0440
.org 0x1292d2
	lsls r3, r4, #8	@ 001292d2 2302
.org 0x1292d4
	orrs r3, r4	@ 001292d4 2343
.org 0x1292d6
	lsls r0, r3, #16	@ 001292d6 1804
.org 0x1292d8
	orrs r3, r0	@ 001292d8 0343
.org 0x1292da
	cmp r2, #15	@ 001292da 0f2a
.org 0x1292dc
	bls.n 0x1292f2	@ 001292dc 09d9
.org 0x1292de
	stmia r1!, {r3}	@ 001292de 08c1
.org 0x1292e0
	stmia r1!, {r3}	@ 001292e0 08c1
.org 0x1292e2
	stmia r1!, {r3}	@ 001292e2 08c1
.org 0x1292e4
	stmia r1!, {r3}	@ 001292e4 08c1
.org 0x1292e6
	subs r2, #16	@ 001292e6 103a
.org 0x1292e8
	cmp r2, #15	@ 001292e8 0f2a
.org 0x1292ea
	bhi.n 0x1292de	@ 001292ea f8d8
.org 0x1292ec
	b.n 0x1292f2	@ 001292ec 01e0
.org 0x1292ee
	stmia r1!, {r3}	@ 001292ee 08c1
.org 0x1292f0
	subs r2, #4	@ 001292f0 043a
.org 0x1292f2
	cmp r2, #3	@ 001292f2 032a
.org 0x1292f4
	bhi.n 0x1292ee	@ 001292f4 fbd8
.org 0x1292f6
	adds r3, r1, #0	@ 001292f6 0b1c
.org 0x1292f8
	b.n 0x1292fe	@ 001292f8 01e0
.org 0x1292fa
	strb r4, [r3, #0]	@ 001292fa 1c70
.org 0x1292fc
	adds r3, #1	@ 001292fc 0133
.org 0x1292fe
	adds r0, r2, #0	@ 001292fe 101c
.org 0x129300
	subs r2, #1	@ 00129300 013a
.org 0x129302
	cmp r0, #0	@ 00129302 0028
.org 0x129304
	bne.n 0x1292fa	@ 00129304 f9d1
.org 0x129306
	adds r0, r5, #0	@ 00129306 281c
.org 0x129308
	pop {r4, r5, pc}	@ 00129308 30bd
