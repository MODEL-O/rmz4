@ FUN_080c50ac  entry 0x080c50ac  size 20
.thumb
.org 0xc50ac
FUN_080c50ac:
	push {lr}	@ 000c50ac 00b5
.org 0xc50ae
	ldr r2, [pc, #16]	@ 000c50ae 044a
.org 0xc50b0
	ldrb r1, [r0, #13]	@ 000c50b0 417b
.org 0xc50b2
	lsls r1, r1, #2	@ 000c50b2 8900
.org 0xc50b4
	adds r1, r1, r2	@ 000c50b4 8918
.org 0xc50b6
	ldr r1, [r1, #0]	@ 000c50b6 0968
.org 0xc50b8
	bl 0x128f80	@ 000c50b8 63f062ff
.org 0xc50bc
	pop {r0}	@ 000c50bc 01bc
.org 0xc50be
	bx r0	@ 000c50be 0047
