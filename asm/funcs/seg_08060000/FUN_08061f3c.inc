@ FUN_08061f3c  entry 0x08061f3c  size 50
.thumb
.org 0x61f3c
FUN_08061f3c:
	push {r4, lr}	@ 00061f3c 10b5
.org 0x61f3e
	adds r4, r0, #0	@ 00061f3e 041c
.org 0x61f40
	ldr r0, [r4, #20]	@ 00061f40 6069
.org 0x61f42
	movs r1, #1	@ 00061f42 0121
.org 0x61f44
	ands r0, r1	@ 00061f44 0840
.org 0x61f46
	cmp r0, #0	@ 00061f46 0028
.org 0x61f48
	beq.n 0x61f68	@ 00061f48 0ed0
.org 0x61f4a
	movs r0, #61	@ 00061f4a 3d20
.org 0x61f4c
	bl 0x6984	@ 00061f4c a4f71afd
.org 0x61f50
	ldr r0, [r4, #12]	@ 00061f50 e068
.org 0x61f52
	ldr r1, [r0, #44]	@ 00061f52 c16a
.org 0x61f54
	ldr r0, [r4, #44]	@ 00061f54 e06a
.org 0x61f56
	adds r2, r0, #0	@ 00061f56 021c
.org 0x61f58
	adds r2, #180	@ 00061f58 b432
.org 0x61f5a
	movs r3, #0	@ 00061f5a 0023
.org 0x61f5c
	ldr r1, [r1, #84]	@ 00061f5c 496d
.org 0x61f5e
	ldr r0, [r0, #84]	@ 00061f5e 406d
.org 0x61f60
	cmp r1, r0	@ 00061f60 8142
.org 0x61f62
	ble.n 0x61f66	@ 00061f62 00dd
.org 0x61f64
	movs r3, #1	@ 00061f64 0123
.org 0x61f66
	strb r3, [r2, #24]	@ 00061f66 1376
.org 0x61f68
	pop {r4}	@ 00061f68 10bc
.org 0x61f6a
	pop {r0}	@ 00061f6a 01bc
.org 0x61f6c
	bx r0	@ 00061f6c 0047
