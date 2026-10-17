@ FUN_08018260  entry 0x08018260  size 42
.thumb
.org 0x18260
FUN_08018260:
	push {lr}	@ 00018260 00b5
.org 0x18262
	adds r3, r0, #0	@ 00018262 031c
.org 0x18264
	ldrb r0, [r3, #14]	@ 00018264 987b
.org 0x18266
	cmp r0, #0	@ 00018266 0028
.org 0x18268
	bne.n 0x18286	@ 00018268 0dd1
.org 0x1826a
	ldr r1, [r3, #92]	@ 0001826a d96d
.org 0x1826c
	lsrs r1, r1, #4	@ 0001826c 0909
.org 0x1826e
	lsls r1, r1, #1	@ 0001826e 4900
.org 0x18270
	ldr r0, [pc, #24]	@ 00018270 0648
.org 0x18272
	adds r1, r1, r0	@ 00018272 0918
.org 0x18274
	ldrh r2, [r1, #0]	@ 00018274 0a88
.org 0x18276
	ldr r0, [pc, #24]	@ 00018276 0648
.org 0x18278
	ands r0, r2	@ 00018278 1040
.org 0x1827a
	movs r2, #1	@ 0001827a 0122
.org 0x1827c
	orrs r0, r2	@ 0001827c 1043
.org 0x1827e
	strh r0, [r1, #0]	@ 0001827e 0880
.org 0x18280
	ldrb r0, [r3, #14]	@ 00018280 987b
.org 0x18282
	adds r0, #1	@ 00018282 0130
.org 0x18284
	strb r0, [r3, #14]	@ 00018284 9873
.org 0x18286
	pop {r0}	@ 00018286 01bc
.org 0x18288
	bx r0	@ 00018288 0047
