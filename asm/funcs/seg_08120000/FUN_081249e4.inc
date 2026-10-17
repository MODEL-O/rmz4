@ FUN_081249e4  entry 0x081249e4  size 40
.thumb
.org 0x1249e4
FUN_081249e4:
	push {lr}	@ 001249e4 00b5
.org 0x1249e6
	adds r1, r0, #0	@ 001249e6 011c
.org 0x1249e8
	movs r2, #6	@ 001249e8 0622
.org 0x1249ea
	ldrsh r0, [r1, r2]	@ 001249ea 885e
.org 0x1249ec
	cmp r0, #0	@ 001249ec 0028
.org 0x1249ee
	beq.n 0x124a06	@ 001249ee 0ad0
.org 0x1249f0
	ldr r2, [pc, #24]	@ 001249f0 064a
.org 0x1249f2
	adds r0, r1, r2	@ 001249f2 8818
.org 0x1249f4
	ldr r1, [pc, #24]	@ 001249f4 0649
.org 0x1249f6
	ldr r2, [r0, #16]	@ 001249f6 0269
.org 0x1249f8
	ldr r0, [r1, #36]	@ 001249f8 486a
.org 0x1249fa
	cmp r2, r0	@ 001249fa 8242
.org 0x1249fc
	bls.n 0x124a06	@ 001249fc 03d9
.org 0x1249fe
	movs r0, #2	@ 001249fe 0220
.org 0x124a00
	adds r1, r2, #0	@ 00124a00 111c
.org 0x124a02
	bl 0x6a6c	@ 00124a02 e2f633f8
.org 0x124a06
	movs r0, #0	@ 00124a06 0020
.org 0x124a08
	pop {r1}	@ 00124a08 02bc
.org 0x124a0a
	bx r1	@ 00124a0a 0847
