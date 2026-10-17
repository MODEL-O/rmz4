@ FUN_080e126c  entry 0x080e126c  size 30
.thumb
.org 0xe126c
FUN_080e126c:
	push {lr}	@ 000e126c 00b5
.org 0xe126e
	adds r2, r0, #0	@ 000e126e 021c
.org 0xe1270
	ldr r0, [pc, #24]	@ 000e1270 0648
.org 0xe1272
	adds r1, r0, #0	@ 000e1272 011c
.org 0xe1274
	adds r1, #38	@ 000e1274 2631
.org 0xe1276
	ldrb r0, [r1, #0]	@ 000e1276 0878
.org 0xe1278
	cmp r0, #0	@ 000e1278 0028
.org 0xe127a
	beq.n 0xe1280	@ 000e127a 01d0
.org 0xe127c
	adds r0, #255	@ 000e127c ff30
.org 0xe127e
	strb r0, [r1, #0]	@ 000e127e 0870
.org 0xe1280
	adds r0, r2, #0	@ 000e1280 101c
.org 0xe1282
	bl 0xd0c30	@ 000e1282 eff7d5fc
.org 0xe1286
	pop {r0}	@ 000e1286 01bc
.org 0xe1288
	bx r0	@ 000e1288 0047
