@ FUN_08029ba8  entry 0x08029ba8  size 48
.thumb
.org 0x29ba8
FUN_08029ba8:
	push {r4, lr}	@ 00029ba8 10b5
.org 0x29baa
	adds r4, r0, #0	@ 00029baa 041c
.org 0x29bac
	bl 0x2aa44	@ 00029bac 00f04aff
.org 0x29bb0
	ldr r3, [pc, #36]	@ 00029bb0 094b
.org 0x29bb2
	movs r2, #0	@ 00029bb2 0022
.org 0x29bb4
	movs r1, #0	@ 00029bb4 0021
.org 0x29bb6
	strh r1, [r3, #0]	@ 00029bb6 1980
.org 0x29bb8
	movs r0, #255	@ 00029bb8 ff20
.org 0x29bba
	strb r0, [r3, #14]	@ 00029bba 9873
.org 0x29bbc
	ldr r0, [pc, #28]	@ 00029bbc 0748
.org 0x29bbe
	strh r1, [r0, #0]	@ 00029bbe 0180
.org 0x29bc0
	strb r2, [r4, #3]	@ 00029bc0 e270
.org 0x29bc2
	strb r2, [r4, #2]	@ 00029bc2 a270
.org 0x29bc4
	strb r2, [r4, #1]	@ 00029bc4 6270
.org 0x29bc6
	strb r2, [r4, #0]	@ 00029bc6 2270
.org 0x29bc8
	strh r1, [r4, #10]	@ 00029bc8 6181
.org 0x29bca
	strh r1, [r4, #8]	@ 00029bca 2181
.org 0x29bcc
	strh r1, [r4, #6]	@ 00029bcc e180
.org 0x29bce
	strh r1, [r4, #4]	@ 00029bce a180
.org 0x29bd0
	str r1, [r4, #12]	@ 00029bd0 e160
.org 0x29bd2
	pop {r4}	@ 00029bd2 10bc
.org 0x29bd4
	pop {r0}	@ 00029bd4 01bc
.org 0x29bd6
	bx r0	@ 00029bd6 0047
