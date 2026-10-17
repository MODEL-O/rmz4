@ FUN_080372b0  entry 0x080372b0  size 40
.thumb
.org 0x372b0
FUN_080372b0:
	push {lr}	@ 000372b0 00b5
.org 0x372b2
	ldr r1, [pc, #36]	@ 000372b2 0949
.org 0x372b4
	adds r3, r0, r1	@ 000372b4 4318
.org 0x372b6
	ldrb r1, [r3, #0]	@ 000372b6 1978
.org 0x372b8
	movs r2, #4	@ 000372b8 0422
.org 0x372ba
	orrs r1, r2	@ 000372ba 1143
.org 0x372bc
	movs r2, #2	@ 000372bc 0222
.org 0x372be
	orrs r1, r2	@ 000372be 1143
.org 0x372c0
	strb r1, [r3, #0]	@ 000372c0 1970
.org 0x372c2
	ldr r2, [pc, #24]	@ 000372c2 064a
.org 0x372c4
	ldr r3, [pc, #24]	@ 000372c4 064b
.org 0x372c6
	adds r1, r0, r3	@ 000372c6 c118
.org 0x372c8
	ldrb r1, [r1, #0]	@ 000372c8 0978
.org 0x372ca
	lsls r1, r1, #2	@ 000372ca 8900
.org 0x372cc
	adds r1, r1, r2	@ 000372cc 8918
.org 0x372ce
	ldr r1, [r1, #0]	@ 000372ce 0968
.org 0x372d0
	bl 0x128f80	@ 000372d0 f1f056fe
.org 0x372d4
	pop {r0}	@ 000372d4 01bc
.org 0x372d6
	bx r0	@ 000372d6 0047
