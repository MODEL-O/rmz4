@ FUN_080792a0  entry 0x080792a0  size 116
.thumb
.org 0x792a0
FUN_080792a0:
	push {r4, r5, lr}	@ 000792a0 30b5
.org 0x792a2
	sub sp, #16	@ 000792a2 84b0
.org 0x792a4
	adds r3, r0, #0	@ 000792a4 031c
.org 0x792a6
	lsls r1, r1, #24	@ 000792a6 0906
.org 0x792a8
	lsrs r2, r1, #24	@ 000792a8 0a0e
.org 0x792aa
	movs r5, #0	@ 000792aa 0025
.org 0x792ac
	movs r4, #0	@ 000792ac 0024
.org 0x792ae
	cmp r4, r2	@ 000792ae 9442
.org 0x792b0
	bge.n 0x792c8	@ 000792b0 0ada
.org 0x792b2
	mov r0, sp	@ 000792b2 6846
.org 0x792b4
	adds r1, r0, r4	@ 000792b4 0119
.org 0x792b6
	adds r0, r3, r4	@ 000792b6 1819
.org 0x792b8
	ldrb r0, [r0, #0]	@ 000792b8 0078
.org 0x792ba
	strb r0, [r1, #0]	@ 000792ba 0870
.org 0x792bc
	adds r0, r0, r5	@ 000792bc 4019
.org 0x792be
	lsls r0, r0, #24	@ 000792be 0006
.org 0x792c0
	lsrs r5, r0, #24	@ 000792c0 050e
.org 0x792c2
	adds r4, #1	@ 000792c2 0134
.org 0x792c4
	cmp r4, r2	@ 000792c4 9442
.org 0x792c6
	blt.n 0x792b2	@ 000792c6 f4db
.org 0x792c8
	lsls r0, r5, #24	@ 000792c8 2806
.org 0x792ca
	asrs r3, r0, #24	@ 000792ca 0316
.org 0x792cc
	cmp r3, #0	@ 000792cc 002b
.org 0x792ce
	bne.n 0x792d6	@ 000792ce 02d1
.org 0x792d0
	movs r0, #1	@ 000792d0 0120
.org 0x792d2
	negs r0, r0	@ 000792d2 4042
.org 0x792d4
	b.n 0x7930c	@ 000792d4 1ae0
.org 0x792d6
	ldr r2, [pc, #60]	@ 000792d6 0f4a
.org 0x792d8
	ldr r1, [r2, #0]	@ 000792d8 1168
.org 0x792da
	ldr r0, [pc, #60]	@ 000792da 0f48
.org 0x792dc
	muls r0, r1	@ 000792dc 4843
.org 0x792de
	ldr r1, [pc, #60]	@ 000792de 0f49
.org 0x792e0
	adds r0, r0, r1	@ 000792e0 4018
.org 0x792e2
	lsls r0, r0, #1	@ 000792e2 4000
.org 0x792e4
	lsrs r1, r0, #1	@ 000792e4 4108
.org 0x792e6
	str r1, [r2, #0]	@ 000792e6 1160
.org 0x792e8
	lsrs r0, r0, #17	@ 000792e8 400c
.org 0x792ea
	adds r1, r3, #0	@ 000792ea 191c
.org 0x792ec
	bl 0x129198	@ 000792ec aff054ff
.org 0x792f0
	adds r1, r0, #0	@ 000792f0 011c
.org 0x792f2
	subs r4, #1	@ 000792f2 013c
.org 0x792f4
	cmp r4, #0	@ 000792f4 002c
.org 0x792f6
	blt.n 0x7930a	@ 000792f6 08db
.org 0x792f8
	mov r2, sp	@ 000792f8 6a46
.org 0x792fa
	adds r0, r2, r4	@ 000792fa 1019
.org 0x792fc
	ldrb r0, [r0, #0]	@ 000792fc 0078
.org 0x792fe
	subs r0, r5, r0	@ 000792fe 281a
.org 0x79300
	lsls r0, r0, #24	@ 00079300 0006
.org 0x79302
	lsrs r5, r0, #24	@ 00079302 050e
.org 0x79304
	asrs r0, r0, #24	@ 00079304 0016
.org 0x79306
	cmp r1, r0	@ 00079306 8142
.org 0x79308
	blt.n 0x792f2	@ 00079308 f3db
.org 0x7930a
	adds r0, r4, #0	@ 0007930a 201c
.org 0x7930c
	add sp, #16	@ 0007930c 04b0
.org 0x7930e
	pop {r4, r5}	@ 0007930e 30bc
.org 0x79310
	pop {r1}	@ 00079310 02bc
.org 0x79312
	bx r1	@ 00079312 0847
