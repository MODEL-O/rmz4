@ FUN_08094eb4  entry 0x08094eb4  size 70
.thumb
.org 0x94eb4
FUN_08094eb4:
	push {r4, r5, r6, lr}	@ 00094eb4 70b5
.org 0x94eb6
	ldr r3, [pc, #48]	@ 00094eb6 0c4b
.org 0x94eb8
	ands r1, r3	@ 00094eb8 1940
.org 0x94eba
	movs r0, #128	@ 00094eba 8020
.org 0x94ebc
	lsls r0, r0, #4	@ 00094ebc 0001
.org 0x94ebe
	adds r4, r1, #0	@ 00094ebe 0c1c
.org 0x94ec0
	orrs r4, r0	@ 00094ec0 0443
.org 0x94ec2
	ands r2, r3	@ 00094ec2 1a40
.org 0x94ec4
	subs r5, r2, #1	@ 00094ec4 551e
.org 0x94ec6
	movs r6, #0	@ 00094ec6 0026
.org 0x94ec8
	adds r0, r4, #0	@ 00094ec8 201c
.org 0x94eca
	adds r1, r5, #0	@ 00094eca 291c
.org 0x94ecc
	bl 0x7020	@ 00094ecc 72f7a8f8
.org 0x94ed0
	lsls r0, r0, #16	@ 00094ed0 0004
.org 0x94ed2
	lsrs r0, r0, #16	@ 00094ed2 000c
.org 0x94ed4
	movs r1, #15	@ 00094ed4 0f21
.org 0x94ed6
	ands r0, r1	@ 00094ed6 0840
.org 0x94ed8
	subs r0, #2	@ 00094ed8 0238
.org 0x94eda
	lsls r0, r0, #16	@ 00094eda 0004
.org 0x94edc
	lsrs r0, r0, #16	@ 00094edc 000c
.org 0x94ede
	cmp r0, #11	@ 00094ede 0b28
.org 0x94ee0
	bhi.n 0x94eec	@ 00094ee0 04d8
.org 0x94ee2
	movs r0, #1	@ 00094ee2 0120
.org 0x94ee4
	b.n 0x94efa	@ 00094ee4 09e0
.org 0x94ee6
	.byte 0x00	@ 00094ee6 data
.org 0x94ee7
	.byte 0x00	@ 00094ee7 data
.org 0x94ee8
	.byte 0x00,0xf0,0xff,0xff	@ 00094ee8 data
.org 0x94eec
	adds r6, #1	@ 00094eec 0136
.org 0x94eee
	movs r0, #128	@ 00094eee 8020
.org 0x94ef0
	lsls r0, r0, #5	@ 00094ef0 4001
.org 0x94ef2
	adds r5, r5, r0	@ 00094ef2 2d18
.org 0x94ef4
	cmp r6, #2	@ 00094ef4 022e
.org 0x94ef6
	ble.n 0x94ec8	@ 00094ef6 e7dd
.org 0x94ef8
	movs r0, #0	@ 00094ef8 0020
