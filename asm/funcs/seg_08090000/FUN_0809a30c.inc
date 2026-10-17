@ FUN_0809a30c  entry 0x0809a30c  size 34
.thumb
.org 0x9a30c
FUN_0809a30c:
	push {r4, lr}	@ 0009a30c 10b5
.org 0x9a30e
	adds r4, r0, #0	@ 0009a30e 041c
.org 0x9a310
	bl 0x1cc9c	@ 0009a310 82f7c4fc
.org 0x9a314
	ldrb r1, [r4, #10]	@ 0009a314 a17a
.org 0x9a316
	movs r0, #1	@ 0009a316 0120
.org 0x9a318
	orrs r0, r1	@ 0009a318 0843
.org 0x9a31a
	movs r1, #2	@ 0009a31a 0221
.org 0x9a31c
	orrs r0, r1	@ 0009a31c 0843
.org 0x9a31e
	strb r0, [r4, #10]	@ 0009a31e a072
.org 0x9a320
	ldr r1, [pc, #12]	@ 0009a320 0349
.org 0x9a322
	adds r0, r4, #0	@ 0009a322 201c
.org 0x9a324
	bl 0x1cf00	@ 0009a324 82f7ecfd
.org 0x9a328
	pop {r4}	@ 0009a328 10bc
.org 0x9a32a
	pop {r0}	@ 0009a32a 01bc
.org 0x9a32c
	bx r0	@ 0009a32c 0047
