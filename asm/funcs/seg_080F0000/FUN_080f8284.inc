@ FUN_080f8284  entry 0x080f8284  size 114
.thumb
.org 0xf8284
FUN_080f8284:
	push {r4, r5, r6, lr}	@ 000f8284 70b5
.org 0xf8286
	adds r5, r0, #0	@ 000f8286 051c
.org 0xf8288
	movs r6, #0	@ 000f8288 0026
.org 0xf828a
	bl 0x1cc9c	@ 000f828a 24f707fd
.org 0xf828e
	ldrb r1, [r5, #10]	@ 000f828e a97a
.org 0xf8290
	movs r0, #1	@ 000f8290 0120
.org 0xf8292
	orrs r0, r1	@ 000f8292 0843
.org 0xf8294
	movs r1, #2	@ 000f8294 0221
.org 0xf8296
	orrs r0, r1	@ 000f8296 0843
.org 0xf8298
	strb r0, [r5, #10]	@ 000f8298 a872
.org 0xf829a
	movs r1, #228	@ 000f829a e421
.org 0xf829c
	lsls r1, r1, #7	@ 000f829c c901
.org 0xf829e
	adds r0, r5, #0	@ 000f829e 281c
.org 0xf82a0
	bl 0x1cf00	@ 000f82a0 24f72efe
.org 0xf82a4
	adds r0, r5, #0	@ 000f82a4 281c
.org 0xf82a6
	adds r0, #181	@ 000f82a6 b530
.org 0xf82a8
	strb r6, [r0, #0]	@ 000f82a8 0670
.org 0xf82aa
	ldrb r1, [r5, #11]	@ 000f82aa e97a
.org 0xf82ac
	movs r0, #8	@ 000f82ac 0820
.org 0xf82ae
	orrs r0, r1	@ 000f82ae 0843
.org 0xf82b0
	strb r0, [r5, #11]	@ 000f82b0 e872
.org 0xf82b2
	ldr r0, [pc, #20]	@ 000f82b2 0548
.org 0xf82b4
	str r0, [r5, #48]	@ 000f82b4 2863
.org 0xf82b6
	movs r0, #1	@ 000f82b6 0120
.org 0xf82b8
	strh r0, [r5, #38]	@ 000f82b8 e884
.org 0xf82ba
	ldrb r0, [r5, #17]	@ 000f82ba 687c
.org 0xf82bc
	cmp r0, #0	@ 000f82bc 0028
.org 0xf82be
	bne.n 0xf82d4	@ 000f82be 09d1
.org 0xf82c0
	ldr r0, [pc, #8]	@ 000f82c0 0248
.org 0xf82c2
	ldr r1, [pc, #12]	@ 000f82c2 0349
.org 0xf82c4
	b.n 0xf82d8	@ 000f82c4 08e0
.org 0xf82c6
	.byte 0x00	@ 000f82c6 data
.org 0xf82c7
	.byte 0x00	@ 000f82c7 data
.org 0xf82c8
	.byte 0x58,0xa3,0x86,0x08	@ 000f82c8 data
.org 0xf82cc
	.byte 0xb0,0x0a,0x00,0x02	@ 000f82cc data
.org 0xf82d0
	.byte 0x40,0xd0,0x02,0x00	@ 000f82d0 data
.org 0xf82d4
	ldr r0, [pc, #44]	@ 000f82d4 0b48
.org 0xf82d6
	ldr r1, [pc, #48]	@ 000f82d6 0c49
.org 0xf82d8
	adds r0, r0, r1	@ 000f82d8 4018
.org 0xf82da
	ldrb r6, [r0, #0]	@ 000f82da 0678
.org 0xf82dc
	ldr r4, [pc, #44]	@ 000f82dc 0b4c
.org 0xf82de
	adds r0, r6, #0	@ 000f82de 301c
.org 0xf82e0
	movs r1, #3	@ 000f82e0 0321
.org 0xf82e2
	bl 0x129120	@ 000f82e2 30f01dff
.org 0xf82e6
	lsls r0, r0, #24	@ 000f82e6 0006
.org 0xf82e8
	lsrs r0, r0, #21	@ 000f82e8 400d
.org 0xf82ea
	ldrb r2, [r5, #17]	@ 000f82ea 6a7c
.org 0xf82ec
	lsls r1, r2, #2	@ 000f82ec 9100
.org 0xf82ee
	adds r1, r1, r2	@ 000f82ee 8918
.org 0xf82f0
	lsls r1, r1, #3	@ 000f82f0 c900
.org 0xf82f2
	adds r0, r0, r1	@ 000f82f2 4018
.org 0xf82f4
	adds r0, r0, r4	@ 000f82f4 0019
