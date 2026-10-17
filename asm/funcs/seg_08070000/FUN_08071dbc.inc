@ FUN_08071dbc  entry 0x08071dbc  size 138
.thumb
.org 0x71dbc
FUN_08071dbc:
	push {r4, r5, r6, lr}	@ 00071dbc 70b5
.org 0x71dbe
	adds r6, r0, #0	@ 00071dbe 061c
.org 0x71dc0
	ldrb r0, [r6, #15]	@ 00071dc0 f07b
.org 0x71dc2
	cmp r0, #0	@ 00071dc2 0028
.org 0x71dc4
	bne.n 0x71dd4	@ 00071dc4 06d1
.org 0x71dc6
	adds r0, r6, #0	@ 00071dc6 301c
.org 0x71dc8
	movs r1, #13	@ 00071dc8 0d21
.org 0x71dca
	bl 0x736c4	@ 00071dca 01f07bfc
.org 0x71dce
	ldrb r0, [r6, #15]	@ 00071dce f07b
.org 0x71dd0
	adds r0, #1	@ 00071dd0 0130
.org 0x71dd2
	strb r0, [r6, #15]	@ 00071dd2 f073
.org 0x71dd4
	adds r0, r6, #0	@ 00071dd4 301c
.org 0x71dd6
	bl 0x1cff0	@ 00071dd6 abf70bf9
.org 0x71dda
	adds r0, r6, #0	@ 00071dda 301c
.org 0x71ddc
	adds r0, #116	@ 00071ddc 7430
.org 0x71dde
	ldr r4, [pc, #104]	@ 00071dde 1a4c
.org 0x71de0
	ldr r3, [pc, #104]	@ 00071de0 1a4b
.org 0x71de2
	adds r1, r6, #0	@ 00071de2 311c
.org 0x71de4
	adds r1, #184	@ 00071de4 b831
.org 0x71de6
	ldrb r2, [r1, #0]	@ 00071de6 0a78
.org 0x71de8
	lsls r1, r2, #1	@ 00071de8 5100
.org 0x71dea
	adds r1, r1, r3	@ 00071dea c918
.org 0x71dec
	ldrh r1, [r1, #0]	@ 00071dec 0988
.org 0x71dee
	lsls r1, r1, #2	@ 00071dee 8900
.org 0x71df0
	adds r1, r1, r4	@ 00071df0 0919
.org 0x71df2
	adds r3, r6, #0	@ 00071df2 331c
.org 0x71df4
	adds r3, #113	@ 00071df4 7133
.org 0x71df6
	movs r5, #0	@ 00071df6 0025
.org 0x71df8
	ldrsb r5, [r3, r5]	@ 00071df8 5d57
.org 0x71dfa
	ldr r1, [r1, #0]	@ 00071dfa 0968
.org 0x71dfc
	lsls r3, r5, #2	@ 00071dfc ab00
.org 0x71dfe
	adds r3, r3, r1	@ 00071dfe 5b18
.org 0x71e00
	ldr r4, [pc, #76]	@ 00071e00 134c
.org 0x71e02
	adds r1, r6, #0	@ 00071e02 311c
.org 0x71e04
	adds r1, #185	@ 00071e04 b931
.org 0x71e06
	ldrb r1, [r1, #0]	@ 00071e06 0978
.org 0x71e08
	lsls r1, r1, #2	@ 00071e08 8900
.org 0x71e0a
	adds r1, r1, r4	@ 00071e0a 0919
.org 0x71e0c
	ldr r1, [r1, #0]	@ 00071e0c 0968
.org 0x71e0e
	lsls r2, r2, #2	@ 00071e0e 9200
.org 0x71e10
	adds r2, r2, r1	@ 00071e10 5218
.org 0x71e12
	ldr r1, [r2, #0]	@ 00071e12 1168
.org 0x71e14
	adds r1, r1, r5	@ 00071e14 4919
.org 0x71e16
	ldrb r1, [r1, #0]	@ 00071e16 0978
.org 0x71e18
	lsls r2, r1, #1	@ 00071e18 4a00
.org 0x71e1a
	adds r2, r2, r1	@ 00071e1a 5218
.org 0x71e1c
	lsls r2, r2, #3	@ 00071e1c d200
.org 0x71e1e
	ldr r1, [r3, #0]	@ 00071e1e 1968
.org 0x71e20
	adds r1, r1, r2	@ 00071e20 8918
.org 0x71e22
	bl 0x5784	@ 00071e22 93f7affc
.org 0x71e26
	adds r0, r6, #0	@ 00071e26 301c
.org 0x71e28
	bl 0x73a68	@ 00071e28 01f01efe
.org 0x71e2c
	adds r0, r6, #0	@ 00071e2c 301c
.org 0x71e2e
	adds r0, #115	@ 00071e2e 7330
.org 0x71e30
	ldrb r0, [r0, #0]	@ 00071e30 0078
.org 0x71e32
	cmp r0, #3	@ 00071e32 0328
.org 0x71e34
	bne.n 0x71e40	@ 00071e34 04d1
.org 0x71e36
	ldrb r0, [r6, #14]	@ 00071e36 b07b
.org 0x71e38
	adds r0, #1	@ 00071e38 0130
.org 0x71e3a
	movs r1, #0	@ 00071e3a 0021
.org 0x71e3c
	strb r0, [r6, #14]	@ 00071e3c b073
.org 0x71e3e
	strb r1, [r6, #15]	@ 00071e3e f173
.org 0x71e40
	pop {r4, r5, r6}	@ 00071e40 70bc
.org 0x71e42
	pop {r0}	@ 00071e42 01bc
.org 0x71e44
	bx r0	@ 00071e44 0047
