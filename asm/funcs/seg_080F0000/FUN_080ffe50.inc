@ FUN_080ffe50  entry 0x080ffe50  size 54
.thumb
.org 0xffe50
FUN_080ffe50:
	push {lr}	@ 000ffe50 00b5
.org 0xffe52
	adds r2, r0, #0	@ 000ffe52 021c
.org 0xffe54
	adds r0, #140	@ 000ffe54 8c30
.org 0xffe56
	ldr r0, [r0, #0]	@ 000ffe56 0068
.org 0xffe58
	movs r1, #128	@ 000ffe58 8021
.org 0xffe5a
	lsls r1, r1, #2	@ 000ffe5a 8900
.org 0xffe5c
	ands r0, r1	@ 000ffe5c 0840
.org 0xffe5e
	cmp r0, #0	@ 000ffe5e 0028
.org 0xffe60
	beq.n 0xffe80	@ 000ffe60 0ed0
.org 0xffe62
	ldr r1, [pc, #24]	@ 000ffe62 0649
.org 0xffe64
	ldrb r0, [r2, #9]	@ 000ffe64 507a
.org 0xffe66
	lsls r0, r0, #2	@ 000ffe66 8000
.org 0xffe68
	adds r0, r0, r1	@ 000ffe68 4018
.org 0xffe6a
	movs r1, #2	@ 000ffe6a 0221
.org 0xffe6c
	str r1, [r2, #12]	@ 000ffe6c d160
.org 0xffe6e
	ldr r0, [r0, #0]	@ 000ffe6e 0068
.org 0xffe70
	ldr r0, [r0, #8]	@ 000ffe70 8068
.org 0xffe72
	str r0, [r2, #20]	@ 000ffe72 5061
.org 0xffe74
	adds r0, r2, #0	@ 000ffe74 101c
.org 0xffe76
	bl 0xffe8c	@ 000ffe76 00f009f8
.org 0xffe7a
	b.n 0xffe86	@ 000ffe7a 04e0
.org 0xffe7c
	.byte 0xfc,0x92,0x86,0x08	@ 000ffe7c data
.org 0xffe80
	adds r0, r2, #0	@ 000ffe80 101c
.org 0xffe82
	bl 0x1cff0	@ 000ffe82 1df7b5f8
