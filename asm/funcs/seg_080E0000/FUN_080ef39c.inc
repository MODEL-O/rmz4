@ FUN_080ef39c  entry 0x080ef39c  size 92
.thumb
.org 0xef39c
FUN_080ef39c:
	push {r4, r5, lr}	@ 000ef39c 30b5
.org 0xef39e
	adds r5, r0, #0	@ 000ef39e 051c
.org 0xef3a0
	ldr r1, [pc, #84]	@ 000ef3a0 1549
.org 0xef3a2
	adds r1, #248	@ 000ef3a2 f831
.org 0xef3a4
	ldr r0, [pc, #84]	@ 000ef3a4 1548
.org 0xef3a6
	strh r0, [r1, #0]	@ 000ef3a6 0880
.org 0xef3a8
	ldr r4, [pc, #84]	@ 000ef3a8 154c
.org 0xef3aa
	adds r4, #248	@ 000ef3aa f834
.org 0xef3ac
	movs r0, #5	@ 000ef3ac 0520
.org 0xef3ae
	strh r0, [r4, #0]	@ 000ef3ae 2080
.org 0xef3b0
	ldr r0, [pc, #80]	@ 000ef3b0 1448
.org 0xef3b2
	ldrh r1, [r1, #0]	@ 000ef3b2 0988
.org 0xef3b4
	ldrh r2, [r0, #6]	@ 000ef3b4 c288
.org 0xef3b6
	lsrs r2, r2, #6	@ 000ef3b6 9209
.org 0xef3b8
	subs r1, r1, r2	@ 000ef3b8 891a
.org 0xef3ba
	lsls r1, r1, #5	@ 000ef3ba 4901
.org 0xef3bc
	movs r2, #128	@ 000ef3bc 8022
.org 0xef3be
	lsls r2, r2, #9	@ 000ef3be 5202
.org 0xef3c0
	adds r1, r1, r2	@ 000ef3c0 8918
.org 0xef3c2
	bl 0x1d30	@ 000ef3c2 12f7b5fc
.org 0xef3c6
	ldr r0, [pc, #64]	@ 000ef3c6 1048
.org 0xef3c8
	ldrh r1, [r4, #0]	@ 000ef3c8 2188
.org 0xef3ca
	ldrb r2, [r0, #7]	@ 000ef3ca c279
.org 0xef3cc
	subs r1, r1, r2	@ 000ef3cc 891a
.org 0xef3ce
	lsls r1, r1, #5	@ 000ef3ce 4901
.org 0xef3d0
	movs r2, #128	@ 000ef3d0 8022
.org 0xef3d2
	lsls r2, r2, #2	@ 000ef3d2 9200
.org 0xef3d4
	adds r1, r1, r2	@ 000ef3d4 8918
.org 0xef3d6
	bl 0x2208	@ 000ef3d6 12f717ff
.org 0xef3da
	ldr r1, [pc, #48]	@ 000ef3da 0c49
.org 0xef3dc
	ldrb r0, [r5, #9]	@ 000ef3dc 687a
.org 0xef3de
	lsls r0, r0, #2	@ 000ef3de 8000
.org 0xef3e0
	adds r0, r0, r1	@ 000ef3e0 4018
.org 0xef3e2
	movs r1, #1	@ 000ef3e2 0121
.org 0xef3e4
	str r1, [r5, #12]	@ 000ef3e4 e960
.org 0xef3e6
	ldr r0, [r0, #0]	@ 000ef3e6 0068
.org 0xef3e8
	ldr r0, [r0, #4]	@ 000ef3e8 4068
.org 0xef3ea
	str r0, [r5, #20]	@ 000ef3ea 6861
.org 0xef3ec
	adds r0, r5, #0	@ 000ef3ec 281c
.org 0xef3ee
	bl 0xed7c8	@ 000ef3ee fef7ebf9
.org 0xef3f2
	pop {r4, r5}	@ 000ef3f2 30bc
.org 0xef3f4
	pop {r0}	@ 000ef3f4 01bc
.org 0xef3f6
	bx r0	@ 000ef3f6 0047
