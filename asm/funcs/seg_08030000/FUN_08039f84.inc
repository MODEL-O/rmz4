@ FUN_08039f84  entry 0x08039f84  size 76
.thumb
.org 0x39f84
FUN_08039f84:
	adds r3, r0, #0	@ 00039f84 031c
.org 0x39f86
	movs r1, #162	@ 00039f86 a221
.org 0x39f88
	lsls r1, r1, #1	@ 00039f88 4900
.org 0x39f8a
	adds r0, r3, r1	@ 00039f8a 5818
.org 0x39f8c
	movs r2, #0	@ 00039f8c 0022
.org 0x39f8e
	strb r2, [r0, #0]	@ 00039f8e 0270
.org 0x39f90
	ldr r0, [pc, #60]	@ 00039f90 0f48
.org 0x39f92
	adds r0, r0, r3	@ 00039f92 c018
.org 0x39f94
	mov ip, r0	@ 00039f94 8446
.org 0x39f96
	ldrb r1, [r0, #0]	@ 00039f96 0178
.org 0x39f98
	movs r0, #3	@ 00039f98 0320
.org 0x39f9a
	negs r0, r0	@ 00039f9a 4042
.org 0x39f9c
	ands r0, r1	@ 00039f9c 0840
.org 0x39f9e
	movs r1, #9	@ 00039f9e 0921
.org 0x39fa0
	negs r1, r1	@ 00039fa0 4942
.org 0x39fa2
	ands r0, r1	@ 00039fa2 0840
.org 0x39fa4
	mov r1, ip	@ 00039fa4 6146
.org 0x39fa6
	strb r0, [r1, #0]	@ 00039fa6 0870
.org 0x39fa8
	ldr r0, [pc, #40]	@ 00039fa8 0a48
.org 0x39faa
	adds r1, r3, r0	@ 00039faa 1918
.org 0x39fac
	movs r0, #255	@ 00039fac ff20
.org 0x39fae
	strb r0, [r1, #0]	@ 00039fae 0870
.org 0x39fb0
	movs r1, #164	@ 00039fb0 a421
.org 0x39fb2
	lsls r1, r1, #1	@ 00039fb2 4900
.org 0x39fb4
	adds r0, r3, r1	@ 00039fb4 5818
.org 0x39fb6
	strb r2, [r0, #0]	@ 00039fb6 0270
.org 0x39fb8
	adds r1, #31	@ 00039fb8 1f31
.org 0x39fba
	adds r0, r3, r1	@ 00039fba 5818
.org 0x39fbc
	strb r2, [r0, #0]	@ 00039fbc 0270
.org 0x39fbe
	subs r1, #15	@ 00039fbe 0f39
.org 0x39fc0
	adds r0, r3, r1	@ 00039fc0 5818
.org 0x39fc2
	movs r1, #0	@ 00039fc2 0021
.org 0x39fc4
	strh r2, [r0, #0]	@ 00039fc4 0280
.org 0x39fc6
	movs r2, #179	@ 00039fc6 b322
.org 0x39fc8
	lsls r2, r2, #1	@ 00039fc8 5200
.org 0x39fca
	adds r0, r3, r2	@ 00039fca 9818
.org 0x39fcc
	strb r1, [r0, #0]	@ 00039fcc 0170
.org 0x39fce
	bx lr	@ 00039fce 7047
