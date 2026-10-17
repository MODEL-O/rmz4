@ FUN_080d9890  entry 0x080d9890  size 76
.thumb
.org 0xd9890
FUN_080d9890:
	push {r4, lr}	@ 000d9890 10b5
.org 0xd9892
	adds r4, r0, #0	@ 000d9892 041c
.org 0xd9894
	bl 0x1cff0	@ 000d9894 43f7acfb
.org 0xd9898
	ldr r2, [r4, #92]	@ 000d9898 e26d
.org 0xd989a
	ldr r0, [r4, #100]	@ 000d989a 606e
.org 0xd989c
	subs r2, r2, r0	@ 000d989c 121a
.org 0xd989e
	str r2, [r4, #92]	@ 000d989e e265
.org 0xd98a0
	ldr r1, [r4, #96]	@ 000d98a0 216e
.org 0xd98a2
	ldr r0, [r4, #104]	@ 000d98a2 a06e
.org 0xd98a4
	subs r1, r1, r0	@ 000d98a4 091a
.org 0xd98a6
	str r1, [r4, #96]	@ 000d98a6 2166
.org 0xd98a8
	ldr r0, [r4, #84]	@ 000d98a8 606d
.org 0xd98aa
	adds r0, r0, r2	@ 000d98aa 8018
.org 0xd98ac
	str r0, [r4, #84]	@ 000d98ac 6065
.org 0xd98ae
	ldr r0, [r4, #88]	@ 000d98ae a06d
.org 0xd98b0
	adds r0, r0, r1	@ 000d98b0 4018
.org 0xd98b2
	str r0, [r4, #88]	@ 000d98b2 a065
.org 0xd98b4
	adds r0, r4, #0	@ 000d98b4 201c
.org 0xd98b6
	adds r0, #115	@ 000d98b6 7330
.org 0xd98b8
	ldrb r0, [r0, #0]	@ 000d98b8 0078
.org 0xd98ba
	cmp r0, #3	@ 000d98ba 0328
.org 0xd98bc
	bne.n 0xd98d6	@ 000d98bc 0bd1
.org 0xd98be
	ldr r1, [pc, #28]	@ 000d98be 0749
.org 0xd98c0
	ldrb r0, [r4, #9]	@ 000d98c0 607a
.org 0xd98c2
	lsls r0, r0, #2	@ 000d98c2 8000
.org 0xd98c4
	adds r0, r0, r1	@ 000d98c4 4018
.org 0xd98c6
	movs r1, #2	@ 000d98c6 0221
.org 0xd98c8
	str r1, [r4, #12]	@ 000d98c8 e160
.org 0xd98ca
	ldr r0, [r0, #0]	@ 000d98ca 0068
.org 0xd98cc
	ldr r0, [r0, #8]	@ 000d98cc 8068
.org 0xd98ce
	str r0, [r4, #20]	@ 000d98ce 6061
.org 0xd98d0
	adds r0, r4, #0	@ 000d98d0 201c
.org 0xd98d2
	bl 0xd9518	@ 000d98d2 fff721fe
.org 0xd98d6
	pop {r4}	@ 000d98d6 10bc
.org 0xd98d8
	pop {r0}	@ 000d98d8 01bc
.org 0xd98da
	bx r0	@ 000d98da 0047
