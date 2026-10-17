@ FUN_08040ddc  entry 0x08040ddc  size 138
.thumb
.org 0x40ddc
FUN_08040ddc:
	push {r4, r5, r6, lr}	@ 00040ddc 70b5
.org 0x40dde
	adds r6, r0, #0	@ 00040dde 061c
.org 0x40de0
	ldr r2, [r6, #40]	@ 00040de0 b26a
.org 0x40de2
	ldr r1, [pc, #132]	@ 00040de2 2149
.org 0x40de4
	ldrb r0, [r6, #9]	@ 00040de4 707a
.org 0x40de6
	lsls r0, r0, #2	@ 00040de6 8000
.org 0x40de8
	adds r0, r0, r1	@ 00040de8 4018
.org 0x40dea
	movs r1, #1	@ 00040dea 0121
.org 0x40dec
	str r1, [r6, #12]	@ 00040dec f160
.org 0x40dee
	ldr r0, [r0, #0]	@ 00040dee 0068
.org 0x40df0
	ldr r0, [r0, #4]	@ 00040df0 4068
.org 0x40df2
	str r0, [r6, #20]	@ 00040df2 7061
.org 0x40df4
	adds r0, r2, #0	@ 00040df4 101c
.org 0x40df6
	adds r0, #180	@ 00040df6 b430
.org 0x40df8
	ldrb r1, [r0, #12]	@ 00040df8 017b
.org 0x40dfa
	cmp r1, #2	@ 00040dfa 0229
.org 0x40dfc
	bhi.n 0x40e00	@ 00040dfc 00d8
.org 0x40dfe
	ldrb r1, [r0, #13]	@ 00040dfe 417b
.org 0x40e00
	ldr r3, [pc, #104]	@ 00040e00 1a4b
.org 0x40e02
	adds r0, r2, r3	@ 00040e02 d018
.org 0x40e04
	strb r1, [r0, #0]	@ 00040e04 0170
.org 0x40e06
	ldr r1, [pc, #104]	@ 00040e06 1a49
.org 0x40e08
	ldr r3, [pc, #96]	@ 00040e08 184b
.org 0x40e0a
	adds r0, r2, r3	@ 00040e0a d018
.org 0x40e0c
	ldrb r0, [r0, #0]	@ 00040e0c 0078
.org 0x40e0e
	lsls r0, r0, #2	@ 00040e0e 8000
.org 0x40e10
	adds r0, r0, r1	@ 00040e10 4018
.org 0x40e12
	adds r1, r2, #0	@ 00040e12 111c
.org 0x40e14
	adds r1, #180	@ 00040e14 b431
.org 0x40e16
	ldrb r1, [r1, #15]	@ 00040e16 c97b
.org 0x40e18
	ldr r2, [r0, #0]	@ 00040e18 0268
.org 0x40e1a
	lsls r0, r1, #1	@ 00040e1a 4800
.org 0x40e1c
	adds r0, r0, r1	@ 00040e1c 4018
.org 0x40e1e
	lsls r0, r0, #2	@ 00040e1e 8000
.org 0x40e20
	adds r0, r0, r2	@ 00040e20 8018
.org 0x40e22
	ldrh r4, [r0, #0]	@ 00040e22 0488
.org 0x40e24
	ldrb r5, [r0, #3]	@ 00040e24 c578
.org 0x40e26
	ldrb r1, [r0, #2]	@ 00040e26 8178
.org 0x40e28
	adds r0, r6, #0	@ 00040e28 301c
.org 0x40e2a
	adds r0, #188	@ 00040e2a bc30
.org 0x40e2c
	strb r1, [r0, #0]	@ 00040e2c 0170
.org 0x40e2e
	adds r0, r6, #0	@ 00040e2e 301c
.org 0x40e30
	bl 0x1cd28	@ 00040e30 dbf77aff
.org 0x40e34
	adds r0, r6, #0	@ 00040e34 301c
.org 0x40e36
	bl 0x1ceec	@ 00040e36 dcf759f8
.org 0x40e3a
	ldrb r0, [r6, #10]	@ 00040e3a b07a
.org 0x40e3c
	movs r1, #1	@ 00040e3c 0121
.org 0x40e3e
	orrs r0, r1	@ 00040e3e 0843
.org 0x40e40
	movs r1, #2	@ 00040e40 0221
.org 0x40e42
	orrs r0, r1	@ 00040e42 0843
.org 0x40e44
	strb r0, [r6, #10]	@ 00040e44 b072
.org 0x40e46
	adds r0, r6, #0	@ 00040e46 301c
.org 0x40e48
	adds r1, r4, #0	@ 00040e48 211c
.org 0x40e4a
	bl 0x1cf00	@ 00040e4a dcf759f8
.org 0x40e4e
	adds r0, r6, #0	@ 00040e4e 301c
.org 0x40e50
	bl 0x1cff0	@ 00040e50 dcf7cef8
.org 0x40e54
	adds r0, r6, #0	@ 00040e54 301c
.org 0x40e56
	adds r0, #37	@ 00040e56 2530
.org 0x40e58
	strb r5, [r0, #0]	@ 00040e58 0570
.org 0x40e5a
	adds r0, r6, #0	@ 00040e5a 301c
.org 0x40e5c
	bl 0x40d54	@ 00040e5c fff77aff
.org 0x40e60
	pop {r4, r5, r6}	@ 00040e60 70bc
.org 0x40e62
	pop {r0}	@ 00040e62 01bc
.org 0x40e64
	bx r0	@ 00040e64 0047
