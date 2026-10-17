@ FUN_080baeec  entry 0x080baeec  size 146
.thumb
.org 0xbaeec
FUN_080baeec:
	push {r4, r5, r6, r7, lr}	@ 000baeec f0b5
.org 0xbaeee
	adds r4, r0, #0	@ 000baeee 041c
.org 0xbaef0
	ldr r7, [r4, #40]	@ 000baef0 a76a
.org 0xbaef2
	ldrb r0, [r4, #10]	@ 000baef2 a07a
.org 0xbaef4
	lsrs r5, r0, #4	@ 000baef4 0509
.org 0xbaef6
	movs r0, #1	@ 000baef6 0120
.org 0xbaef8
	ands r5, r0	@ 000baef8 0540
.org 0xbaefa
	ldrb r6, [r4, #19]	@ 000baefa e67c
.org 0xbaefc
	ldrb r0, [r4, #15]	@ 000baefc e07b
.org 0xbaefe
	cmp r0, #0	@ 000baefe 0028
.org 0xbaf00
	bne.n 0xbaf30	@ 000baf00 16d1
.org 0xbaf02
	adds r0, r4, #0	@ 000baf02 201c
.org 0xbaf04
	adds r0, #116	@ 000baf04 7430
.org 0xbaf06
	ldr r1, [pc, #120]	@ 000baf06 1e49
.org 0xbaf08
	bl 0x5784	@ 000baf08 4af73cfc
.org 0xbaf0c
	ldr r1, [pc, #116]	@ 000baf0c 1d49
.org 0xbaf0e
	adds r0, r4, #0	@ 000baf0e 201c
.org 0xbaf10
	bl 0x1cf00	@ 000baf10 61f7f6ff
.org 0xbaf14
	adds r6, r5, #1	@ 000baf14 6e1c
.org 0xbaf16
	movs r0, #1	@ 000baf16 0120
.org 0xbaf18
	ands r6, r0	@ 000baf18 0640
.org 0xbaf1a
	movs r0, #128	@ 000baf1a 8020
.org 0xbaf1c
	str r0, [r4, #92]	@ 000baf1c e065
.org 0xbaf1e
	movs r0, #48	@ 000baf1e 3020
.org 0xbaf20
	str r0, [r4, #100]	@ 000baf20 6066
.org 0xbaf22
	lsls r0, r6, #1	@ 000baf22 7000
.org 0xbaf24
	subs r0, #1	@ 000baf24 0138
.org 0xbaf26
	str r0, [r4, #96]	@ 000baf26 2066
.org 0xbaf28
	strb r6, [r4, #19]	@ 000baf28 e674
.org 0xbaf2a
	ldrb r0, [r4, #15]	@ 000baf2a e07b
.org 0xbaf2c
	adds r0, #1	@ 000baf2c 0130
.org 0xbaf2e
	strb r0, [r4, #15]	@ 000baf2e e073
.org 0xbaf30
	adds r0, r4, #0	@ 000baf30 201c
.org 0xbaf32
	bl 0x1d134	@ 000baf32 62f7fff8
.org 0xbaf36
	ldr r1, [r4, #92]	@ 000baf36 e16d
.org 0xbaf38
	ldr r0, [r4, #96]	@ 000baf38 206e
.org 0xbaf3a
	adds r2, r1, #0	@ 000baf3a 0a1c
.org 0xbaf3c
	muls r2, r0	@ 000baf3c 4243
.org 0xbaf3e
	ldr r0, [r4, #84]	@ 000baf3e 606d
.org 0xbaf40
	adds r0, r0, r2	@ 000baf40 8018
.org 0xbaf42
	str r0, [r4, #84]	@ 000baf42 6065
.org 0xbaf44
	ldr r0, [r4, #100]	@ 000baf44 606e
.org 0xbaf46
	adds r1, r1, r0	@ 000baf46 0918
.org 0xbaf48
	str r1, [r4, #92]	@ 000baf48 e165
.org 0xbaf4a
	movs r0, #192	@ 000baf4a c020
.org 0xbaf4c
	lsls r0, r0, #3	@ 000baf4c c000
.org 0xbaf4e
	cmp r1, r0	@ 000baf4e 8142
.org 0xbaf50
	ble.n 0xbaf54	@ 000baf50 00dd
.org 0xbaf52
	str r0, [r4, #92]	@ 000baf52 e065
.org 0xbaf54
	adds r0, r4, #0	@ 000baf54 201c
.org 0xbaf56
	adds r0, #180	@ 000baf56 b430
.org 0xbaf58
	ldr r1, [r4, #84]	@ 000baf58 616d
.org 0xbaf5a
	ldr r0, [r0, #0]	@ 000baf5a 0068
.org 0xbaf5c
	subs r1, r1, r0	@ 000baf5c 091a
.org 0xbaf5e
	lsls r0, r6, #1	@ 000baf5e 7000
.org 0xbaf60
	subs r0, #1	@ 000baf60 0138
.org 0xbaf62
	muls r0, r1	@ 000baf62 4843
.org 0xbaf64
	cmp r0, #0	@ 000baf64 0028
.org 0xbaf66
	blt.n 0xbaf78	@ 000baf66 07db
.org 0xbaf68
	adds r0, r7, #0	@ 000baf68 381c
.org 0xbaf6a
	adds r0, #180	@ 000baf6a b430
.org 0xbaf6c
	movs r1, #0	@ 000baf6c 0021
.org 0xbaf6e
	strb r1, [r0, #0]	@ 000baf6e 0170
.org 0xbaf70
	movs r0, #4	@ 000baf70 0420
.org 0xbaf72
	strb r0, [r4, #13]	@ 000baf72 6073
.org 0xbaf74
	strb r1, [r4, #14]	@ 000baf74 a173
.org 0xbaf76
	strb r1, [r4, #15]	@ 000baf76 e173
.org 0xbaf78
	pop {r4, r5, r6, r7}	@ 000baf78 f0bc
.org 0xbaf7a
	pop {r0}	@ 000baf7a 01bc
.org 0xbaf7c
	bx r0	@ 000baf7c 0047
