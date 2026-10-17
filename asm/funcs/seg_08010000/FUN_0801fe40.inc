@ FUN_0801fe40  entry 0x0801fe40  size 30
.thumb
.org 0x1fe40
FUN_0801fe40:
	ldr r2, [pc, #28]	@ 0001fe40 074a
.org 0x1fe42
	movs r1, #206	@ 0001fe42 ce21
.org 0x1fe44
	lsls r1, r1, #1	@ 0001fe44 4900
.org 0x1fe46
	adds r0, r2, r1	@ 0001fe46 5018
.org 0x1fe48
	movs r1, #0	@ 0001fe48 0021
.org 0x1fe4a
	strh r1, [r0, #0]	@ 0001fe4a 0180
.org 0x1fe4c
	str r1, [r2, #4]	@ 0001fe4c 5160
.org 0x1fe4e
	movs r3, #210	@ 0001fe4e d223
.org 0x1fe50
	lsls r3, r3, #1	@ 0001fe50 5b00
.org 0x1fe52
	adds r0, r2, r3	@ 0001fe52 d018
.org 0x1fe54
	strh r1, [r0, #0]	@ 0001fe54 0180
.org 0x1fe56
	adds r0, r2, #0	@ 0001fe56 101c
.org 0x1fe58
	adds r0, #208	@ 0001fe58 d030
.org 0x1fe5a
	str r1, [r0, #0]	@ 0001fe5a 0160
.org 0x1fe5c
	bx lr	@ 0001fe5c 7047
