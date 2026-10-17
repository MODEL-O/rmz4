@ FUN_080ae098  entry 0x080ae098  size 142
.thumb
.org 0xae098
FUN_080ae098:
	push {r4, r5, r6, r7, lr}	@ 000ae098 f0b5
.org 0xae09a
	adds r7, r0, #0	@ 000ae09a 071c
.org 0xae09c
	lsls r1, r1, #24	@ 000ae09c 0906
.org 0xae09e
	lsrs r6, r1, #24	@ 000ae09e 0e0e
.org 0xae0a0
	lsls r2, r2, #24	@ 000ae0a0 1206
.org 0xae0a2
	lsrs r5, r2, #24	@ 000ae0a2 150e
.org 0xae0a4
	ldr r0, [pc, #128]	@ 000ae0a4 2048
.org 0xae0a6
	ldr r1, [pc, #132]	@ 000ae0a6 2149
.org 0xae0a8
	movs r4, #162	@ 000ae0a8 a224
.org 0xae0aa
	lsls r4, r4, #1	@ 000ae0aa 6400
.org 0xae0ac
	adds r1, r1, r4	@ 000ae0ac 0919
.org 0xae0ae
	ldrh r1, [r1, #0]	@ 000ae0ae 0988
.org 0xae0b0
	ldrh r2, [r0, #6]	@ 000ae0b0 c288
.org 0xae0b2
	lsrs r2, r2, #6	@ 000ae0b2 9209
.org 0xae0b4
	subs r1, r1, r2	@ 000ae0b4 891a
.org 0xae0b6
	lsls r1, r1, #5	@ 000ae0b6 4901
.org 0xae0b8
	movs r2, #128	@ 000ae0b8 8022
.org 0xae0ba
	lsls r2, r2, #9	@ 000ae0ba 5202
.org 0xae0bc
	adds r1, r1, r2	@ 000ae0bc 8918
.org 0xae0be
	bl 0x1d30	@ 000ae0be 53f737fe
.org 0xae0c2
	ldr r0, [pc, #108]	@ 000ae0c2 1b48
.org 0xae0c4
	ldr r1, [pc, #108]	@ 000ae0c4 1b49
.org 0xae0c6
	adds r1, r1, r4	@ 000ae0c6 0919
.org 0xae0c8
	ldrh r1, [r1, #0]	@ 000ae0c8 0988
.org 0xae0ca
	ldrb r2, [r0, #7]	@ 000ae0ca c279
.org 0xae0cc
	subs r1, r1, r2	@ 000ae0cc 891a
.org 0xae0ce
	lsls r1, r1, #5	@ 000ae0ce 4901
.org 0xae0d0
	movs r2, #128	@ 000ae0d0 8022
.org 0xae0d2
	lsls r2, r2, #2	@ 000ae0d2 9200
.org 0xae0d4
	adds r1, r1, r2	@ 000ae0d4 8918
.org 0xae0d6
	bl 0x2208	@ 000ae0d6 54f797f8
.org 0xae0da
	ldr r0, [pc, #92]	@ 000ae0da 1748
.org 0xae0dc
	ldr r0, [r0, #0]	@ 000ae0dc 0068
.org 0xae0de
	bl 0x5500	@ 000ae0de 57f70ffa
.org 0xae0e2
	adds r3, r0, #0	@ 000ae0e2 031c
.org 0xae0e4
	cmp r3, #0	@ 000ae0e4 002b
.org 0xae0e6
	beq.n 0xae11e	@ 000ae0e6 1ad0
.org 0xae0e8
	adds r1, r3, #0	@ 000ae0e8 191c
.org 0xae0ea
	adds r1, #37	@ 000ae0ea 2531
.org 0xae0ec
	movs r2, #0	@ 000ae0ec 0022
.org 0xae0ee
	movs r0, #24	@ 000ae0ee 1820
.org 0xae0f0
	strb r0, [r1, #0]	@ 000ae0f0 0870
.org 0xae0f2
	ldr r0, [pc, #72]	@ 000ae0f2 1248
.org 0xae0f4
	movs r1, #80	@ 000ae0f4 5021
.org 0xae0f6
	strb r1, [r3, #9]	@ 000ae0f6 5972
.org 0xae0f8
	adds r1, #240	@ 000ae0f8 f031
.org 0xae0fa
	adds r0, r0, r1	@ 000ae0fa 4018
.org 0xae0fc
	ldr r0, [r0, #0]	@ 000ae0fc 0068
.org 0xae0fe
	ldr r0, [r0, #0]	@ 000ae0fe 0068
.org 0xae100
	str r0, [r3, #20]	@ 000ae100 5861
.org 0xae102
	movs r0, #0	@ 000ae102 0020
.org 0xae104
	strh r2, [r3, #32]	@ 000ae104 1a84
.org 0xae106
	adds r1, r3, #0	@ 000ae106 191c
.org 0xae108
	adds r1, #34	@ 000ae108 2231
.org 0xae10a
	strb r0, [r1, #0]	@ 000ae10a 0870
.org 0xae10c
	ldrb r1, [r3, #11]	@ 000ae10c d97a
.org 0xae10e
	movs r0, #16	@ 000ae10e 1020
.org 0xae110
	orrs r0, r1	@ 000ae110 0843
.org 0xae112
	strb r0, [r3, #11]	@ 000ae112 d872
.org 0xae114
	ldrb r0, [r3, #28]	@ 000ae114 187f
.org 0xae116
	strb r0, [r3, #29]	@ 000ae116 5877
.org 0xae118
	str r7, [r3, #40]	@ 000ae118 9f62
.org 0xae11a
	strb r6, [r3, #16]	@ 000ae11a 1e74
.org 0xae11c
	strb r5, [r3, #17]	@ 000ae11c 5d74
.org 0xae11e
	adds r0, r3, #0	@ 000ae11e 181c
.org 0xae120
	pop {r4, r5, r6, r7}	@ 000ae120 f0bc
.org 0xae122
	pop {r1}	@ 000ae122 02bc
.org 0xae124
	bx r1	@ 000ae124 0847
