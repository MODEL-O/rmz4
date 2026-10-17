@ FUN_080599a4  entry 0x080599a4  size 30
.thumb
.org 0x599a4
FUN_080599a4:
	sub sp, #8	@ 000599a4 82b0
.org 0x599a6
	ldr r1, [pc, #28]	@ 000599a6 0749
.org 0x599a8
	ldr r2, [r1, #4]	@ 000599a8 4a68
.org 0x599aa
	ldr r1, [r1, #0]	@ 000599aa 0968
.org 0x599ac
	str r1, [sp, #0]	@ 000599ac 0091
.org 0x599ae
	str r2, [sp, #4]	@ 000599ae 0192
.org 0x599b0
	ldrb r0, [r0, #10]	@ 000599b0 807a
.org 0x599b2
	lsrs r0, r0, #4	@ 000599b2 0009
.org 0x599b4
	movs r1, #1	@ 000599b4 0121
.org 0x599b6
	ands r0, r1	@ 000599b6 0840
.org 0x599b8
	lsls r0, r0, #2	@ 000599b8 8000
.org 0x599ba
	add r0, sp	@ 000599ba 6844
.org 0x599bc
	ldrb r0, [r0, #0]	@ 000599bc 0078
.org 0x599be
	add sp, #8	@ 000599be 02b0
.org 0x599c0
	bx lr	@ 000599c0 7047
