@ FUN_080d57ac  entry 0x080d57ac  size 78
.thumb
.org 0xd57ac
FUN_080d57ac:
	push {r4, r5, r6, lr}	@ 000d57ac 70b5
.org 0xd57ae
	lsls r0, r0, #24	@ 000d57ae 0006
.org 0xd57b0
	lsrs r6, r0, #24	@ 000d57b0 060e
.org 0xd57b2
	lsls r1, r1, #24	@ 000d57b2 0906
.org 0xd57b4
	lsrs r5, r1, #24	@ 000d57b4 0d0e
.org 0xd57b6
	ldr r0, [pc, #68]	@ 000d57b6 1148
.org 0xd57b8
	bl 0xd0c50	@ 000d57b8 fbf74afa
.org 0xd57bc
	ldr r0, [pc, #64]	@ 000d57bc 1048
.org 0xd57be
	ldr r0, [r0, #0]	@ 000d57be 0068
.org 0xd57c0
	bl 0x5500	@ 000d57c0 2ff79efe
.org 0xd57c4
	adds r4, r0, #0	@ 000d57c4 041c
.org 0xd57c6
	cmp r4, #0	@ 000d57c6 002c
.org 0xd57c8
	beq.n 0xd57f2	@ 000d57c8 13d0
.org 0xd57ca
	adds r1, r4, #0	@ 000d57ca 211c
.org 0xd57cc
	adds r1, #37	@ 000d57cc 2531
.org 0xd57ce
	movs r2, #0	@ 000d57ce 0022
.org 0xd57d0
	movs r0, #1	@ 000d57d0 0120
.org 0xd57d2
	strb r0, [r1, #0]	@ 000d57d2 0870
.org 0xd57d4
	ldr r1, [pc, #44]	@ 000d57d4 0b49
.org 0xd57d6
	movs r0, #18	@ 000d57d6 1220
.org 0xd57d8
	strb r0, [r4, #9]	@ 000d57d8 6072
.org 0xd57da
	ldr r0, [r1, #72]	@ 000d57da 886c
.org 0xd57dc
	ldr r0, [r0, #0]	@ 000d57dc 0068
.org 0xd57de
	str r0, [r4, #20]	@ 000d57de 6061
.org 0xd57e0
	movs r0, #0	@ 000d57e0 0020
.org 0xd57e2
	strh r2, [r4, #32]	@ 000d57e2 2284
.org 0xd57e4
	adds r1, r4, #0	@ 000d57e4 211c
.org 0xd57e6
	adds r1, #34	@ 000d57e6 2231
.org 0xd57e8
	strb r0, [r1, #0]	@ 000d57e8 0870
.org 0xd57ea
	strb r6, [r4, #16]	@ 000d57ea 2674
.org 0xd57ec
	strb r5, [r4, #17]	@ 000d57ec 6574
.org 0xd57ee
	bl 0x10d568	@ 000d57ee 37f0bbfe
.org 0xd57f2
	adds r0, r4, #0	@ 000d57f2 201c
.org 0xd57f4
	pop {r4, r5, r6}	@ 000d57f4 70bc
.org 0xd57f6
	pop {r1}	@ 000d57f6 02bc
.org 0xd57f8
	bx r1	@ 000d57f8 0847
