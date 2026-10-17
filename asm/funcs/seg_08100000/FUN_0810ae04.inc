@ FUN_0810ae04  entry 0x0810ae04  size 94
.thumb
.org 0x10ae04
FUN_0810ae04:
	push {r4, r5, lr}	@ 0010ae04 30b5
.org 0x10ae06
	adds r4, r0, #0	@ 0010ae06 041c
.org 0x10ae08
	bl 0x1cc9c	@ 0010ae08 11f748ff
.org 0x10ae0c
	ldrb r1, [r4, #10]	@ 0010ae0c a17a
.org 0x10ae0e
	movs r0, #1	@ 0010ae0e 0120
.org 0x10ae10
	movs r5, #0	@ 0010ae10 0025
.org 0x10ae12
	orrs r0, r1	@ 0010ae12 0843
.org 0x10ae14
	movs r1, #2	@ 0010ae14 0221
.org 0x10ae16
	orrs r0, r1	@ 0010ae16 0843
.org 0x10ae18
	strb r0, [r4, #10]	@ 0010ae18 a072
.org 0x10ae1a
	ldr r1, [pc, #72]	@ 0010ae1a 1249
.org 0x10ae1c
	adds r0, r4, #0	@ 0010ae1c 201c
.org 0x10ae1e
	bl 0x1cf00	@ 0010ae1e 12f76ff8
.org 0x10ae22
	adds r0, r4, #0	@ 0010ae22 201c
.org 0x10ae24
	bl 0x1cff0	@ 0010ae24 12f7e4f8
.org 0x10ae28
	adds r0, r4, #0	@ 0010ae28 201c
.org 0x10ae2a
	adds r0, #76	@ 0010ae2a 4c30
.org 0x10ae2c
	strb r5, [r0, #0]	@ 0010ae2c 0570
.org 0x10ae2e
	adds r2, r4, #0	@ 0010ae2e 221c
.org 0x10ae30
	adds r2, #74	@ 0010ae30 4a32
.org 0x10ae32
	ldrb r1, [r2, #0]	@ 0010ae32 1178
.org 0x10ae34
	movs r0, #17	@ 0010ae34 1120
.org 0x10ae36
	negs r0, r0	@ 0010ae36 4042
.org 0x10ae38
	ands r0, r1	@ 0010ae38 0840
.org 0x10ae3a
	strb r0, [r2, #0]	@ 0010ae3a 1070
.org 0x10ae3c
	ldrb r1, [r4, #10]	@ 0010ae3c a17a
.org 0x10ae3e
	movs r0, #239	@ 0010ae3e ef20
.org 0x10ae40
	ands r0, r1	@ 0010ae40 0840
.org 0x10ae42
	strb r0, [r4, #10]	@ 0010ae42 a072
.org 0x10ae44
	ldr r1, [pc, #32]	@ 0010ae44 0849
.org 0x10ae46
	ldrb r0, [r4, #9]	@ 0010ae46 607a
.org 0x10ae48
	lsls r0, r0, #2	@ 0010ae48 8000
.org 0x10ae4a
	adds r0, r0, r1	@ 0010ae4a 4018
.org 0x10ae4c
	movs r1, #1	@ 0010ae4c 0121
.org 0x10ae4e
	str r1, [r4, #12]	@ 0010ae4e e160
.org 0x10ae50
	ldr r0, [r0, #0]	@ 0010ae50 0068
.org 0x10ae52
	ldr r0, [r0, #4]	@ 0010ae52 4068
.org 0x10ae54
	str r0, [r4, #20]	@ 0010ae54 6061
.org 0x10ae56
	adds r0, r4, #0	@ 0010ae56 201c
.org 0x10ae58
	bl 0x10ada0	@ 0010ae58 fff7a2ff
.org 0x10ae5c
	pop {r4, r5}	@ 0010ae5c 30bc
.org 0x10ae5e
	pop {r0}	@ 0010ae5e 01bc
.org 0x10ae60
	bx r0	@ 0010ae60 0047
