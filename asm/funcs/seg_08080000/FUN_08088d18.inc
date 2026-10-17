@ FUN_08088d18  entry 0x08088d18  size 84
.thumb
.org 0x88d18
FUN_08088d18:
	push {r4, r5, r6, lr}	@ 00088d18 70b5
.org 0x88d1a
	sub sp, #12	@ 00088d1a 83b0
.org 0x88d1c
	adds r4, r0, #0	@ 00088d1c 041c
.org 0x88d1e
	ldr r1, [pc, #76]	@ 00088d1e 1349
.org 0x88d20
	mov r0, sp	@ 00088d20 6846
.org 0x88d22
	movs r2, #3	@ 00088d22 0322
.org 0x88d24
	bl 0x129258	@ 00088d24 a0f098fa
.org 0x88d28
	ldrb r0, [r4, #10]	@ 00088d28 a07a
.org 0x88d2a
	lsrs r0, r0, #4	@ 00088d2a 0009
.org 0x88d2c
	movs r1, #1	@ 00088d2c 0121
.org 0x88d2e
	ands r0, r1	@ 00088d2e 0840
.org 0x88d30
	ldr r1, [r4, #84]	@ 00088d30 616d
.org 0x88d32
	str r1, [sp, #4]	@ 00088d32 0191
.org 0x88d34
	ldr r1, [r4, #88]	@ 00088d34 a16d
.org 0x88d36
	add r2, sp, #4	@ 00088d36 01aa
.org 0x88d38
	str r1, [r2, #4]	@ 00088d38 5160
.org 0x88d3a
	movs r4, #0	@ 00088d3a 0024
.org 0x88d3c
	adds r6, r2, #0	@ 00088d3c 161c
.org 0x88d3e
	lsls r1, r0, #4	@ 00088d3e 0101
.org 0x88d40
	orrs r0, r1	@ 00088d40 0843
.org 0x88d42
	lsls r5, r0, #24	@ 00088d42 0506
.org 0x88d44
	mov r1, sp	@ 00088d44 6946
.org 0x88d46
	adds r0, r1, r4	@ 00088d46 0819
.org 0x88d48
	ldrb r0, [r0, #0]	@ 00088d48 0078
.org 0x88d4a
	lsls r1, r0, #3	@ 00088d4a c100
.org 0x88d4c
	subs r1, r1, r0	@ 00088d4c 091a
.org 0x88d4e
	lsls r1, r1, #2	@ 00088d4e 8900
.org 0x88d50
	ldr r0, [pc, #28]	@ 00088d50 0748
.org 0x88d52
	adds r1, r1, r0	@ 00088d52 0918
.org 0x88d54
	adds r0, r6, #0	@ 00088d54 301c
.org 0x88d56
	movs r2, #0	@ 00088d56 0022
.org 0x88d58
	lsrs r3, r5, #24	@ 00088d58 2b0e
.org 0x88d5a
	bl 0xd4c8c	@ 00088d5a 4bf097ff
.org 0x88d5e
	adds r4, #1	@ 00088d5e 0134
.org 0x88d60
	cmp r4, #2	@ 00088d60 022c
.org 0x88d62
	ble.n 0x88d44	@ 00088d62 efdd
.org 0x88d64
	add sp, #12	@ 00088d64 03b0
.org 0x88d66
	pop {r4, r5, r6}	@ 00088d66 70bc
.org 0x88d68
	pop {r0}	@ 00088d68 01bc
.org 0x88d6a
	bx r0	@ 00088d6a 0047
