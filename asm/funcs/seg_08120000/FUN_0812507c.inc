@ FUN_0812507c  entry 0x0812507c  size 40
.thumb
.org 0x12507c
FUN_0812507c:
	push {lr}	@ 0012507c 00b5
.org 0x12507e
	adds r1, r0, #0	@ 0012507e 011c
.org 0x125080
	movs r2, #6	@ 00125080 0622
.org 0x125082
	ldrsh r0, [r1, r2]	@ 00125082 885e
.org 0x125084
	cmp r0, #0	@ 00125084 0028
.org 0x125086
	beq.n 0x12509e	@ 00125086 0ad0
.org 0x125088
	ldr r2, [pc, #24]	@ 00125088 064a
.org 0x12508a
	adds r0, r1, r2	@ 0012508a 8818
.org 0x12508c
	ldr r1, [pc, #24]	@ 0012508c 0649
.org 0x12508e
	ldr r2, [r0, #16]	@ 0012508e 0269
.org 0x125090
	ldr r0, [r1, #40]	@ 00125090 886a
.org 0x125092
	cmp r2, r0	@ 00125092 8242
.org 0x125094
	bls.n 0x12509e	@ 00125094 03d9
.org 0x125096
	movs r0, #3	@ 00125096 0320
.org 0x125098
	adds r1, r2, #0	@ 00125098 111c
.org 0x12509a
	bl 0x6a6c	@ 0012509a e1f6e7fc
.org 0x12509e
	movs r0, #0	@ 0012509e 0020
.org 0x1250a0
	pop {r1}	@ 001250a0 02bc
.org 0x1250a2
	bx r1	@ 001250a2 0847
