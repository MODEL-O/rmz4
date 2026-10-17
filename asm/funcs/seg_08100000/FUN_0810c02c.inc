@ FUN_0810c02c  entry 0x0810c02c  size 50
.thumb
.org 0x10c02c
FUN_0810c02c:
	push {lr}	@ 0010c02c 00b5
.org 0x10c02e
	adds r2, r0, #0	@ 0010c02e 021c
.org 0x10c030
	ldr r0, [r2, #40]	@ 0010c030 906a
.org 0x10c032
	ldr r1, [pc, #32]	@ 0010c032 0849
.org 0x10c034
	adds r0, r0, r1	@ 0010c034 4018
.org 0x10c036
	ldrb r3, [r0, #5]	@ 0010c036 4379
.org 0x10c038
	cmp r3, #2	@ 0010c038 022b
.org 0x10c03a
	bne.n 0x10c05c	@ 0010c03a 0fd1
.org 0x10c03c
	ldr r1, [pc, #24]	@ 0010c03c 0649
.org 0x10c03e
	ldrb r0, [r2, #9]	@ 0010c03e 507a
.org 0x10c040
	lsls r0, r0, #2	@ 0010c040 8000
.org 0x10c042
	adds r0, r0, r1	@ 0010c042 4018
.org 0x10c044
	str r3, [r2, #12]	@ 0010c044 d360
.org 0x10c046
	ldr r0, [r0, #0]	@ 0010c046 0068
.org 0x10c048
	ldr r0, [r0, #8]	@ 0010c048 8068
.org 0x10c04a
	str r0, [r2, #20]	@ 0010c04a 5061
.org 0x10c04c
	adds r0, r2, #0	@ 0010c04c 101c
.org 0x10c04e
	bl 0x10bd20	@ 0010c04e fff767fe
.org 0x10c052
	b.n 0x10c062	@ 0010c052 06e0
.org 0x10c054
	.byte 0xcc,0x0d,0x00,0x00	@ 0010c054 data
.org 0x10c058
	.byte 0xf8,0xca,0x86,0x08	@ 0010c058 data
.org 0x10c05c
	adds r0, r2, #0	@ 0010c05c 101c
