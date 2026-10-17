@ FUN_0808ca68  entry 0x0808ca68  size 20
.thumb
.org 0x8ca68
FUN_0808ca68:
	push {lr}	@ 0008ca68 00b5
.org 0x8ca6a
	ldr r2, [pc, #16]	@ 0008ca6a 044a
.org 0x8ca6c
	ldrb r1, [r0, #13]	@ 0008ca6c 417b
.org 0x8ca6e
	lsls r1, r1, #2	@ 0008ca6e 8900
.org 0x8ca70
	adds r1, r1, r2	@ 0008ca70 8918
.org 0x8ca72
	ldr r1, [r1, #0]	@ 0008ca72 0968
.org 0x8ca74
	bl 0x128f80	@ 0008ca74 9cf084fa
.org 0x8ca78
	pop {r0}	@ 0008ca78 01bc
.org 0x8ca7a
	bx r0	@ 0008ca7a 0047
