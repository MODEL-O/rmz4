@ FUN_081013f0  entry 0x081013f0  size 46
.thumb
.org 0x1013f0
FUN_081013f0:
	push {r4, lr}	@ 001013f0 10b5
.org 0x1013f2
	adds r4, r0, #0	@ 001013f2 041c
.org 0x1013f4
	adds r0, #84	@ 001013f4 5430
.org 0x1013f6
	movs r1, #128	@ 001013f6 8021
.org 0x1013f8
	lsls r1, r1, #1	@ 001013f8 4900
.org 0x1013fa
	ldrb r2, [r4, #10]	@ 001013fa a27a
.org 0x1013fc
	lsrs r2, r2, #4	@ 001013fc 1209
.org 0x1013fe
	movs r3, #1	@ 001013fe 0123
.org 0x101400
	ands r2, r3	@ 00101400 1a40
.org 0x101402
	bl 0xe67ac	@ 00101402 e5f7d3f9
.org 0x101406
	ldr r1, [pc, #24]	@ 00101406 0649
.org 0x101408
	ldrb r0, [r4, #9]	@ 00101408 607a
.org 0x10140a
	lsls r0, r0, #2	@ 0010140a 8000
.org 0x10140c
	adds r0, r0, r1	@ 0010140c 4018
.org 0x10140e
	movs r1, #4	@ 0010140e 0421
.org 0x101410
	str r1, [r4, #12]	@ 00101410 e160
.org 0x101412
	ldr r0, [r0, #0]	@ 00101412 0068
.org 0x101414
	ldr r0, [r0, #16]	@ 00101414 0069
.org 0x101416
	str r0, [r4, #20]	@ 00101416 6061
.org 0x101418
	pop {r4}	@ 00101418 10bc
.org 0x10141a
	pop {r0}	@ 0010141a 01bc
.org 0x10141c
	bx r0	@ 0010141c 0047
