@ FUN_080d37ac  entry 0x080d37ac  size 52
.thumb
.org 0xd37ac
FUN_080d37ac:
	push {lr}	@ 000d37ac 00b5
.org 0xd37ae
	adds r2, r0, #0	@ 000d37ae 021c
.org 0xd37b0
	ldrb r3, [r2, #16]	@ 000d37b0 137c
.org 0xd37b2
	cmp r3, #0	@ 000d37b2 002b
.org 0xd37b4
	bne.n 0xd37c2	@ 000d37b4 05d1
.org 0xd37b6
	ldr r1, [pc, #40]	@ 000d37b6 0a49
.org 0xd37b8
	ldrb r0, [r2, #17]	@ 000d37b8 507c
.org 0xd37ba
	lsls r0, r0, #2	@ 000d37ba 8000
.org 0xd37bc
	adds r1, #4	@ 000d37bc 0431
.org 0xd37be
	adds r0, r0, r1	@ 000d37be 4018
.org 0xd37c0
	str r3, [r0, #0]	@ 000d37c0 0360
.org 0xd37c2
	ldrb r1, [r2, #10]	@ 000d37c2 917a
.org 0xd37c4
	movs r0, #254	@ 000d37c4 fe20
.org 0xd37c6
	ands r0, r1	@ 000d37c6 0840
.org 0xd37c8
	strb r0, [r2, #10]	@ 000d37c8 9072
.org 0xd37ca
	ldr r1, [pc, #24]	@ 000d37ca 0649
.org 0xd37cc
	ldrb r0, [r2, #9]	@ 000d37cc 507a
.org 0xd37ce
	lsls r0, r0, #2	@ 000d37ce 8000
.org 0xd37d0
	adds r0, r0, r1	@ 000d37d0 4018
.org 0xd37d2
	movs r1, #4	@ 000d37d2 0421
.org 0xd37d4
	str r1, [r2, #12]	@ 000d37d4 d160
.org 0xd37d6
	ldr r0, [r0, #0]	@ 000d37d6 0068
.org 0xd37d8
	ldr r0, [r0, #16]	@ 000d37d8 0069
.org 0xd37da
	str r0, [r2, #20]	@ 000d37da 5061
.org 0xd37dc
	pop {r0}	@ 000d37dc 01bc
.org 0xd37de
	bx r0	@ 000d37de 0047
