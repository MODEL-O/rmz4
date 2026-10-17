@ FUN_080349a4  entry 0x080349a4  size 80
.thumb
.org 0x349a4
FUN_080349a4:
	push {r4, r5, r6, lr}	@ 000349a4 70b5
.org 0x349a6
	adds r5, r0, #0	@ 000349a6 051c
.org 0x349a8
	movs r0, #129	@ 000349a8 8120
.org 0x349aa
	lsls r0, r0, #1	@ 000349aa 4000
.org 0x349ac
	adds r6, r5, r0	@ 000349ac 2e18
.org 0x349ae
	ldrb r0, [r6, #0]	@ 000349ae 3078
.org 0x349b0
	cmp r0, #0	@ 000349b0 0028
.org 0x349b2
	bne.n 0x349c2	@ 000349b2 06d1
.org 0x349b4
	ldr r1, [pc, #60]	@ 000349b4 0f49
.org 0x349b6
	adds r0, r5, #0	@ 000349b6 281c
.org 0x349b8
	bl 0x1cf00	@ 000349b8 e8f7a2fa
.org 0x349bc
	ldrb r0, [r6, #0]	@ 000349bc 3078
.org 0x349be
	adds r0, #1	@ 000349be 0130
.org 0x349c0
	strb r0, [r6, #0]	@ 000349c0 3070
.org 0x349c2
	ldr r4, [pc, #48]	@ 000349c2 0c4c
.org 0x349c4
	adds r0, r5, #0	@ 000349c4 281c
.org 0x349c6
	adds r1, r4, #0	@ 000349c6 211c
.org 0x349c8
	bl 0x3a3b0	@ 000349c8 05f0f2fc
.org 0x349cc
	adds r0, r5, #0	@ 000349cc 281c
.org 0x349ce
	adds r1, r4, #0	@ 000349ce 211c
.org 0x349d0
	bl 0x3a3f0	@ 000349d0 05f00efd
.org 0x349d4
	ldr r1, [pc, #32]	@ 000349d4 0849
.org 0x349d6
	adds r0, r5, r1	@ 000349d6 6818
.org 0x349d8
	ldrb r2, [r0, #0]	@ 000349d8 0278
.org 0x349da
	cmp r2, #3	@ 000349da 032a
.org 0x349dc
	bne.n 0x349ee	@ 000349dc 07d1
.org 0x349de
	ldr r0, [pc, #28]	@ 000349de 0748
.org 0x349e0
	adds r1, r5, r0	@ 000349e0 2918
.org 0x349e2
	movs r0, #0	@ 000349e2 0020
.org 0x349e4
	strb r2, [r1, #0]	@ 000349e4 0a70
.org 0x349e6
	strb r0, [r6, #0]	@ 000349e6 3070
.org 0x349e8
	adds r0, r5, #0	@ 000349e8 281c
.org 0x349ea
	bl 0x34a00	@ 000349ea 00f009f8
.org 0x349ee
	pop {r4, r5, r6}	@ 000349ee 70bc
.org 0x349f0
	pop {r0}	@ 000349f0 01bc
.org 0x349f2
	bx r0	@ 000349f2 0047
