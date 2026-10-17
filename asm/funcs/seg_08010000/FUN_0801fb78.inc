@ FUN_0801fb78  entry 0x0801fb78  size 46
.thumb
.org 0x1fb78
FUN_0801fb78:
	push {lr}	@ 0001fb78 00b5
.org 0x1fb7a
	adds r2, r0, #0	@ 0001fb7a 021c
.org 0x1fb7c
	ldrb r0, [r2, #28]	@ 0001fb7c 107f
.org 0x1fb7e
	adds r1, r0, #0	@ 0001fb7e 011c
.org 0x1fb80
	cmp r1, #0	@ 0001fb80 0029
.org 0x1fb82
	bne.n 0x1fb8a	@ 0001fb82 02d1
.org 0x1fb84
	strh r1, [r2, #34]	@ 0001fb84 5184
.org 0x1fb86
	adds r0, #1	@ 0001fb86 0130
.org 0x1fb88
	strb r0, [r2, #28]	@ 0001fb88 1077
.org 0x1fb8a
	ldr r0, [r2, #48]	@ 0001fb8a 106b
.org 0x1fb8c
	ldr r1, [r2, #64]	@ 0001fb8c 116c
.org 0x1fb8e
	adds r0, r0, r1	@ 0001fb8e 4018
.org 0x1fb90
	str r0, [r2, #48]	@ 0001fb90 1063
.org 0x1fb92
	ldr r0, [r2, #52]	@ 0001fb92 506b
.org 0x1fb94
	ldr r1, [r2, #68]	@ 0001fb94 516c
.org 0x1fb96
	adds r0, r0, r1	@ 0001fb96 4018
.org 0x1fb98
	str r0, [r2, #52]	@ 0001fb98 5063
.org 0x1fb9a
	ldrb r1, [r2, #25]	@ 0001fb9a 517e
.org 0x1fb9c
	adds r0, r2, #0	@ 0001fb9c 101c
.org 0x1fb9e
	bl 0x1f998	@ 0001fb9e fff7fbfe
.org 0x1fba2
	pop {r0}	@ 0001fba2 01bc
.org 0x1fba4
	bx r0	@ 0001fba4 0047
