@ FUN_080faca0  entry 0x080faca0  size 94
.thumb
.org 0xfaca0
FUN_080faca0:
	push {r4, r5, r6, lr}	@ 000faca0 70b5
.org 0xfaca2
	adds r5, r0, #0	@ 000faca2 051c
.org 0xfaca4
	lsls r1, r1, #24	@ 000faca4 0906
.org 0xfaca6
	lsrs r6, r1, #24	@ 000faca6 0e0e
.org 0xfaca8
	ldr r0, [pc, #84]	@ 000faca8 1548
.org 0xfacaa
	ldr r0, [r0, #0]	@ 000facaa 0068
.org 0xfacac
	bl 0x5500	@ 000facac 0af728fc
.org 0xfacb0
	adds r4, r0, #0	@ 000facb0 041c
.org 0xfacb2
	cmp r4, #0	@ 000facb2 002c
.org 0xfacb4
	beq.n 0xfacf6	@ 000facb4 1fd0
.org 0xfacb6
	adds r1, r4, #0	@ 000facb6 211c
.org 0xfacb8
	adds r1, #37	@ 000facb8 2531
.org 0xfacba
	movs r3, #0	@ 000facba 0023
.org 0xfacbc
	movs r0, #30	@ 000facbc 1e20
.org 0xfacbe
	strb r0, [r1, #0]	@ 000facbe 0870
.org 0xfacc0
	ldr r0, [pc, #64]	@ 000facc0 1048
.org 0xfacc2
	movs r1, #36	@ 000facc2 2421
.org 0xfacc4
	strb r1, [r4, #9]	@ 000facc4 6172
.org 0xfacc6
	adds r0, #144	@ 000facc6 9030
.org 0xfacc8
	ldr r0, [r0, #0]	@ 000facc8 0068
.org 0xfacca
	ldr r0, [r0, #0]	@ 000facca 0068
.org 0xfaccc
	str r0, [r4, #20]	@ 000faccc 6061
.org 0xfacce
	movs r2, #0	@ 000facce 0022
.org 0xfacd0
	strh r3, [r4, #32]	@ 000facd0 2384
.org 0xfacd2
	adds r0, r4, #0	@ 000facd2 201c
.org 0xfacd4
	adds r0, #34	@ 000facd4 2230
.org 0xfacd6
	strb r2, [r0, #0]	@ 000facd6 0270
.org 0xfacd8
	ldrb r1, [r4, #11]	@ 000facd8 e17a
.org 0xfacda
	movs r0, #16	@ 000facda 1020
.org 0xfacdc
	orrs r0, r1	@ 000facdc 0843
.org 0xfacde
	strb r0, [r4, #11]	@ 000facde e072
.org 0xface0
	ldrb r0, [r4, #28]	@ 000face0 207f
.org 0xface2
	strb r0, [r4, #29]	@ 000face2 6077
.org 0xface4
	ldr r0, [r5, #0]	@ 000face4 2868
.org 0xface6
	ldr r1, [r5, #4]	@ 000face6 6968
.org 0xface8
	str r0, [r4, #84]	@ 000face8 6065
.org 0xfacea
	str r1, [r4, #88]	@ 000facea a165
.org 0xfacec
	strb r2, [r4, #16]	@ 000facec 2274
.org 0xfacee
	strb r6, [r4, #17]	@ 000facee 6674
.org 0xfacf0
	adds r0, r4, #0	@ 000facf0 201c
.org 0xfacf2
	adds r0, #180	@ 000facf2 b430
.org 0xfacf4
	strb r2, [r0, #0]	@ 000facf4 0270
.org 0xfacf6
	adds r0, r4, #0	@ 000facf6 201c
.org 0xfacf8
	pop {r4, r5, r6}	@ 000facf8 70bc
.org 0xfacfa
	pop {r1}	@ 000facfa 02bc
.org 0xfacfc
	bx r1	@ 000facfc 0847
