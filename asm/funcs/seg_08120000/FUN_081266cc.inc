@ FUN_081266cc  entry 0x081266cc  size 40
.thumb
.org 0x1266cc
FUN_081266cc:
	push {lr}	@ 001266cc 00b5
.org 0x1266ce
	adds r1, r0, #0	@ 001266ce 011c
.org 0x1266d0
	movs r2, #6	@ 001266d0 0622
.org 0x1266d2
	ldrsh r0, [r1, r2]	@ 001266d2 885e
.org 0x1266d4
	cmp r0, #0	@ 001266d4 0028
.org 0x1266d6
	beq.n 0x1266ee	@ 001266d6 0ad0
.org 0x1266d8
	ldr r2, [pc, #24]	@ 001266d8 064a
.org 0x1266da
	adds r0, r1, r2	@ 001266da 8818
.org 0x1266dc
	ldr r1, [pc, #24]	@ 001266dc 0649
.org 0x1266de
	ldr r2, [r0, #16]	@ 001266de 0269
.org 0x1266e0
	ldr r0, [r1, #52]	@ 001266e0 486b
.org 0x1266e2
	cmp r2, r0	@ 001266e2 8242
.org 0x1266e4
	bls.n 0x1266ee	@ 001266e4 03d9
.org 0x1266e6
	movs r0, #6	@ 001266e6 0620
.org 0x1266e8
	adds r1, r2, #0	@ 001266e8 111c
.org 0x1266ea
	bl 0x6a6c	@ 001266ea e0f6bff9
.org 0x1266ee
	movs r0, #0	@ 001266ee 0020
.org 0x1266f0
	pop {r1}	@ 001266f0 02bc
.org 0x1266f2
	bx r1	@ 001266f2 0847
