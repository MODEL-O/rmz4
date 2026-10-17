@ FUN_080dcdf0  entry 0x080dcdf0  size 20
.thumb
.org 0xdcdf0
FUN_080dcdf0:
	push {lr}	@ 000dcdf0 00b5
.org 0xdcdf2
	ldr r2, [pc, #16]	@ 000dcdf2 044a
.org 0xdcdf4
	ldrb r1, [r0, #16]	@ 000dcdf4 017c
.org 0xdcdf6
	lsls r1, r1, #2	@ 000dcdf6 8900
.org 0xdcdf8
	adds r1, r1, r2	@ 000dcdf8 8918
.org 0xdcdfa
	ldr r1, [r1, #0]	@ 000dcdfa 0968
.org 0xdcdfc
	bl 0x128f80	@ 000dcdfc 4cf0c0f8
.org 0xdce00
	pop {r0}	@ 000dce00 01bc
.org 0xdce02
	bx r0	@ 000dce02 0047
