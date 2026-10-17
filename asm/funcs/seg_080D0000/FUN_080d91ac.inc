@ FUN_080d91ac  entry 0x080d91ac  size 60
.thumb
.org 0xd91ac
FUN_080d91ac:
	push {lr}	@ 000d91ac 00b5
.org 0xd91ae
	adds r3, r0, #0	@ 000d91ae 031c
.org 0xd91b0
	ldrb r1, [r3, #10]	@ 000d91b0 997a
.org 0xd91b2
	movs r0, #16	@ 000d91b2 1020
.org 0xd91b4
	ands r0, r1	@ 000d91b4 0840
.org 0xd91b6
	cmp r0, #0	@ 000d91b6 0028
.org 0xd91b8
	beq.n 0xd91c0	@ 000d91b8 02d0
.org 0xd91ba
	movs r0, #192	@ 000d91ba c020
.org 0xd91bc
	negs r0, r0	@ 000d91bc 4042
.org 0xd91be
	b.n 0xd91c2	@ 000d91be 00e0
.org 0xd91c0
	movs r0, #192	@ 000d91c0 c020
.org 0xd91c2
	str r0, [r3, #92]	@ 000d91c2 d865
.org 0xd91c4
	movs r0, #0	@ 000d91c4 0020
.org 0xd91c6
	str r0, [r3, #96]	@ 000d91c6 1866
.org 0xd91c8
	ldr r2, [pc, #28]	@ 000d91c8 074a
.org 0xd91ca
	ldr r1, [r2, #0]	@ 000d91ca 1168
.org 0xd91cc
	ldr r0, [pc, #28]	@ 000d91cc 0748
.org 0xd91ce
	muls r0, r1	@ 000d91ce 4843
.org 0xd91d0
	ldr r1, [pc, #28]	@ 000d91d0 0749
.org 0xd91d2
	adds r0, r0, r1	@ 000d91d2 4018
.org 0xd91d4
	lsls r0, r0, #1	@ 000d91d4 4000
.org 0xd91d6
	lsrs r1, r0, #1	@ 000d91d6 4108
.org 0xd91d8
	str r1, [r2, #0]	@ 000d91d8 1160
.org 0xd91da
	lsrs r0, r0, #17	@ 000d91da 400c
.org 0xd91dc
	movs r1, #7	@ 000d91dc 0721
.org 0xd91de
	ands r0, r1	@ 000d91de 0840
.org 0xd91e0
	adds r0, #76	@ 000d91e0 4c30
.org 0xd91e2
	strb r0, [r3, #18]	@ 000d91e2 9874
.org 0xd91e4
	pop {r0}	@ 000d91e4 01bc
.org 0xd91e6
	bx r0	@ 000d91e6 0047
