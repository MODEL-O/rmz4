@ FUN_08094694  entry 0x08094694  size 124
.thumb
.org 0x94694
FUN_08094694:
	push {r4, r5, lr}	@ 00094694 30b5
.org 0x94696
	adds r3, r0, #0	@ 00094696 031c
.org 0x94698
	ldr r4, [r3, #44]	@ 00094698 dc6a
.org 0x9469a
	ldr r0, [r3, #12]	@ 0009469a d868
.org 0x9469c
	ldr r1, [r0, #44]	@ 0009469c c16a
.org 0x9469e
	ldr r0, [r3, #20]	@ 0009469e 5869
.org 0x946a0
	movs r5, #1	@ 000946a0 0125
.org 0x946a2
	ands r0, r5	@ 000946a2 2840
.org 0x946a4
	cmp r0, #0	@ 000946a4 0028
.org 0x946a6
	beq.n 0x94714	@ 000946a6 35d0
.org 0x946a8
	ldr r0, [r1, #84]	@ 000946a8 486d
.org 0x946aa
	ldr r2, [r4, #84]	@ 000946aa 626d
.org 0x946ac
	cmp r0, r2	@ 000946ac 9042
.org 0x946ae
	bge.n 0x946c0	@ 000946ae 07da
.org 0x946b0
	adds r1, r4, #0	@ 000946b0 211c
.org 0x946b2
	adds r1, #186	@ 000946b2 ba31
.org 0x946b4
	movs r0, #0	@ 000946b4 0020
.org 0x946b6
	strb r0, [r1, #0]	@ 000946b6 0870
.org 0x946b8
	ldr r0, [pc, #0]	@ 000946b8 0048
.org 0x946ba
	b.n 0x946e8	@ 000946ba 15e0
.org 0x946bc
	.byte 0xf0,0xdb,0x02,0x02	@ 000946bc data
.org 0x946c0
	cmp r2, r0	@ 000946c0 8242
.org 0x946c2
	bge.n 0x946d4	@ 000946c2 07da
.org 0x946c4
	adds r0, r4, #0	@ 000946c4 201c
.org 0x946c6
	adds r0, #186	@ 000946c6 ba30
.org 0x946c8
	strb r5, [r0, #0]	@ 000946c8 0570
.org 0x946ca
	ldr r0, [pc, #4]	@ 000946ca 0148
.org 0x946cc
	b.n 0x946e8	@ 000946cc 0ce0
.org 0x946ce
	.byte 0x00	@ 000946ce data
.org 0x946cf
	.byte 0x00	@ 000946cf data
.org 0x946d0
	.byte 0xf0,0xdb,0x02,0x02	@ 000946d0 data
.org 0x946d4
	movs r5, #0	@ 000946d4 0025
.org 0x946d6
	ldr r0, [pc, #68]	@ 000946d6 1148
.org 0x946d8
	ldr r1, [r0, #0]	@ 000946d8 0168
.org 0x946da
	ldr r1, [r1, #84]	@ 000946da 496d
.org 0x946dc
	cmp r2, r1	@ 000946dc 8a42
.org 0x946de
	bge.n 0x946e2	@ 000946de 00da
.org 0x946e0
	movs r5, #1	@ 000946e0 0125
.org 0x946e2
	adds r1, r4, #0	@ 000946e2 211c
.org 0x946e4
	adds r1, #186	@ 000946e4 ba31
.org 0x946e6
	strb r5, [r1, #0]	@ 000946e6 0d70
.org 0x946e8
	ldr r2, [r0, #0]	@ 000946e8 0268
.org 0x946ea
	ldr r1, [r3, #20]	@ 000946ea 5969
.org 0x946ec
	movs r0, #128	@ 000946ec 8020
.org 0x946ee
	lsls r0, r0, #2	@ 000946ee 8000
.org 0x946f0
	ands r0, r1	@ 000946f0 0840
.org 0x946f2
	cmp r0, #0	@ 000946f2 0028
.org 0x946f4
	beq.n 0x94714	@ 000946f4 0ed0
.org 0x946f6
	movs r0, #128	@ 000946f6 8020
.org 0x946f8
	lsls r0, r0, #10	@ 000946f8 8002
.org 0x946fa
	ands r1, r0	@ 000946fa 0140
.org 0x946fc
	cmp r1, #0	@ 000946fc 0029
.org 0x946fe
	beq.n 0x94714	@ 000946fe 09d0
.org 0x94700
	cmp r2, #0	@ 00094700 002a
.org 0x94702
	beq.n 0x94714	@ 00094702 07d0
.org 0x94704
	adds r0, r2, #0	@ 00094704 101c
.org 0x94706
	movs r1, #3	@ 00094706 0321
.org 0x94708
	movs r2, #10	@ 00094708 0a22
.org 0x9470a
	bl 0x3a578	@ 0009470a a5f735ff
.org 0x9470e
	adds r1, r4, #0	@ 0009470e 211c
