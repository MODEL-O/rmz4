@ FUN_08006a30  entry 0x08006a30  size 50
.thumb
.org 0x6a30
FUN_08006a30:
	push {r4, lr}	@ 00006a30 10b5
.org 0x6a32
	lsls r0, r0, #16	@ 00006a32 0004
.org 0x6a34
	lsrs r0, r0, #16	@ 00006a34 000c
.org 0x6a36
	ldr r4, [pc, #44]	@ 00006a36 0b4c
.org 0x6a38
	adds r1, r4, r0	@ 00006a38 2118
.org 0x6a3a
	adds r3, r1, #0	@ 00006a3a 0b1c
.org 0x6a3c
	subs r3, #224	@ 00006a3c e03b
.org 0x6a3e
	ldrb r2, [r3, #0]	@ 00006a3e 1a78
.org 0x6a40
	ldr r1, [pc, #36]	@ 00006a40 0949
.org 0x6a42
	adds r0, #24	@ 00006a42 1830
.org 0x6a44
	lsls r0, r0, #24	@ 00006a44 0006
.org 0x6a46
	lsrs r0, r0, #23	@ 00006a46 c00d
.org 0x6a48
	adds r0, r0, r1	@ 00006a48 4018
.org 0x6a4a
	ldrb r0, [r0, #0]	@ 00006a4a 0078
.org 0x6a4c
	cmp r2, r0	@ 00006a4c 8242
.org 0x6a4e
	bne.n 0x6a5c	@ 00006a4e 05d1
.org 0x6a50
	movs r0, #0	@ 00006a50 0020
.org 0x6a52
	strb r0, [r3, #0]	@ 00006a52 1870
.org 0x6a54
	adds r1, r4, #0	@ 00006a54 211c
.org 0x6a56
	adds r1, #56	@ 00006a56 3831
.org 0x6a58
	movs r0, #1	@ 00006a58 0120
.org 0x6a5a
	strb r0, [r1, #0]	@ 00006a5a 0870
.org 0x6a5c
	pop {r4}	@ 00006a5c 10bc
.org 0x6a5e
	pop {r0}	@ 00006a5e 01bc
.org 0x6a60
	bx r0	@ 00006a60 0047
