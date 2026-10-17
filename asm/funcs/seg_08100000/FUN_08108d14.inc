@ FUN_08108d14  entry 0x08108d14  size 60
.thumb
.org 0x108d14
FUN_08108d14:
	push {r4, r5, r6, lr}	@ 00108d14 70b5
.org 0x108d16
	adds r4, r0, #0	@ 00108d16 041c
.org 0x108d18
	adds r5, r1, #0	@ 00108d18 0d1c
.org 0x108d1a
	ldr r1, [pc, #52]	@ 00108d1a 0d49
.org 0x108d1c
	adds r0, r4, r1	@ 00108d1c 6018
.org 0x108d1e
	adds r1, r5, #0	@ 00108d1e 291c
.org 0x108d20
	bl 0x7c7c	@ 00108d20 fef6acff
.org 0x108d24
	lsls r0, r0, #16	@ 00108d24 0004
.org 0x108d26
	lsrs r6, r0, #16	@ 00108d26 060c
.org 0x108d28
	movs r0, #224	@ 00108d28 e020
.org 0x108d2a
	lsls r0, r0, #3	@ 00108d2a c000
.org 0x108d2c
	adds r4, r4, r0	@ 00108d2c 2418
.org 0x108d2e
	adds r0, r4, #0	@ 00108d2e 201c
.org 0x108d30
	adds r1, r5, #0	@ 00108d30 291c
.org 0x108d32
	bl 0x7c7c	@ 00108d32 fef6a3ff
.org 0x108d36
	lsls r0, r0, #16	@ 00108d36 0004
.org 0x108d38
	lsrs r0, r0, #16	@ 00108d38 000c
.org 0x108d3a
	cmp r6, #15	@ 00108d3a 0f2e
.org 0x108d3c
	bne.n 0x108d40	@ 00108d3c 00d1
.org 0x108d3e
	movs r6, #0	@ 00108d3e 0026
.org 0x108d40
	cmp r0, #15	@ 00108d40 0f28
.org 0x108d42
	bne.n 0x108d46	@ 00108d42 00d1
.org 0x108d44
	movs r0, #0	@ 00108d44 0020
.org 0x108d46
	orrs r6, r0	@ 00108d46 0643
.org 0x108d48
	adds r0, r6, #0	@ 00108d48 301c
.org 0x108d4a
	pop {r4, r5, r6}	@ 00108d4a 70bc
.org 0x108d4c
	pop {r1}	@ 00108d4c 02bc
.org 0x108d4e
	bx r1	@ 00108d4e 0847
