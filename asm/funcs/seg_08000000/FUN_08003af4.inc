@ FUN_08003af4  entry 0x08003af4  size 100
.thumb
.org 0x3af4
FUN_08003af4:
	push {r4, r5, r6, r7, lr}	@ 00003af4 f0b5
.org 0x3af6
	mov r7, r8	@ 00003af6 4746
.org 0x3af8
	push {r7}	@ 00003af8 80b4
.org 0x3afa
	mov r8, r0	@ 00003afa 8046
.org 0x3afc
	adds r7, r1, #0	@ 00003afc 0f1c
.org 0x3afe
	mov ip, r2	@ 00003afe 9446
.org 0x3b00
	movs r1, #0	@ 00003b00 0021
.org 0x3b02
	movs r3, #0	@ 00003b02 0023
.org 0x3b04
	lsls r4, r1, #16	@ 00003b04 0c04
.org 0x3b06
	asrs r0, r4, #16	@ 00003b06 2014
.org 0x3b08
	lsls r6, r0, #6	@ 00003b08 8601
.org 0x3b0a
	lsls r1, r0, #4	@ 00003b0a 0101
.org 0x3b0c
	subs r5, r1, r0	@ 00003b0c 0d1a
.org 0x3b0e
	lsls r2, r3, #16	@ 00003b0e 1a04
.org 0x3b10
	asrs r2, r2, #16	@ 00003b10 1214
.org 0x3b12
	lsls r3, r2, #1	@ 00003b12 5300
.org 0x3b14
	adds r3, r6, r3	@ 00003b14 f318
.org 0x3b16
	lsls r3, r3, #1	@ 00003b16 5b00
.org 0x3b18
	add r3, r8	@ 00003b18 4344
.org 0x3b1a
	adds r1, r5, r2	@ 00003b1a a918
.org 0x3b1c
	lsls r1, r1, #1	@ 00003b1c 4900
.org 0x3b1e
	add r1, ip	@ 00003b1e 6144
.org 0x3b20
	ldrh r0, [r1, #0]	@ 00003b20 0888
.org 0x3b22
	lsls r0, r0, #3	@ 00003b22 c000
.org 0x3b24
	adds r0, r0, r7	@ 00003b24 c019
.org 0x3b26
	ldr r0, [r0, #0]	@ 00003b26 0068
.org 0x3b28
	str r0, [r3, #0]	@ 00003b28 1860
.org 0x3b2a
	ldrh r0, [r1, #0]	@ 00003b2a 0888
.org 0x3b2c
	lsls r0, r0, #3	@ 00003b2c c000
.org 0x3b2e
	adds r0, r0, r7	@ 00003b2e c019
.org 0x3b30
	ldr r0, [r0, #4]	@ 00003b30 4068
.org 0x3b32
	str r0, [r3, #64]	@ 00003b32 1864
.org 0x3b34
	adds r2, #1	@ 00003b34 0132
.org 0x3b36
	lsls r2, r2, #16	@ 00003b36 1204
.org 0x3b38
	lsrs r3, r2, #16	@ 00003b38 130c
.org 0x3b3a
	asrs r2, r2, #16	@ 00003b3a 1214
.org 0x3b3c
	cmp r2, #14	@ 00003b3c 0e2a
.org 0x3b3e
	ble.n 0x3b0e	@ 00003b3e e6dd
.org 0x3b40
	movs r1, #128	@ 00003b40 8021
.org 0x3b42
	lsls r1, r1, #9	@ 00003b42 4902
.org 0x3b44
	adds r0, r4, r1	@ 00003b44 6018
.org 0x3b46
	lsrs r1, r0, #16	@ 00003b46 010c
.org 0x3b48
	asrs r0, r0, #16	@ 00003b48 0014
.org 0x3b4a
	cmp r0, #9	@ 00003b4a 0928
.org 0x3b4c
	ble.n 0x3b02	@ 00003b4c d9dd
.org 0x3b4e
	pop {r3}	@ 00003b4e 08bc
.org 0x3b50
	mov r8, r3	@ 00003b50 9846
.org 0x3b52
	pop {r4, r5, r6, r7}	@ 00003b52 f0bc
.org 0x3b54
	pop {r0}	@ 00003b54 01bc
.org 0x3b56
	bx r0	@ 00003b56 0047
