@ FUN_0803fe6c  entry 0x0803fe6c  size 102
.thumb
.org 0x3fe6c
FUN_0803fe6c:
	push {r4, r5, r6, lr}	@ 0003fe6c 70b5
.org 0x3fe6e
	adds r6, r0, #0	@ 0003fe6e 061c
.org 0x3fe70
	ldr r4, [r6, #44]	@ 0003fe70 f46a
.org 0x3fe72
	adds r5, r6, #0	@ 0003fe72 351c
.org 0x3fe74
	adds r5, #84	@ 0003fe74 5435
.org 0x3fe76
	adds r0, r4, #0	@ 0003fe76 201c
.org 0x3fe78
	adds r1, r5, #0	@ 0003fe78 291c
.org 0x3fe7a
	movs r2, #0	@ 0003fe7a 0022
.org 0x3fe7c
	bl 0x3fad8	@ 0003fe7c fff72cfe
.org 0x3fe80
	adds r0, r4, #0	@ 0003fe80 201c
.org 0x3fe82
	adds r1, r5, #0	@ 0003fe82 291c
.org 0x3fe84
	movs r2, #1	@ 0003fe84 0122
.org 0x3fe86
	bl 0x3fad8	@ 0003fe86 fff727fe
.org 0x3fe8a
	adds r0, r4, #0	@ 0003fe8a 201c
.org 0x3fe8c
	adds r1, r5, #0	@ 0003fe8c 291c
.org 0x3fe8e
	movs r2, #2	@ 0003fe8e 0222
.org 0x3fe90
	bl 0x3fad8	@ 0003fe90 fff722fe
.org 0x3fe94
	adds r0, r4, #0	@ 0003fe94 201c
.org 0x3fe96
	adds r1, r5, #0	@ 0003fe96 291c
.org 0x3fe98
	movs r2, #3	@ 0003fe98 0322
.org 0x3fe9a
	bl 0x3fad8	@ 0003fe9a fff71dfe
.org 0x3fe9e
	adds r0, r6, #0	@ 0003fe9e 301c
.org 0x3fea0
	adds r0, #140	@ 0003fea0 8c30
.org 0x3fea2
	movs r1, #0	@ 0003fea2 0021
.org 0x3fea4
	str r1, [r0, #0]	@ 0003fea4 0160
.org 0x3fea6
	adds r0, #4	@ 0003fea6 0430
.org 0x3fea8
	str r1, [r0, #0]	@ 0003fea8 0160
.org 0x3feaa
	adds r0, #4	@ 0003feaa 0430
.org 0x3feac
	strb r1, [r0, #0]	@ 0003feac 0170
.org 0x3feae
	ldrb r1, [r6, #10]	@ 0003feae b17a
.org 0x3feb0
	movs r0, #251	@ 0003feb0 fb20
.org 0x3feb2
	ands r0, r1	@ 0003feb2 0840
.org 0x3feb4
	movs r1, #254	@ 0003feb4 fe21
.org 0x3feb6
	ands r0, r1	@ 0003feb6 0840
.org 0x3feb8
	strb r0, [r6, #10]	@ 0003feb8 b072
.org 0x3feba
	ldr r1, [pc, #24]	@ 0003feba 0649
.org 0x3febc
	ldrb r0, [r6, #9]	@ 0003febc 707a
.org 0x3febe
	lsls r0, r0, #2	@ 0003febe 8000
.org 0x3fec0
	adds r0, r0, r1	@ 0003fec0 4018
.org 0x3fec2
	movs r1, #4	@ 0003fec2 0421
.org 0x3fec4
	str r1, [r6, #12]	@ 0003fec4 f160
.org 0x3fec6
	ldr r0, [r0, #0]	@ 0003fec6 0068
.org 0x3fec8
	ldr r0, [r0, #16]	@ 0003fec8 0069
.org 0x3feca
	str r0, [r6, #20]	@ 0003feca 7061
.org 0x3fecc
	pop {r4, r5, r6}	@ 0003fecc 70bc
.org 0x3fece
	pop {r0}	@ 0003fece 01bc
.org 0x3fed0
	bx r0	@ 0003fed0 0047
