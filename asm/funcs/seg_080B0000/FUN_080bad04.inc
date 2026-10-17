@ FUN_080bad04  entry 0x080bad04  size 162
.thumb
.org 0xbad04
FUN_080bad04:
	push {r4, r5, r6, lr}	@ 000bad04 70b5
.org 0xbad06
	adds r6, r0, #0	@ 000bad06 061c
.org 0xbad08
	ldr r0, [r6, #40]	@ 000bad08 b06a
.org 0xbad0a
	ldrb r4, [r0, #10]	@ 000bad0a 847a
.org 0xbad0c
	lsrs r4, r4, #4	@ 000bad0c 2409
.org 0xbad0e
	movs r2, #1	@ 000bad0e 0122
.org 0xbad10
	ands r4, r2	@ 000bad10 1440
.org 0xbad12
	ldr r1, [pc, #68]	@ 000bad12 1149
.org 0xbad14
	ldrb r0, [r6, #9]	@ 000bad14 707a
.org 0xbad16
	lsls r0, r0, #2	@ 000bad16 8000
.org 0xbad18
	adds r0, r0, r1	@ 000bad18 4018
.org 0xbad1a
	str r2, [r6, #12]	@ 000bad1a f260
.org 0xbad1c
	ldr r0, [r0, #0]	@ 000bad1c 0068
.org 0xbad1e
	ldr r0, [r0, #4]	@ 000bad1e 4068
.org 0xbad20
	str r0, [r6, #20]	@ 000bad20 7061
.org 0xbad22
	ldrb r1, [r6, #10]	@ 000bad22 b17a
.org 0xbad24
	movs r0, #1	@ 000bad24 0120
.org 0xbad26
	movs r5, #0	@ 000bad26 0025
.org 0xbad28
	orrs r0, r1	@ 000bad28 0843
.org 0xbad2a
	movs r1, #2	@ 000bad2a 0221
.org 0xbad2c
	orrs r0, r1	@ 000bad2c 0843
.org 0xbad2e
	strb r0, [r6, #10]	@ 000bad2e b072
.org 0xbad30
	adds r1, r6, #0	@ 000bad30 311c
.org 0xbad32
	adds r1, #180	@ 000bad32 b431
.org 0xbad34
	ldr r0, [r6, #84]	@ 000bad34 706d
.org 0xbad36
	str r0, [r1, #0]	@ 000bad36 0860
.org 0xbad38
	adds r0, r6, #0	@ 000bad38 301c
.org 0xbad3a
	bl 0x1cc9c	@ 000bad3a 61f7afff
.org 0xbad3e
	adds r0, r6, #0	@ 000bad3e 301c
.org 0xbad40
	bl 0x1ceec	@ 000bad40 62f7d4f8
.org 0xbad44
	adds r1, r6, #0	@ 000bad44 311c
.org 0xbad46
	adds r1, #37	@ 000bad46 2531
.org 0xbad48
	movs r0, #8	@ 000bad48 0820
.org 0xbad4a
	strb r0, [r1, #0]	@ 000bad4a 0870
.org 0xbad4c
	cmp r4, #0	@ 000bad4c 002c
.org 0xbad4e
	beq.n 0xbad5c	@ 000bad4e 05d0
.org 0xbad50
	ldrb r0, [r6, #10]	@ 000bad50 b07a
.org 0xbad52
	movs r1, #16	@ 000bad52 1021
.org 0xbad54
	orrs r0, r1	@ 000bad54 0843
.org 0xbad56
	b.n 0xbad62	@ 000bad56 04e0
.org 0xbad58
	.byte 0x40,0xdb,0x85,0x08	@ 000bad58 data
.org 0xbad5c
	ldrb r1, [r6, #10]	@ 000bad5c b17a
.org 0xbad5e
	movs r0, #239	@ 000bad5e ef20
.org 0xbad60
	ands r0, r1	@ 000bad60 0840
.org 0xbad62
	strb r0, [r6, #10]	@ 000bad62 b072
.org 0xbad64
	adds r1, r4, #0	@ 000bad64 211c
.org 0xbad66
	adds r0, r6, #0	@ 000bad66 301c
.org 0xbad68
	adds r0, #76	@ 000bad68 4c30
.org 0xbad6a
	movs r5, #0	@ 000bad6a 0025
.org 0xbad6c
	strb r1, [r0, #0]	@ 000bad6c 0170
.org 0xbad6e
	adds r3, r6, #0	@ 000bad6e 331c
.org 0xbad70
	adds r3, #74	@ 000bad70 4a33
.org 0xbad72
	lsls r1, r1, #4	@ 000bad72 0901
.org 0xbad74
	ldrb r2, [r3, #0]	@ 000bad74 1a78
.org 0xbad76
	movs r0, #17	@ 000bad76 1120
.org 0xbad78
	negs r0, r0	@ 000bad78 4042
.org 0xbad7a
	ands r0, r2	@ 000bad7a 1040
.org 0xbad7c
	orrs r0, r1	@ 000bad7c 0843
.org 0xbad7e
	strb r0, [r3, #0]	@ 000bad7e 1870
.org 0xbad80
	ldrb r1, [r6, #10]	@ 000bad80 b17a
.org 0xbad82
	movs r0, #4	@ 000bad82 0420
.org 0xbad84
	orrs r0, r1	@ 000bad84 0843
.org 0xbad86
	strb r0, [r6, #10]	@ 000bad86 b072
.org 0xbad88
	adds r4, r6, #0	@ 000bad88 341c
.org 0xbad8a
	adds r4, #116	@ 000bad8a 7434
.org 0xbad8c
	ldr r1, [pc, #28]	@ 000bad8c 0749
.org 0xbad8e
	adds r2, r6, #0	@ 000bad8e 321c
.org 0xbad90
	adds r2, #84	@ 000bad90 5432
.org 0xbad92
	adds r0, r4, #0	@ 000bad92 201c
.org 0xbad94
	movs r3, #64	@ 000bad94 4023
.org 0xbad96
	bl 0x5760	@ 000bad96 4af7e3fc
.org 0xbad9a
	str r6, [r4, #44]	@ 000bad9a e662
.org 0xbad9c
	str r5, [r4, #36]	@ 000bad9c 6562
.org 0xbad9e
	adds r0, r6, #0	@ 000bad9e 301c
.org 0xbada0
	bl 0xbadb0	@ 000bada0 00f006f8
.org 0xbada4
	pop {r4, r5, r6}	@ 000bada4 70bc
