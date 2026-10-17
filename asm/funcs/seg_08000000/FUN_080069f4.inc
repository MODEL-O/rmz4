@ FUN_080069f4  entry 0x080069f4  size 50
.thumb
.org 0x69f4
FUN_080069f4:
	push {r4, lr}	@ 000069f4 10b5
.org 0x69f6
	lsls r0, r0, #16	@ 000069f6 0004
.org 0x69f8
	lsrs r0, r0, #16	@ 000069f8 000c
.org 0x69fa
	ldr r4, [pc, #44]	@ 000069fa 0b4c
.org 0x69fc
	adds r1, r4, r0	@ 000069fc 2118
.org 0x69fe
	adds r3, r1, #0	@ 000069fe 0b1c
.org 0x6a00
	subs r3, #224	@ 00006a00 e03b
.org 0x6a02
	ldrb r2, [r3, #0]	@ 00006a02 1a78
.org 0x6a04
	ldr r1, [pc, #36]	@ 00006a04 0949
.org 0x6a06
	adds r0, #24	@ 00006a06 1830
.org 0x6a08
	lsls r0, r0, #24	@ 00006a08 0006
.org 0x6a0a
	lsrs r0, r0, #23	@ 00006a0a c00d
.org 0x6a0c
	adds r0, r0, r1	@ 00006a0c 4018
.org 0x6a0e
	ldrh r1, [r0, #0]	@ 00006a0e 0188
.org 0x6a10
	ldrb r0, [r0, #0]	@ 00006a10 0078
.org 0x6a12
	cmp r2, r0	@ 00006a12 8242
.org 0x6a14
	beq.n 0x6a20	@ 00006a14 04d0
.org 0x6a16
	strb r1, [r3, #0]	@ 00006a16 1970
.org 0x6a18
	adds r1, r4, #0	@ 00006a18 211c
.org 0x6a1a
	adds r1, #56	@ 00006a1a 3831
.org 0x6a1c
	movs r0, #1	@ 00006a1c 0120
.org 0x6a1e
	strb r0, [r1, #0]	@ 00006a1e 0870
.org 0x6a20
	pop {r4}	@ 00006a20 10bc
.org 0x6a22
	pop {r0}	@ 00006a22 01bc
.org 0x6a24
	bx r0	@ 00006a24 0047
