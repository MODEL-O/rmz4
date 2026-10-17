@ FUN_08001c04  entry 0x08001c04  size 38
.thumb
.org 0x1c04
FUN_08001c04:
	sub sp, #4	@ 00001c04 81b0
.org 0x1c06
	ldr r0, [pc, #36]	@ 00001c06 0948
.org 0x1c08
	movs r1, #0	@ 00001c08 0021
.org 0x1c0a
	str r1, [r0, #0]	@ 00001c0a 0160
.org 0x1c0c
	adds r0, #200	@ 00001c0c c830
.org 0x1c0e
	str r1, [r0, #0]	@ 00001c0e 0160
.org 0x1c10
	ldr r0, [pc, #28]	@ 00001c10 0748
.org 0x1c12
	str r0, [sp, #0]	@ 00001c12 0090
.org 0x1c14
	ldr r1, [pc, #28]	@ 00001c14 0749
.org 0x1c16
	mov r0, sp	@ 00001c16 6846
.org 0x1c18
	str r0, [r1, #0]	@ 00001c18 0860
.org 0x1c1a
	movs r0, #192	@ 00001c1a c020
.org 0x1c1c
	lsls r0, r0, #19	@ 00001c1c c004
.org 0x1c1e
	str r0, [r1, #4]	@ 00001c1e 4860
.org 0x1c20
	ldr r0, [pc, #20]	@ 00001c20 0548
.org 0x1c22
	str r0, [r1, #8]	@ 00001c22 8860
.org 0x1c24
	ldr r0, [r1, #8]	@ 00001c24 8868
.org 0x1c26
	add sp, #4	@ 00001c26 01b0
.org 0x1c28
	bx lr	@ 00001c28 7047
