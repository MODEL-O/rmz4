@ FUN_080cdaa4  entry 0x080cdaa4  size 82
.thumb
.org 0xcdaa4
FUN_080cdaa4:
	push {r4, r5, r6, lr}	@ 000cdaa4 70b5
.org 0xcdaa6
	adds r4, r0, #0	@ 000cdaa6 041c
.org 0xcdaa8
	lsls r1, r1, #24	@ 000cdaa8 0906
.org 0xcdaaa
	lsrs r6, r1, #24	@ 000cdaaa 0e0e
.org 0xcdaac
	lsls r2, r2, #24	@ 000cdaac 1206
.org 0xcdaae
	lsrs r5, r2, #24	@ 000cdaae 150e
.org 0xcdab0
	ldr r0, [pc, #68]	@ 000cdab0 1148
.org 0xcdab2
	ldr r0, [r0, #0]	@ 000cdab2 0068
.org 0xcdab4
	bl 0x5500	@ 000cdab4 37f724fd
.org 0xcdab8
	adds r3, r0, #0	@ 000cdab8 031c
.org 0xcdaba
	cmp r3, #0	@ 000cdaba 002b
.org 0xcdabc
	beq.n 0xcdaee	@ 000cdabc 17d0
.org 0xcdabe
	adds r1, r3, #0	@ 000cdabe 191c
.org 0xcdac0
	adds r1, #37	@ 000cdac0 2531
.org 0xcdac2
	movs r2, #0	@ 000cdac2 0022
.org 0xcdac4
	movs r0, #8	@ 000cdac4 0820
.org 0xcdac6
	strb r0, [r1, #0]	@ 000cdac6 0870
.org 0xcdac8
	ldr r0, [pc, #48]	@ 000cdac8 0c48
.org 0xcdaca
	movs r1, #51	@ 000cdaca 3321
.org 0xcdacc
	strb r1, [r3, #9]	@ 000cdacc 5972
.org 0xcdace
	adds r0, #204	@ 000cdace cc30
.org 0xcdad0
	ldr r0, [r0, #0]	@ 000cdad0 0068
.org 0xcdad2
	ldr r0, [r0, #0]	@ 000cdad2 0068
.org 0xcdad4
	str r0, [r3, #20]	@ 000cdad4 5861
.org 0xcdad6
	movs r0, #0	@ 000cdad6 0020
.org 0xcdad8
	strh r2, [r3, #32]	@ 000cdad8 1a84
.org 0xcdada
	adds r1, r3, #0	@ 000cdada 191c
.org 0xcdadc
	adds r1, #34	@ 000cdadc 2231
.org 0xcdade
	strb r0, [r1, #0]	@ 000cdade 0870
.org 0xcdae0
	str r4, [r3, #40]	@ 000cdae0 9c62
.org 0xcdae2
	ldr r0, [r4, #84]	@ 000cdae2 606d
.org 0xcdae4
	ldr r1, [r4, #88]	@ 000cdae4 a16d
.org 0xcdae6
	str r0, [r3, #84]	@ 000cdae6 5865
.org 0xcdae8
	str r1, [r3, #88]	@ 000cdae8 9965
.org 0xcdaea
	strb r6, [r3, #16]	@ 000cdaea 1e74
.org 0xcdaec
	strb r5, [r3, #17]	@ 000cdaec 5d74
.org 0xcdaee
	adds r0, r3, #0	@ 000cdaee 181c
.org 0xcdaf0
	pop {r4, r5, r6}	@ 000cdaf0 70bc
.org 0xcdaf2
	pop {r1}	@ 000cdaf2 02bc
.org 0xcdaf4
	bx r1	@ 000cdaf4 0847
