@ FUN_080d32e8  entry 0x080d32e8  size 42
.thumb
.org 0xd32e8
FUN_080d32e8:
	push {r4, lr}	@ 000d32e8 10b5
.org 0xd32ea
	adds r4, r0, #0	@ 000d32ea 041c
.org 0xd32ec
	bl 0x1cff0	@ 000d32ec 49f780fe
.org 0xd32f0
	adds r0, r4, #0	@ 000d32f0 201c
.org 0xd32f2
	adds r0, #115	@ 000d32f2 7330
.org 0xd32f4
	ldrb r0, [r0, #0]	@ 000d32f4 0078
.org 0xd32f6
	cmp r0, #3	@ 000d32f6 0328
.org 0xd32f8
	bne.n 0xd330c	@ 000d32f8 08d1
.org 0xd32fa
	ldr r1, [pc, #24]	@ 000d32fa 0649
.org 0xd32fc
	ldrb r0, [r4, #9]	@ 000d32fc 607a
.org 0xd32fe
	lsls r0, r0, #2	@ 000d32fe 8000
.org 0xd3300
	adds r0, r0, r1	@ 000d3300 4018
.org 0xd3302
	movs r1, #2	@ 000d3302 0221
.org 0xd3304
	str r1, [r4, #12]	@ 000d3304 e160
.org 0xd3306
	ldr r0, [r0, #0]	@ 000d3306 0068
.org 0xd3308
	ldr r0, [r0, #8]	@ 000d3308 8068
.org 0xd330a
	str r0, [r4, #20]	@ 000d330a 6061
.org 0xd330c
	pop {r4}	@ 000d330c 10bc
.org 0xd330e
	pop {r0}	@ 000d330e 01bc
.org 0xd3310
	bx r0	@ 000d3310 0047
