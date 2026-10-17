@ FUN_081241ec  entry 0x081241ec  size 40
.thumb
.org 0x1241ec
FUN_081241ec:
	push {lr}	@ 001241ec 00b5
.org 0x1241ee
	adds r1, r0, #0	@ 001241ee 011c
.org 0x1241f0
	movs r2, #6	@ 001241f0 0622
.org 0x1241f2
	ldrsh r0, [r1, r2]	@ 001241f2 885e
.org 0x1241f4
	cmp r0, #0	@ 001241f4 0028
.org 0x1241f6
	beq.n 0x12420e	@ 001241f6 0ad0
.org 0x1241f8
	ldr r2, [pc, #24]	@ 001241f8 064a
.org 0x1241fa
	adds r0, r1, r2	@ 001241fa 8818
.org 0x1241fc
	ldr r1, [pc, #24]	@ 001241fc 0649
.org 0x1241fe
	ldr r2, [r0, #16]	@ 001241fe 0269
.org 0x124200
	ldr r0, [r1, #32]	@ 00124200 086a
.org 0x124202
	cmp r2, r0	@ 00124202 8242
.org 0x124204
	bls.n 0x12420e	@ 00124204 03d9
.org 0x124206
	movs r0, #1	@ 00124206 0120
.org 0x124208
	adds r1, r2, #0	@ 00124208 111c
.org 0x12420a
	bl 0x6a6c	@ 0012420a e2f62ffc
.org 0x12420e
	movs r0, #0	@ 0012420e 0020
.org 0x124210
	pop {r1}	@ 00124210 02bc
.org 0x124212
	bx r1	@ 00124212 0847
