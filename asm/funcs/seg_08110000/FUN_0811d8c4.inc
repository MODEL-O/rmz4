@ FUN_0811d8c4  entry 0x0811d8c4  size 42
.thumb
.org 0x11d8c4
FUN_0811d8c4:
	push {r4, lr}	@ 0011d8c4 10b5
.org 0x11d8c6
	movs r2, #0	@ 0011d8c6 0022
.org 0x11d8c8
	ldr r1, [pc, #36]	@ 0011d8c8 0949
.org 0x11d8ca
	adds r3, r0, r1	@ 0011d8ca 4318
.org 0x11d8cc
	movs r4, #255	@ 0011d8cc ff24
.org 0x11d8ce
	adds r0, r3, r2	@ 0011d8ce 9818
.org 0x11d8d0
	ldrb r1, [r0, #0]	@ 0011d8d0 0178
.org 0x11d8d2
	orrs r1, r4	@ 0011d8d2 2143
.org 0x11d8d4
	strb r1, [r0, #0]	@ 0011d8d4 0170
.org 0x11d8d6
	adds r0, r2, #1	@ 0011d8d6 501c
.org 0x11d8d8
	lsls r0, r0, #24	@ 0011d8d8 0006
.org 0x11d8da
	lsrs r2, r0, #24	@ 0011d8da 020e
.org 0x11d8dc
	cmp r2, #3	@ 0011d8dc 032a
.org 0x11d8de
	bls.n 0x11d8ce	@ 0011d8de f6d9
.org 0x11d8e0
	movs r0, #6	@ 0011d8e0 0620
.org 0x11d8e2
	bl 0x108ed4	@ 0011d8e2 ebf7f7fa
.org 0x11d8e6
	movs r0, #1	@ 0011d8e6 0120
.org 0x11d8e8
	pop {r4}	@ 0011d8e8 10bc
.org 0x11d8ea
	pop {r1}	@ 0011d8ea 02bc
.org 0x11d8ec
	bx r1	@ 0011d8ec 0847
