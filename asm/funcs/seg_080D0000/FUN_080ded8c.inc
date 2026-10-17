@ FUN_080ded8c  entry 0x080ded8c  size 66
.thumb
.org 0xded8c
FUN_080ded8c:
	push {r4, lr}	@ 000ded8c 10b5
.org 0xded8e
	adds r4, r0, #0	@ 000ded8e 041c
.org 0xded90
	bl 0x1cc9c	@ 000ded90 3df784ff
.org 0xded94
	ldrb r1, [r4, #10]	@ 000ded94 a17a
.org 0xded96
	movs r0, #254	@ 000ded96 fe20
.org 0xded98
	ands r0, r1	@ 000ded98 0840
.org 0xded9a
	movs r1, #2	@ 000ded9a 0221
.org 0xded9c
	orrs r0, r1	@ 000ded9c 0843
.org 0xded9e
	strb r0, [r4, #10]	@ 000ded9e a072
.org 0xdeda0
	adds r0, r4, #0	@ 000deda0 201c
.org 0xdeda2
	bl 0x1ceec	@ 000deda2 3ef7a3f8
.org 0xdeda6
	movs r1, #197	@ 000deda6 c521
.org 0xdeda8
	lsls r1, r1, #8	@ 000deda8 0902
.org 0xdedaa
	adds r0, r4, #0	@ 000dedaa 201c
.org 0xdedac
	bl 0x1cf00	@ 000dedac 3ef7a8f8
.org 0xdedb0
	ldr r1, [pc, #28]	@ 000dedb0 0749
.org 0xdedb2
	ldrb r0, [r4, #9]	@ 000dedb2 607a
.org 0xdedb4
	lsls r0, r0, #2	@ 000dedb4 8000
.org 0xdedb6
	adds r0, r0, r1	@ 000dedb6 4018
.org 0xdedb8
	movs r1, #1	@ 000dedb8 0121
.org 0xdedba
	str r1, [r4, #12]	@ 000dedba e160
.org 0xdedbc
	ldr r0, [r0, #0]	@ 000dedbc 0068
.org 0xdedbe
	ldr r0, [r0, #4]	@ 000dedbe 4068
.org 0xdedc0
	str r0, [r4, #20]	@ 000dedc0 6061
.org 0xdedc2
	adds r0, r4, #0	@ 000dedc2 201c
.org 0xdedc4
	bl 0xdece0	@ 000dedc4 fff78cff
.org 0xdedc8
	pop {r4}	@ 000dedc8 10bc
.org 0xdedca
	pop {r0}	@ 000dedca 01bc
.org 0xdedcc
	bx r0	@ 000dedcc 0047
