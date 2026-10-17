@ FUN_080ccb08  entry 0x080ccb08  size 76
.thumb
.org 0xccb08
FUN_080ccb08:
	push {r4, r5, lr}	@ 000ccb08 30b5
.org 0xccb0a
	adds r4, r0, #0	@ 000ccb0a 041c
.org 0xccb0c
	bl 0x1ce54	@ 000ccb0c 50f7a2f9
.org 0xccb10
	ldrb r1, [r4, #10]	@ 000ccb10 a17a
.org 0xccb12
	movs r0, #1	@ 000ccb12 0120
.org 0xccb14
	orrs r0, r1	@ 000ccb14 0843
.org 0xccb16
	movs r1, #2	@ 000ccb16 0221
.org 0xccb18
	orrs r0, r1	@ 000ccb18 0843
.org 0xccb1a
	strb r0, [r4, #10]	@ 000ccb1a a072
.org 0xccb1c
	ldr r1, [pc, #52]	@ 000ccb1c 0d49
.org 0xccb1e
	ldrb r0, [r4, #9]	@ 000ccb1e 607a
.org 0xccb20
	lsls r0, r0, #2	@ 000ccb20 8000
.org 0xccb22
	adds r0, r0, r1	@ 000ccb22 4018
.org 0xccb24
	movs r5, #1	@ 000ccb24 0125
.org 0xccb26
	str r5, [r4, #12]	@ 000ccb26 e560
.org 0xccb28
	ldr r0, [r0, #0]	@ 000ccb28 0068
.org 0xccb2a
	ldr r0, [r0, #4]	@ 000ccb2a 4068
.org 0xccb2c
	str r0, [r4, #20]	@ 000ccb2c 6061
.org 0xccb2e
	ldr r1, [pc, #40]	@ 000ccb2e 0a49
.org 0xccb30
	adds r0, r4, #0	@ 000ccb30 201c
.org 0xccb32
	bl 0x1cf00	@ 000ccb32 50f7e5f9
.org 0xccb36
	adds r1, r4, #0	@ 000ccb36 211c
.org 0xccb38
	adds r1, #80	@ 000ccb38 5031
.org 0xccb3a
	movs r2, #0	@ 000ccb3a 0022
.org 0xccb3c
	movs r0, #64	@ 000ccb3c 4020
.org 0xccb3e
	strh r0, [r1, #0]	@ 000ccb3e 0880
.org 0xccb40
	adds r1, #2	@ 000ccb40 0231
.org 0xccb42
	strh r0, [r1, #0]	@ 000ccb42 0880
.org 0xccb44
	strb r5, [r4, #18]	@ 000ccb44 a574
.org 0xccb46
	adds r0, r4, #0	@ 000ccb46 201c
.org 0xccb48
	adds r0, #180	@ 000ccb48 b430
.org 0xccb4a
	strb r2, [r0, #0]	@ 000ccb4a 0270
.org 0xccb4c
	strb r2, [r4, #14]	@ 000ccb4c a273
.org 0xccb4e
	pop {r4, r5}	@ 000ccb4e 30bc
.org 0xccb50
	pop {r0}	@ 000ccb50 01bc
.org 0xccb52
	bx r0	@ 000ccb52 0047
