@ FUN_080ce138  entry 0x080ce138  size 72
.thumb
.org 0xce138
FUN_080ce138:
	push {r4, lr}	@ 000ce138 10b5
.org 0xce13a
	adds r4, r0, #0	@ 000ce13a 041c
.org 0xce13c
	bl 0x1cff0	@ 000ce13c 4ef758ff
.org 0xce140
	ldr r0, [r4, #84]	@ 000ce140 606d
.org 0xce142
	ldr r1, [r4, #92]	@ 000ce142 e16d
.org 0xce144
	adds r0, r0, r1	@ 000ce144 4018
.org 0xce146
	str r0, [r4, #84]	@ 000ce146 6065
.org 0xce148
	ldr r0, [r4, #88]	@ 000ce148 a06d
.org 0xce14a
	ldr r1, [r4, #96]	@ 000ce14a 216e
.org 0xce14c
	adds r0, r0, r1	@ 000ce14c 4018
.org 0xce14e
	str r0, [r4, #88]	@ 000ce14e a065
.org 0xce150
	ldr r0, [pc, #44]	@ 000ce150 0b48
.org 0xce152
	adds r1, r4, #0	@ 000ce152 211c
.org 0xce154
	adds r1, #84	@ 000ce154 5431
.org 0xce156
	bl 0x1fb14	@ 000ce156 51f7ddfc
.org 0xce15a
	movs r1, #192	@ 000ce15a c021
.org 0xce15c
	lsls r1, r1, #6	@ 000ce15c 8901
.org 0xce15e
	cmp r0, r1	@ 000ce15e 8842
.org 0xce160
	bls.n 0xce17a	@ 000ce160 0bd9
.org 0xce162
	ldr r1, [pc, #32]	@ 000ce162 0849
.org 0xce164
	ldrb r0, [r4, #9]	@ 000ce164 607a
.org 0xce166
	lsls r0, r0, #2	@ 000ce166 8000
.org 0xce168
	adds r0, r0, r1	@ 000ce168 4018
.org 0xce16a
	movs r1, #2	@ 000ce16a 0221
.org 0xce16c
	str r1, [r4, #12]	@ 000ce16c e160
.org 0xce16e
	ldr r0, [r0, #0]	@ 000ce16e 0068
.org 0xce170
	ldr r0, [r0, #8]	@ 000ce170 8068
.org 0xce172
	str r0, [r4, #20]	@ 000ce172 6061
.org 0xce174
	adds r0, r4, #0	@ 000ce174 201c
.org 0xce176
	bl 0xcde30	@ 000ce176 fff75bfe
.org 0xce17a
	pop {r4}	@ 000ce17a 10bc
.org 0xce17c
	pop {r0}	@ 000ce17c 01bc
.org 0xce17e
	bx r0	@ 000ce17e 0047
