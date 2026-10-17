@ FUN_080bbd70  entry 0x080bbd70  size 122
.thumb
.org 0xbbd70
FUN_080bbd70:
	push {r4, r5, r6, r7, lr}	@ 000bbd70 f0b5
.org 0xbbd72
	adds r4, r0, #0	@ 000bbd72 041c
.org 0xbbd74
	adds r7, r1, #0	@ 000bbd74 0f1c
.org 0xbbd76
	lsls r2, r2, #24	@ 000bbd76 1206
.org 0xbbd78
	lsrs r6, r2, #24	@ 000bbd78 160e
.org 0xbbd7a
	lsls r3, r3, #24	@ 000bbd7a 1b06
.org 0xbbd7c
	lsrs r5, r3, #24	@ 000bbd7c 1d0e
.org 0xbbd7e
	ldr r0, [pc, #108]	@ 000bbd7e 1b48
.org 0xbbd80
	ldr r0, [r0, #0]	@ 000bbd80 0068
.org 0xbbd82
	bl 0x5500	@ 000bbd82 49f7bdfb
.org 0xbbd86
	adds r3, r0, #0	@ 000bbd86 031c
.org 0xbbd88
	cmp r3, #0	@ 000bbd88 002b
.org 0xbbd8a
	beq.n 0xbbde2	@ 000bbd8a 2ad0
.org 0xbbd8c
	adds r1, r3, #0	@ 000bbd8c 191c
.org 0xbbd8e
	adds r1, #37	@ 000bbd8e 2531
.org 0xbbd90
	movs r2, #0	@ 000bbd90 0022
.org 0xbbd92
	movs r0, #24	@ 000bbd92 1820
.org 0xbbd94
	strb r0, [r1, #0]	@ 000bbd94 0870
.org 0xbbd96
	ldr r0, [pc, #88]	@ 000bbd96 1648
.org 0xbbd98
	movs r1, #114	@ 000bbd98 7221
.org 0xbbd9a
	strb r1, [r3, #9]	@ 000bbd9a 5972
.org 0xbbd9c
	movs r1, #228	@ 000bbd9c e421
.org 0xbbd9e
	lsls r1, r1, #1	@ 000bbd9e 4900
.org 0xbbda0
	adds r0, r0, r1	@ 000bbda0 4018
.org 0xbbda2
	ldr r0, [r0, #0]	@ 000bbda2 0068
.org 0xbbda4
	ldr r0, [r0, #0]	@ 000bbda4 0068
.org 0xbbda6
	str r0, [r3, #20]	@ 000bbda6 5861
.org 0xbbda8
	movs r0, #0	@ 000bbda8 0020
.org 0xbbdaa
	strh r2, [r3, #32]	@ 000bbdaa 1a84
.org 0xbbdac
	adds r1, r3, #0	@ 000bbdac 191c
.org 0xbbdae
	adds r1, #34	@ 000bbdae 2231
.org 0xbbdb0
	strb r0, [r1, #0]	@ 000bbdb0 0870
.org 0xbbdb2
	ldrb r1, [r3, #11]	@ 000bbdb2 d97a
.org 0xbbdb4
	movs r0, #16	@ 000bbdb4 1020
.org 0xbbdb6
	orrs r0, r1	@ 000bbdb6 0843
.org 0xbbdb8
	strb r0, [r3, #11]	@ 000bbdb8 d872
.org 0xbbdba
	ldrb r0, [r3, #28]	@ 000bbdba 187f
.org 0xbbdbc
	strb r0, [r3, #29]	@ 000bbdbc 5877
.org 0xbbdbe
	str r4, [r3, #40]	@ 000bbdbe 9c62
.org 0xbbdc0
	ldr r0, [r7, #0]	@ 000bbdc0 3868
.org 0xbbdc2
	ldr r1, [r7, #4]	@ 000bbdc2 7968
.org 0xbbdc4
	str r0, [r3, #84]	@ 000bbdc4 5865
.org 0xbbdc6
	str r1, [r3, #88]	@ 000bbdc6 9965
.org 0xbbdc8
	strb r6, [r3, #16]	@ 000bbdc8 1e74
.org 0xbbdca
	strb r5, [r3, #17]	@ 000bbdca 5d74
.org 0xbbdcc
	adds r1, r4, #0	@ 000bbdcc 211c
.org 0xbbdce
	adds r1, #204	@ 000bbdce cc31
.org 0xbbdd0
	ldrh r0, [r1, #0]	@ 000bbdd0 0888
.org 0xbbdd2
	adds r0, #1	@ 000bbdd2 0130
.org 0xbbdd4
	strh r0, [r1, #0]	@ 000bbdd4 0880
.org 0xbbdd6
	adds r2, r4, #0	@ 000bbdd6 221c
.org 0xbbdd8
	adds r2, #191	@ 000bbdd8 bf32
.org 0xbbdda
	ldrb r1, [r2, #0]	@ 000bbdda 1178
.org 0xbbddc
	movs r0, #251	@ 000bbddc fb20
.org 0xbbdde
	ands r0, r1	@ 000bbdde 0840
.org 0xbbde0
	strb r0, [r2, #0]	@ 000bbde0 1070
.org 0xbbde2
	adds r0, r3, #0	@ 000bbde2 181c
.org 0xbbde4
	pop {r4, r5, r6, r7}	@ 000bbde4 f0bc
.org 0xbbde6
	pop {r1}	@ 000bbde6 02bc
.org 0xbbde8
	bx r1	@ 000bbde8 0847
