@ FUN_08001f78  entry 0x08001f78  size 86
.thumb
.org 0x1f78
FUN_08001f78:
	push {r4, r5, r6, r7, lr}	@ 00001f78 f0b5
.org 0x1f7a
	adds r7, r0, #0	@ 00001f7a 071c
.org 0x1f7c
	adds r6, r1, #0	@ 00001f7c 0e1c
.org 0x1f7e
	adds r4, r2, #0	@ 00001f7e 141c
.org 0x1f80
	ldr r5, [pc, #12]	@ 00001f80 034d
.org 0x1f82
	ldr r0, [r5, #0]	@ 00001f82 2868
.org 0x1f84
	cmp r0, #15	@ 00001f84 0f28
.org 0x1f86
	ble.n 0x1f94	@ 00001f86 05dd
.org 0x1f88
	movs r0, #1	@ 00001f88 0120
.org 0x1f8a
	negs r0, r0	@ 00001f8a 4042
.org 0x1f8c
	b.n 0x1fce	@ 00001f8c 1fe0
.org 0x1f8e
	.byte 0x00	@ 00001f8e data
.org 0x1f8f
	.byte 0x00	@ 00001f8f data
.org 0x1f90
	.byte 0xc0,0x07,0x00,0x02	@ 00001f90 data
.org 0x1f94
	lsls r2, r0, #1	@ 00001f94 4200
.org 0x1f96
	adds r2, r2, r0	@ 00001f96 1218
.org 0x1f98
	lsls r2, r2, #2	@ 00001f98 9200
.org 0x1f9a
	adds r3, r2, r5	@ 00001f9a 5319
.org 0x1f9c
	ldrb r1, [r3, #4]	@ 00001f9c 1979
.org 0x1f9e
	movs r0, #4	@ 00001f9e 0420
.org 0x1fa0
	negs r0, r0	@ 00001fa0 4042
.org 0x1fa2
	ands r0, r1	@ 00001fa2 0840
.org 0x1fa4
	movs r1, #2	@ 00001fa4 0221
.org 0x1fa6
	orrs r0, r1	@ 00001fa6 0843
.org 0x1fa8
	strb r0, [r3, #4]	@ 00001fa8 1871
.org 0x1faa
	lsls r4, r4, #2	@ 00001faa a400
.org 0x1fac
	ldr r0, [r3, #4]	@ 00001fac 5868
.org 0x1fae
	movs r1, #3	@ 00001fae 0321
.org 0x1fb0
	ands r0, r1	@ 00001fb0 0840
.org 0x1fb2
	orrs r0, r4	@ 00001fb2 2043
.org 0x1fb4
	str r0, [r3, #4]	@ 00001fb4 5860
.org 0x1fb6
	adds r0, r5, #0	@ 00001fb6 281c
.org 0x1fb8
	adds r0, #8	@ 00001fb8 0830
.org 0x1fba
	adds r0, r2, r0	@ 00001fba 1018
.org 0x1fbc
	str r6, [r0, #0]	@ 00001fbc 0660
.org 0x1fbe
	adds r0, r5, #0	@ 00001fbe 281c
.org 0x1fc0
	adds r0, #12	@ 00001fc0 0c30
.org 0x1fc2
	adds r2, r2, r0	@ 00001fc2 1218
.org 0x1fc4
	str r7, [r2, #0]	@ 00001fc4 1760
.org 0x1fc6
	ldr r0, [r5, #0]	@ 00001fc6 2868
.org 0x1fc8
	adds r0, #1	@ 00001fc8 0130
.org 0x1fca
	str r0, [r5, #0]	@ 00001fca 2860
.org 0x1fcc
	movs r0, #0	@ 00001fcc 0020
