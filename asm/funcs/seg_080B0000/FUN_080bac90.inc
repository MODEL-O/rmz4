@ FUN_080bac90  entry 0x080bac90  size 108
.thumb
.org 0xbac90
FUN_080bac90:
	push {r4, r5, r6, r7, lr}	@ 000bac90 f0b5
.org 0xbac92
	adds r4, r0, #0	@ 000bac92 041c
.org 0xbac94
	adds r7, r1, #0	@ 000bac94 0f1c
.org 0xbac96
	lsls r2, r2, #24	@ 000bac96 1206
.org 0xbac98
	lsrs r6, r2, #24	@ 000bac98 160e
.org 0xbac9a
	lsls r3, r3, #24	@ 000bac9a 1b06
.org 0xbac9c
	lsrs r5, r3, #24	@ 000bac9c 1d0e
.org 0xbac9e
	ldr r0, [pc, #92]	@ 000bac9e 1748
.org 0xbaca0
	ldr r0, [r0, #0]	@ 000baca0 0068
.org 0xbaca2
	bl 0x5500	@ 000baca2 4af72dfc
.org 0xbaca6
	adds r3, r0, #0	@ 000baca6 031c
.org 0xbaca8
	cmp r3, #0	@ 000baca8 002b
.org 0xbacaa
	beq.n 0xbacf4	@ 000bacaa 23d0
.org 0xbacac
	adds r1, r3, #0	@ 000bacac 191c
.org 0xbacae
	adds r1, #37	@ 000bacae 2531
.org 0xbacb0
	movs r2, #0	@ 000bacb0 0022
.org 0xbacb2
	movs r0, #24	@ 000bacb2 1820
.org 0xbacb4
	strb r0, [r1, #0]	@ 000bacb4 0870
.org 0xbacb6
	ldr r0, [pc, #72]	@ 000bacb6 1248
.org 0xbacb8
	movs r1, #111	@ 000bacb8 6f21
.org 0xbacba
	strb r1, [r3, #9]	@ 000bacba 5972
.org 0xbacbc
	movs r1, #222	@ 000bacbc de21
.org 0xbacbe
	lsls r1, r1, #1	@ 000bacbe 4900
.org 0xbacc0
	adds r0, r0, r1	@ 000bacc0 4018
.org 0xbacc2
	ldr r0, [r0, #0]	@ 000bacc2 0068
.org 0xbacc4
	ldr r0, [r0, #0]	@ 000bacc4 0068
.org 0xbacc6
	str r0, [r3, #20]	@ 000bacc6 5861
.org 0xbacc8
	movs r0, #0	@ 000bacc8 0020
.org 0xbacca
	strh r2, [r3, #32]	@ 000bacca 1a84
.org 0xbaccc
	adds r1, r3, #0	@ 000baccc 191c
.org 0xbacce
	adds r1, #34	@ 000bacce 2231
.org 0xbacd0
	strb r0, [r1, #0]	@ 000bacd0 0870
.org 0xbacd2
	ldrb r1, [r3, #11]	@ 000bacd2 d97a
.org 0xbacd4
	movs r0, #16	@ 000bacd4 1020
.org 0xbacd6
	orrs r0, r1	@ 000bacd6 0843
.org 0xbacd8
	strb r0, [r3, #11]	@ 000bacd8 d872
.org 0xbacda
	ldrb r0, [r3, #28]	@ 000bacda 187f
.org 0xbacdc
	strb r0, [r3, #29]	@ 000bacdc 5877
.org 0xbacde
	str r4, [r3, #40]	@ 000bacde 9c62
.org 0xbace0
	ldr r0, [r7, #0]	@ 000bace0 3868
.org 0xbace2
	ldr r1, [r7, #4]	@ 000bace2 7968
.org 0xbace4
	str r0, [r3, #84]	@ 000bace4 5865
.org 0xbace6
	str r1, [r3, #88]	@ 000bace6 9965
.org 0xbace8
	strb r6, [r3, #16]	@ 000bace8 1e74
.org 0xbacea
	strb r5, [r3, #17]	@ 000bacea 5d74
.org 0xbacec
	adds r1, r4, #0	@ 000bacec 211c
.org 0xbacee
	adds r1, #180	@ 000bacee b431
.org 0xbacf0
	movs r0, #1	@ 000bacf0 0120
.org 0xbacf2
	strb r0, [r1, #0]	@ 000bacf2 0870
.org 0xbacf4
	adds r0, r3, #0	@ 000bacf4 181c
.org 0xbacf6
	pop {r4, r5, r6, r7}	@ 000bacf6 f0bc
.org 0xbacf8
	pop {r1}	@ 000bacf8 02bc
.org 0xbacfa
	bx r1	@ 000bacfa 0847
