@ FUN_080a44d4  entry 0x080a44d4  size 64
.thumb
.org 0xa44d4
FUN_080a44d4:
	push {r4, r5, lr}	@ 000a44d4 30b5
.org 0xa44d6
	adds r4, r0, #0	@ 000a44d6 041c
.org 0xa44d8
	adds r5, r4, #0	@ 000a44d8 251c
.org 0xa44da
	adds r5, #84	@ 000a44da 5435
.org 0xa44dc
	movs r0, #0	@ 000a44dc 0020
.org 0xa44de
	movs r1, #15	@ 000a44de 0f21
.org 0xa44e0
	adds r2, r5, #0	@ 000a44e0 2a1c
.org 0xa44e2
	bl 0x2ab88	@ 000a44e2 86f751fb
.org 0xa44e6
	ldr r2, [pc, #44]	@ 000a44e6 0b4a
.org 0xa44e8
	ldrh r1, [r2, #12]	@ 000a44e8 9189
.org 0xa44ea
	ldr r0, [pc, #44]	@ 000a44ea 0b48
.org 0xa44ec
	cmp r1, r0	@ 000a44ec 8142
.org 0xa44ee
	bhi.n 0xa44f4	@ 000a44ee 01d8
.org 0xa44f0
	adds r0, r1, #1	@ 000a44f0 481c
.org 0xa44f2
	strh r0, [r2, #12]	@ 000a44f2 9081
.org 0xa44f4
	adds r0, r4, #0	@ 000a44f4 201c
.org 0xa44f6
	adds r1, r5, #0	@ 000a44f6 291c
.org 0xa44f8
	bl 0x2abe0	@ 000a44f8 86f772fb
.org 0xa44fc
	ldr r1, [pc, #28]	@ 000a44fc 0749
.org 0xa44fe
	ldrb r0, [r4, #9]	@ 000a44fe 607a
.org 0xa4500
	lsls r0, r0, #2	@ 000a4500 8000
.org 0xa4502
	adds r0, r0, r1	@ 000a4502 4018
.org 0xa4504
	movs r1, #4	@ 000a4504 0421
.org 0xa4506
	str r1, [r4, #12]	@ 000a4506 e160
.org 0xa4508
	ldr r0, [r0, #0]	@ 000a4508 0068
.org 0xa450a
	ldr r0, [r0, #16]	@ 000a450a 0069
.org 0xa450c
	str r0, [r4, #20]	@ 000a450c 6061
.org 0xa450e
	pop {r4, r5}	@ 000a450e 30bc
.org 0xa4510
	pop {r0}	@ 000a4510 01bc
.org 0xa4512
	bx r0	@ 000a4512 0047
