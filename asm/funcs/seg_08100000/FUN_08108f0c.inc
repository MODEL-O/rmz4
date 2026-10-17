@ FUN_08108f0c  entry 0x08108f0c  size 54
.thumb
.org 0x108f0c
FUN_08108f0c:
	push {r4, r5, lr}	@ 00108f0c 30b5
.org 0x108f0e
	movs r2, #0	@ 00108f0e 0022
.org 0x108f10
	ldr r0, [pc, #28]	@ 00108f10 0748
.org 0x108f12
	ldr r3, [r0, #0]	@ 00108f12 0368
.org 0x108f14
	movs r5, #1	@ 00108f14 0125
.org 0x108f16
	movs r4, #15	@ 00108f16 0f24
.org 0x108f18
	lsrs r0, r2, #1	@ 00108f18 5008
.org 0x108f1a
	adds r0, r3, r0	@ 00108f1a 1818
.org 0x108f1c
	ldrb r1, [r0, #0]	@ 00108f1c 0178
.org 0x108f1e
	adds r0, r2, #0	@ 00108f1e 101c
.org 0x108f20
	ands r0, r5	@ 00108f20 2840
.org 0x108f22
	lsls r0, r0, #2	@ 00108f22 8000
.org 0x108f24
	asrs r1, r0	@ 00108f24 0141
.org 0x108f26
	ands r1, r4	@ 00108f26 2140
.org 0x108f28
	cmp r1, #0	@ 00108f28 0029
.org 0x108f2a
	bne.n 0x108f34	@ 00108f2a 03d1
.org 0x108f2c
	movs r0, #0	@ 00108f2c 0020
.org 0x108f2e
	b.n 0x108f40	@ 00108f2e 07e0
.org 0x108f30
	.byte 0xa8,0xed,0x02,0x02	@ 00108f30 data
.org 0x108f34
	adds r0, r2, #1	@ 00108f34 501c
.org 0x108f36
	lsls r0, r0, #24	@ 00108f36 0006
.org 0x108f38
	lsrs r2, r0, #24	@ 00108f38 020e
.org 0x108f3a
	cmp r2, #50	@ 00108f3a 322a
.org 0x108f3c
	bls.n 0x108f18	@ 00108f3c ecd9
.org 0x108f3e
	movs r0, #1	@ 00108f3e 0120
.org 0x108f40
	pop {r4, r5}	@ 00108f40 30bc
