@ FUN_08123bbc  entry 0x08123bbc  size 40
.thumb
.org 0x123bbc
FUN_08123bbc:
	push {lr}	@ 00123bbc 00b5
.org 0x123bbe
	adds r1, r0, #0	@ 00123bbe 011c
.org 0x123bc0
	movs r2, #6	@ 00123bc0 0622
.org 0x123bc2
	ldrsh r0, [r1, r2]	@ 00123bc2 885e
.org 0x123bc4
	cmp r0, #0	@ 00123bc4 0028
.org 0x123bc6
	beq.n 0x123bde	@ 00123bc6 0ad0
.org 0x123bc8
	ldr r2, [pc, #24]	@ 00123bc8 064a
.org 0x123bca
	adds r0, r1, r2	@ 00123bca 8818
.org 0x123bcc
	ldr r1, [pc, #24]	@ 00123bcc 0649
.org 0x123bce
	ldr r2, [r0, #16]	@ 00123bce 0269
.org 0x123bd0
	ldr r0, [r1, #28]	@ 00123bd0 c869
.org 0x123bd2
	cmp r2, r0	@ 00123bd2 8242
.org 0x123bd4
	bls.n 0x123bde	@ 00123bd4 03d9
.org 0x123bd6
	movs r0, #0	@ 00123bd6 0020
.org 0x123bd8
	adds r1, r2, #0	@ 00123bd8 111c
.org 0x123bda
	bl 0x6a6c	@ 00123bda e2f647ff
.org 0x123bde
	movs r0, #0	@ 00123bde 0020
.org 0x123be0
	pop {r1}	@ 00123be0 02bc
.org 0x123be2
	bx r1	@ 00123be2 0847
