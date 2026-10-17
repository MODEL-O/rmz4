@ FUN_080d6dc4  entry 0x080d6dc4  size 42
.thumb
.org 0xd6dc4
FUN_080d6dc4:
	push {r4, lr}	@ 000d6dc4 10b5
.org 0xd6dc6
	adds r4, r0, #0	@ 000d6dc6 041c
.org 0xd6dc8
	bl 0x1cff0	@ 000d6dc8 46f712f9
.org 0xd6dcc
	adds r0, r4, #0	@ 000d6dcc 201c
.org 0xd6dce
	adds r0, #115	@ 000d6dce 7330
.org 0xd6dd0
	ldrb r0, [r0, #0]	@ 000d6dd0 0078
.org 0xd6dd2
	cmp r0, #3	@ 000d6dd2 0328
.org 0xd6dd4
	bne.n 0xd6de8	@ 000d6dd4 08d1
.org 0xd6dd6
	ldr r1, [pc, #24]	@ 000d6dd6 0649
.org 0xd6dd8
	ldrb r0, [r4, #9]	@ 000d6dd8 607a
.org 0xd6dda
	lsls r0, r0, #2	@ 000d6dda 8000
.org 0xd6ddc
	adds r0, r0, r1	@ 000d6ddc 4018
.org 0xd6dde
	movs r1, #2	@ 000d6dde 0221
.org 0xd6de0
	str r1, [r4, #12]	@ 000d6de0 e160
.org 0xd6de2
	ldr r0, [r0, #0]	@ 000d6de2 0068
.org 0xd6de4
	ldr r0, [r0, #8]	@ 000d6de4 8068
.org 0xd6de6
	str r0, [r4, #20]	@ 000d6de6 6061
.org 0xd6de8
	pop {r4}	@ 000d6de8 10bc
.org 0xd6dea
	pop {r0}	@ 000d6dea 01bc
.org 0xd6dec
	bx r0	@ 000d6dec 0047
