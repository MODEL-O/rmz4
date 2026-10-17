@ FUN_080cbfd4  entry 0x080cbfd4  size 82
.thumb
.org 0xcbfd4
FUN_080cbfd4:
	push {r4, r5, r6, r7, lr}	@ 000cbfd4 f0b5
.org 0xcbfd6
	adds r6, r0, #0	@ 000cbfd6 061c
.org 0xcbfd8
	adds r7, r1, #0	@ 000cbfd8 0f1c
.org 0xcbfda
	lsls r2, r2, #24	@ 000cbfda 1206
.org 0xcbfdc
	lsrs r5, r2, #24	@ 000cbfdc 150e
.org 0xcbfde
	lsls r3, r3, #24	@ 000cbfde 1b06
.org 0xcbfe0
	lsrs r4, r3, #24	@ 000cbfe0 1c0e
.org 0xcbfe2
	ldr r0, [pc, #68]	@ 000cbfe2 1148
.org 0xcbfe4
	ldr r0, [r0, #0]	@ 000cbfe4 0068
.org 0xcbfe6
	bl 0x5500	@ 000cbfe6 39f78bfa
.org 0xcbfea
	adds r3, r0, #0	@ 000cbfea 031c
.org 0xcbfec
	cmp r3, #0	@ 000cbfec 002b
.org 0xcbfee
	beq.n 0xcc020	@ 000cbfee 17d0
.org 0xcbff0
	adds r1, r3, #0	@ 000cbff0 191c
.org 0xcbff2
	adds r1, #37	@ 000cbff2 2531
.org 0xcbff4
	movs r2, #0	@ 000cbff4 0022
.org 0xcbff6
	movs r0, #8	@ 000cbff6 0820
.org 0xcbff8
	strb r0, [r1, #0]	@ 000cbff8 0870
.org 0xcbffa
	ldr r0, [pc, #48]	@ 000cbffa 0c48
.org 0xcbffc
	movs r1, #42	@ 000cbffc 2a21
.org 0xcbffe
	strb r1, [r3, #9]	@ 000cbffe 5972
.org 0xcc000
	adds r0, #168	@ 000cc000 a830
.org 0xcc002
	ldr r0, [r0, #0]	@ 000cc002 0068
.org 0xcc004
	ldr r0, [r0, #0]	@ 000cc004 0068
.org 0xcc006
	str r0, [r3, #20]	@ 000cc006 5861
.org 0xcc008
	movs r0, #0	@ 000cc008 0020
.org 0xcc00a
	strh r2, [r3, #32]	@ 000cc00a 1a84
.org 0xcc00c
	adds r1, r3, #0	@ 000cc00c 191c
.org 0xcc00e
	adds r1, #34	@ 000cc00e 2231
.org 0xcc010
	strb r0, [r1, #0]	@ 000cc010 0870
.org 0xcc012
	str r6, [r3, #40]	@ 000cc012 9e62
.org 0xcc014
	ldr r0, [r7, #0]	@ 000cc014 3868
.org 0xcc016
	ldr r1, [r7, #4]	@ 000cc016 7968
.org 0xcc018
	str r0, [r3, #84]	@ 000cc018 5865
.org 0xcc01a
	str r1, [r3, #88]	@ 000cc01a 9965
.org 0xcc01c
	strb r5, [r3, #16]	@ 000cc01c 1d74
.org 0xcc01e
	strb r4, [r3, #17]	@ 000cc01e 5c74
.org 0xcc020
	pop {r4, r5, r6, r7}	@ 000cc020 f0bc
.org 0xcc022
	pop {r0}	@ 000cc022 01bc
.org 0xcc024
	bx r0	@ 000cc024 0047
