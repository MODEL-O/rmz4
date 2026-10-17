@ FUN_0808c210  entry 0x0808c210  size 20
.thumb
.org 0x8c210
FUN_0808c210:
	push {lr}	@ 0008c210 00b5
.org 0x8c212
	ldr r2, [pc, #16]	@ 0008c212 044a
.org 0x8c214
	ldrb r1, [r0, #16]	@ 0008c214 017c
.org 0x8c216
	lsls r1, r1, #2	@ 0008c216 8900
.org 0x8c218
	adds r1, r1, r2	@ 0008c218 8918
.org 0x8c21a
	ldr r1, [r1, #0]	@ 0008c21a 0968
.org 0x8c21c
	bl 0x128f80	@ 0008c21c 9cf0b0fe
.org 0x8c220
	pop {r0}	@ 0008c220 01bc
.org 0x8c222
	bx r0	@ 0008c222 0047
