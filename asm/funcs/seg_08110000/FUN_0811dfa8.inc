@ FUN_0811dfa8  entry 0x0811dfa8  size 24
.thumb
.org 0x11dfa8
FUN_0811dfa8:
	push {r4, r5, r6, r7, lr}	@ 0011dfa8 f0b5
.org 0x11dfaa
	adds r5, r0, #0	@ 0011dfaa 051c
.org 0x11dfac
	ldrb r0, [r5, #2]	@ 0011dfac a878
.org 0x11dfae
	cmp r0, #13	@ 0011dfae 0d28
.org 0x11dfb0
	bls.n 0x11dfb6	@ 0011dfb0 01d9
.org 0x11dfb2
	bl 0x11e98a	@ 0011dfb2 00f0eafc
.org 0x11dfb6
	lsls r0, r0, #2	@ 0011dfb6 8000
.org 0x11dfb8
	ldr r1, [pc, #4]	@ 0011dfb8 0149
.org 0x11dfba
	adds r0, r0, r1	@ 0011dfba 4018
.org 0x11dfbc
	ldr r0, [r0, #0]	@ 0011dfbc 0068
.org 0x11dfbe
	mov pc, r0	@ 0011dfbe 8746
