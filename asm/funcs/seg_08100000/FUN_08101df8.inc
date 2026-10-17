@ FUN_08101df8  entry 0x08101df8  size 98
.thumb
.org 0x101df8
FUN_08101df8:
	push {r4, lr}	@ 00101df8 10b5
.org 0x101dfa
	adds r4, r0, #0	@ 00101dfa 041c
.org 0x101dfc
	adds r1, r4, #0	@ 00101dfc 211c
.org 0x101dfe
	adds r1, #184	@ 00101dfe b831
.org 0x101e00
	ldr r0, [r4, #40]	@ 00101e00 a06a
.org 0x101e02
	ldr r0, [r0, #0]	@ 00101e02 0068
.org 0x101e04
	str r0, [r1, #0]	@ 00101e04 0860
.org 0x101e06
	adds r0, r4, #0	@ 00101e06 201c
.org 0x101e08
	movs r1, #0	@ 00101e08 0021
.org 0x101e0a
	bl 0x101d54	@ 00101e0a fff7a3ff
.org 0x101e0e
	adds r0, r4, #0	@ 00101e0e 201c
.org 0x101e10
	movs r1, #1	@ 00101e10 0121
.org 0x101e12
	bl 0x101d54	@ 00101e12 fff79fff
.org 0x101e16
	adds r0, r4, #0	@ 00101e16 201c
.org 0x101e18
	movs r1, #2	@ 00101e18 0221
.org 0x101e1a
	bl 0x101d54	@ 00101e1a fff79bff
.org 0x101e1e
	ldr r0, [pc, #60]	@ 00101e1e 0f48
.org 0x101e20
	adds r0, #206	@ 00101e20 ce30
.org 0x101e22
	ldrb r1, [r0, #0]	@ 00101e22 0178
.org 0x101e24
	adds r2, r4, #0	@ 00101e24 221c
.org 0x101e26
	adds r2, #188	@ 00101e26 bc32
.org 0x101e28
	movs r0, #166	@ 00101e28 a620
.org 0x101e2a
	str r0, [r2, #0]	@ 00101e2a 1060
.org 0x101e2c
	lsls r1, r1, #5	@ 00101e2c 4901
.org 0x101e2e
	movs r2, #128	@ 00101e2e 8022
.org 0x101e30
	lsls r2, r2, #2	@ 00101e30 9200
.org 0x101e32
	adds r0, r2, #0	@ 00101e32 101c
.org 0x101e34
	orrs r1, r0	@ 00101e34 0143
.org 0x101e36
	movs r0, #166	@ 00101e36 a620
.org 0x101e38
	bl 0x249c	@ 00101e38 00f730fb
.org 0x101e3c
	ldr r1, [pc, #32]	@ 00101e3c 0849
.org 0x101e3e
	ldrb r0, [r4, #9]	@ 00101e3e 607a
.org 0x101e40
	lsls r0, r0, #2	@ 00101e40 8000
.org 0x101e42
	adds r0, r0, r1	@ 00101e42 4018
.org 0x101e44
	movs r1, #1	@ 00101e44 0121
.org 0x101e46
	str r1, [r4, #12]	@ 00101e46 e160
.org 0x101e48
	ldr r0, [r0, #0]	@ 00101e48 0068
.org 0x101e4a
	ldr r0, [r0, #4]	@ 00101e4a 4068
.org 0x101e4c
	str r0, [r4, #20]	@ 00101e4c 6061
.org 0x101e4e
	adds r0, r4, #0	@ 00101e4e 201c
.org 0x101e50
	bl 0x101dc8	@ 00101e50 fff7baff
.org 0x101e54
	pop {r4}	@ 00101e54 10bc
.org 0x101e56
	pop {r0}	@ 00101e56 01bc
.org 0x101e58
	bx r0	@ 00101e58 0047
