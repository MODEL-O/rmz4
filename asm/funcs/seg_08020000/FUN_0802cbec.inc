@ FUN_0802cbec  entry 0x0802cbec  size 44
.thumb
.org 0x2cbec
FUN_0802cbec:
	push {r4, lr}	@ 0002cbec 10b5
.org 0x2cbee
	mov ip, r0	@ 0002cbee 8446
.org 0x2cbf0
	ldr r4, [sp, #8]	@ 0002cbf0 029c
.org 0x2cbf2
	movs r0, #188	@ 0002cbf2 bc20
.org 0x2cbf4
	lsls r0, r0, #1	@ 0002cbf4 4000
.org 0x2cbf6
	add r0, ip	@ 0002cbf6 6044
.org 0x2cbf8
	str r1, [r0, #0]	@ 0002cbf8 0160
.org 0x2cbfa
	movs r0, #190	@ 0002cbfa be20
.org 0x2cbfc
	lsls r0, r0, #1	@ 0002cbfc 4000
.org 0x2cbfe
	add r0, ip	@ 0002cbfe 6044
.org 0x2cc00
	str r3, [r0, #0]	@ 0002cc00 0360
.org 0x2cc02
	movs r0, #192	@ 0002cc02 c020
.org 0x2cc04
	lsls r0, r0, #1	@ 0002cc04 4000
.org 0x2cc06
	add r0, ip	@ 0002cc06 6044
.org 0x2cc08
	str r2, [r0, #0]	@ 0002cc08 0260
.org 0x2cc0a
	movs r0, #194	@ 0002cc0a c220
.org 0x2cc0c
	lsls r0, r0, #1	@ 0002cc0c 4000
.org 0x2cc0e
	add r0, ip	@ 0002cc0e 6044
.org 0x2cc10
	str r4, [r0, #0]	@ 0002cc10 0460
.org 0x2cc12
	pop {r4}	@ 0002cc12 10bc
.org 0x2cc14
	pop {r0}	@ 0002cc14 01bc
.org 0x2cc16
	bx r0	@ 0002cc16 0047
