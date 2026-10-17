@ FUN_0800cd88  entry 0x0800cd88  size 222
.thumb
.org 0xcd88
FUN_0800cd88:
	push {r4, r5, r6, r7, lr}	@ 0000cd88 f0b5
.org 0xcd8a
	adds r7, r0, #0	@ 0000cd8a 071c
.org 0xcd8c
	ldr r0, [r7, #92]	@ 0000cd8c f86d
.org 0xcd8e
	lsls r2, r0, #16	@ 0000cd8e 0204
.org 0xcd90
	ldrb r6, [r7, #14]	@ 0000cd90 be7b
.org 0xcd92
	cmp r6, #0	@ 0000cd92 002e
.org 0xcd94
	bne.n 0xcdd4	@ 0000cd94 1ed1
.org 0xcd96
	lsrs r2, r2, #20	@ 0000cd96 120d
.org 0xcd98
	lsls r3, r2, #1	@ 0000cd98 5300
.org 0xcd9a
	ldr r4, [pc, #36]	@ 0000cd9a 094c
.org 0xcd9c
	adds r3, r3, r4	@ 0000cd9c 1b19
.org 0xcd9e
	ldr r0, [r7, #96]	@ 0000cd9e 386e
.org 0xcda0
	ldr r1, [r7, #100]	@ 0000cda0 796e
.org 0xcda2
	orrs r0, r1	@ 0000cda2 0843
.org 0xcda4
	ldr r5, [pc, #28]	@ 0000cda4 074d
.org 0xcda6
	adds r1, r5, #0	@ 0000cda6 291c
.org 0xcda8
	orrs r0, r1	@ 0000cda8 0843
.org 0xcdaa
	strh r0, [r3, #0]	@ 0000cdaa 1880
.org 0xcdac
	lsls r2, r2, #2	@ 0000cdac 9200
.org 0xcdae
	adds r4, #8	@ 0000cdae 0834
.org 0xcdb0
	adds r2, r2, r4	@ 0000cdb0 1219
.org 0xcdb2
	str r6, [r2, #0]	@ 0000cdb2 1660
.org 0xcdb4
	ldr r1, [pc, #16]	@ 0000cdb4 0449
.org 0xcdb6
	ldr r0, [pc, #20]	@ 0000cdb6 0548
.org 0xcdb8
	strh r0, [r1, #0]	@ 0000cdb8 0880
.org 0xcdba
	ldr r0, [pc, #20]	@ 0000cdba 0548
.org 0xcdbc
	strh r0, [r1, #2]	@ 0000cdbc 4880
.org 0xcdbe
	b.n 0xce1e	@ 0000cdbe 2ee0
.org 0xcdc0
	.byte 0x04,0x0a,0x00,0x02	@ 0000cdc0 data
.org 0xcdc4
	.byte 0x44,0x40,0x00,0x00	@ 0000cdc4 data
.org 0xcdc8
	.byte 0x40,0x0a,0x00,0x02	@ 0000cdc8 data
.org 0xcdcc
	.byte 0x44,0x3b,0x00,0x00	@ 0000cdcc data
.org 0xcdd0
	.byte 0x08,0x0c,0x00,0x00	@ 0000cdd0 data
.org 0xcdd4
	cmp r6, #1	@ 0000cdd4 012e
.org 0xcdd6
	bne.n 0xce24	@ 0000cdd6 25d1
.org 0xcdd8
	ldr r0, [pc, #88]	@ 0000cdd8 1648
.org 0xcdda
	ldr r0, [r0, #0]	@ 0000cdda 0068
.org 0xcddc
	ldr r1, [pc, #88]	@ 0000cddc 1649
.org 0xcdde
	adds r0, r0, r1	@ 0000cdde 4018
.org 0xcde0
	lsrs r5, r2, #20	@ 0000cde0 150d
.org 0xcde2
	lsls r5, r5, #1	@ 0000cde2 6d00
.org 0xcde4
	ldr r1, [pc, #84]	@ 0000cde4 1549
.org 0xcde6
	adds r5, r5, r1	@ 0000cde6 6d18
.org 0xcde8
	ldrh r2, [r5, #0]	@ 0000cde8 2a88
.org 0xcdea
	movs r4, #248	@ 0000cdea f824
.org 0xcdec
	lsls r4, r4, #5	@ 0000cdec 6401
.org 0xcdee
	adds r1, r4, #0	@ 0000cdee 211c
.org 0xcdf0
	ands r1, r2	@ 0000cdf0 1140
.org 0xcdf2
	lsls r1, r1, #3	@ 0000cdf2 c900
.org 0xcdf4
	movs r2, #192	@ 0000cdf4 c022
.org 0xcdf6
	lsls r2, r2, #19	@ 0000cdf6 d204
.org 0xcdf8
	adds r1, r1, r2	@ 0000cdf8 8918
.org 0xcdfa
	movs r6, #128	@ 0000cdfa 8026
.org 0xcdfc
	lsls r6, r6, #2	@ 0000cdfc b600
.org 0xcdfe
	adds r2, r6, #0	@ 0000cdfe 321c
.org 0xce00
	bl 0x128be0	@ 0000ce00 1bf1eefe
.org 0xce04
	ldr r0, [pc, #56]	@ 0000ce04 0e48
.org 0xce06
	ldr r0, [r0, #0]	@ 0000ce06 0068
.org 0xce08
	ldr r3, [pc, #56]	@ 0000ce08 0e4b
.org 0xce0a
	adds r0, r0, r3	@ 0000ce0a c018
.org 0xce0c
	ldrh r1, [r5, #0]	@ 0000ce0c 2988
.org 0xce0e
	ands r4, r1	@ 0000ce0e 0c40
.org 0xce10
	lsls r4, r4, #3	@ 0000ce10 e400
.org 0xce12
	ldr r5, [pc, #52]	@ 0000ce12 0d4d
.org 0xce14
	adds r4, r4, r5	@ 0000ce14 6419
.org 0xce16
	adds r1, r4, #0	@ 0000ce16 211c
.org 0xce18
	adds r2, r6, #0	@ 0000ce18 321c
.org 0xce1a
	bl 0x128be0	@ 0000ce1a 1bf1e1fe
.org 0xce1e
	ldrb r0, [r7, #14]	@ 0000ce1e b87b
.org 0xce20
	adds r0, #1	@ 0000ce20 0130
.org 0xce22
	strb r0, [r7, #14]	@ 0000ce22 b873
.org 0xce24
	ldr r0, [r7, #52]	@ 0000ce24 786b
.org 0xce26
	ldr r1, [pc, #36]	@ 0000ce26 0949
.org 0xce28
	adds r0, r0, r1	@ 0000ce28 4018
.org 0xce2a
	lsls r3, r0, #4	@ 0000ce2a 0301
.org 0xce2c
	cmp r3, #0	@ 0000ce2c 002b
.org 0xce2e
	bge.n 0xce50	@ 0000ce2e 0fda
.org 0xce30
	movs r3, #0	@ 0000ce30 0023
.org 0xce32
	b.n 0xce5a	@ 0000ce32 12e0
.org 0xce34
	.byte 0xbc,0xc0,0xb2,0x08	@ 0000ce34 data
.org 0xce38
	.byte 0xc4,0xc0,0xb2,0x08	@ 0000ce38 data
.org 0xce3c
	.byte 0x04,0x0a,0x00,0x02	@ 0000ce3c data
.org 0xce40
	.byte 0xc0,0xc0,0xb2,0x08	@ 0000ce40 data
.org 0xce44
	.byte 0xc8,0xc0,0xb2,0x08	@ 0000ce44 data
.org 0xce48
	.byte 0x00,0x08,0x00,0x06	@ 0000ce48 data
.org 0xce4c
	.byte 0x80,0xf8,0xff,0xff	@ 0000ce4c data
.org 0xce50
	movs r0, #128	@ 0000ce50 8020
.org 0xce52
	lsls r0, r0, #4	@ 0000ce52 0001
.org 0xce54
	cmp r3, r0	@ 0000ce54 8342
.org 0xce56
	ble.n 0xce5a	@ 0000ce56 00dd
.org 0xce58
	adds r3, r0, #0	@ 0000ce58 031c
.org 0xce5a
	movs r0, #128	@ 0000ce5a 8020
.org 0xce5c
	lsls r0, r0, #3	@ 0000ce5c c000
.org 0xce5e
	cmp r3, r0	@ 0000ce5e 8342
.org 0xce60
	ble.n 0xce80	@ 0000ce60 0edd
.org 0xce62
	ldr r2, [pc, #24]	@ 0000ce62 064a
.org 0xce64
	asrs r0, r3, #8	@ 0000ce64 1812
