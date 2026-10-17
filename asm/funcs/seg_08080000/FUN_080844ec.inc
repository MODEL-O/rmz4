@ FUN_080844ec  entry 0x080844ec  size 46
.thumb
.org 0x844ec
FUN_080844ec:
	push {r4, lr}	@ 000844ec 10b5
.org 0x844ee
	adds r4, r0, #0	@ 000844ee 041c
.org 0x844f0
	bl 0x1cff0	@ 000844f0 98f77efd
.org 0x844f4
	ldr r0, [r4, #88]	@ 000844f4 a06d
.org 0x844f6
	ldr r1, [pc, #36]	@ 000844f6 0949
.org 0x844f8
	adds r0, r0, r1	@ 000844f8 4018
.org 0x844fa
	str r0, [r4, #88]	@ 000844fa a065
.org 0x844fc
	adds r1, r4, #0	@ 000844fc 211c
.org 0x844fe
	adds r1, #180	@ 000844fe b431
.org 0x84500
	ldr r1, [r1, #4]	@ 00084500 4968
.org 0x84502
	cmp r0, r1	@ 00084502 8842
.org 0x84504
	bge.n 0x84514	@ 00084504 06da
.org 0x84506
	str r1, [r4, #88]	@ 00084506 a165
.org 0x84508
	movs r0, #0	@ 00084508 0020
.org 0x8450a
	movs r1, #2	@ 0008450a 0221
.org 0x8450c
	strb r1, [r4, #13]	@ 0008450c 6173
.org 0x8450e
	strb r0, [r4, #14]	@ 0008450e a073
.org 0x84510
	movs r0, #127	@ 00084510 7f20
.org 0x84512
	strb r0, [r4, #19]	@ 00084512 e074
.org 0x84514
	pop {r4}	@ 00084514 10bc
.org 0x84516
	pop {r0}	@ 00084516 01bc
.org 0x84518
	bx r0	@ 00084518 0047
