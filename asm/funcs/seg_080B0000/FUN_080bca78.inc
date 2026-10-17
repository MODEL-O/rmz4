@ FUN_080bca78  entry 0x080bca78  size 92
.thumb
.org 0xbca78
FUN_080bca78:
	push {r4, r5, r6, lr}	@ 000bca78 70b5
.org 0xbca7a
	adds r5, r0, #0	@ 000bca7a 051c
.org 0xbca7c
	adds r6, r2, #0	@ 000bca7c 161c
.org 0xbca7e
	lsls r1, r1, #24	@ 000bca7e 0906
.org 0xbca80
	lsrs r4, r1, #24	@ 000bca80 0c0e
.org 0xbca82
	ldr r0, [pc, #80]	@ 000bca82 1448
.org 0xbca84
	ldr r0, [r0, #0]	@ 000bca84 0068
.org 0xbca86
	bl 0x5500	@ 000bca86 48f73bfd
.org 0xbca8a
	adds r3, r0, #0	@ 000bca8a 031c
.org 0xbca8c
	cmp r3, #0	@ 000bca8c 002b
.org 0xbca8e
	beq.n 0xbcace	@ 000bca8e 1ed0
.org 0xbca90
	adds r1, r3, #0	@ 000bca90 191c
.org 0xbca92
	adds r1, #37	@ 000bca92 2531
.org 0xbca94
	movs r2, #0	@ 000bca94 0022
.org 0xbca96
	movs r0, #24	@ 000bca96 1820
.org 0xbca98
	strb r0, [r1, #0]	@ 000bca98 0870
.org 0xbca9a
	ldr r0, [pc, #60]	@ 000bca9a 0f48
.org 0xbca9c
	movs r1, #117	@ 000bca9c 7521
.org 0xbca9e
	strb r1, [r3, #9]	@ 000bca9e 5972
.org 0xbcaa0
	movs r1, #234	@ 000bcaa0 ea21
.org 0xbcaa2
	lsls r1, r1, #1	@ 000bcaa2 4900
.org 0xbcaa4
	adds r0, r0, r1	@ 000bcaa4 4018
.org 0xbcaa6
	ldr r0, [r0, #0]	@ 000bcaa6 0068
.org 0xbcaa8
	ldr r0, [r0, #0]	@ 000bcaa8 0068
.org 0xbcaaa
	str r0, [r3, #20]	@ 000bcaaa 5861
.org 0xbcaac
	movs r0, #0	@ 000bcaac 0020
.org 0xbcaae
	strh r2, [r3, #32]	@ 000bcaae 1a84
.org 0xbcab0
	adds r1, r3, #0	@ 000bcab0 191c
.org 0xbcab2
	adds r1, #34	@ 000bcab2 2231
.org 0xbcab4
	strb r0, [r1, #0]	@ 000bcab4 0870
.org 0xbcab6
	ldrb r1, [r3, #11]	@ 000bcab6 d97a
.org 0xbcab8
	movs r0, #16	@ 000bcab8 1020
.org 0xbcaba
	orrs r0, r1	@ 000bcaba 0843
.org 0xbcabc
	strb r0, [r3, #11]	@ 000bcabc d872
.org 0xbcabe
	ldrb r0, [r3, #28]	@ 000bcabe 187f
.org 0xbcac0
	strb r0, [r3, #29]	@ 000bcac0 5877
.org 0xbcac2
	ldr r0, [r5, #0]	@ 000bcac2 2868
.org 0xbcac4
	ldr r1, [r5, #4]	@ 000bcac4 6968
.org 0xbcac6
	str r0, [r3, #84]	@ 000bcac6 5865
.org 0xbcac8
	str r1, [r3, #88]	@ 000bcac8 9965
.org 0xbcaca
	strb r4, [r3, #16]	@ 000bcaca 1c74
.org 0xbcacc
	str r6, [r3, #40]	@ 000bcacc 9e62
.org 0xbcace
	pop {r4, r5, r6}	@ 000bcace 70bc
.org 0xbcad0
	pop {r0}	@ 000bcad0 01bc
.org 0xbcad2
	bx r0	@ 000bcad2 0047
