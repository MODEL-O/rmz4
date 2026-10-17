@ FUN_0801921c  entry 0x0801921c  size 52
.thumb
.org 0x1921c
FUN_0801921c:
	push {r4, r5, lr}	@ 0001921c 30b5
.org 0x1921e
	ldr r3, [r0, #92]	@ 0001921e c36d
.org 0x19220
	lsls r3, r3, #16	@ 00019220 1b04
.org 0x19222
	lsrs r3, r3, #20	@ 00019222 1b0d
.org 0x19224
	lsls r3, r3, #2	@ 00019224 9b00
.org 0x19226
	ldr r4, [pc, #40]	@ 00019226 0a4c
.org 0x19228
	adds r5, r3, r4	@ 00019228 1d19
.org 0x1922a
	ldr r2, [r0, #52]	@ 0001922a 426b
.org 0x1922c
	ldr r1, [r0, #68]	@ 0001922c 416c
.org 0x1922e
	muls r2, r1	@ 0001922e 4a43
.org 0x19230
	asrs r2, r2, #8	@ 00019230 1212
.org 0x19232
	ldr r1, [r0, #76]	@ 00019232 c16c
.org 0x19234
	adds r1, r1, r2	@ 00019234 8918
.org 0x19236
	strh r1, [r5, #0]	@ 00019236 2980
.org 0x19238
	adds r4, #2	@ 00019238 0234
.org 0x1923a
	adds r3, r3, r4	@ 0001923a 1b19
.org 0x1923c
	ldr r2, [r0, #56]	@ 0001923c 826b
.org 0x1923e
	ldr r1, [r0, #72]	@ 0001923e 816c
.org 0x19240
	muls r1, r2	@ 00019240 5143
.org 0x19242
	asrs r1, r1, #8	@ 00019242 0912
.org 0x19244
	ldr r0, [r0, #80]	@ 00019244 006d
.org 0x19246
	adds r0, r0, r1	@ 00019246 4018
.org 0x19248
	strh r0, [r3, #0]	@ 00019248 1880
.org 0x1924a
	pop {r4, r5}	@ 0001924a 30bc
.org 0x1924c
	pop {r0}	@ 0001924c 01bc
.org 0x1924e
	bx r0	@ 0001924e 0047
