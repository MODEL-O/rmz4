@ FUN_08014a00  entry 0x08014a00  size 68
.thumb
.org 0x14a00
FUN_08014a00:
	push {r4, lr}	@ 00014a00 10b5
.org 0x14a02
	ldr r1, [pc, #64]	@ 00014a02 1049
.org 0x14a04
	ldr r2, [pc, #64]	@ 00014a04 104a
.org 0x14a06
	adds r0, r1, r2	@ 00014a06 8818
.org 0x14a08
	movs r3, #0	@ 00014a08 0023
.org 0x14a0a
	strb r3, [r0, #0]	@ 00014a0a 0370
.org 0x14a0c
	ldr r4, [pc, #60]	@ 00014a0c 0f4c
.org 0x14a0e
	adds r0, r1, r4	@ 00014a0e 0819
.org 0x14a10
	movs r2, #0	@ 00014a10 0022
.org 0x14a12
	strh r3, [r0, #0]	@ 00014a12 0380
.org 0x14a14
	adds r4, #2	@ 00014a14 0234
.org 0x14a16
	adds r0, r1, r4	@ 00014a16 0819
.org 0x14a18
	strb r2, [r0, #0]	@ 00014a18 0270
.org 0x14a1a
	adds r4, #1	@ 00014a1a 0134
.org 0x14a1c
	adds r0, r1, r4	@ 00014a1c 0819
.org 0x14a1e
	strb r2, [r0, #0]	@ 00014a1e 0270
.org 0x14a20
	adds r4, #1	@ 00014a20 0134
.org 0x14a22
	adds r0, r1, r4	@ 00014a22 0819
.org 0x14a24
	strb r2, [r0, #0]	@ 00014a24 0270
.org 0x14a26
	adds r4, #1	@ 00014a26 0134
.org 0x14a28
	adds r0, r1, r4	@ 00014a28 0819
.org 0x14a2a
	strb r2, [r0, #0]	@ 00014a2a 0270
.org 0x14a2c
	adds r4, #1	@ 00014a2c 0134
.org 0x14a2e
	adds r0, r1, r4	@ 00014a2e 0819
.org 0x14a30
	strb r2, [r0, #0]	@ 00014a30 0270
.org 0x14a32
	ldr r2, [pc, #28]	@ 00014a32 074a
.org 0x14a34
	adds r0, r1, r2	@ 00014a34 8818
.org 0x14a36
	strh r3, [r0, #0]	@ 00014a36 0380
.org 0x14a38
	adds r4, #4	@ 00014a38 0434
.org 0x14a3a
	adds r1, r1, r4	@ 00014a3a 0919
.org 0x14a3c
	strh r3, [r1, #0]	@ 00014a3c 0b80
.org 0x14a3e
	pop {r4}	@ 00014a3e 10bc
.org 0x14a40
	pop {r0}	@ 00014a40 01bc
.org 0x14a42
	bx r0	@ 00014a42 0047
