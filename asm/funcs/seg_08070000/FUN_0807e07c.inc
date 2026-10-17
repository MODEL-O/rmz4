@ FUN_0807e07c  entry 0x0807e07c  size 30
.thumb
.org 0x7e07c
FUN_0807e07c:
	push {lr}	@ 0007e07c 00b5
.org 0x7e07e
	ldrb r1, [r0, #14]	@ 0007e07e 817b
.org 0x7e080
	adds r1, #1	@ 0007e080 0131
.org 0x7e082
	movs r2, #0	@ 0007e082 0022
.org 0x7e084
	strb r1, [r0, #14]	@ 0007e084 8173
.org 0x7e086
	strb r2, [r0, #15]	@ 0007e086 c273
.org 0x7e088
	ldr r2, [pc, #16]	@ 0007e088 044a
.org 0x7e08a
	ldrb r1, [r0, #13]	@ 0007e08a 417b
.org 0x7e08c
	lsls r1, r1, #2	@ 0007e08c 8900
.org 0x7e08e
	adds r1, r1, r2	@ 0007e08e 8918
.org 0x7e090
	ldr r1, [r1, #0]	@ 0007e090 0968
.org 0x7e092
	bl 0x128f80	@ 0007e092 aaf075ff
.org 0x7e096
	pop {r0}	@ 0007e096 01bc
.org 0x7e098
	bx r0	@ 0007e098 0047
