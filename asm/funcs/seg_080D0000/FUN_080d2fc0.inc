@ FUN_080d2fc0  entry 0x080d2fc0  size 116
.thumb
.org 0xd2fc0
FUN_080d2fc0:
	push {r4, r5, lr}	@ 000d2fc0 30b5
.org 0xd2fc2
	adds r4, r0, #0	@ 000d2fc2 041c
.org 0xd2fc4
	bl 0x1cff0	@ 000d2fc4 4af714f8
.org 0xd2fc8
	ldr r2, [r4, #100]	@ 000d2fc8 626e
.org 0xd2fca
	movs r5, #255	@ 000d2fca ff25
.org 0xd2fcc
	subs r1, r5, r2	@ 000d2fcc a91a
.org 0xd2fce
	lsls r0, r1, #2	@ 000d2fce 8800
.org 0xd2fd0
	adds r0, r0, r1	@ 000d2fd0 4018
.org 0xd2fd2
	lsls r0, r0, #4	@ 000d2fd2 0001
.org 0xd2fd4
	cmp r0, #0	@ 000d2fd4 0028
.org 0xd2fd6
	bge.n 0xd2fda	@ 000d2fd6 00da
.org 0xd2fd8
	adds r0, #255	@ 000d2fd8 ff30
.org 0xd2fda
	asrs r0, r0, #8	@ 000d2fda 0012
.org 0xd2fdc
	adds r3, r2, r0	@ 000d2fdc 1318
.org 0xd2fde
	str r3, [r4, #100]	@ 000d2fde 6366
.org 0xd2fe0
	ldr r2, [r4, #104]	@ 000d2fe0 a26e
.org 0xd2fe2
	subs r1, r5, r2	@ 000d2fe2 a91a
.org 0xd2fe4
	lsls r0, r1, #1	@ 000d2fe4 4800
.org 0xd2fe6
	adds r0, r0, r1	@ 000d2fe6 4018
.org 0xd2fe8
	lsls r0, r0, #2	@ 000d2fe8 8000
.org 0xd2fea
	cmp r0, #0	@ 000d2fea 0028
.org 0xd2fec
	bge.n 0xd2ff0	@ 000d2fec 00da
.org 0xd2fee
	adds r0, #255	@ 000d2fee ff30
.org 0xd2ff0
	asrs r0, r0, #8	@ 000d2ff0 0012
.org 0xd2ff2
	adds r0, r2, r0	@ 000d2ff2 1018
.org 0xd2ff4
	str r0, [r4, #104]	@ 000d2ff4 a066
.org 0xd2ff6
	adds r0, r4, #0	@ 000d2ff6 201c
.org 0xd2ff8
	adds r0, #80	@ 000d2ff8 5030
.org 0xd2ffa
	strh r3, [r0, #0]	@ 000d2ffa 0380
.org 0xd2ffc
	ldr r0, [r4, #104]	@ 000d2ffc a06e
.org 0xd2ffe
	adds r1, r4, #0	@ 000d2ffe 211c
.org 0xd3000
	adds r1, #82	@ 000d3000 5231
.org 0xd3002
	strh r0, [r1, #0]	@ 000d3002 0880
.org 0xd3004
	ldrb r0, [r4, #19]	@ 000d3004 e07c
.org 0xd3006
	adds r0, #1	@ 000d3006 0130
.org 0xd3008
	strb r0, [r4, #19]	@ 000d3008 e074
.org 0xd300a
	subs r1, #46	@ 000d300a 2e39
.org 0xd300c
	strb r0, [r1, #0]	@ 000d300c 0870
.org 0xd300e
	ldrb r0, [r4, #18]	@ 000d300e a07c
.org 0xd3010
	subs r0, #1	@ 000d3010 0138
.org 0xd3012
	strb r0, [r4, #18]	@ 000d3012 a074
.org 0xd3014
	lsls r0, r0, #24	@ 000d3014 0006
.org 0xd3016
	lsrs r0, r0, #24	@ 000d3016 000e
.org 0xd3018
	cmp r0, #255	@ 000d3018 ff28
.org 0xd301a
	bne.n 0xd302e	@ 000d301a 08d1
.org 0xd301c
	ldr r1, [pc, #20]	@ 000d301c 0549
.org 0xd301e
	ldrb r0, [r4, #9]	@ 000d301e 607a
.org 0xd3020
	lsls r0, r0, #2	@ 000d3020 8000
.org 0xd3022
	adds r0, r0, r1	@ 000d3022 4018
.org 0xd3024
	movs r1, #2	@ 000d3024 0221
.org 0xd3026
	str r1, [r4, #12]	@ 000d3026 e160
.org 0xd3028
	ldr r0, [r0, #0]	@ 000d3028 0068
.org 0xd302a
	ldr r0, [r0, #8]	@ 000d302a 8068
.org 0xd302c
	str r0, [r4, #20]	@ 000d302c 6061
.org 0xd302e
	pop {r4, r5}	@ 000d302e 30bc
.org 0xd3030
	pop {r0}	@ 000d3030 01bc
.org 0xd3032
	bx r0	@ 000d3032 0047
