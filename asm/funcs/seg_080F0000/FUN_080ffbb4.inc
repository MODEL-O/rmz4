@ FUN_080ffbb4  entry 0x080ffbb4  size 46
.thumb
.org 0xffbb4
FUN_080ffbb4:
	push {r4, lr}	@ 000ffbb4 10b5
.org 0xffbb6
	adds r4, r0, #0	@ 000ffbb6 041c
.org 0xffbb8
	ldr r0, [pc, #40]	@ 000ffbb8 0a48
.org 0xffbba
	adds r1, r4, #0	@ 000ffbba 211c
.org 0xffbbc
	adds r1, #84	@ 000ffbbc 5431
.org 0xffbbe
	bl 0x1fb14	@ 000ffbbe 1ff7a9ff
.org 0xffbc2
	movs r1, #240	@ 000ffbc2 f021
.org 0xffbc4
	lsls r1, r1, #8	@ 000ffbc4 0902
.org 0xffbc6
	cmp r0, r1	@ 000ffbc6 8842
.org 0xffbc8
	bls.n 0xffbdc	@ 000ffbc8 08d9
.org 0xffbca
	ldr r1, [pc, #28]	@ 000ffbca 0749
.org 0xffbcc
	ldrb r0, [r4, #9]	@ 000ffbcc 607a
.org 0xffbce
	lsls r0, r0, #2	@ 000ffbce 8000
.org 0xffbd0
	adds r0, r0, r1	@ 000ffbd0 4018
.org 0xffbd2
	movs r1, #2	@ 000ffbd2 0221
.org 0xffbd4
	str r1, [r4, #12]	@ 000ffbd4 e160
.org 0xffbd6
	ldr r0, [r0, #0]	@ 000ffbd6 0068
.org 0xffbd8
	ldr r0, [r0, #8]	@ 000ffbd8 8068
.org 0xffbda
	str r0, [r4, #20]	@ 000ffbda 6061
.org 0xffbdc
	pop {r4}	@ 000ffbdc 10bc
.org 0xffbde
	pop {r0}	@ 000ffbde 01bc
.org 0xffbe0
	bx r0	@ 000ffbe0 0047
