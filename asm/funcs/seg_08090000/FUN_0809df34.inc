@ FUN_0809df34  entry 0x0809df34  size 58
.thumb
.org 0x9df34
FUN_0809df34:
	push {r4, lr}	@ 0009df34 10b5
.org 0x9df36
	adds r4, r0, #0	@ 0009df36 041c
.org 0x9df38
	ldr r0, [r4, #84]	@ 0009df38 606d
.org 0x9df3a
	ldr r1, [r4, #88]	@ 0009df3a a16d
.org 0x9df3c
	movs r2, #128	@ 0009df3c 8022
.org 0x9df3e
	lsls r2, r2, #4	@ 0009df3e 1201
.org 0x9df40
	adds r1, r1, r2	@ 0009df40 8918
.org 0x9df42
	bl 0x7c7c	@ 0009df42 69f79bfe
.org 0x9df46
	lsls r0, r0, #16	@ 0009df46 0004
.org 0x9df48
	lsrs r1, r0, #16	@ 0009df48 010c
.org 0x9df4a
	cmp r1, #0	@ 0009df4a 0029
.org 0x9df4c
	beq.n 0x9df62	@ 0009df4c 09d0
.org 0x9df4e
	ldr r0, [r4, #84]	@ 0009df4e 606d
.org 0x9df50
	ldr r1, [r4, #88]	@ 0009df50 a16d
.org 0x9df52
	bl 0x8534	@ 0009df52 6af7effa
.org 0x9df56
	str r0, [r4, #88]	@ 0009df56 a065
.org 0x9df58
	adds r1, r4, #0	@ 0009df58 211c
.org 0x9df5a
	adds r1, #190	@ 0009df5a be31
.org 0x9df5c
	movs r0, #1	@ 0009df5c 0120
.org 0x9df5e
	strb r0, [r1, #0]	@ 0009df5e 0870
.org 0x9df60
	b.n 0x9df68	@ 0009df60 02e0
.org 0x9df62
	adds r0, r4, #0	@ 0009df62 201c
.org 0x9df64
	adds r0, #190	@ 0009df64 be30
.org 0x9df66
	strb r1, [r0, #0]	@ 0009df66 0170
.org 0x9df68
	pop {r4}	@ 0009df68 10bc
.org 0x9df6a
	pop {r0}	@ 0009df6a 01bc
.org 0x9df6c
	bx r0	@ 0009df6c 0047
