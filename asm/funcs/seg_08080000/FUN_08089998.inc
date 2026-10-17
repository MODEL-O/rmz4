@ FUN_08089998  entry 0x08089998  size 84
.thumb
.org 0x89998
FUN_08089998:
	push {r4, r5, lr}	@ 00089998 30b5
.org 0x8999a
	adds r4, r0, #0	@ 0008999a 041c
.org 0x8999c
	ldrb r5, [r4, #14]	@ 0008999c a57b
.org 0x8999e
	cmp r5, #0	@ 0008999e 002d
.org 0x899a0
	bne.n 0x899b2	@ 000899a0 07d1
.org 0x899a2
	adds r0, #116	@ 000899a2 7430
.org 0x899a4
	ldr r1, [pc, #68]	@ 000899a4 1149
.org 0x899a6
	bl 0x5784	@ 000899a6 7bf7edfe
.org 0x899aa
	str r5, [r4, #96]	@ 000899aa 2566
.org 0x899ac
	ldrb r0, [r4, #14]	@ 000899ac a07b
.org 0x899ae
	adds r0, #1	@ 000899ae 0130
.org 0x899b0
	strb r0, [r4, #14]	@ 000899b0 a073
.org 0x899b2
	adds r5, r4, #0	@ 000899b2 251c
.org 0x899b4
	adds r5, #188	@ 000899b4 bc35
.org 0x899b6
	ldr r0, [r5, #0]	@ 000899b6 2868
.org 0x899b8
	bl 0x2b3e4	@ 000899b8 a1f714fd
.org 0x899bc
	cmp r0, #0	@ 000899bc 0028
.org 0x899be
	beq.n 0x899e6	@ 000899be 12d0
.org 0x899c0
	adds r0, r4, #0	@ 000899c0 201c
.org 0x899c2
	adds r0, #116	@ 000899c2 7430
.org 0x899c4
	ldr r2, [pc, #40]	@ 000899c4 0a4a
.org 0x899c6
	adds r1, r4, #0	@ 000899c6 211c
.org 0x899c8
	adds r1, #192	@ 000899c8 c031
.org 0x899ca
	ldrb r1, [r1, #0]	@ 000899ca 0978
.org 0x899cc
	adds r1, r1, r2	@ 000899cc 8918
.org 0x899ce
	ldrb r2, [r1, #0]	@ 000899ce 0a78
.org 0x899d0
	lsls r1, r2, #1	@ 000899d0 5100
.org 0x899d2
	adds r1, r1, r2	@ 000899d2 8918
.org 0x899d4
	lsls r1, r1, #3	@ 000899d4 c900
.org 0x899d6
	ldr r2, [pc, #28]	@ 000899d6 074a
.org 0x899d8
	adds r1, r1, r2	@ 000899d8 8918
.org 0x899da
	bl 0x5784	@ 000899da 7bf7d3fe
.org 0x899de
	movs r0, #0	@ 000899de 0020
.org 0x899e0
	str r0, [r5, #0]	@ 000899e0 2860
.org 0x899e2
	strb r0, [r4, #13]	@ 000899e2 6073
.org 0x899e4
	strb r0, [r4, #14]	@ 000899e4 a073
.org 0x899e6
	pop {r4, r5}	@ 000899e6 30bc
.org 0x899e8
	pop {r0}	@ 000899e8 01bc
.org 0x899ea
	bx r0	@ 000899ea 0047
