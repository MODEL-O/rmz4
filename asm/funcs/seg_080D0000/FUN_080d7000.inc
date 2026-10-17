@ FUN_080d7000  entry 0x080d7000  size 62
.thumb
.org 0xd7000
FUN_080d7000:
	push {r4, r5, lr}	@ 000d7000 30b5
.org 0xd7002
	adds r4, r0, #0	@ 000d7002 041c
.org 0xd7004
	bl 0x1cc9c	@ 000d7004 45f74afe
.org 0xd7008
	ldrb r1, [r4, #10]	@ 000d7008 a17a
.org 0xd700a
	movs r0, #1	@ 000d700a 0120
.org 0xd700c
	movs r5, #0	@ 000d700c 0025
.org 0xd700e
	orrs r0, r1	@ 000d700e 0843
.org 0xd7010
	movs r1, #2	@ 000d7010 0221
.org 0xd7012
	orrs r0, r1	@ 000d7012 0843
.org 0xd7014
	strb r0, [r4, #10]	@ 000d7014 a072
.org 0xd7016
	ldr r1, [pc, #40]	@ 000d7016 0a49
.org 0xd7018
	adds r0, r4, #0	@ 000d7018 201c
.org 0xd701a
	bl 0x1cf00	@ 000d701a 45f771ff
.org 0xd701e
	str r5, [r4, #96]	@ 000d701e 2566
.org 0xd7020
	ldr r1, [pc, #32]	@ 000d7020 0849
.org 0xd7022
	ldrb r0, [r4, #9]	@ 000d7022 607a
.org 0xd7024
	lsls r0, r0, #2	@ 000d7024 8000
.org 0xd7026
	adds r0, r0, r1	@ 000d7026 4018
.org 0xd7028
	movs r1, #1	@ 000d7028 0121
.org 0xd702a
	str r1, [r4, #12]	@ 000d702a e160
.org 0xd702c
	ldr r0, [r0, #0]	@ 000d702c 0068
.org 0xd702e
	ldr r0, [r0, #4]	@ 000d702e 4068
.org 0xd7030
	str r0, [r4, #20]	@ 000d7030 6061
.org 0xd7032
	adds r0, r4, #0	@ 000d7032 201c
.org 0xd7034
	bl 0xd6ef4	@ 000d7034 fff75eff
.org 0xd7038
	pop {r4, r5}	@ 000d7038 30bc
.org 0xd703a
	pop {r0}	@ 000d703a 01bc
.org 0xd703c
	bx r0	@ 000d703c 0047
