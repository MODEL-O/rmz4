@ FUN_0808b524  entry 0x0808b524  size 20
.thumb
.org 0x8b524
FUN_0808b524:
	push {lr}	@ 0008b524 00b5
.org 0x8b526
	ldr r2, [pc, #16]	@ 0008b526 044a
.org 0x8b528
	ldrb r1, [r0, #14]	@ 0008b528 817b
.org 0x8b52a
	lsls r1, r1, #2	@ 0008b52a 8900
.org 0x8b52c
	adds r1, r1, r2	@ 0008b52c 8918
.org 0x8b52e
	ldr r1, [r1, #0]	@ 0008b52e 0968
.org 0x8b530
	bl 0x128f80	@ 0008b530 9df026fd
.org 0x8b534
	pop {r0}	@ 0008b534 01bc
.org 0x8b536
	bx r0	@ 0008b536 0047
