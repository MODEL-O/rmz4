@ FUN_0808c8f8  entry 0x0808c8f8  size 20
.thumb
.org 0x8c8f8
FUN_0808c8f8:
	push {lr}	@ 0008c8f8 00b5
.org 0x8c8fa
	ldr r2, [pc, #16]	@ 0008c8fa 044a
.org 0x8c8fc
	ldrb r1, [r0, #16]	@ 0008c8fc 017c
.org 0x8c8fe
	lsls r1, r1, #2	@ 0008c8fe 8900
.org 0x8c900
	adds r1, r1, r2	@ 0008c900 8918
.org 0x8c902
	ldr r1, [r1, #0]	@ 0008c902 0968
.org 0x8c904
	bl 0x128f80	@ 0008c904 9cf03cfb
.org 0x8c908
	pop {r0}	@ 0008c908 01bc
.org 0x8c90a
	bx r0	@ 0008c90a 0047
