@ FUN_081183cc  entry 0x081183cc  size 66
.thumb
.org 0x1183cc
FUN_081183cc:
	push {lr}	@ 001183cc 00b5
.org 0x1183ce
	adds r2, r0, #0	@ 001183ce 021c
.org 0x1183d0
	ldrb r3, [r2, #9]	@ 001183d0 537a
.org 0x1183d2
	cmp r3, #0	@ 001183d2 002b
.org 0x1183d4
	bne.n 0x11840a	@ 001183d4 19d1
.org 0x1183d6
	ldrb r1, [r2, #10]	@ 001183d6 917a
.org 0x1183d8
	movs r0, #254	@ 001183d8 fe20
.org 0x1183da
	ands r0, r1	@ 001183da 0840
.org 0x1183dc
	movs r1, #253	@ 001183dc fd21
.org 0x1183de
	ands r0, r1	@ 001183de 0840
.org 0x1183e0
	strb r0, [r2, #10]	@ 001183e0 9072
.org 0x1183e2
	adds r0, r2, #0	@ 001183e2 101c
.org 0x1183e4
	adds r0, #140	@ 001183e4 8c30
.org 0x1183e6
	str r3, [r0, #0]	@ 001183e6 0360
.org 0x1183e8
	adds r0, #4	@ 001183e8 0430
.org 0x1183ea
	str r3, [r0, #0]	@ 001183ea 0360
.org 0x1183ec
	adds r0, #4	@ 001183ec 0430
.org 0x1183ee
	strb r3, [r0, #0]	@ 001183ee 0370
.org 0x1183f0
	ldrb r1, [r2, #10]	@ 001183f0 917a
.org 0x1183f2
	movs r0, #251	@ 001183f2 fb20
.org 0x1183f4
	ands r0, r1	@ 001183f4 0840
.org 0x1183f6
	strb r0, [r2, #10]	@ 001183f6 9072
.org 0x1183f8
	ldr r1, [pc, #20]	@ 001183f8 0549
.org 0x1183fa
	ldrb r0, [r2, #9]	@ 001183fa 507a
.org 0x1183fc
	lsls r0, r0, #2	@ 001183fc 8000
.org 0x1183fe
	adds r0, r0, r1	@ 001183fe 4018
.org 0x118400
	movs r1, #3	@ 00118400 0321
.org 0x118402
	str r1, [r2, #12]	@ 00118402 d160
.org 0x118404
	ldr r0, [r0, #0]	@ 00118404 0068
.org 0x118406
	ldr r0, [r0, #12]	@ 00118406 c068
.org 0x118408
	str r0, [r2, #20]	@ 00118408 5061
.org 0x11840a
	pop {r0}	@ 0011840a 01bc
.org 0x11840c
	bx r0	@ 0011840c 0047
