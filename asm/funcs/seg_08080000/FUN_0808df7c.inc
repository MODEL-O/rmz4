@ FUN_0808df7c  entry 0x0808df7c  size 20
.thumb
.org 0x8df7c
FUN_0808df7c:
	push {lr}	@ 0008df7c 00b5
.org 0x8df7e
	ldr r2, [pc, #16]	@ 0008df7e 044a
.org 0x8df80
	ldrb r1, [r0, #16]	@ 0008df80 017c
.org 0x8df82
	lsls r1, r1, #2	@ 0008df82 8900
.org 0x8df84
	adds r1, r1, r2	@ 0008df84 8918
.org 0x8df86
	ldr r1, [r1, #0]	@ 0008df86 0968
.org 0x8df88
	bl 0x128f80	@ 0008df88 9af0faff
.org 0x8df8c
	pop {r0}	@ 0008df8c 01bc
.org 0x8df8e
	bx r0	@ 0008df8e 0047
