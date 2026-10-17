@ FUN_08062da8  entry 0x08062da8  size 20
.thumb
.org 0x62da8
FUN_08062da8:
	push {lr}	@ 00062da8 00b5
.org 0x62daa
	ldr r2, [pc, #16]	@ 00062daa 044a
.org 0x62dac
	ldrb r1, [r0, #14]	@ 00062dac 817b
.org 0x62dae
	lsls r1, r1, #2	@ 00062dae 8900
.org 0x62db0
	adds r1, r1, r2	@ 00062db0 8918
.org 0x62db2
	ldr r1, [r1, #0]	@ 00062db2 0968
.org 0x62db4
	bl 0x128f80	@ 00062db4 c6f0e4f8
.org 0x62db8
	pop {r0}	@ 00062db8 01bc
.org 0x62dba
	bx r0	@ 00062dba 0047
