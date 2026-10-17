@ FUN_08045abc  entry 0x08045abc  size 110
.thumb
.org 0x45abc
FUN_08045abc:
	push {r4, r5, r6, lr}	@ 00045abc 70b5
.org 0x45abe
	adds r4, r0, #0	@ 00045abe 041c
.org 0x45ac0
	ldr r5, [r4, #40]	@ 00045ac0 a56a
.org 0x45ac2
	ldr r1, [pc, #104]	@ 00045ac2 1a49
.org 0x45ac4
	ldrb r0, [r4, #9]	@ 00045ac4 607a
.org 0x45ac6
	lsls r0, r0, #2	@ 00045ac6 8000
.org 0x45ac8
	adds r0, r0, r1	@ 00045ac8 4018
.org 0x45aca
	movs r1, #1	@ 00045aca 0121
.org 0x45acc
	str r1, [r4, #12]	@ 00045acc e160
.org 0x45ace
	ldr r0, [r0, #0]	@ 00045ace 0068
.org 0x45ad0
	ldr r0, [r0, #4]	@ 00045ad0 4068
.org 0x45ad2
	str r0, [r4, #20]	@ 00045ad2 6061
.org 0x45ad4
	adds r0, r4, #0	@ 00045ad4 201c
.org 0x45ad6
	bl 0x1cc9c	@ 00045ad6 d7f7e1f8
.org 0x45ada
	adds r0, r4, #0	@ 00045ada 201c
.org 0x45adc
	bl 0x1ceec	@ 00045adc d7f706fa
.org 0x45ae0
	ldrb r0, [r4, #10]	@ 00045ae0 a07a
.org 0x45ae2
	movs r3, #1	@ 00045ae2 0123
.org 0x45ae4
	movs r6, #0	@ 00045ae4 0026
.org 0x45ae6
	orrs r0, r3	@ 00045ae6 1843
.org 0x45ae8
	movs r1, #2	@ 00045ae8 0221
.org 0x45aea
	orrs r0, r1	@ 00045aea 0843
.org 0x45aec
	strb r0, [r4, #10]	@ 00045aec a072
.org 0x45aee
	ldr r1, [pc, #64]	@ 00045aee 1049
.org 0x45af0
	adds r0, r5, #0	@ 00045af0 281c
.org 0x45af2
	adds r0, #113	@ 00045af2 7130
.org 0x45af4
	ldrb r2, [r0, #0]	@ 00045af4 0278
.org 0x45af6
	eors r2, r3	@ 00045af6 5a40
.org 0x45af8
	lsls r2, r2, #24	@ 00045af8 1206
.org 0x45afa
	asrs r2, r2, #8	@ 00045afa 1212
.org 0x45afc
	lsrs r2, r2, #16	@ 00045afc 120c
.org 0x45afe
	adds r5, #114	@ 00045afe 7235
.org 0x45b00
	movs r3, #0	@ 00045b00 0023
.org 0x45b02
	ldrsb r3, [r5, r3]	@ 00045b02 eb56
.org 0x45b04
	lsls r3, r3, #16	@ 00045b04 1b04
.org 0x45b06
	lsrs r3, r3, #16	@ 00045b06 1b0c
.org 0x45b08
	adds r0, r4, #0	@ 00045b08 201c
.org 0x45b0a
	bl 0x1cfc8	@ 00045b0a d7f75dfa
.org 0x45b0e
	adds r0, r4, #0	@ 00045b0e 201c
.org 0x45b10
	bl 0x1cff0	@ 00045b10 d7f76efa
.org 0x45b14
	adds r1, r4, #0	@ 00045b14 211c
.org 0x45b16
	adds r1, #37	@ 00045b16 2531
.org 0x45b18
	movs r0, #15	@ 00045b18 0f20
.org 0x45b1a
	strb r0, [r1, #0]	@ 00045b1a 0870
.org 0x45b1c
	strb r6, [r4, #18]	@ 00045b1c a674
.org 0x45b1e
	adds r0, r4, #0	@ 00045b1e 201c
.org 0x45b20
	bl 0x45864	@ 00045b20 fff7a0fe
.org 0x45b24
	pop {r4, r5, r6}	@ 00045b24 70bc
.org 0x45b26
	pop {r0}	@ 00045b26 01bc
.org 0x45b28
	bx r0	@ 00045b28 0047
