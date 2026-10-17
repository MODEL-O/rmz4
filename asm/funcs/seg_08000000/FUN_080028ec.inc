@ FUN_080028ec  entry 0x080028ec  size 22
.thumb
.org 0x28ec
FUN_080028ec:
	ldr r2, [pc, #20]	@ 000028ec 054a
.org 0x28ee
	ldr r1, [pc, #24]	@ 000028ee 0649
.org 0x28f0
	ldrh r0, [r1, #2]	@ 000028f0 4888
.org 0x28f2
	strh r0, [r2, #0]	@ 000028f2 1080
.org 0x28f4
	adds r2, #2	@ 000028f4 0232
.org 0x28f6
	ldrh r0, [r1, #4]	@ 000028f6 8888
.org 0x28f8
	strh r0, [r2, #0]	@ 000028f8 1080
.org 0x28fa
	subs r2, #4	@ 000028fa 043a
.org 0x28fc
	ldrh r0, [r1, #0]	@ 000028fc 0888
.org 0x28fe
	strh r0, [r2, #0]	@ 000028fe 1080
.org 0x2900
	bx lr	@ 00002900 7047
