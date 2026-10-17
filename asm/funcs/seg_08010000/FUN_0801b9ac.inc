@ FUN_0801b9ac  entry 0x0801b9ac  size 34
.thumb
.org 0x1b9ac
FUN_0801b9ac:
	push {lr}	@ 0001b9ac 00b5
.org 0x1b9ae
	movs r1, #0	@ 0001b9ae 0021
.org 0x1b9b0
	str r1, [r0, #80]	@ 0001b9b0 0165
.org 0x1b9b2
	ldr r2, [r0, #104]	@ 0001b9b2 826e
.org 0x1b9b4
	cmp r2, #0	@ 0001b9b4 002a
.org 0x1b9b6
	beq.n 0x1b9ca	@ 0001b9b6 08d0
.org 0x1b9b8
	ldr r1, [pc, #20]	@ 0001b9b8 0549
.org 0x1b9ba
	ldrb r0, [r2, #9]	@ 0001b9ba 507a
.org 0x1b9bc
	lsls r0, r0, #2	@ 0001b9bc 8000
.org 0x1b9be
	adds r0, r0, r1	@ 0001b9be 4018
.org 0x1b9c0
	movs r1, #2	@ 0001b9c0 0221
.org 0x1b9c2
	str r1, [r2, #12]	@ 0001b9c2 d160
.org 0x1b9c4
	ldr r0, [r0, #0]	@ 0001b9c4 0068
.org 0x1b9c6
	ldr r0, [r0, #8]	@ 0001b9c6 8068
.org 0x1b9c8
	str r0, [r2, #20]	@ 0001b9c8 5061
.org 0x1b9ca
	pop {r0}	@ 0001b9ca 01bc
.org 0x1b9cc
	bx r0	@ 0001b9cc 0047
