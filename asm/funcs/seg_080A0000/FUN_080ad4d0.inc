@ FUN_080ad4d0  entry 0x080ad4d0  size 96
.thumb
.org 0xad4d0
FUN_080ad4d0:
	push {r4, lr}	@ 000ad4d0 10b5
.org 0xad4d2
	adds r4, r0, #0	@ 000ad4d2 041c
.org 0xad4d4
	ldr r0, [pc, #88]	@ 000ad4d4 1648
.org 0xad4d6
	ldr r0, [r0, #0]	@ 000ad4d6 0068
.org 0xad4d8
	bl 0x5500	@ 000ad4d8 58f712f8
.org 0xad4dc
	mov ip, r0	@ 000ad4dc 8446
.org 0xad4de
	cmp r0, #0	@ 000ad4de 0028
.org 0xad4e0
	beq.n 0xad528	@ 000ad4e0 22d0
.org 0xad4e2
	mov r1, ip	@ 000ad4e2 6146
.org 0xad4e4
	adds r1, #37	@ 000ad4e4 2531
.org 0xad4e6
	movs r3, #0	@ 000ad4e6 0023
.org 0xad4e8
	movs r0, #24	@ 000ad4e8 1820
.org 0xad4ea
	strb r0, [r1, #0]	@ 000ad4ea 0870
.org 0xad4ec
	ldr r0, [pc, #68]	@ 000ad4ec 1148
.org 0xad4ee
	movs r1, #77	@ 000ad4ee 4d21
.org 0xad4f0
	mov r2, ip	@ 000ad4f0 6246
.org 0xad4f2
	strb r1, [r2, #9]	@ 000ad4f2 5172
.org 0xad4f4
	adds r1, #231	@ 000ad4f4 e731
.org 0xad4f6
	adds r0, r0, r1	@ 000ad4f6 4018
.org 0xad4f8
	ldr r0, [r0, #0]	@ 000ad4f8 0068
.org 0xad4fa
	ldr r0, [r0, #0]	@ 000ad4fa 0068
.org 0xad4fc
	str r0, [r2, #20]	@ 000ad4fc 5061
.org 0xad4fe
	movs r2, #0	@ 000ad4fe 0022
.org 0xad500
	mov r0, ip	@ 000ad500 6046
.org 0xad502
	strh r3, [r0, #32]	@ 000ad502 0384
.org 0xad504
	adds r0, #34	@ 000ad504 2230
.org 0xad506
	strb r2, [r0, #0]	@ 000ad506 0270
.org 0xad508
	mov r0, ip	@ 000ad508 6046
.org 0xad50a
	ldrb r1, [r0, #11]	@ 000ad50a c17a
.org 0xad50c
	movs r0, #16	@ 000ad50c 1020
.org 0xad50e
	orrs r0, r1	@ 000ad50e 0843
.org 0xad510
	mov r1, ip	@ 000ad510 6146
.org 0xad512
	strb r0, [r1, #11]	@ 000ad512 c872
.org 0xad514
	ldrb r0, [r1, #28]	@ 000ad514 087f
.org 0xad516
	strb r0, [r1, #29]	@ 000ad516 4877
.org 0xad518
	str r4, [r1, #40]	@ 000ad518 8c62
.org 0xad51a
	strb r2, [r1, #16]	@ 000ad51a 0a74
.org 0xad51c
	strb r2, [r1, #17]	@ 000ad51c 4a74
.org 0xad51e
	mov r0, ip	@ 000ad51e 6046
.org 0xad520
	adds r0, #180	@ 000ad520 b430
.org 0xad522
	strb r2, [r0, #0]	@ 000ad522 0270
.org 0xad524
	adds r0, #4	@ 000ad524 0430
.org 0xad526
	str r3, [r0, #0]	@ 000ad526 0360
.org 0xad528
	mov r0, ip	@ 000ad528 6046
.org 0xad52a
	pop {r4}	@ 000ad52a 10bc
.org 0xad52c
	pop {r1}	@ 000ad52c 02bc
.org 0xad52e
	bx r1	@ 000ad52e 0847
