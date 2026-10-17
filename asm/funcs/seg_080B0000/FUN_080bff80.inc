@ FUN_080bff80  entry 0x080bff80  size 76
.thumb
.org 0xbff80
FUN_080bff80:
	push {r4, lr}	@ 000bff80 10b5
.org 0xbff82
	adds r4, r0, #0	@ 000bff82 041c
.org 0xbff84
	movs r0, #53	@ 000bff84 3520
.org 0xbff86
	bl 0x2b10	@ 000bff86 42f7c3fd
.org 0xbff8a
	ldrb r1, [r4, #10]	@ 000bff8a a17a
.org 0xbff8c
	movs r0, #254	@ 000bff8c fe20
.org 0xbff8e
	ands r0, r1	@ 000bff8e 0840
.org 0xbff90
	movs r1, #0	@ 000bff90 0021
.org 0xbff92
	strb r0, [r4, #10]	@ 000bff92 a072
.org 0xbff94
	adds r0, r4, #0	@ 000bff94 201c
.org 0xbff96
	adds r0, #140	@ 000bff96 8c30
.org 0xbff98
	str r1, [r0, #0]	@ 000bff98 0160
.org 0xbff9a
	adds r0, #4	@ 000bff9a 0430
.org 0xbff9c
	str r1, [r0, #0]	@ 000bff9c 0160
.org 0xbff9e
	adds r0, #4	@ 000bff9e 0430
.org 0xbffa0
	strb r1, [r0, #0]	@ 000bffa0 0170
.org 0xbffa2
	ldrb r1, [r4, #10]	@ 000bffa2 a17a
.org 0xbffa4
	movs r0, #251	@ 000bffa4 fb20
.org 0xbffa6
	ands r0, r1	@ 000bffa6 0840
.org 0xbffa8
	strb r0, [r4, #10]	@ 000bffa8 a072
.org 0xbffaa
	adds r1, r4, #0	@ 000bffaa 211c
.org 0xbffac
	adds r1, #84	@ 000bffac 5431
.org 0xbffae
	movs r0, #1	@ 000bffae 0120
.org 0xbffb0
	bl 0xd0c88	@ 000bffb0 10f06afe
.org 0xbffb4
	ldr r1, [pc, #20]	@ 000bffb4 0549
.org 0xbffb6
	ldrb r0, [r4, #9]	@ 000bffb6 607a
.org 0xbffb8
	lsls r0, r0, #2	@ 000bffb8 8000
.org 0xbffba
	adds r0, r0, r1	@ 000bffba 4018
.org 0xbffbc
	movs r1, #4	@ 000bffbc 0421
.org 0xbffbe
	str r1, [r4, #12]	@ 000bffbe e160
.org 0xbffc0
	ldr r0, [r0, #0]	@ 000bffc0 0068
.org 0xbffc2
	ldr r0, [r0, #16]	@ 000bffc2 0069
.org 0xbffc4
	str r0, [r4, #20]	@ 000bffc4 6061
.org 0xbffc6
	pop {r4}	@ 000bffc6 10bc
.org 0xbffc8
	pop {r0}	@ 000bffc8 01bc
.org 0xbffca
	bx r0	@ 000bffca 0047
