@ FUN_080e3090  entry 0x080e3090  size 48
.thumb
.org 0xe3090
FUN_080e3090:
	push {r4, lr}	@ 000e3090 10b5
.org 0xe3092
	adds r4, r0, #0	@ 000e3092 041c
.org 0xe3094
	bl 0x1cff0	@ 000e3094 39f7acff
.org 0xe3098
	adds r0, r4, #0	@ 000e3098 201c
.org 0xe309a
	adds r0, #115	@ 000e309a 7330
.org 0xe309c
	ldrb r0, [r0, #0]	@ 000e309c 0078
.org 0xe309e
	cmp r0, #3	@ 000e309e 0328
.org 0xe30a0
	bne.n 0xe30ba	@ 000e30a0 0bd1
.org 0xe30a2
	ldr r1, [pc, #28]	@ 000e30a2 0749
.org 0xe30a4
	ldrb r0, [r4, #9]	@ 000e30a4 607a
.org 0xe30a6
	lsls r0, r0, #2	@ 000e30a6 8000
.org 0xe30a8
	adds r0, r0, r1	@ 000e30a8 4018
.org 0xe30aa
	movs r1, #2	@ 000e30aa 0221
.org 0xe30ac
	str r1, [r4, #12]	@ 000e30ac e160
.org 0xe30ae
	ldr r0, [r0, #0]	@ 000e30ae 0068
.org 0xe30b0
	ldr r0, [r0, #8]	@ 000e30b0 8068
.org 0xe30b2
	str r0, [r4, #20]	@ 000e30b2 6061
.org 0xe30b4
	adds r0, r4, #0	@ 000e30b4 201c
.org 0xe30b6
	bl 0xe2f14	@ 000e30b6 fff72dff
.org 0xe30ba
	pop {r4}	@ 000e30ba 10bc
.org 0xe30bc
	pop {r0}	@ 000e30bc 01bc
.org 0xe30be
	bx r0	@ 000e30be 0047
