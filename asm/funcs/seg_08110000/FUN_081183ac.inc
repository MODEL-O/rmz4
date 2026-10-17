@ FUN_081183ac  entry 0x081183ac  size 28
.thumb
.org 0x1183ac
FUN_081183ac:
	push {lr}	@ 001183ac 00b5
.org 0x1183ae
	adds r2, r0, #0	@ 001183ae 021c
.org 0x1183b0
	ldr r1, [pc, #20]	@ 001183b0 0549
.org 0x1183b2
	ldrb r0, [r2, #9]	@ 001183b2 507a
.org 0x1183b4
	lsls r0, r0, #2	@ 001183b4 8000
.org 0x1183b6
	adds r0, r0, r1	@ 001183b6 4018
.org 0x1183b8
	ldr r1, [r0, #0]	@ 001183b8 0168
.org 0x1183ba
	cmp r1, #0	@ 001183ba 0029
.org 0x1183bc
	beq.n 0x1183c4	@ 001183bc 02d0
.org 0x1183be
	adds r0, r2, #0	@ 001183be 101c
.org 0x1183c0
	bl 0x128f80	@ 001183c0 10f0defd
.org 0x1183c4
	pop {r0}	@ 001183c4 01bc
.org 0x1183c6
	bx r0	@ 001183c6 0047
