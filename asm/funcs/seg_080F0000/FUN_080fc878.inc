@ FUN_080fc878  entry 0x080fc878  size 148
.thumb
.org 0xfc878
FUN_080fc878:
	push {r4, lr}	@ 000fc878 10b5
.org 0xfc87a
	adds r4, r0, #0	@ 000fc87a 041c
.org 0xfc87c
	ldrb r0, [r4, #13]	@ 000fc87c 607b
.org 0xfc87e
	cmp r0, #1	@ 000fc87e 0128
.org 0xfc880
	beq.n 0xfc8c4	@ 000fc880 20d0
.org 0xfc882
	cmp r0, #1	@ 000fc882 0128
.org 0xfc884
	bgt.n 0xfc88c	@ 000fc884 02dc
.org 0xfc886
	cmp r0, #0	@ 000fc886 0028
.org 0xfc888
	beq.n 0xfc896	@ 000fc888 05d0
.org 0xfc88a
	b.n 0xfc90a	@ 000fc88a 3ee0
.org 0xfc88c
	cmp r0, #2	@ 000fc88c 0228
.org 0xfc88e
	beq.n 0xfc8d4	@ 000fc88e 21d0
.org 0xfc890
	cmp r0, #3	@ 000fc890 0328
.org 0xfc892
	beq.n 0xfc8f8	@ 000fc892 31d0
.org 0xfc894
	b.n 0xfc90a	@ 000fc894 39e0
.org 0xfc896
	ldrb r0, [r4, #18]	@ 000fc896 a07c
.org 0xfc898
	subs r0, #1	@ 000fc898 0138
.org 0xfc89a
	strb r0, [r4, #18]	@ 000fc89a a074
.org 0xfc89c
	lsls r0, r0, #24	@ 000fc89c 0006
.org 0xfc89e
	lsrs r0, r0, #24	@ 000fc89e 000e
.org 0xfc8a0
	cmp r0, #255	@ 000fc8a0 ff28
.org 0xfc8a2
	bne.n 0xfc90a	@ 000fc8a2 32d1
.org 0xfc8a4
	movs r0, #91	@ 000fc8a4 5b20
.org 0xfc8a6
	bl 0x2b10	@ 000fc8a6 06f733f9
.org 0xfc8aa
	ldr r1, [pc, #20]	@ 000fc8aa 0549
.org 0xfc8ac
	adds r0, r4, #0	@ 000fc8ac 201c
.org 0xfc8ae
	bl 0x1cf00	@ 000fc8ae 20f727fb
.org 0xfc8b2
	adds r0, r4, #0	@ 000fc8b2 201c
.org 0xfc8b4
	adds r0, #84	@ 000fc8b4 5430
.org 0xfc8b6
	movs r1, #0	@ 000fc8b6 0021
.org 0xfc8b8
	movs r2, #0	@ 000fc8b8 0022
.org 0xfc8ba
	bl 0xadd08	@ 000fc8ba b1f725fa
.org 0xfc8be
	b.n 0xfc8ea	@ 000fc8be 14e0
.org 0xfc8c0
	.byte 0x01,0x2f,0x00,0x00	@ 000fc8c0 data
.org 0xfc8c4
	adds r0, r4, #0	@ 000fc8c4 201c
.org 0xfc8c6
	adds r0, #115	@ 000fc8c6 7330
.org 0xfc8c8
	ldrb r0, [r0, #0]	@ 000fc8c8 0078
.org 0xfc8ca
	cmp r0, #3	@ 000fc8ca 0328
.org 0xfc8cc
	bne.n 0xfc90a	@ 000fc8cc 1dd1
.org 0xfc8ce
	movs r0, #90	@ 000fc8ce 5a20
.org 0xfc8d0
	strb r0, [r4, #18]	@ 000fc8d0 a074
.org 0xfc8d2
	b.n 0xfc8ea	@ 000fc8d2 0ae0
.org 0xfc8d4
	ldrb r0, [r4, #18]	@ 000fc8d4 a07c
.org 0xfc8d6
	subs r0, #1	@ 000fc8d6 0138
.org 0xfc8d8
	strb r0, [r4, #18]	@ 000fc8d8 a074
.org 0xfc8da
	lsls r0, r0, #24	@ 000fc8da 0006
.org 0xfc8dc
	lsrs r0, r0, #24	@ 000fc8dc 000e
.org 0xfc8de
	cmp r0, #255	@ 000fc8de ff28
.org 0xfc8e0
	bne.n 0xfc90a	@ 000fc8e0 13d1
.org 0xfc8e2
	ldr r1, [pc, #16]	@ 000fc8e2 0449
.org 0xfc8e4
	adds r0, r4, #0	@ 000fc8e4 201c
.org 0xfc8e6
	bl 0x1cf00	@ 000fc8e6 20f70bfb
.org 0xfc8ea
	ldrb r0, [r4, #13]	@ 000fc8ea 607b
.org 0xfc8ec
	adds r0, #1	@ 000fc8ec 0130
.org 0xfc8ee
	strb r0, [r4, #13]	@ 000fc8ee 6073
.org 0xfc8f0
	b.n 0xfc90a	@ 000fc8f0 0be0
.org 0xfc8f2
	.byte 0x00	@ 000fc8f2 data
.org 0xfc8f3
	.byte 0x00	@ 000fc8f3 data
.org 0xfc8f4
	.byte 0x03,0x2f,0x00,0x00	@ 000fc8f4 data
.org 0xfc8f8
	adds r0, r4, #0	@ 000fc8f8 201c
.org 0xfc8fa
	adds r0, #115	@ 000fc8fa 7330
.org 0xfc8fc
	ldrb r0, [r0, #0]	@ 000fc8fc 0078
.org 0xfc8fe
	cmp r0, #3	@ 000fc8fe 0328
.org 0xfc900
	bne.n 0xfc90a	@ 000fc900 03d1
.org 0xfc902
	movs r1, #0	@ 000fc902 0021
.org 0xfc904
	movs r0, #90	@ 000fc904 5a20
.org 0xfc906
	strb r0, [r4, #18]	@ 000fc906 a074
.org 0xfc908
	strb r1, [r4, #13]	@ 000fc908 6173
.org 0xfc90a
	adds r0, r4, #0	@ 000fc90a 201c
