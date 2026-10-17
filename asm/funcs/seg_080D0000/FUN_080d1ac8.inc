@ FUN_080d1ac8  entry 0x080d1ac8  size 66
.thumb
.org 0xd1ac8
FUN_080d1ac8:
	push {r4, lr}	@ 000d1ac8 10b5
.org 0xd1aca
	adds r4, r0, #0	@ 000d1aca 041c
.org 0xd1acc
	ldrb r1, [r4, #10]	@ 000d1acc a17a
.org 0xd1ace
	movs r0, #1	@ 000d1ace 0120
.org 0xd1ad0
	orrs r0, r1	@ 000d1ad0 0843
.org 0xd1ad2
	strb r0, [r4, #10]	@ 000d1ad2 a072
.org 0xd1ad4
	adds r0, r4, #0	@ 000d1ad4 201c
.org 0xd1ad6
	bl 0x1cc9c	@ 000d1ad6 4bf7e1f8
.org 0xd1ada
	adds r2, r4, #0	@ 000d1ada 221c
.org 0xd1adc
	adds r2, #73	@ 000d1adc 4932
.org 0xd1ade
	ldrb r1, [r2, #0]	@ 000d1ade 1178
.org 0xd1ae0
	movs r0, #13	@ 000d1ae0 0d20
.org 0xd1ae2
	negs r0, r0	@ 000d1ae2 4042
.org 0xd1ae4
	ands r0, r1	@ 000d1ae4 0840
.org 0xd1ae6
	strb r0, [r2, #0]	@ 000d1ae6 1070
.org 0xd1ae8
	movs r0, #128	@ 000d1ae8 8020
.org 0xd1aea
	strb r0, [r4, #19]	@ 000d1aea e074
.org 0xd1aec
	ldr r1, [pc, #28]	@ 000d1aec 0749
.org 0xd1aee
	ldrb r0, [r4, #9]	@ 000d1aee 607a
.org 0xd1af0
	lsls r0, r0, #2	@ 000d1af0 8000
.org 0xd1af2
	adds r0, r0, r1	@ 000d1af2 4018
.org 0xd1af4
	movs r1, #1	@ 000d1af4 0121
.org 0xd1af6
	str r1, [r4, #12]	@ 000d1af6 e160
.org 0xd1af8
	ldr r0, [r0, #0]	@ 000d1af8 0068
.org 0xd1afa
	ldr r0, [r0, #4]	@ 000d1afa 4068
.org 0xd1afc
	str r0, [r4, #20]	@ 000d1afc 6061
.org 0xd1afe
	adds r0, r4, #0	@ 000d1afe 201c
.org 0xd1b00
	bl 0xd1a90	@ 000d1b00 fff7c6ff
.org 0xd1b04
	pop {r4}	@ 000d1b04 10bc
.org 0xd1b06
	pop {r0}	@ 000d1b06 01bc
.org 0xd1b08
	bx r0	@ 000d1b08 0047
