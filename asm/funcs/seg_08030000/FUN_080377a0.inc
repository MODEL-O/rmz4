@ FUN_080377a0  entry 0x080377a0  size 36
.thumb
.org 0x377a0
FUN_080377a0:
	push {lr}	@ 000377a0 00b5
.org 0x377a2
	ldr r1, [pc, #32]	@ 000377a2 0849
.org 0x377a4
	adds r3, r0, r1	@ 000377a4 4318
.org 0x377a6
	ldrb r1, [r3, #0]	@ 000377a6 1978
.org 0x377a8
	movs r2, #4	@ 000377a8 0422
.org 0x377aa
	orrs r1, r2	@ 000377aa 1143
.org 0x377ac
	strb r1, [r3, #0]	@ 000377ac 1970
.org 0x377ae
	ldr r2, [pc, #24]	@ 000377ae 064a
.org 0x377b0
	ldr r3, [pc, #24]	@ 000377b0 064b
.org 0x377b2
	adds r1, r0, r3	@ 000377b2 c118
.org 0x377b4
	ldrb r1, [r1, #0]	@ 000377b4 0978
.org 0x377b6
	lsls r1, r1, #2	@ 000377b6 8900
.org 0x377b8
	adds r1, r1, r2	@ 000377b8 8918
.org 0x377ba
	ldr r1, [r1, #0]	@ 000377ba 0968
.org 0x377bc
	bl 0x128f80	@ 000377bc f1f0e0fb
.org 0x377c0
	pop {r0}	@ 000377c0 01bc
.org 0x377c2
	bx r0	@ 000377c2 0047
