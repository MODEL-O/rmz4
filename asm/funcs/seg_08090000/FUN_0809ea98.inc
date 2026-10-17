@ FUN_0809ea98  entry 0x0809ea98  size 86
.thumb
.org 0x9ea98
FUN_0809ea98:
	push {r4, r5, r6, lr}	@ 0009ea98 70b5
.org 0x9ea9a
	adds r6, r0, #0	@ 0009ea9a 061c
.org 0x9ea9c
	lsls r1, r1, #24	@ 0009ea9c 0906
.org 0x9ea9e
	lsrs r5, r1, #24	@ 0009ea9e 0d0e
.org 0x9eaa0
	lsls r2, r2, #24	@ 0009eaa0 1206
.org 0x9eaa2
	lsrs r4, r2, #24	@ 0009eaa2 140e
.org 0x9eaa4
	ldr r0, [pc, #72]	@ 0009eaa4 1248
.org 0x9eaa6
	ldr r0, [r0, #0]	@ 0009eaa6 0068
.org 0x9eaa8
	bl 0x5500	@ 0009eaa8 66f72afd
.org 0x9eaac
	adds r3, r0, #0	@ 0009eaac 031c
.org 0x9eaae
	cmp r3, #0	@ 0009eaae 002b
.org 0x9eab0
	beq.n 0x9eae6	@ 0009eab0 19d0
.org 0x9eab2
	adds r1, r3, #0	@ 0009eab2 191c
.org 0x9eab4
	adds r1, #37	@ 0009eab4 2531
.org 0x9eab6
	movs r2, #0	@ 0009eab6 0022
.org 0x9eab8
	movs r0, #24	@ 0009eab8 1820
.org 0x9eaba
	strb r0, [r1, #0]	@ 0009eaba 0870
.org 0x9eabc
	ldr r0, [pc, #52]	@ 0009eabc 0d48
.org 0x9eabe
	movs r1, #46	@ 0009eabe 2e21
.org 0x9eac0
	strb r1, [r3, #9]	@ 0009eac0 5972
.org 0x9eac2
	adds r0, #184	@ 0009eac2 b830
.org 0x9eac4
	ldr r0, [r0, #0]	@ 0009eac4 0068
.org 0x9eac6
	ldr r0, [r0, #0]	@ 0009eac6 0068
.org 0x9eac8
	str r0, [r3, #20]	@ 0009eac8 5861
.org 0x9eaca
	movs r0, #0	@ 0009eaca 0020
.org 0x9eacc
	strh r2, [r3, #32]	@ 0009eacc 1a84
.org 0x9eace
	adds r1, r3, #0	@ 0009eace 191c
.org 0x9ead0
	adds r1, #34	@ 0009ead0 2231
.org 0x9ead2
	strb r0, [r1, #0]	@ 0009ead2 0870
.org 0x9ead4
	ldrb r1, [r3, #11]	@ 0009ead4 d97a
.org 0x9ead6
	movs r0, #16	@ 0009ead6 1020
.org 0x9ead8
	orrs r0, r1	@ 0009ead8 0843
.org 0x9eada
	strb r0, [r3, #11]	@ 0009eada d872
.org 0x9eadc
	ldrb r0, [r3, #28]	@ 0009eadc 187f
.org 0x9eade
	strb r0, [r3, #29]	@ 0009eade 5877
.org 0x9eae0
	str r6, [r3, #40]	@ 0009eae0 9e62
.org 0x9eae2
	strb r5, [r3, #16]	@ 0009eae2 1d74
.org 0x9eae4
	strb r4, [r3, #17]	@ 0009eae4 5c74
.org 0x9eae6
	adds r0, r3, #0	@ 0009eae6 181c
.org 0x9eae8
	pop {r4, r5, r6}	@ 0009eae8 70bc
.org 0x9eaea
	pop {r1}	@ 0009eaea 02bc
.org 0x9eaec
	bx r1	@ 0009eaec 0847
