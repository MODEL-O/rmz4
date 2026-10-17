@ FUN_08109190  entry 0x08109190  size 22
.thumb
.org 0x109190
FUN_08109190:
	push {lr}	@ 00109190 00b5
.org 0x109192
	adds r1, r0, #0	@ 00109192 011c
.org 0x109194
	ldr r0, [pc, #16]	@ 00109194 0448
.org 0x109196
	ldr r0, [r0, #0]	@ 00109196 0068
.org 0x109198
	bl 0x1cb30	@ 00109198 13f7cafc
.org 0x10919c
	cmp r0, #0	@ 0010919c 0028
.org 0x10919e
	bne.n 0x1091a2	@ 0010919e 00d1
.org 0x1091a0
	movs r0, #0	@ 001091a0 0020
.org 0x1091a2
	pop {r1}	@ 001091a2 02bc
.org 0x1091a4
	bx r1	@ 001091a4 0847
