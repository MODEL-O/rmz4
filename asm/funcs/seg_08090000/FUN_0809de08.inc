@ FUN_0809de08  entry 0x0809de08  size 62
.thumb
.org 0x9de08
FUN_0809de08:
	push {r4, lr}	@ 0009de08 10b5
.org 0x9de0a
	adds r4, r0, #0	@ 0009de0a 041c
.org 0x9de0c
	ldrb r0, [r4, #14]	@ 0009de0c a07b
.org 0x9de0e
	cmp r0, #0	@ 0009de0e 0028
.org 0x9de10
	bne.n 0x9de20	@ 0009de10 06d1
.org 0x9de12
	ldr r1, [pc, #52]	@ 0009de12 0d49
.org 0x9de14
	adds r0, r4, #0	@ 0009de14 201c
.org 0x9de16
	bl 0x1cf00	@ 0009de16 7ff773f8
.org 0x9de1a
	ldrb r0, [r4, #14]	@ 0009de1a a07b
.org 0x9de1c
	adds r0, #1	@ 0009de1c 0130
.org 0x9de1e
	strb r0, [r4, #14]	@ 0009de1e a073
.org 0x9de20
	adds r0, r4, #0	@ 0009de20 201c
.org 0x9de22
	adds r0, #115	@ 0009de22 7330
.org 0x9de24
	ldrb r0, [r0, #0]	@ 0009de24 0078
.org 0x9de26
	cmp r0, #3	@ 0009de26 0328
.org 0x9de28
	bne.n 0x9de40	@ 0009de28 0ad1
.org 0x9de2a
	movs r1, #0	@ 0009de2a 0021
.org 0x9de2c
	movs r0, #4	@ 0009de2c 0420
.org 0x9de2e
	strb r0, [r4, #13]	@ 0009de2e 6073
.org 0x9de30
	strb r1, [r4, #14]	@ 0009de30 a173
.org 0x9de32
	strb r1, [r4, #15]	@ 0009de32 e173
.org 0x9de34
	adds r1, r4, #0	@ 0009de34 211c
.org 0x9de36
	adds r1, #189	@ 0009de36 bd31
.org 0x9de38
	movs r0, #1	@ 0009de38 0120
.org 0x9de3a
	strb r0, [r1, #0]	@ 0009de3a 0870
.org 0x9de3c
	movs r0, #180	@ 0009de3c b420
.org 0x9de3e
	strb r0, [r4, #18]	@ 0009de3e a074
.org 0x9de40
	pop {r4}	@ 0009de40 10bc
.org 0x9de42
	pop {r0}	@ 0009de42 01bc
.org 0x9de44
	bx r0	@ 0009de44 0047
