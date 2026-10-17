@ FUN_080d1e08  entry 0x080d1e08  size 72
.thumb
.org 0xd1e08
FUN_080d1e08:
	push {r4, lr}	@ 000d1e08 10b5
.org 0xd1e0a
	adds r4, r0, #0	@ 000d1e0a 041c
.org 0xd1e0c
	bl 0x1cdbc	@ 000d1e0c 4af7d6ff
.org 0xd1e10
	ldrb r1, [r4, #10]	@ 000d1e10 a17a
.org 0xd1e12
	movs r0, #1	@ 000d1e12 0120
.org 0xd1e14
	orrs r0, r1	@ 000d1e14 0843
.org 0xd1e16
	movs r1, #2	@ 000d1e16 0221
.org 0xd1e18
	orrs r0, r1	@ 000d1e18 0843
.org 0xd1e1a
	strb r0, [r4, #10]	@ 000d1e1a a072
.org 0xd1e1c
	adds r0, r4, #0	@ 000d1e1c 201c
.org 0xd1e1e
	movs r1, #11	@ 000d1e1e 0b21
.org 0xd1e20
	bl 0x1cf00	@ 000d1e20 4bf76ef8
.org 0xd1e24
	adds r0, r4, #0	@ 000d1e24 201c
.org 0xd1e26
	adds r0, #80	@ 000d1e26 5030
.org 0xd1e28
	movs r1, #128	@ 000d1e28 8021
.org 0xd1e2a
	lsls r1, r1, #2	@ 000d1e2a 8900
.org 0xd1e2c
	strh r1, [r0, #0]	@ 000d1e2c 0180
.org 0xd1e2e
	adds r0, #2	@ 000d1e2e 0230
.org 0xd1e30
	strh r1, [r0, #0]	@ 000d1e30 0180
.org 0xd1e32
	ldr r1, [pc, #28]	@ 000d1e32 0749
.org 0xd1e34
	ldrb r0, [r4, #9]	@ 000d1e34 607a
.org 0xd1e36
	lsls r0, r0, #2	@ 000d1e36 8000
.org 0xd1e38
	adds r0, r0, r1	@ 000d1e38 4018
.org 0xd1e3a
	movs r1, #1	@ 000d1e3a 0121
.org 0xd1e3c
	str r1, [r4, #12]	@ 000d1e3c e160
.org 0xd1e3e
	ldr r0, [r0, #0]	@ 000d1e3e 0068
.org 0xd1e40
	ldr r0, [r0, #4]	@ 000d1e40 4068
.org 0xd1e42
	str r0, [r4, #20]	@ 000d1e42 6061
.org 0xd1e44
	adds r0, r4, #0	@ 000d1e44 201c
.org 0xd1e46
	bl 0xd1dd0	@ 000d1e46 fff7c3ff
.org 0xd1e4a
	pop {r4}	@ 000d1e4a 10bc
.org 0xd1e4c
	pop {r0}	@ 000d1e4c 01bc
.org 0xd1e4e
	bx r0	@ 000d1e4e 0047
