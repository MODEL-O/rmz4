@ FUN_080d1cbc  entry 0x080d1cbc  size 70
.thumb
.org 0xd1cbc
FUN_080d1cbc:
	push {r4, lr}	@ 000d1cbc 10b5
.org 0xd1cbe
	sub sp, #8	@ 000d1cbe 82b0
.org 0xd1cc0
	adds r2, r0, #0	@ 000d1cc0 021c
.org 0xd1cc2
	lsls r1, r1, #24	@ 000d1cc2 0906
.org 0xd1cc4
	lsrs r4, r1, #24	@ 000d1cc4 0c0e
.org 0xd1cc6
	cmp r4, #0	@ 000d1cc6 002c
.org 0xd1cc8
	beq.n 0xd1cd2	@ 000d1cc8 03d0
.org 0xd1cca
	ldr r0, [r2, #0]	@ 000d1cca 1068
.org 0xd1ccc
	movs r1, #128	@ 000d1ccc 8021
.org 0xd1cce
	lsls r1, r1, #5	@ 000d1cce 4901
.org 0xd1cd0
	b.n 0xd1cd6	@ 000d1cd0 01e0
.org 0xd1cd2
	ldr r0, [r2, #0]	@ 000d1cd2 1068
.org 0xd1cd4
	ldr r1, [pc, #44]	@ 000d1cd4 0b49
.org 0xd1cd6
	adds r0, r0, r1	@ 000d1cd6 4018
.org 0xd1cd8
	str r0, [sp, #0]	@ 000d1cd8 0090
.org 0xd1cda
	ldr r1, [r2, #4]	@ 000d1cda 5168
.org 0xd1cdc
	movs r0, #192	@ 000d1cdc c020
.org 0xd1cde
	lsls r0, r0, #2	@ 000d1cde 8000
.org 0xd1ce0
	adds r1, r1, r0	@ 000d1ce0 0918
.org 0xd1ce2
	str r1, [sp, #4]	@ 000d1ce2 0191
.org 0xd1ce4
	ldr r0, [sp, #0]	@ 000d1ce4 0098
.org 0xd1ce6
	bl 0x7c7c	@ 000d1ce6 35f7c9ff
.org 0xd1cea
	lsls r0, r0, #16	@ 000d1cea 0004
.org 0xd1cec
	cmp r0, #0	@ 000d1cec 0028
.org 0xd1cee
	beq.n 0xd1cfa	@ 000d1cee 04d0
.org 0xd1cf0
	mov r0, sp	@ 000d1cf0 6846
.org 0xd1cf2
	movs r1, #7	@ 000d1cf2 0721
.org 0xd1cf4
	adds r2, r4, #0	@ 000d1cf4 221c
.org 0xd1cf6
	bl 0xd1bcc	@ 000d1cf6 fff769ff
.org 0xd1cfa
	add sp, #8	@ 000d1cfa 02b0
.org 0xd1cfc
	pop {r4}	@ 000d1cfc 10bc
.org 0xd1cfe
	pop {r0}	@ 000d1cfe 01bc
.org 0xd1d00
	bx r0	@ 000d1d00 0047
