@ FUN_080d61d4  entry 0x080d61d4  size 62
.thumb
.org 0xd61d4
FUN_080d61d4:
	push {r4, lr}	@ 000d61d4 10b5
.org 0xd61d6
	adds r4, r0, #0	@ 000d61d6 041c
.org 0xd61d8
	ldr r0, [pc, #56]	@ 000d61d8 0e48
.org 0xd61da
	ldr r0, [r0, #0]	@ 000d61da 0068
.org 0xd61dc
	bl 0x5500	@ 000d61dc 2ff790f9
.org 0xd61e0
	adds r3, r0, #0	@ 000d61e0 031c
.org 0xd61e2
	cmp r3, #0	@ 000d61e2 002b
.org 0xd61e4
	beq.n 0xd620a	@ 000d61e4 11d0
.org 0xd61e6
	adds r1, r3, #0	@ 000d61e6 191c
.org 0xd61e8
	adds r1, #37	@ 000d61e8 2531
.org 0xd61ea
	movs r2, #0	@ 000d61ea 0022
.org 0xd61ec
	movs r0, #1	@ 000d61ec 0120
.org 0xd61ee
	strb r0, [r1, #0]	@ 000d61ee 0870
.org 0xd61f0
	ldr r1, [pc, #36]	@ 000d61f0 0949
.org 0xd61f2
	movs r0, #20	@ 000d61f2 1420
.org 0xd61f4
	strb r0, [r3, #9]	@ 000d61f4 5872
.org 0xd61f6
	ldr r0, [r1, #80]	@ 000d61f6 086d
.org 0xd61f8
	ldr r0, [r0, #0]	@ 000d61f8 0068
.org 0xd61fa
	str r0, [r3, #20]	@ 000d61fa 5861
.org 0xd61fc
	movs r0, #0	@ 000d61fc 0020
.org 0xd61fe
	strh r2, [r3, #32]	@ 000d61fe 1a84
.org 0xd6200
	adds r1, r3, #0	@ 000d6200 191c
.org 0xd6202
	adds r1, #34	@ 000d6202 2231
.org 0xd6204
	strb r0, [r1, #0]	@ 000d6204 0870
.org 0xd6206
	strb r0, [r3, #16]	@ 000d6206 1874
.org 0xd6208
	str r4, [r3, #40]	@ 000d6208 9c62
.org 0xd620a
	adds r0, r3, #0	@ 000d620a 181c
.org 0xd620c
	pop {r4}	@ 000d620c 10bc
.org 0xd620e
	pop {r1}	@ 000d620e 02bc
.org 0xd6210
	bx r1	@ 000d6210 0847
