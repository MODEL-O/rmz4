@ FUN_08032cb0  entry 0x08032cb0  size 64
.thumb
.org 0x32cb0
FUN_08032cb0:
	push {r4, lr}	@ 00032cb0 10b5
.org 0x32cb2
	adds r4, r0, #0	@ 00032cb2 041c
.org 0x32cb4
	ldr r0, [r4, #88]	@ 00032cb4 a06d
.org 0x32cb6
	ldr r1, [r4, #96]	@ 00032cb6 216e
.org 0x32cb8
	adds r0, r0, r1	@ 00032cb8 4018
.org 0x32cba
	str r0, [r4, #88]	@ 00032cba a065
.org 0x32cbc
	movs r0, #0	@ 00032cbc 0020
.org 0x32cbe
	str r0, [r4, #92]	@ 00032cbe e065
.org 0x32cc0
	adds r1, #16	@ 00032cc0 1031
.org 0x32cc2
	str r1, [r4, #96]	@ 00032cc2 2166
.org 0x32cc4
	movs r1, #186	@ 00032cc4 ba21
.org 0x32cc6
	lsls r1, r1, #1	@ 00032cc6 4900
.org 0x32cc8
	adds r0, r4, r1	@ 00032cc8 6018
.org 0x32cca
	ldrb r1, [r0, #0]	@ 00032cca 0178
.org 0x32ccc
	lsls r1, r1, #3	@ 00032ccc c900
.org 0x32cce
	ldr r0, [pc, #32]	@ 00032cce 0848
.org 0x32cd0
	adds r1, r1, r0	@ 00032cd0 0918
.org 0x32cd2
	adds r0, r4, #0	@ 00032cd2 201c
.org 0x32cd4
	movs r2, #0	@ 00032cd4 0022
.org 0x32cd6
	bl 0x2bfe8	@ 00032cd6 f9f787f9
.org 0x32cda
	ldr r0, [r4, #96]	@ 00032cda 206e
.org 0x32cdc
	cmp r0, #0	@ 00032cdc 0028
.org 0x32cde
	ble.n 0x32cea	@ 00032cde 04dd
.org 0x32ce0
	movs r0, #2	@ 00032ce0 0220
.org 0x32ce2
	strb r0, [r4, #14]	@ 00032ce2 a073
.org 0x32ce4
	adds r0, r4, #0	@ 00032ce4 201c
.org 0x32ce6
	bl 0x32cf4	@ 00032ce6 00f005f8
.org 0x32cea
	pop {r4}	@ 00032cea 10bc
.org 0x32cec
	pop {r0}	@ 00032cec 01bc
.org 0x32cee
	bx r0	@ 00032cee 0047
