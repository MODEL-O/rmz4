@ FUN_080ec9e4  entry 0x080ec9e4  size 110
.thumb
.org 0xec9e4
FUN_080ec9e4:
	push {r4, r5, r6, r7, lr}	@ 000ec9e4 f0b5
.org 0xec9e6
	mov r7, r8	@ 000ec9e6 4746
.org 0xec9e8
	push {r7}	@ 000ec9e8 80b4
.org 0xec9ea
	adds r7, r0, #0	@ 000ec9ea 071c
.org 0xec9ec
	mov r8, r1	@ 000ec9ec 8846
.org 0xec9ee
	lsls r2, r2, #24	@ 000ec9ee 1206
.org 0xec9f0
	lsrs r6, r2, #24	@ 000ec9f0 160e
.org 0xec9f2
	lsls r3, r3, #24	@ 000ec9f2 1b06
.org 0xec9f4
	lsrs r5, r3, #24	@ 000ec9f4 1d0e
.org 0xec9f6
	ldr r0, [pc, #92]	@ 000ec9f6 1748
.org 0xec9f8
	ldr r0, [r0, #0]	@ 000ec9f8 0068
.org 0xec9fa
	bl 0x5500	@ 000ec9fa 18f781fd
.org 0xec9fe
	adds r4, r0, #0	@ 000ec9fe 041c
.org 0xeca00
	cmp r4, #0	@ 000eca00 002c
.org 0xeca02
	beq.n 0xeca46	@ 000eca02 20d0
.org 0xeca04
	adds r1, r4, #0	@ 000eca04 211c
.org 0xeca06
	adds r1, #37	@ 000eca06 2531
.org 0xeca08
	movs r2, #0	@ 000eca08 0022
.org 0xeca0a
	movs r0, #30	@ 000eca0a 1e20
.org 0xeca0c
	strb r0, [r1, #0]	@ 000eca0c 0870
.org 0xeca0e
	ldr r1, [pc, #72]	@ 000eca0e 1249
.org 0xeca10
	movs r0, #8	@ 000eca10 0820
.org 0xeca12
	strb r0, [r4, #9]	@ 000eca12 6072
.org 0xeca14
	ldr r0, [r1, #32]	@ 000eca14 086a
.org 0xeca16
	ldr r0, [r0, #0]	@ 000eca16 0068
.org 0xeca18
	str r0, [r4, #20]	@ 000eca18 6061
.org 0xeca1a
	movs r3, #0	@ 000eca1a 0023
.org 0xeca1c
	strh r2, [r4, #32]	@ 000eca1c 2284
.org 0xeca1e
	adds r0, r4, #0	@ 000eca1e 201c
.org 0xeca20
	adds r0, #34	@ 000eca20 2230
.org 0xeca22
	strb r3, [r0, #0]	@ 000eca22 0370
.org 0xeca24
	ldrb r1, [r4, #11]	@ 000eca24 e17a
.org 0xeca26
	movs r0, #16	@ 000eca26 1020
.org 0xeca28
	orrs r0, r1	@ 000eca28 0843
.org 0xeca2a
	strb r0, [r4, #11]	@ 000eca2a e072
.org 0xeca2c
	ldrb r0, [r4, #28]	@ 000eca2c 207f
.org 0xeca2e
	strb r0, [r4, #29]	@ 000eca2e 6077
.org 0xeca30
	str r7, [r4, #40]	@ 000eca30 a762
.org 0xeca32
	mov r2, r8	@ 000eca32 4246
.org 0xeca34
	ldr r0, [r2, #0]	@ 000eca34 1068
.org 0xeca36
	ldr r1, [r2, #4]	@ 000eca36 5168
.org 0xeca38
	str r0, [r4, #84]	@ 000eca38 6065
.org 0xeca3a
	str r1, [r4, #88]	@ 000eca3a a165
.org 0xeca3c
	strb r6, [r4, #16]	@ 000eca3c 2674
.org 0xeca3e
	strb r5, [r4, #17]	@ 000eca3e 6574
.org 0xeca40
	adds r0, r4, #0	@ 000eca40 201c
.org 0xeca42
	adds r0, #180	@ 000eca42 b430
.org 0xeca44
	strb r3, [r0, #0]	@ 000eca44 0370
.org 0xeca46
	adds r0, r4, #0	@ 000eca46 201c
.org 0xeca48
	pop {r3}	@ 000eca48 08bc
.org 0xeca4a
	mov r8, r3	@ 000eca4a 9846
.org 0xeca4c
	pop {r4, r5, r6, r7}	@ 000eca4c f0bc
.org 0xeca4e
	pop {r1}	@ 000eca4e 02bc
.org 0xeca50
	bx r1	@ 000eca50 0847
