@ FUN_08100158  entry 0x08100158  size 26
.thumb
.org 0x100158
FUN_08100158:
	push {lr}	@ 00100158 00b5
.org 0x10015a
	ldr r2, [r0, #44]	@ 0010015a c26a
.org 0x10015c
	ldr r0, [r0, #12]	@ 0010015c c068
.org 0x10015e
	ldr r1, [r0, #44]	@ 0010015e c16a
.org 0x100160
	movs r0, #8	@ 00100160 0820
.org 0x100162
	ldrsb r0, [r1, r0]	@ 00100162 0856
.org 0x100164
	cmp r0, #0	@ 00100164 0028
.org 0x100166
	bne.n 0x10016e	@ 00100166 02d1
.org 0x100168
	adds r0, r2, #0	@ 00100168 101c
.org 0x10016a
	adds r0, #180	@ 0010016a b430
.org 0x10016c
	str r1, [r0, #0]	@ 0010016c 0160
.org 0x10016e
	pop {r0}	@ 0010016e 01bc
.org 0x100170
	bx r0	@ 00100170 0047
