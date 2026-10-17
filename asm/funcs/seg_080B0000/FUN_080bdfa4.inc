@ FUN_080bdfa4  entry 0x080bdfa4  size 66
.thumb
.org 0xbdfa4
FUN_080bdfa4:
	push {r4, lr}	@ 000bdfa4 10b5
.org 0xbdfa6
	adds r4, r0, #0	@ 000bdfa6 041c
.org 0xbdfa8
	adds r1, r4, #0	@ 000bdfa8 211c
.org 0xbdfaa
	adds r1, #84	@ 000bdfaa 5431
.org 0xbdfac
	movs r0, #2	@ 000bdfac 0220
.org 0xbdfae
	bl 0xd0c88	@ 000bdfae 12f06bfe
.org 0xbdfb2
	adds r0, r4, #0	@ 000bdfb2 201c
.org 0xbdfb4
	adds r0, #140	@ 000bdfb4 8c30
.org 0xbdfb6
	movs r1, #0	@ 000bdfb6 0021
.org 0xbdfb8
	str r1, [r0, #0]	@ 000bdfb8 0160
.org 0xbdfba
	adds r0, #4	@ 000bdfba 0430
.org 0xbdfbc
	str r1, [r0, #0]	@ 000bdfbc 0160
.org 0xbdfbe
	adds r0, #4	@ 000bdfbe 0430
.org 0xbdfc0
	strb r1, [r0, #0]	@ 000bdfc0 0170
.org 0xbdfc2
	ldrb r1, [r4, #10]	@ 000bdfc2 a17a
.org 0xbdfc4
	movs r0, #251	@ 000bdfc4 fb20
.org 0xbdfc6
	ands r0, r1	@ 000bdfc6 0840
.org 0xbdfc8
	movs r1, #254	@ 000bdfc8 fe21
.org 0xbdfca
	ands r0, r1	@ 000bdfca 0840
.org 0xbdfcc
	strb r0, [r4, #10]	@ 000bdfcc a072
.org 0xbdfce
	ldr r1, [pc, #24]	@ 000bdfce 0649
.org 0xbdfd0
	ldrb r0, [r4, #9]	@ 000bdfd0 607a
.org 0xbdfd2
	lsls r0, r0, #2	@ 000bdfd2 8000
.org 0xbdfd4
	adds r0, r0, r1	@ 000bdfd4 4018
.org 0xbdfd6
	movs r1, #4	@ 000bdfd6 0421
.org 0xbdfd8
	str r1, [r4, #12]	@ 000bdfd8 e160
.org 0xbdfda
	ldr r0, [r0, #0]	@ 000bdfda 0068
.org 0xbdfdc
	ldr r0, [r0, #16]	@ 000bdfdc 0069
.org 0xbdfde
	str r0, [r4, #20]	@ 000bdfde 6061
.org 0xbdfe0
	pop {r4}	@ 000bdfe0 10bc
.org 0xbdfe2
	pop {r0}	@ 000bdfe2 01bc
.org 0xbdfe4
	bx r0	@ 000bdfe4 0047
