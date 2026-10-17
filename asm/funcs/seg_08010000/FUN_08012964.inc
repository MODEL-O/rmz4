@ FUN_08012964  entry 0x08012964  size 46
.thumb
.org 0x12964
FUN_08012964:
	push {lr}	@ 00012964 00b5
.org 0x12966
	ldr r2, [pc, #24]	@ 00012966 064a
.org 0x12968
	ldr r1, [pc, #24]	@ 00012968 0649
.org 0x1296a
	adds r0, r2, r1	@ 0001296a 5018
.org 0x1296c
	ldrb r1, [r0, #0]	@ 0001296c 0178
.org 0x1296e
	movs r0, #15	@ 0001296e 0f20
.org 0x12970
	ands r0, r1	@ 00012970 0840
.org 0x12972
	cmp r0, #0	@ 00012972 0028
.org 0x12974
	bne.n 0x1298c	@ 00012974 0ad1
.org 0x12976
	ldr r0, [pc, #16]	@ 00012976 0448
.org 0x12978
	adds r1, r2, r0	@ 00012978 1118
.org 0x1297a
	movs r0, #6	@ 0001297a 0620
.org 0x1297c
	b.n 0x12992	@ 0001297c 09e0
.org 0x1297e
	.byte 0x00	@ 0001297e data
.org 0x1297f
	.byte 0x00	@ 0001297f data
.org 0x12980
	.byte 0xb0,0x0a,0x00,0x02	@ 00012980 data
.org 0x12984
	.byte 0x10,0xc0,0x02,0x00	@ 00012984 data
.org 0x12988
	.byte 0x2c,0xd0,0x02,0x00	@ 00012988 data
.org 0x1298c
	ldr r0, [pc, #16]	@ 0001298c 0448
.org 0x1298e
	adds r1, r2, r0	@ 0001298e 1118
.org 0x12990
	movs r0, #4	@ 00012990 0420
