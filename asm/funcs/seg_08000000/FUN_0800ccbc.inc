@ FUN_0800ccbc  entry 0x0800ccbc  size 10
.thumb
.org 0xccbc
FUN_0800ccbc:
	push {lr}	@ 0000ccbc 00b5
.org 0xccbe
	bl 0x7638	@ 0000ccbe faf7bbfc
.org 0xccc2
	pop {r0}	@ 0000ccc2 01bc
.org 0xccc4
	bx r0	@ 0000ccc4 0047
