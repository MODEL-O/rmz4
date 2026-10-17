@ FUN_080b76a4  entry 0x080b76a4  size 124
.thumb
.org 0xb76a4
FUN_080b76a4:
	push {r4, r5, lr}	@ 000b76a4 30b5
.org 0xb76a6
	adds r5, r0, #0	@ 000b76a6 051c
.org 0xb76a8
	adds r0, #182	@ 000b76a8 b630
.org 0xb76aa
	ldrb r0, [r0, #0]	@ 000b76aa 0078
.org 0xb76ac
	cmp r0, #0	@ 000b76ac 0028
.org 0xb76ae
	bne.n 0xb76da	@ 000b76ae 14d1
.org 0xb76b0
	adds r0, r5, #0	@ 000b76b0 281c
.org 0xb76b2
	adds r0, #140	@ 000b76b2 8c30
.org 0xb76b4
	ldr r0, [r0, #0]	@ 000b76b4 0068
.org 0xb76b6
	movs r1, #128	@ 000b76b6 8021
.org 0xb76b8
	lsls r1, r1, #9	@ 000b76b8 4902
.org 0xb76ba
	ands r0, r1	@ 000b76ba 0840
.org 0xb76bc
	cmp r0, #0	@ 000b76bc 0028
.org 0xb76be
	beq.n 0xb76ca	@ 000b76be 04d0
.org 0xb76c0
	adds r4, r5, #0	@ 000b76c0 2c1c
.org 0xb76c2
	adds r4, #84	@ 000b76c2 5434
.org 0xb76c4
	adds r0, r4, #0	@ 000b76c4 201c
.org 0xb76c6
	movs r1, #4	@ 000b76c6 0421
.org 0xb76c8
	b.n 0xb76d2	@ 000b76c8 03e0
.org 0xb76ca
	adds r4, r5, #0	@ 000b76ca 2c1c
.org 0xb76cc
	adds r4, #84	@ 000b76cc 5434
.org 0xb76ce
	adds r0, r4, #0	@ 000b76ce 201c
.org 0xb76d0
	movs r1, #5	@ 000b76d0 0521
.org 0xb76d2
	movs r2, #0	@ 000b76d2 0022
.org 0xb76d4
	bl 0xe1508	@ 000b76d4 29f018ff
.org 0xb76d8
	b.n 0xb76e8	@ 000b76d8 06e0
.org 0xb76da
	adds r4, r5, #0	@ 000b76da 2c1c
.org 0xb76dc
	adds r4, #84	@ 000b76dc 5434
.org 0xb76de
	adds r0, r4, #0	@ 000b76de 201c
.org 0xb76e0
	movs r1, #6	@ 000b76e0 0621
.org 0xb76e2
	movs r2, #0	@ 000b76e2 0022
.org 0xb76e4
	bl 0xe1508	@ 000b76e4 29f010ff
.org 0xb76e8
	ldr r2, [pc, #52]	@ 000b76e8 0d4a
.org 0xb76ea
	ldrh r1, [r2, #12]	@ 000b76ea 9189
.org 0xb76ec
	ldr r0, [pc, #52]	@ 000b76ec 0d48
.org 0xb76ee
	cmp r1, r0	@ 000b76ee 8142
.org 0xb76f0
	bhi.n 0xb76f6	@ 000b76f0 01d8
.org 0xb76f2
	adds r0, r1, #1	@ 000b76f2 481c
.org 0xb76f4
	strh r0, [r2, #12]	@ 000b76f4 9081
.org 0xb76f6
	adds r0, r5, #0	@ 000b76f6 281c
.org 0xb76f8
	adds r1, r4, #0	@ 000b76f8 211c
.org 0xb76fa
	bl 0x2abe0	@ 000b76fa 73f771fa
.org 0xb76fe
	movs r0, #2	@ 000b76fe 0220
.org 0xb7700
	movs r1, #7	@ 000b7700 0721
.org 0xb7702
	adds r2, r4, #0	@ 000b7702 221c
.org 0xb7704
	bl 0x2ab88	@ 000b7704 73f740fa
.org 0xb7708
	ldr r1, [pc, #28]	@ 000b7708 0749
.org 0xb770a
	ldrb r0, [r5, #9]	@ 000b770a 687a
.org 0xb770c
	lsls r0, r0, #2	@ 000b770c 8000
.org 0xb770e
	adds r0, r0, r1	@ 000b770e 4018
.org 0xb7710
	movs r1, #4	@ 000b7710 0421
.org 0xb7712
	str r1, [r5, #12]	@ 000b7712 e960
.org 0xb7714
	ldr r0, [r0, #0]	@ 000b7714 0068
.org 0xb7716
	ldr r0, [r0, #16]	@ 000b7716 0069
.org 0xb7718
	str r0, [r5, #20]	@ 000b7718 6861
.org 0xb771a
	pop {r4, r5}	@ 000b771a 30bc
.org 0xb771c
	pop {r0}	@ 000b771c 01bc
.org 0xb771e
	bx r0	@ 000b771e 0047
