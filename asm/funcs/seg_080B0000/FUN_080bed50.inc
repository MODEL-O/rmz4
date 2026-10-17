@ FUN_080bed50  entry 0x080bed50  size 134
.thumb
.org 0xbed50
FUN_080bed50:
	push {r4, r5, r6, lr}	@ 000bed50 70b5
.org 0xbed52
	adds r5, r0, #0	@ 000bed52 051c
.org 0xbed54
	lsls r1, r1, #24	@ 000bed54 0906
.org 0xbed56
	lsrs r6, r1, #24	@ 000bed56 0e0e
.org 0xbed58
	lsls r2, r2, #24	@ 000bed58 1206
.org 0xbed5a
	lsrs r4, r2, #24	@ 000bed5a 140e
.org 0xbed5c
	ldr r0, [pc, #72]	@ 000bed5c 1248
.org 0xbed5e
	ldr r0, [r0, #0]	@ 000bed5e 0068
.org 0xbed60
	bl 0x5500	@ 000bed60 46f7cefb
.org 0xbed64
	adds r3, r0, #0	@ 000bed64 031c
.org 0xbed66
	cmp r3, #0	@ 000bed66 002b
.org 0xbed68
	beq.n 0xbedd8	@ 000bed68 36d0
.org 0xbed6a
	adds r1, r3, #0	@ 000bed6a 191c
.org 0xbed6c
	adds r1, #37	@ 000bed6c 2531
.org 0xbed6e
	movs r2, #0	@ 000bed6e 0022
.org 0xbed70
	movs r0, #8	@ 000bed70 0820
.org 0xbed72
	strb r0, [r1, #0]	@ 000bed72 0870
.org 0xbed74
	ldr r1, [pc, #52]	@ 000bed74 0d49
.org 0xbed76
	movs r0, #6	@ 000bed76 0620
.org 0xbed78
	strb r0, [r3, #9]	@ 000bed78 5872
.org 0xbed7a
	ldr r0, [r1, #24]	@ 000bed7a 8869
.org 0xbed7c
	ldr r0, [r0, #0]	@ 000bed7c 0068
.org 0xbed7e
	str r0, [r3, #20]	@ 000bed7e 5861
.org 0xbed80
	movs r0, #0	@ 000bed80 0020
.org 0xbed82
	strh r2, [r3, #32]	@ 000bed82 1a84
.org 0xbed84
	adds r1, r3, #0	@ 000bed84 191c
.org 0xbed86
	adds r1, #34	@ 000bed86 2231
.org 0xbed88
	strb r0, [r1, #0]	@ 000bed88 0870
.org 0xbed8a
	ldr r0, [r5, #0]	@ 000bed8a 2868
.org 0xbed8c
	ldr r1, [r5, #4]	@ 000bed8c 6968
.org 0xbed8e
	str r0, [r3, #84]	@ 000bed8e 5865
.org 0xbed90
	str r1, [r3, #88]	@ 000bed90 9965
.org 0xbed92
	movs r0, #2	@ 000bed92 0220
.org 0xbed94
	strb r0, [r3, #16]	@ 000bed94 1874
.org 0xbed96
	strb r4, [r3, #17]	@ 000bed96 5c74
.org 0xbed98
	adds r2, r6, #0	@ 000bed98 321c
.org 0xbed9a
	cmp r2, #0	@ 000bed9a 002a
.org 0xbed9c
	beq.n 0xbedb0	@ 000bed9c 08d0
.org 0xbed9e
	ldrb r0, [r3, #10]	@ 000bed9e 987a
.org 0xbeda0
	movs r1, #16	@ 000beda0 1021
.org 0xbeda2
	orrs r0, r1	@ 000beda2 0843
.org 0xbeda4
	b.n 0xbedb6	@ 000beda4 07e0
.org 0xbeda6
	.byte 0x00	@ 000beda6 data
.org 0xbeda7
	.byte 0x00	@ 000beda7 data
.org 0xbeda8
	.byte 0x94,0xed,0x02,0x02	@ 000beda8 data
.org 0xbedac
	.byte 0xf4,0x49,0x86,0x08	@ 000bedac data
.org 0xbedb0
	ldrb r1, [r3, #10]	@ 000bedb0 997a
.org 0xbedb2
	movs r0, #239	@ 000bedb2 ef20
.org 0xbedb4
	ands r0, r1	@ 000bedb4 0840
.org 0xbedb6
	strb r0, [r3, #10]	@ 000bedb6 9872
.org 0xbedb8
	movs r1, #1	@ 000bedb8 0121
.org 0xbedba
	ands r1, r2	@ 000bedba 1140
.org 0xbedbc
	adds r0, r3, #0	@ 000bedbc 181c
.org 0xbedbe
	adds r0, #76	@ 000bedbe 4c30
.org 0xbedc0
	strb r1, [r0, #0]	@ 000bedc0 0170
.org 0xbedc2
	movs r0, #74	@ 000bedc2 4a20
.org 0xbedc4
	adds r0, r0, r3	@ 000bedc4 c018
.org 0xbedc6
	mov ip, r0	@ 000bedc6 8446
.org 0xbedc8
	lsls r1, r1, #4	@ 000bedc8 0901
.org 0xbedca
	ldrb r2, [r0, #0]	@ 000bedca 0278
.org 0xbedcc
	movs r0, #17	@ 000bedcc 1120
.org 0xbedce
	negs r0, r0	@ 000bedce 4042
.org 0xbedd0
	ands r0, r2	@ 000bedd0 1040
.org 0xbedd2
	orrs r0, r1	@ 000bedd2 0843
.org 0xbedd4
	mov r1, ip	@ 000bedd4 6146
