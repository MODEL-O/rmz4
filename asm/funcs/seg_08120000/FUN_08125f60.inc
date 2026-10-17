@ FUN_08125f60  entry 0x08125f60  size 40
.thumb
.org 0x125f60
FUN_08125f60:
	push {lr}	@ 00125f60 00b5
.org 0x125f62
	adds r1, r0, #0	@ 00125f62 011c
.org 0x125f64
	movs r2, #6	@ 00125f64 0622
.org 0x125f66
	ldrsh r0, [r1, r2]	@ 00125f66 885e
.org 0x125f68
	cmp r0, #0	@ 00125f68 0028
.org 0x125f6a
	beq.n 0x125f82	@ 00125f6a 0ad0
.org 0x125f6c
	ldr r2, [pc, #24]	@ 00125f6c 064a
.org 0x125f6e
	adds r0, r1, r2	@ 00125f6e 8818
.org 0x125f70
	ldr r1, [pc, #24]	@ 00125f70 0649
.org 0x125f72
	ldr r2, [r0, #16]	@ 00125f72 0269
.org 0x125f74
	ldr r0, [r1, #48]	@ 00125f74 086b
.org 0x125f76
	cmp r2, r0	@ 00125f76 8242
.org 0x125f78
	bls.n 0x125f82	@ 00125f78 03d9
.org 0x125f7a
	movs r0, #5	@ 00125f7a 0520
.org 0x125f7c
	adds r1, r2, #0	@ 00125f7c 111c
.org 0x125f7e
	bl 0x6a6c	@ 00125f7e e0f675fd
.org 0x125f82
	movs r0, #0	@ 00125f82 0020
.org 0x125f84
	pop {r1}	@ 00125f84 02bc
.org 0x125f86
	bx r1	@ 00125f86 0847
