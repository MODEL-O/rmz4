@ FUN_080ecac0  entry 0x080ecac0  size 58
.thumb
.org 0xecac0
FUN_080ecac0:
	push {lr}	@ 000ecac0 00b5
.org 0xecac2
	adds r2, r0, #0	@ 000ecac2 021c
.org 0xecac4
	ldr r0, [r2, #40]	@ 000ecac4 906a
.org 0xecac6
	ldrb r0, [r0, #12]	@ 000ecac6 007b
.org 0xecac8
	cmp r0, #4	@ 000ecac8 0428
.org 0xecaca
	bne.n 0xecaec	@ 000ecaca 0fd1
.org 0xecacc
	ldr r1, [pc, #24]	@ 000ecacc 0649
.org 0xecace
	ldrb r0, [r2, #9]	@ 000ecace 507a
.org 0xecad0
	lsls r0, r0, #2	@ 000ecad0 8000
.org 0xecad2
	adds r0, r0, r1	@ 000ecad2 4018
.org 0xecad4
	movs r1, #2	@ 000ecad4 0221
.org 0xecad6
	str r1, [r2, #12]	@ 000ecad6 d160
.org 0xecad8
	ldr r0, [r0, #0]	@ 000ecad8 0068
.org 0xecada
	ldr r0, [r0, #8]	@ 000ecada 8068
.org 0xecadc
	str r0, [r2, #20]	@ 000ecadc 5061
.org 0xecade
	adds r0, r2, #0	@ 000ecade 101c
.org 0xecae0
	bl 0xecbd8	@ 000ecae0 00f07af8
.org 0xecae4
	b.n 0xecafc	@ 000ecae4 0ae0
.org 0xecae6
	.byte 0x00	@ 000ecae6 data
.org 0xecae7
	.byte 0x00	@ 000ecae7 data
.org 0xecae8
	.byte 0xfc,0x92,0x86,0x08	@ 000ecae8 data
.org 0xecaec
	ldr r0, [pc, #16]	@ 000ecaec 0448
.org 0xecaee
	ldrb r1, [r2, #13]	@ 000ecaee 517b
.org 0xecaf0
	lsls r1, r1, #2	@ 000ecaf0 8900
.org 0xecaf2
	adds r1, r1, r0	@ 000ecaf2 0918
.org 0xecaf4
	ldr r1, [r1, #0]	@ 000ecaf4 0968
.org 0xecaf6
	adds r0, r2, #0	@ 000ecaf6 101c
.org 0xecaf8
	bl 0x128f80	@ 000ecaf8 3cf042fa
