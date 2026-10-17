@ FUN_0800a274  entry 0x0800a274  size 132
.thumb
.org 0xa274
FUN_0800a274:
	push {r4, r5, r6, lr}	@ 0000a274 70b5
.org 0xa276
	mov r6, r8	@ 0000a276 4646
.org 0xa278
	push {r6}	@ 0000a278 40b4
.org 0xa27a
	adds r4, r0, #0	@ 0000a27a 041c
.org 0xa27c
	ldr r1, [r4, #92]	@ 0000a27c e16d
.org 0xa27e
	lsls r1, r1, #16	@ 0000a27e 0904
.org 0xa280
	lsrs r1, r1, #20	@ 0000a280 090d
.org 0xa282
	lsls r1, r1, #2	@ 0000a282 8900
.org 0xa284
	ldr r0, [pc, #112]	@ 0000a284 1c48
.org 0xa286
	adds r3, r1, r0	@ 0000a286 0b18
.org 0xa288
	ldr r2, [r4, #52]	@ 0000a288 626b
.org 0xa28a
	strh r2, [r3, #0]	@ 0000a28a 1a80
.org 0xa28c
	adds r0, #2	@ 0000a28c 0230
.org 0xa28e
	adds r1, r1, r0	@ 0000a28e 0918
.org 0xa290
	ldrh r0, [r4, #16]	@ 0000a290 208a
.org 0xa292
	lsrs r0, r0, #2	@ 0000a292 8008
.org 0xa294
	strh r0, [r1, #0]	@ 0000a294 0880
.org 0xa296
	ldr r0, [pc, #100]	@ 0000a296 1948
.org 0xa298
	mov r8, r0	@ 0000a298 8046
.org 0xa29a
	ldr r6, [pc, #100]	@ 0000a29a 194e
.org 0xa29c
	ldrh r0, [r4, #18]	@ 0000a29c 608a
.org 0xa29e
	lsrs r0, r0, #3	@ 0000a29e c008
.org 0xa2a0
	movs r1, #6	@ 0000a2a0 0621
.org 0xa2a2
	bl 0x129198	@ 0000a2a2 1ef179ff
.org 0xa2a6
	lsls r0, r0, #16	@ 0000a2a6 0004
.org 0xa2a8
	lsrs r0, r0, #16	@ 0000a2a8 000c
.org 0xa2aa
	adds r0, r0, r6	@ 0000a2aa 8019
.org 0xa2ac
	ldrb r0, [r0, #0]	@ 0000a2ac 0078
.org 0xa2ae
	lsls r1, r0, #2	@ 0000a2ae 8100
.org 0xa2b0
	adds r1, r1, r0	@ 0000a2b0 0918
.org 0xa2b2
	lsls r1, r1, #2	@ 0000a2b2 8900
.org 0xa2b4
	ldr r5, [pc, #76]	@ 0000a2b4 134d
.org 0xa2b6
	adds r1, r1, r5	@ 0000a2b6 4919
.org 0xa2b8
	mov r2, r8	@ 0000a2b8 4246
.org 0xa2ba
	ldr r0, [r2, #0]	@ 0000a2ba 1068
.org 0xa2bc
	adds r0, r0, r1	@ 0000a2bc 4018
.org 0xa2be
	movs r1, #128	@ 0000a2be 8021
.org 0xa2c0
	lsls r1, r1, #7	@ 0000a2c0 c901
.org 0xa2c2
	bl 0x1ea4	@ 0000a2c2 f7f7effd
.org 0xa2c6
	ldrh r0, [r4, #18]	@ 0000a2c6 608a
.org 0xa2c8
	lsrs r0, r0, #3	@ 0000a2c8 c008
.org 0xa2ca
	movs r1, #6	@ 0000a2ca 0621
.org 0xa2cc
	bl 0x129198	@ 0000a2cc 1ef164ff
.org 0xa2d0
	lsls r0, r0, #16	@ 0000a2d0 0004
.org 0xa2d2
	lsrs r0, r0, #16	@ 0000a2d2 000c
.org 0xa2d4
	adds r0, r0, r6	@ 0000a2d4 8019
.org 0xa2d6
	ldrb r0, [r0, #0]	@ 0000a2d6 0078
.org 0xa2d8
	lsls r1, r0, #2	@ 0000a2d8 8100
.org 0xa2da
	adds r1, r1, r0	@ 0000a2da 0918
.org 0xa2dc
	lsls r1, r1, #2	@ 0000a2dc 8900
.org 0xa2de
	adds r1, r1, r5	@ 0000a2de 4919
.org 0xa2e0
	mov r2, r8	@ 0000a2e0 4246
.org 0xa2e2
	ldr r0, [r2, #0]	@ 0000a2e2 1068
.org 0xa2e4
	adds r0, r0, r1	@ 0000a2e4 4018
.org 0xa2e6
	adds r0, #12	@ 0000a2e6 0c30
.org 0xa2e8
	movs r1, #0	@ 0000a2e8 0021
.org 0xa2ea
	bl 0x2208	@ 0000a2ea f7f78dff
.org 0xa2ee
	pop {r3}	@ 0000a2ee 08bc
.org 0xa2f0
	mov r8, r3	@ 0000a2f0 9846
.org 0xa2f2
	pop {r4, r5, r6}	@ 0000a2f2 70bc
.org 0xa2f4
	pop {r0}	@ 0000a2f4 01bc
.org 0xa2f6
	bx r0	@ 0000a2f6 0047
