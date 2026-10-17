@ FUN_0802a894  entry 0x0802a894  size 98
.thumb
.org 0x2a894
FUN_0802a894:
	push {r4, r5, r6, r7, lr}	@ 0002a894 f0b5
.org 0x2a896
	adds r5, r0, #0	@ 0002a896 051c
.org 0x2a898
	ldrb r0, [r5, #24]	@ 0002a898 287e
.org 0x2a89a
	cmp r0, #0	@ 0002a89a 0028
.org 0x2a89c
	beq.n 0x2a8f0	@ 0002a89c 28d0
.org 0x2a89e
	movs r0, #16	@ 0002a89e 1020
.org 0x2a8a0
	bl 0xa70	@ 0002a8a0 d6f7e6f8
.org 0x2a8a4
	adds r4, r0, #0	@ 0002a8a4 041c
.org 0x2a8a6
	cmp r4, #0	@ 0002a8a6 002c
.org 0x2a8a8
	beq.n 0x2a8f0	@ 0002a8a8 22d0
.org 0x2a8aa
	movs r0, #0	@ 0002a8aa 0020
.org 0x2a8ac
	ldr r1, [pc, #72]	@ 0002a8ac 1249
.org 0x2a8ae
	mov ip, r1	@ 0002a8ae 8c46
.org 0x2a8b0
	ldr r7, [pc, #72]	@ 0002a8b0 124f
.org 0x2a8b2
	ldr r1, [pc, #76]	@ 0002a8b2 1349
.org 0x2a8b4
	adds r6, r1, #0	@ 0002a8b4 0e1c
.org 0x2a8b6
	lsls r2, r0, #16	@ 0002a8b6 0204
.org 0x2a8b8
	asrs r2, r2, #16	@ 0002a8b8 1214
.org 0x2a8ba
	lsls r3, r2, #1	@ 0002a8ba 5300
.org 0x2a8bc
	adds r3, r3, r4	@ 0002a8bc 1b19
.org 0x2a8be
	ldrb r1, [r5, #25]	@ 0002a8be 697e
.org 0x2a8c0
	lsls r1, r1, #1	@ 0002a8c0 4900
.org 0x2a8c2
	adds r1, r1, r7	@ 0002a8c2 c919
.org 0x2a8c4
	adds r0, r6, r0	@ 0002a8c4 3018
.org 0x2a8c6
	ldrh r1, [r1, #0]	@ 0002a8c6 0988
.org 0x2a8c8
	adds r0, r0, r1	@ 0002a8c8 4018
.org 0x2a8ca
	strh r0, [r3, #0]	@ 0002a8ca 1880
.org 0x2a8cc
	adds r2, #1	@ 0002a8cc 0132
.org 0x2a8ce
	lsls r2, r2, #16	@ 0002a8ce 1204
.org 0x2a8d0
	lsrs r0, r2, #16	@ 0002a8d0 100c
.org 0x2a8d2
	asrs r2, r2, #16	@ 0002a8d2 1214
.org 0x2a8d4
	cmp r2, #7	@ 0002a8d4 072a
.org 0x2a8d6
	ble.n 0x2a8b6	@ 0002a8d6 eedd
.org 0x2a8d8
	mov r1, ip	@ 0002a8d8 6146
.org 0x2a8da
	ldrh r0, [r1, #0]	@ 0002a8da 0888
.org 0x2a8dc
	movs r1, #248	@ 0002a8dc f821
.org 0x2a8de
	lsls r1, r1, #5	@ 0002a8de 4901
.org 0x2a8e0
	ands r1, r0	@ 0002a8e0 0140
.org 0x2a8e2
	lsls r1, r1, #3	@ 0002a8e2 c900
.org 0x2a8e4
	ldr r0, [pc, #28]	@ 0002a8e4 0748
.org 0x2a8e6
	adds r1, r1, r0	@ 0002a8e6 0918
.org 0x2a8e8
	adds r0, r4, #0	@ 0002a8e8 201c
.org 0x2a8ea
	movs r2, #16	@ 0002a8ea 1022
.org 0x2a8ec
	bl 0x1f1c	@ 0002a8ec d7f716fb
.org 0x2a8f0
	pop {r4, r5, r6, r7}	@ 0002a8f0 f0bc
.org 0x2a8f2
	pop {r0}	@ 0002a8f2 01bc
.org 0x2a8f4
	bx r0	@ 0002a8f4 0047
