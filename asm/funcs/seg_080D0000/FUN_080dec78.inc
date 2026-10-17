@ FUN_080dec78  entry 0x080dec78  size 70
.thumb
.org 0xdec78
FUN_080dec78:
	push {r4, r5, lr}	@ 000dec78 30b5
.org 0xdec7a
	adds r4, r0, #0	@ 000dec7a 041c
.org 0xdec7c
	adds r5, r1, #0	@ 000dec7c 0d1c
.org 0xdec7e
	ldr r0, [pc, #64]	@ 000dec7e 1048
.org 0xdec80
	ldr r0, [r0, #0]	@ 000dec80 0068
.org 0xdec82
	bl 0x5500	@ 000dec82 26f73dfc
.org 0xdec86
	adds r3, r0, #0	@ 000dec86 031c
.org 0xdec88
	cmp r3, #0	@ 000dec88 002b
.org 0xdec8a
	beq.n 0xdecb8	@ 000dec8a 15d0
.org 0xdec8c
	adds r1, r3, #0	@ 000dec8c 191c
.org 0xdec8e
	adds r1, #37	@ 000dec8e 2531
.org 0xdec90
	movs r2, #0	@ 000dec90 0022
.org 0xdec92
	movs r0, #1	@ 000dec92 0120
.org 0xdec94
	strb r0, [r1, #0]	@ 000dec94 0870
.org 0xdec96
	ldr r0, [pc, #44]	@ 000dec96 0b48
.org 0xdec98
	movs r1, #51	@ 000dec98 3321
.org 0xdec9a
	strb r1, [r3, #9]	@ 000dec9a 5972
.org 0xdec9c
	adds r0, #204	@ 000dec9c cc30
.org 0xdec9e
	ldr r0, [r0, #0]	@ 000dec9e 0068
.org 0xdeca0
	ldr r0, [r0, #0]	@ 000deca0 0068
.org 0xdeca2
	str r0, [r3, #20]	@ 000deca2 5861
.org 0xdeca4
	movs r1, #0	@ 000deca4 0021
.org 0xdeca6
	strh r2, [r3, #32]	@ 000deca6 1a84
.org 0xdeca8
	adds r0, r3, #0	@ 000deca8 181c
.org 0xdecaa
	adds r0, #34	@ 000decaa 2230
.org 0xdecac
	strb r1, [r0, #0]	@ 000decac 0170
.org 0xdecae
	str r4, [r3, #40]	@ 000decae 9c62
.org 0xdecb0
	str r5, [r3, #44]	@ 000decb0 dd62
.org 0xdecb2
	movs r0, #2	@ 000decb2 0220
.org 0xdecb4
	strb r0, [r3, #16]	@ 000decb4 1874
.org 0xdecb6
	strb r1, [r3, #17]	@ 000decb6 5974
.org 0xdecb8
	pop {r4, r5}	@ 000decb8 30bc
.org 0xdecba
	pop {r0}	@ 000decba 01bc
.org 0xdecbc
	bx r0	@ 000decbc 0047
