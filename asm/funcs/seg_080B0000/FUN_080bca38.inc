@ FUN_080bca38  entry 0x080bca38  size 58
.thumb
.org 0xbca38
FUN_080bca38:
	push {r4, lr}	@ 000bca38 10b5
.org 0xbca3a
	adds r4, r0, #0	@ 000bca3a 041c
.org 0xbca3c
	ldr r0, [r4, #84]	@ 000bca3c 606d
.org 0xbca3e
	ldr r1, [r4, #92]	@ 000bca3e e16d
.org 0xbca40
	adds r0, r0, r1	@ 000bca40 4018
.org 0xbca42
	str r0, [r4, #84]	@ 000bca42 6065
.org 0xbca44
	ldr r1, [r4, #88]	@ 000bca44 a16d
.org 0xbca46
	ldr r2, [r4, #96]	@ 000bca46 226e
.org 0xbca48
	adds r1, r1, r2	@ 000bca48 8918
.org 0xbca4a
	str r1, [r4, #88]	@ 000bca4a a165
.org 0xbca4c
	adds r2, #64	@ 000bca4c 4032
.org 0xbca4e
	str r2, [r4, #96]	@ 000bca4e 2266
.org 0xbca50
	bl 0x7c7c	@ 000bca50 4bf714f9
.org 0xbca54
	lsls r0, r0, #16	@ 000bca54 0004
.org 0xbca56
	cmp r0, #0	@ 000bca56 0028
.org 0xbca58
	beq.n 0xbca6c	@ 000bca58 08d0
.org 0xbca5a
	ldr r1, [pc, #24]	@ 000bca5a 0649
.org 0xbca5c
	ldrb r0, [r4, #9]	@ 000bca5c 607a
.org 0xbca5e
	lsls r0, r0, #2	@ 000bca5e 8000
.org 0xbca60
	adds r0, r0, r1	@ 000bca60 4018
.org 0xbca62
	movs r1, #2	@ 000bca62 0221
.org 0xbca64
	str r1, [r4, #12]	@ 000bca64 e160
.org 0xbca66
	ldr r0, [r0, #0]	@ 000bca66 0068
.org 0xbca68
	ldr r0, [r0, #8]	@ 000bca68 8068
.org 0xbca6a
	str r0, [r4, #20]	@ 000bca6a 6061
.org 0xbca6c
	pop {r4}	@ 000bca6c 10bc
.org 0xbca6e
	pop {r0}	@ 000bca6e 01bc
.org 0xbca70
	bx r0	@ 000bca70 0047
