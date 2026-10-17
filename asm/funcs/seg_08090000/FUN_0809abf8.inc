@ FUN_0809abf8  entry 0x0809abf8  size 68
.thumb
.org 0x9abf8
FUN_0809abf8:
	push {r4, lr}	@ 0009abf8 10b5
.org 0x9abfa
	adds r4, r0, #0	@ 0009abfa 041c
.org 0x9abfc
	adds r0, #84	@ 0009abfc 5430
.org 0x9abfe
	ldrb r2, [r4, #18]	@ 0009abfe a27c
.org 0x9ac00
	movs r1, #0	@ 0009ac00 0021
.org 0x9ac02
	movs r3, #16	@ 0009ac02 1023
.org 0x9ac04
	bl 0xc62a0	@ 0009ac04 2bf04cfb
.org 0x9ac08
	adds r0, r4, #0	@ 0009ac08 201c
.org 0x9ac0a
	adds r0, #140	@ 0009ac0a 8c30
.org 0x9ac0c
	movs r1, #0	@ 0009ac0c 0021
.org 0x9ac0e
	str r1, [r0, #0]	@ 0009ac0e 0160
.org 0x9ac10
	adds r0, #4	@ 0009ac10 0430
.org 0x9ac12
	str r1, [r0, #0]	@ 0009ac12 0160
.org 0x9ac14
	adds r0, #4	@ 0009ac14 0430
.org 0x9ac16
	strb r1, [r0, #0]	@ 0009ac16 0170
.org 0x9ac18
	ldrb r1, [r4, #10]	@ 0009ac18 a17a
.org 0x9ac1a
	movs r0, #251	@ 0009ac1a fb20
.org 0x9ac1c
	ands r0, r1	@ 0009ac1c 0840
.org 0x9ac1e
	movs r1, #254	@ 0009ac1e fe21
.org 0x9ac20
	ands r0, r1	@ 0009ac20 0840
.org 0x9ac22
	strb r0, [r4, #10]	@ 0009ac22 a072
.org 0x9ac24
	ldr r1, [pc, #20]	@ 0009ac24 0549
.org 0x9ac26
	ldrb r0, [r4, #9]	@ 0009ac26 607a
.org 0x9ac28
	lsls r0, r0, #2	@ 0009ac28 8000
.org 0x9ac2a
	adds r0, r0, r1	@ 0009ac2a 4018
.org 0x9ac2c
	movs r1, #4	@ 0009ac2c 0421
.org 0x9ac2e
	str r1, [r4, #12]	@ 0009ac2e e160
.org 0x9ac30
	ldr r0, [r0, #0]	@ 0009ac30 0068
.org 0x9ac32
	ldr r0, [r0, #16]	@ 0009ac32 0069
.org 0x9ac34
	str r0, [r4, #20]	@ 0009ac34 6061
.org 0x9ac36
	pop {r4}	@ 0009ac36 10bc
.org 0x9ac38
	pop {r0}	@ 0009ac38 01bc
.org 0x9ac3a
	bx r0	@ 0009ac3a 0047
