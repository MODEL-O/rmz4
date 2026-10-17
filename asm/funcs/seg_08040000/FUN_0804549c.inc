@ FUN_0804549c  entry 0x0804549c  size 42
.thumb
.org 0x4549c
FUN_0804549c:
	push {lr}	@ 0004549c 00b5
.org 0x4549e
	adds r2, r0, #0	@ 0004549e 021c
.org 0x454a0
	ldr r0, [r2, #20]	@ 000454a0 5069
.org 0x454a2
	movs r1, #1	@ 000454a2 0121
.org 0x454a4
	ands r0, r1	@ 000454a4 0840
.org 0x454a6
	cmp r0, #0	@ 000454a6 0028
.org 0x454a8
	beq.n 0x454c2	@ 000454a8 0bd0
.org 0x454aa
	ldr r0, [r2, #12]	@ 000454aa d068
.org 0x454ac
	ldr r0, [r0, #44]	@ 000454ac c06a
.org 0x454ae
	ldr r2, [r2, #44]	@ 000454ae d26a
.org 0x454b0
	movs r3, #0	@ 000454b0 0023
.org 0x454b2
	ldr r1, [r0, #84]	@ 000454b2 416d
.org 0x454b4
	ldr r0, [r2, #84]	@ 000454b4 506d
.org 0x454b6
	cmp r1, r0	@ 000454b6 8142
.org 0x454b8
	ble.n 0x454bc	@ 000454b8 00dd
.org 0x454ba
	movs r3, #1	@ 000454ba 0123
.org 0x454bc
	adds r0, r2, #0	@ 000454bc 101c
.org 0x454be
	adds r0, #188	@ 000454be bc30
.org 0x454c0
	strb r3, [r0, #0]	@ 000454c0 0370
.org 0x454c2
	pop {r0}	@ 000454c2 01bc
.org 0x454c4
	bx r0	@ 000454c4 0047
