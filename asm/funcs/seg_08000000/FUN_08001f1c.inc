@ FUN_08001f1c  entry 0x08001f1c  size 86
.thumb
.org 0x1f1c
FUN_08001f1c:
	push {r4, r5, r6, r7, lr}	@ 00001f1c f0b5
.org 0x1f1e
	adds r7, r0, #0	@ 00001f1e 071c
.org 0x1f20
	adds r6, r1, #0	@ 00001f20 0e1c
.org 0x1f22
	adds r4, r2, #0	@ 00001f22 141c
.org 0x1f24
	ldr r5, [pc, #12]	@ 00001f24 034d
.org 0x1f26
	ldr r0, [r5, #0]	@ 00001f26 2868
.org 0x1f28
	cmp r0, #15	@ 00001f28 0f28
.org 0x1f2a
	ble.n 0x1f38	@ 00001f2a 05dd
.org 0x1f2c
	movs r0, #1	@ 00001f2c 0120
.org 0x1f2e
	negs r0, r0	@ 00001f2e 4042
.org 0x1f30
	b.n 0x1f72	@ 00001f30 1fe0
.org 0x1f32
	.byte 0x00	@ 00001f32 data
.org 0x1f33
	.byte 0x00	@ 00001f33 data
.org 0x1f34
	.byte 0xc0,0x07,0x00,0x02	@ 00001f34 data
.org 0x1f38
	lsls r2, r0, #1	@ 00001f38 4200
.org 0x1f3a
	adds r2, r2, r0	@ 00001f3a 1218
.org 0x1f3c
	lsls r2, r2, #2	@ 00001f3c 9200
.org 0x1f3e
	adds r3, r2, r5	@ 00001f3e 5319
.org 0x1f40
	ldrb r1, [r3, #4]	@ 00001f40 1979
.org 0x1f42
	movs r0, #4	@ 00001f42 0420
.org 0x1f44
	negs r0, r0	@ 00001f44 4042
.org 0x1f46
	ands r0, r1	@ 00001f46 0840
.org 0x1f48
	movs r1, #1	@ 00001f48 0121
.org 0x1f4a
	orrs r0, r1	@ 00001f4a 0843
.org 0x1f4c
	strb r0, [r3, #4]	@ 00001f4c 1871
.org 0x1f4e
	lsls r4, r4, #2	@ 00001f4e a400
.org 0x1f50
	ldr r0, [r3, #4]	@ 00001f50 5868
.org 0x1f52
	movs r1, #3	@ 00001f52 0321
.org 0x1f54
	ands r0, r1	@ 00001f54 0840
.org 0x1f56
	orrs r0, r4	@ 00001f56 2043
.org 0x1f58
	str r0, [r3, #4]	@ 00001f58 5860
.org 0x1f5a
	adds r0, r5, #0	@ 00001f5a 281c
.org 0x1f5c
	adds r0, #8	@ 00001f5c 0830
.org 0x1f5e
	adds r0, r2, r0	@ 00001f5e 1018
.org 0x1f60
	str r6, [r0, #0]	@ 00001f60 0660
.org 0x1f62
	adds r0, r5, #0	@ 00001f62 281c
.org 0x1f64
	adds r0, #12	@ 00001f64 0c30
.org 0x1f66
	adds r2, r2, r0	@ 00001f66 1218
.org 0x1f68
	str r7, [r2, #0]	@ 00001f68 1760
.org 0x1f6a
	ldr r0, [r5, #0]	@ 00001f6a 2868
.org 0x1f6c
	adds r0, #1	@ 00001f6c 0130
.org 0x1f6e
	str r0, [r5, #0]	@ 00001f6e 2860
.org 0x1f70
	movs r0, #0	@ 00001f70 0020
