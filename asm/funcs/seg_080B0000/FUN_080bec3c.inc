@ FUN_080bec3c  entry 0x080bec3c  size 76
.thumb
.org 0xbec3c
FUN_080bec3c:
	push {lr}	@ 000bec3c 00b5
.org 0xbec3e
	adds r2, r0, #0	@ 000bec3e 021c
.org 0xbec40
	adds r0, #180	@ 000bec40 b430
.org 0xbec42
	ldr r1, [r0, #0]	@ 000bec42 0168
.org 0xbec44
	adds r3, r2, #0	@ 000bec44 131c
.org 0xbec46
	adds r3, #184	@ 000bec46 b833
.org 0xbec48
	ldrb r0, [r3, #0]	@ 000bec48 1878
.org 0xbec4a
	cmp r0, #0	@ 000bec4a 0028
.org 0xbec4c
	beq.n 0xbec56	@ 000bec4c 03d0
.org 0xbec4e
	adds r1, #201	@ 000bec4e c931
.org 0xbec50
	movs r0, #0	@ 000bec50 0020
.org 0xbec52
	strb r0, [r1, #0]	@ 000bec52 0870
.org 0xbec54
	strb r0, [r3, #0]	@ 000bec54 1870
.org 0xbec56
	adds r0, r2, #0	@ 000bec56 101c
.org 0xbec58
	adds r0, #140	@ 000bec58 8c30
.org 0xbec5a
	movs r1, #0	@ 000bec5a 0021
.org 0xbec5c
	str r1, [r0, #0]	@ 000bec5c 0160
.org 0xbec5e
	adds r0, #4	@ 000bec5e 0430
.org 0xbec60
	str r1, [r0, #0]	@ 000bec60 0160
.org 0xbec62
	adds r0, #4	@ 000bec62 0430
.org 0xbec64
	strb r1, [r0, #0]	@ 000bec64 0170
.org 0xbec66
	ldrb r1, [r2, #10]	@ 000bec66 917a
.org 0xbec68
	movs r0, #251	@ 000bec68 fb20
.org 0xbec6a
	ands r0, r1	@ 000bec6a 0840
.org 0xbec6c
	movs r1, #254	@ 000bec6c fe21
.org 0xbec6e
	ands r0, r1	@ 000bec6e 0840
.org 0xbec70
	strb r0, [r2, #10]	@ 000bec70 9072
.org 0xbec72
	ldr r1, [pc, #20]	@ 000bec72 0549
.org 0xbec74
	ldrb r0, [r2, #9]	@ 000bec74 507a
.org 0xbec76
	lsls r0, r0, #2	@ 000bec76 8000
.org 0xbec78
	adds r0, r0, r1	@ 000bec78 4018
.org 0xbec7a
	movs r1, #4	@ 000bec7a 0421
.org 0xbec7c
	str r1, [r2, #12]	@ 000bec7c d160
.org 0xbec7e
	ldr r0, [r0, #0]	@ 000bec7e 0068
.org 0xbec80
	ldr r0, [r0, #16]	@ 000bec80 0069
.org 0xbec82
	str r0, [r2, #20]	@ 000bec82 5061
.org 0xbec84
	pop {r0}	@ 000bec84 01bc
.org 0xbec86
	bx r0	@ 000bec86 0047
