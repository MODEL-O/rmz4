@ FUN_080f7edc  entry 0x080f7edc  size 28
.thumb
.org 0xf7edc
FUN_080f7edc:
	push {lr}	@ 000f7edc 00b5
.org 0xf7ede
	adds r1, r0, #0	@ 000f7ede 011c
.org 0xf7ee0
	ldr r0, [r1, #88]	@ 000f7ee0 886d
.org 0xf7ee2
	ldr r2, [pc, #20]	@ 000f7ee2 054a
.org 0xf7ee4
	adds r0, r0, r2	@ 000f7ee4 8018
.org 0xf7ee6
	str r0, [r1, #88]	@ 000f7ee6 8865
.org 0xf7ee8
	ldr r2, [r1, #100]	@ 000f7ee8 4a6e
.org 0xf7eea
	cmp r2, r0	@ 000f7eea 8242
.org 0xf7eec
	ble.n 0xf7ef4	@ 000f7eec 02dd
.org 0xf7eee
	str r2, [r1, #88]	@ 000f7eee 8a65
.org 0xf7ef0
	movs r0, #1	@ 000f7ef0 0120
.org 0xf7ef2
	strb r0, [r1, #13]	@ 000f7ef2 4873
.org 0xf7ef4
	pop {r0}	@ 000f7ef4 01bc
.org 0xf7ef6
	bx r0	@ 000f7ef6 0047
