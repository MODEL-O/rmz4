@ FUN_080bcd44  entry 0x080bcd44  size 48
.thumb
.org 0xbcd44
FUN_080bcd44:
	push {lr}	@ 000bcd44 00b5
.org 0xbcd46
	adds r2, r0, #0	@ 000bcd46 021c
.org 0xbcd48
	ldrb r0, [r2, #18]	@ 000bcd48 907c
.org 0xbcd4a
	cmp r0, #60	@ 000bcd4a 3c28
.org 0xbcd4c
	bne.n 0xbcd52	@ 000bcd4c 01d1
.org 0xbcd4e
	movs r0, #0	@ 000bcd4e 0020
.org 0xbcd50
	strb r0, [r2, #18]	@ 000bcd50 9074
.org 0xbcd52
	ldrb r1, [r2, #18]	@ 000bcd52 917c
.org 0xbcd54
	adds r0, r1, #0	@ 000bcd54 081c
.org 0xbcd56
	subs r0, #15	@ 000bcd56 0f38
.org 0xbcd58
	lsls r0, r0, #24	@ 000bcd58 0006
.org 0xbcd5a
	lsrs r0, r0, #24	@ 000bcd5a 000e
.org 0xbcd5c
	cmp r0, #30	@ 000bcd5c 1e28
.org 0xbcd5e
	bls.n 0xbcd66	@ 000bcd5e 02d9
.org 0xbcd60
	ldr r0, [r2, #88]	@ 000bcd60 906d
.org 0xbcd62
	adds r0, #128	@ 000bcd62 8030
.org 0xbcd64
	b.n 0xbcd6a	@ 000bcd64 01e0
.org 0xbcd66
	ldr r0, [r2, #88]	@ 000bcd66 906d
.org 0xbcd68
	subs r0, #128	@ 000bcd68 8038
.org 0xbcd6a
	str r0, [r2, #88]	@ 000bcd6a 9065
.org 0xbcd6c
	adds r0, r1, #1	@ 000bcd6c 481c
.org 0xbcd6e
	strb r0, [r2, #18]	@ 000bcd6e 9074
.org 0xbcd70
	pop {r0}	@ 000bcd70 01bc
.org 0xbcd72
	bx r0	@ 000bcd72 0047
