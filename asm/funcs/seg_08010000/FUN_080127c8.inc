@ FUN_080127c8  entry 0x080127c8  size 72
.thumb
.org 0x127c8
FUN_080127c8:
	push {r4, r5, r6, lr}	@ 000127c8 70b5
.org 0x127ca
	adds r5, r0, #0	@ 000127ca 051c
.org 0x127cc
	adds r4, r1, #0	@ 000127cc 0c1c
.org 0x127ce
	lsls r5, r5, #4	@ 000127ce 2d01
.org 0x127d0
	lsls r1, r4, #4	@ 000127d0 2101
.org 0x127d2
	asrs r1, r1, #16	@ 000127d2 0914
.org 0x127d4
	subs r1, #4	@ 000127d4 0439
.org 0x127d6
	asrs r5, r5, #16	@ 000127d6 2d14
.org 0x127d8
	lsls r1, r1, #16	@ 000127d8 0904
.org 0x127da
	asrs r1, r1, #16	@ 000127da 0914
.org 0x127dc
	ldr r6, [pc, #48]	@ 000127dc 0c4e
.org 0x127de
	adds r0, r5, #0	@ 000127de 281c
.org 0x127e0
	adds r2, r6, #0	@ 000127e0 321c
.org 0x127e2
	bl 0x7410	@ 000127e2 f4f715fe
.org 0x127e6
	movs r0, #200	@ 000127e6 c820
.org 0x127e8
	lsls r0, r0, #10	@ 000127e8 8002
.org 0x127ea
	adds r4, r4, r0	@ 000127ea 2418
.org 0x127ec
	lsls r4, r4, #4	@ 000127ec 2401
.org 0x127ee
	asrs r4, r4, #16	@ 000127ee 2414
.org 0x127f0
	subs r4, #4	@ 000127f0 043c
.org 0x127f2
	lsls r4, r4, #16	@ 000127f2 2404
.org 0x127f4
	asrs r4, r4, #16	@ 000127f4 2414
.org 0x127f6
	adds r0, r5, #0	@ 000127f6 281c
.org 0x127f8
	adds r1, r4, #0	@ 000127f8 211c
.org 0x127fa
	adds r2, r6, #0	@ 000127fa 321c
.org 0x127fc
	bl 0x7410	@ 000127fc f4f708fe
.org 0x12800
	ldr r0, [pc, #16]	@ 00012800 0448
.org 0x12802
	ldr r1, [pc, #20]	@ 00012802 0549
.org 0x12804
	adds r0, r0, r1	@ 00012804 4018
.org 0x12806
	movs r1, #1	@ 00012806 0121
.org 0x12808
	strb r1, [r0, #0]	@ 00012808 0170
.org 0x1280a
	pop {r4, r5, r6}	@ 0001280a 70bc
.org 0x1280c
	pop {r0}	@ 0001280c 01bc
.org 0x1280e
	bx r0	@ 0001280e 0047
