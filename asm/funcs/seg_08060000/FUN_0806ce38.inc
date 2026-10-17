@ FUN_0806ce38  entry 0x0806ce38  size 66
.thumb
.org 0x6ce38
FUN_0806ce38:
	push {r4, lr}	@ 0006ce38 10b5
.org 0x6ce3a
	adds r4, r0, #0	@ 0006ce3a 041c
.org 0x6ce3c
	ldrb r0, [r4, #14]	@ 0006ce3c a07b
.org 0x6ce3e
	cmp r0, #0	@ 0006ce3e 0028
.org 0x6ce40
	bne.n 0x6ce50	@ 0006ce40 06d1
.org 0x6ce42
	ldr r1, [pc, #56]	@ 0006ce42 0e49
.org 0x6ce44
	adds r0, r4, #0	@ 0006ce44 201c
.org 0x6ce46
	bl 0x1cf00	@ 0006ce46 b0f75bf8
.org 0x6ce4a
	ldrb r0, [r4, #14]	@ 0006ce4a a07b
.org 0x6ce4c
	adds r0, #1	@ 0006ce4c 0130
.org 0x6ce4e
	strb r0, [r4, #14]	@ 0006ce4e a073
.org 0x6ce50
	adds r0, r4, #0	@ 0006ce50 201c
.org 0x6ce52
	bl 0x1cff0	@ 0006ce52 b0f7cdf8
.org 0x6ce56
	ldr r0, [r4, #88]	@ 0006ce56 a06d
.org 0x6ce58
	ldr r1, [r4, #96]	@ 0006ce58 216e
.org 0x6ce5a
	adds r0, r0, r1	@ 0006ce5a 4018
.org 0x6ce5c
	str r0, [r4, #88]	@ 0006ce5c a065
.org 0x6ce5e
	adds r1, #64	@ 0006ce5e 4031
.org 0x6ce60
	str r1, [r4, #96]	@ 0006ce60 2166
.org 0x6ce62
	adds r0, r4, #0	@ 0006ce62 201c
.org 0x6ce64
	adds r0, #115	@ 0006ce64 7330
.org 0x6ce66
	ldrb r0, [r0, #0]	@ 0006ce66 0078
.org 0x6ce68
	cmp r0, #3	@ 0006ce68 0328
.org 0x6ce6a
	bne.n 0x6ce74	@ 0006ce6a 03d1
.org 0x6ce6c
	movs r1, #0	@ 0006ce6c 0021
.org 0x6ce6e
	movs r0, #32	@ 0006ce6e 2020
.org 0x6ce70
	strb r0, [r4, #13]	@ 0006ce70 6073
.org 0x6ce72
	strb r1, [r4, #14]	@ 0006ce72 a173
.org 0x6ce74
	pop {r4}	@ 0006ce74 10bc
.org 0x6ce76
	pop {r0}	@ 0006ce76 01bc
.org 0x6ce78
	bx r0	@ 0006ce78 0047
