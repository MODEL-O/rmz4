@ FUN_080bcd74  entry 0x080bcd74  size 94
.thumb
.org 0xbcd74
FUN_080bcd74:
	push {r4, r5, r6, lr}	@ 000bcd74 70b5
.org 0xbcd76
	adds r6, r0, #0	@ 000bcd76 061c
.org 0xbcd78
	lsls r1, r1, #24	@ 000bcd78 0906
.org 0xbcd7a
	lsrs r5, r1, #24	@ 000bcd7a 0d0e
.org 0xbcd7c
	lsls r2, r2, #24	@ 000bcd7c 1206
.org 0xbcd7e
	lsrs r4, r2, #24	@ 000bcd7e 140e
.org 0xbcd80
	ldr r0, [pc, #80]	@ 000bcd80 1448
.org 0xbcd82
	ldr r0, [r0, #0]	@ 000bcd82 0068
.org 0xbcd84
	bl 0x5500	@ 000bcd84 48f7bcfb
.org 0xbcd88
	adds r3, r0, #0	@ 000bcd88 031c
.org 0xbcd8a
	cmp r3, #0	@ 000bcd8a 002b
.org 0xbcd8c
	beq.n 0xbcdcc	@ 000bcd8c 1ed0
.org 0xbcd8e
	adds r1, r3, #0	@ 000bcd8e 191c
.org 0xbcd90
	adds r1, #37	@ 000bcd90 2531
.org 0xbcd92
	movs r2, #0	@ 000bcd92 0022
.org 0xbcd94
	movs r0, #24	@ 000bcd94 1820
.org 0xbcd96
	strb r0, [r1, #0]	@ 000bcd96 0870
.org 0xbcd98
	ldr r0, [pc, #60]	@ 000bcd98 0f48
.org 0xbcd9a
	movs r1, #118	@ 000bcd9a 7621
.org 0xbcd9c
	strb r1, [r3, #9]	@ 000bcd9c 5972
.org 0xbcd9e
	movs r1, #236	@ 000bcd9e ec21
.org 0xbcda0
	lsls r1, r1, #1	@ 000bcda0 4900
.org 0xbcda2
	adds r0, r0, r1	@ 000bcda2 4018
.org 0xbcda4
	ldr r0, [r0, #0]	@ 000bcda4 0068
.org 0xbcda6
	ldr r0, [r0, #0]	@ 000bcda6 0068
.org 0xbcda8
	str r0, [r3, #20]	@ 000bcda8 5861
.org 0xbcdaa
	movs r0, #0	@ 000bcdaa 0020
.org 0xbcdac
	strh r2, [r3, #32]	@ 000bcdac 1a84
.org 0xbcdae
	adds r1, r3, #0	@ 000bcdae 191c
.org 0xbcdb0
	adds r1, #34	@ 000bcdb0 2231
.org 0xbcdb2
	strb r0, [r1, #0]	@ 000bcdb2 0870
.org 0xbcdb4
	ldrb r1, [r3, #11]	@ 000bcdb4 d97a
.org 0xbcdb6
	movs r0, #16	@ 000bcdb6 1020
.org 0xbcdb8
	orrs r0, r1	@ 000bcdb8 0843
.org 0xbcdba
	strb r0, [r3, #11]	@ 000bcdba d872
.org 0xbcdbc
	ldrb r0, [r3, #28]	@ 000bcdbc 187f
.org 0xbcdbe
	strb r0, [r3, #29]	@ 000bcdbe 5877
.org 0xbcdc0
	ldr r0, [r6, #0]	@ 000bcdc0 3068
.org 0xbcdc2
	ldr r1, [r6, #4]	@ 000bcdc2 7168
.org 0xbcdc4
	str r0, [r3, #84]	@ 000bcdc4 5865
.org 0xbcdc6
	str r1, [r3, #88]	@ 000bcdc6 9965
.org 0xbcdc8
	strb r5, [r3, #16]	@ 000bcdc8 1d74
.org 0xbcdca
	strb r4, [r3, #17]	@ 000bcdca 5c74
.org 0xbcdcc
	pop {r4, r5, r6}	@ 000bcdcc 70bc
.org 0xbcdce
	pop {r0}	@ 000bcdce 01bc
.org 0xbcdd0
	bx r0	@ 000bcdd0 0047
