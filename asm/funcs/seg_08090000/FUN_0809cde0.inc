@ FUN_0809cde0  entry 0x0809cde0  size 50
.thumb
.org 0x9cde0
FUN_0809cde0:
	push {r4, lr}	@ 0009cde0 10b5
.org 0x9cde2
	adds r4, r0, #0	@ 0009cde2 041c
.org 0x9cde4
	ldr r1, [pc, #44]	@ 0009cde4 0b49
.org 0x9cde6
	ldrb r0, [r4, #9]	@ 0009cde6 607a
.org 0x9cde8
	lsls r0, r0, #2	@ 0009cde8 8000
.org 0x9cdea
	adds r0, r0, r1	@ 0009cdea 4018
.org 0x9cdec
	movs r1, #1	@ 0009cdec 0121
.org 0x9cdee
	str r1, [r4, #12]	@ 0009cdee e160
.org 0x9cdf0
	ldr r0, [r0, #0]	@ 0009cdf0 0068
.org 0x9cdf2
	ldr r0, [r0, #4]	@ 0009cdf2 4068
.org 0x9cdf4
	str r0, [r4, #20]	@ 0009cdf4 6061
.org 0x9cdf6
	ldr r1, [pc, #32]	@ 0009cdf6 0849
.org 0x9cdf8
	ldrb r0, [r4, #16]	@ 0009cdf8 207c
.org 0x9cdfa
	lsls r0, r0, #2	@ 0009cdfa 8000
.org 0x9cdfc
	adds r0, r0, r1	@ 0009cdfc 4018
.org 0x9cdfe
	ldr r1, [r0, #0]	@ 0009cdfe 0168
.org 0x9ce00
	adds r0, r4, #0	@ 0009ce00 201c
.org 0x9ce02
	bl 0x128f80	@ 0009ce02 8cf0bdf8
.org 0x9ce06
	adds r0, r4, #0	@ 0009ce06 201c
.org 0x9ce08
	bl 0x9ce1c	@ 0009ce08 00f008f8
.org 0x9ce0c
	pop {r4}	@ 0009ce0c 10bc
.org 0x9ce0e
	pop {r0}	@ 0009ce0e 01bc
.org 0x9ce10
	bx r0	@ 0009ce10 0047
